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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>
struct Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>
struct Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationAction>
struct IEnumerable_1_t7C28A0E36D367CA1486DA296721A1E0F3DA814FA;
// System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>
struct IEnumerable_1_t690156ADFB7DA3B6FFCBA7786B7F9E63BE340211;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.IntPtr>
struct KeyCollection_tA4CB626FB15AAEA0195E38C04F316029E9421C02;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>
struct List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>
struct List_1_tC74F654247ABF5958BE119A0484FED155A4FA129;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.IntPtr>
struct ValueCollection_t997957307BE09392279100859BF77AEA78F2D9CF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.IntPtr>[]
struct EntryU5BU5D_t73B7253D577D1B5BC6ACF6AF4ADECEBB1F2A71C0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.Notifications.iOS.iOSNotification[]
struct iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415;
// Unity.Notifications.iOS.iOSNotificationAction[]
struct iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757;
// Unity.Notifications.iOS.iOSNotificationAttachment[]
struct iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[]
struct iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
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
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC;
// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327;
// Unity.Notifications.iOS.iOSNotificationAction
struct iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319;
// Unity.Notifications.iOS.iOSNotificationCategory
struct iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F;
// Unity.Notifications.iOS.iOSNotificationCenter
struct iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53;
// Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED;
// Unity.Notifications.iOS.iOSNotificationTrigger
struct iOSNotificationTrigger_tC158EA08A8FCFBF7CF13CAF3A98EF0B1285C4AB1;
// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t03E2DC53BCC5038CF3B2643C4C2EB105AFB28975;
// Unity.Notifications.iOS.iOSTextInputNotificationAction
struct iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82;
// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE;
// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback
struct AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0;
// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1;
// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD;
// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2;
// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback
struct ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4;
// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback
struct ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t690156ADFB7DA3B6FFCBA7786B7F9E63BE340211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7D43D204798B36A9A7FDE86EB3DEA6B375F1A977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC74F654247ABF5958BE119A0484FED155A4FA129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTriggerType_t191C42E4D4E634B4694FB50559A1451AEFF6A19D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTrigger_tC158EA08A8FCFBF7CF13CAF3A98EF0B1285C4AB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
IL2CPP_EXTERN_C String_t* _stringLiteral3445424CCE31FF31906AAE9ADB0236D08C87E42B;
IL2CPP_EXTERN_C String_t* _stringLiteral37DEA1EEF98A4BE778D92644C1BC0F79B9881E13;
IL2CPP_EXTERN_C String_t* _stringLiteral565608521CF382E522664CD340B7AF2FC9F6A187;
IL2CPP_EXTERN_C String_t* _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
IL2CPP_EXTERN_C String_t* _stringLiteral88B697A2C9C4DE6D613594AF141EACF167383C3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA17B781105AAACA023788DDE79367DCD66386754;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344;
IL2CPP_EXTERN_C String_t* _stringLiteralF960186B386979168CAE6DF6BC328CD86C1C7BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA8707FE0861CE909C71CAD2EB86B6143B5E8D7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE0C48AA68D5546E0616D5D05E689FA0D00036203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m41265919586D29EB9B9463CA58C718650069662E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4ABDF05BA4B194A57967F3B53D7422F6439255F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m800AA5B33449643DC97AC1FF1F653A3B9D15CFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA3778483431364C6C54E792CD1AC43576F137AB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3DBCD92FD0C9A216ADA0B3A7125D18F23AB20C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m827F25AFA853D56D738631CA3CCFB0DABDE9C260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF15CFF294BE6EAD4E0D494A943C48290FDE615CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4F01AB5E5AD186F63C33C6326B4020B0D76465D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF90EF7BD50490EB3ABEAB8C62ED4C5B4B4A8F9FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m8FE3E081900C426C6F1CC9B83DEA764301795167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5301041AFE257DA38A4F2C462A732490A3287665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__38_0_m199A8E36941FC6A81CB2C019BF06CA2F3E0D51FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__38_1_m4F8AE0FFC91B6C9E8C6C8619C5FD682F22A7C474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationCategory_AddAction_m69C2674E73A8123159783E521E3E29869B1A22D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationCategory_AddActions_mC4F68982BE6E1EEDF9A8B28D92168DC3F73E53BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationCategory_AddIntentIdentifier_mACFFCA6D3AFFB27A45AA710F6CA6FC45716BFB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationCategory_AddIntentIdentifiers_m39C87755E7FC4A520627B5A06B7540C797FCFC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationTimeIntervalTrigger_set_TimeInterval_m8DDE94D778C187DAC0F82E324AF795E64E005130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotification_get_Trigger_m3C54C255331E7A1FF8F2B159D3546EEEF8247649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotification_set_Trigger_m87A4F53B6CB98FE11AD98A5952F0CB2E95BCF52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_CsAttachmentsToObjc_m8EF0E9BAFFCCEE6A5EEC8C7D371C4BA1C5E15BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_SetNotificationCategories_m9874163A141115A2CAC03E821E582B70A48A4AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC;;
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke;;
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED;;
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com;
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com;;
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke;
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415;
struct iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757;
struct iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908;
struct iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF1B6286AA18FA15088F8200A5DB0118F53B4A5F5 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>
struct Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t73B7253D577D1B5BC6ACF6AF4ADECEBB1F2A71C0* ____entries_1;
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
	KeyCollection_tA4CB626FB15AAEA0195E38C04F316029E9421C02* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t997957307BE09392279100859BF77AEA78F2D9CF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>
struct List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>
struct List_1_tC74F654247ABF5958BE119A0484FED155A4FA129  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC74F654247ABF5958BE119A0484FED155A4FA129_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6  : public RuntimeObject
{
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::m_IsFinished
	bool ___m_IsFinished_0;
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::m_Granted
	bool ___m_Granted_1;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::m_Error
	String_t* ___m_Error_2;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::m_DeviceToken
	String_t* ___m_DeviceToken_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Unity.Notifications.iOS.iOSNotificationAction
struct iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319  : public RuntimeObject
{
	// System.String Unity.Notifications.iOS.iOSNotificationAction::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.iOS.iOSNotificationAction::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_1;
	// Unity.Notifications.iOS.iOSNotificationActionOptions Unity.Notifications.iOS.iOSNotificationAction::<Options>k__BackingField
	int32_t ___U3COptionsU3Ek__BackingField_2;
};

// Unity.Notifications.iOS.iOSNotificationCategory
struct iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction> Unity.Notifications.iOS.iOSNotificationCategory::m_Actions
	List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* ___m_Actions_0;
	// System.Collections.Generic.List`1<System.String> Unity.Notifications.iOS.iOSNotificationCategory::m_IntentIdentifiers
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_IntentIdentifiers_1;
	// System.String Unity.Notifications.iOS.iOSNotificationCategory::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;
	// System.String Unity.Notifications.iOS.iOSNotificationCategory::<HiddenPreviewsBodyPlaceholder>k__BackingField
	String_t* ___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3;
	// System.String Unity.Notifications.iOS.iOSNotificationCategory::<SummaryFormat>k__BackingField
	String_t* ___U3CSummaryFormatU3Ek__BackingField_4;
	// Unity.Notifications.iOS.iOSNotificationCategoryOptions Unity.Notifications.iOS.iOSNotificationCategory::<Options>k__BackingField
	int32_t ___U3COptionsU3Ek__BackingField_5;
};

// Unity.Notifications.iOS.iOSNotificationCenter
struct iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53  : public RuntimeObject
{
};

struct iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields
{
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_Initialized
	bool ___s_Initialized_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceivedCallbackSet
	bool ___s_OnNotificationReceivedCallbackSet_1;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceived
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___s_OnNotificationReceived_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceivedCallbackSet
	bool ___s_OnRemoteNotificationReceivedCallbackSet_3;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___s_OnRemoteNotificationReceived_4;
};

// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE  : public RuntimeObject
{
};

struct U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_StaticFields
{
	// Unity.Notifications.iOS.iOSNotificationCenter/<>c Unity.Notifications.iOS.iOSNotificationCenter/<>c::<>9
	U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* ___U3CU3E9_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// Unity.Notifications.iOS.CalendarTriggerData
struct CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23 
{
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::year
	int32_t ___year_0;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::month
	int32_t ___month_1;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::day
	int32_t ___day_2;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::hour
	int32_t ___hour_3;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::minute
	int32_t ___minute_4;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::second
	int32_t ___second_5;
	// System.Byte Unity.Notifications.iOS.CalendarTriggerData::repeats
	uint8_t ___repeats_6;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

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

// Unity.Notifications.iOS.LocationTriggerData
struct LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC 
{
	// System.Single Unity.Notifications.iOS.LocationTriggerData::centerX
	float ___centerX_0;
	// System.Single Unity.Notifications.iOS.LocationTriggerData::centerY
	float ___centerY_1;
	// System.Single Unity.Notifications.iOS.LocationTriggerData::radius
	float ___radius_2;
	// System.Byte Unity.Notifications.iOS.LocationTriggerData::notifyOnEntry
	uint8_t ___notifyOnEntry_3;
	// System.Byte Unity.Notifications.iOS.LocationTriggerData::notifyOnExit
	uint8_t ___notifyOnExit_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// Unity.Notifications.iOS.TimeTriggerData
struct TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 
{
	// System.Int32 Unity.Notifications.iOS.TimeTriggerData::interval
	int32_t ___interval_0;
	// System.Byte Unity.Notifications.iOS.TimeTriggerData::repeats
	uint8_t ___repeats_1;
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

// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC 
{
	// System.Int32 Unity.Notifications.iOS.iOSAuthorizationRequestData::granted
	int32_t ___granted_0;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::error
	String_t* ___error_1;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::deviceToken
	String_t* ___deviceToken_2;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	char* ___deviceToken_2;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	Il2CppChar* ___deviceToken_2;
};

// Unity.Notifications.iOS.iOSNotificationAttachment
struct iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 
{
	// System.String Unity.Notifications.iOS.iOSNotificationAttachment::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.iOS.iOSNotificationAttachment::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationAttachment
struct iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CUrlU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationAttachment
struct iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CUrlU3Ek__BackingField_1;
};

// Unity.Notifications.iOS.iOSNotificationPushTrigger
struct iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5 
{
	union
	{
		struct
		{
		};
		uint8_t iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5__padding[1];
	};
};

// Unity.Notifications.iOS.iOSNotificationSettings
struct iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 
{
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::authorizationStatus
	int32_t ___authorizationStatus_0;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::notificationCenterSetting
	int32_t ___notificationCenterSetting_1;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::lockScreenSetting
	int32_t ___lockScreenSetting_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::carPlaySetting
	int32_t ___carPlaySetting_3;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertSetting
	int32_t ___alertSetting_4;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::badgeSetting
	int32_t ___badgeSetting_5;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::soundSetting
	int32_t ___soundSetting_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertStyle
	int32_t ___alertStyle_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::showPreviewsSetting
	int32_t ___showPreviewsSetting_8;
};

// Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 
{
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::timeInterval
	int32_t ___timeInterval_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_pinvoke
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_com
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};

// Unity.Notifications.iOS.iOSTextInputNotificationAction
struct iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82  : public iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319
{
	// System.String Unity.Notifications.iOS.iOSTextInputNotificationAction::<TextInputButtonTitle>k__BackingField
	String_t* ___U3CTextInputButtonTitleU3Ek__BackingField_3;
	// System.String Unity.Notifications.iOS.iOSTextInputNotificationAction::<TextInputPlaceholder>k__BackingField
	String_t* ___U3CTextInputPlaceholderU3Ek__BackingField_4;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>
struct Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 ____current_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.IntPtr>
struct KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	intptr_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.IntPtr>
struct KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	intptr_t ___value_1;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
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

// Unity.Notifications.iOS.TriggerData
struct TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Notifications.iOS.TimeTriggerData Unity.Notifications.iOS.TriggerData::timeInterval
			TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 ___timeInterval_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 ___timeInterval_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Notifications.iOS.CalendarTriggerData Unity.Notifications.iOS.TriggerData::calendar
			CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23 ___calendar_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23 ___calendar_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Notifications.iOS.LocationTriggerData Unity.Notifications.iOS.TriggerData::location
			LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC ___location_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC ___location_2_forAlignmentOnly;
		};
	};
};

// Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C 
{
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Year>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CYearU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Month>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMonthU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Day>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CDayU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Hour>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CHourU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Minute>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMinuteU3Ek__BackingField_4;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Second>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CSecondU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<UtcTime>k__BackingField
	bool ___U3CUtcTimeU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_pinvoke
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CYearU3Ek__BackingField_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CDayU3Ek__BackingField_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CHourU3Ek__BackingField_3;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CUtcTimeU3Ek__BackingField_6;
	int32_t ___U3CRepeatsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_com
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CYearU3Ek__BackingField_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CDayU3Ek__BackingField_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CHourU3Ek__BackingField_3;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CUtcTimeU3Ek__BackingField_6;
	int32_t ___U3CRepeatsU3Ek__BackingField_7;
};

// Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48 
{
	// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Center>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CCenterU3Ek__BackingField_0;
	// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_1;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnEntry>k__BackingField
	bool ___U3CNotifyOnEntryU3Ek__BackingField_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnExit>k__BackingField
	bool ___U3CNotifyOnExitU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>
struct Enumerator_tA7EC39CE1B8A2482A44DEE4E5F736BB3945E048C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>
struct Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED 
{
	// System.String Unity.Notifications.iOS.iOSNotificationData::identifier
	String_t* ___identifier_0;
	// System.String Unity.Notifications.iOS.iOSNotificationData::title
	String_t* ___title_1;
	// System.String Unity.Notifications.iOS.iOSNotificationData::body
	String_t* ___body_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::badge
	int32_t ___badge_3;
	// System.String Unity.Notifications.iOS.iOSNotificationData::subtitle
	String_t* ___subtitle_4;
	// System.String Unity.Notifications.iOS.iOSNotificationData::categoryIdentifier
	String_t* ___categoryIdentifier_5;
	// System.String Unity.Notifications.iOS.iOSNotificationData::threadIdentifier
	String_t* ___threadIdentifier_6;
	// System.IntPtr Unity.Notifications.iOS.iOSNotificationData::userInfo
	intptr_t ___userInfo_7;
	// System.IntPtr Unity.Notifications.iOS.iOSNotificationData::attachments
	intptr_t ___attachments_8;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::triggerType
	int32_t ___triggerType_9;
	// Unity.Notifications.iOS.TriggerData Unity.Notifications.iOS.iOSNotificationData::trigger
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E ___trigger_10;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	intptr_t ___userInfo_7;
	intptr_t ___attachments_8;
	int32_t ___triggerType_9;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E ___trigger_10;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	intptr_t ___userInfo_7;
	intptr_t ___attachments_8;
	int32_t ___triggerType_9;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E ___trigger_10;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotification::<Attachments>k__BackingField
	List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___U3CAttachmentsU3Ek__BackingField_0;
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotification::data
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotification::userInfo
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userInfo_2;
};

// Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 
{
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotificationWithUserInfo::data
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationWithUserInfo::userInfo
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userInfo_1;
	// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotificationWithUserInfo::attachments
	List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___attachments_2;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_pinvoke
{
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___data_0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userInfo_1;
	List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___attachments_2;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_com
{
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com ___data_0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userInfo_1;
	List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___attachments_2;
};

// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback
struct AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0  : public MulticastDelegate_t
{
};

// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1  : public MulticastDelegate_t
{
};

// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD  : public MulticastDelegate_t
{
};

// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2  : public MulticastDelegate_t
{
};

// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback
struct ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4  : public MulticastDelegate_t
{
};

// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback
struct ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E  : public MulticastDelegate_t
{
};

// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>
struct Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___value_1;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t03E2DC53BCC5038CF3B2643C4C2EB105AFB28975  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Notifications.iOS.iOSNotificationAction[]
struct iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757  : public RuntimeArray
{
	ALIGN_FIELD (8) iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* m_Items[1];

	inline iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Unity.Notifications.iOS.iOSNotification[]
struct iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415  : public RuntimeArray
{
	ALIGN_FIELD (8) iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* m_Items[1];

	inline iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[]
struct iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09  : public RuntimeArray
{
	ALIGN_FIELD (8) iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 m_Items[1];

	inline iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attachments_2), (void*)NULL);
		#endif
	}
	inline iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attachments_2), (void*)NULL);
		#endif
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
// Unity.Notifications.iOS.iOSNotificationAttachment[]
struct iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908  : public RuntimeArray
{
	ALIGN_FIELD (8) iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 m_Items[1];

	inline iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CIdU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CUrlU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
	inline iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CIdU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CUrlU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke(const iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC& unmarshaled, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_back(const iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC& unmarshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_back(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke& marshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_cleanup(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_com(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_com_back(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com& marshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_com_cleanup(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_gshared_inline (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D_gshared (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_gshared_inline (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_gshared_inline (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2 List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29_gshared (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA_gshared (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_gshared_inline (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441_gshared (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B_gshared (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C_gshared (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1191D06A22AB56CAEB33EB3C842940C1FDB9B77C_gshared (Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD7169108C4AD240C979A858B7985A20E1F21FFCF_gshared (Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAAEF80C45B5DFFF50AF342166E34A5AE35E46349_gshared (Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387* __this, RuntimeObject* ___key0, intptr_t ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Dictionary_2_get_Item_mD2C69EEF36D11090873931986EDE898163A0824C_gshared (Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA7EC39CE1B8A2482A44DEE4E5F736BB3945E048C Dictionary_2_GetEnumerator_m14943B04CF9F3275383FD9A602776571CA736339_gshared (Dictionary_2_t5D4200B1CAF7A8402001B3F57BDCA6F0E0BED387* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5A0E1306BBC4B0F1118D05CD084D7E60B13DD376_gshared (Enumerator_tA7EC39CE1B8A2482A44DEE4E5F736BB3945E048C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE Enumerator_get_Current_m9424B04BBD0560732E1913809F3725C44401977C_gshared_inline (Enumerator_tA7EC39CE1B8A2482A44DEE4E5F736BB3945E048C* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.IntPtr>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Value_mD9B8955E1A15CC8D0F45A0938E0AD24926071553_gshared_inline (KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7BB28F194F5C57BC3C671D140718EAB7C8A7D43C_gshared (Enumerator_tA7EC39CE1B8A2482A44DEE4E5F736BB3945E048C* __this, const RuntimeMethod* method) ;

// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mCA40A1376B88E5CB45368F1814B8E29C82E16502 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_mC1062AF0F279E5610F4559CFA756401291648BFA (intptr_t ___request0, int32_t ___options1, bool ___registerRemote2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_m9AF9F366ABC34678151252ECFC3B4FF6959E6ED9_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_mFC66547317A168FF388E5AFA19A4A1F31AAF7033_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_m0310B101EB0CDE8DEF8FAA58E69513A810AF5F41_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_mDF3A4418B4B1D213AE14E590BCB36BD3C5FADAE3_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_m9A40CB3464048A5E0EE673AC50FF9AB462B7CD3E (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___requestData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD_inline (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationCalendarTrigger Unity.Notifications.iOS.iOSNotificationCalendarTrigger::ToUtc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C iOSNotificationCalendarTrigger_ToUtc_mFC629A17E3B38EF5BFF057332D736CB26B80DAC3 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_m9F42C284F442180685A54C0108DFF7C3DBEC909E_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m1CAB623B32CC86E1D88991D5D8D6610524C5F010_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_m8D0AAD323FAF46CA0DFCCE6FFE6C496A398E3FD6_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) ;
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m0C88F4129F152878B4992FBCC5F74209168C6065_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m7A9109F22E610DF25D696DD1CDEED9B311FBE5B9_inline (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_UtcTime(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m61C090AF21271FBAEB5E30E8A37F349BE822AE07_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Center(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Center_mA06C5E4FA9A108BA1C88AE3C392EA8027E357280_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Radius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Radius_m7E204030C195EBB4800EE17D31616F22274AD019_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnEntry(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnEntry_m451DBDBF73879CBF7B5D26402B45519BD34913D9_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnExit(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnExit_m62C37F50D48DB3D9DE6C6D75BDDF065D807448D3_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, bool ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_mD6A35B90F34C752248B213A19EDCDC720EBF9C45 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m1EC6737F4C8ACFEA13E12E9F5F51C2F808AFEC58 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___identifier0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_mDDEDDFDC4DA023124B7CC8D0AA882F3EFD6C334A (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_mB8363BB4B0C40234B565A24F6A979641DBA5A8D8 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mE95C0D442FB78AC8ED3137CA19BF4C12963D2D57 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotification::set_Attachments(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotification_set_Attachments_m93E8FB777A55F4C6AB38922DBD0A0C8E9890D15C_inline (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotification::get_Attachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* iOSNotification_get_Attachments_m54CA2BC5B43417D01136FE5A72B0A0BD2636549D_inline (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAction::.ctor(System.String,System.String,Unity.Notifications.iOS.iOSNotificationActionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction__ctor_m862B26CBE20DCA2F658AB3D1FE495B8A7DB6ACD1 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___id0, String_t* ___title1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAction::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Id_m0D72F28EC32CAC70BBDB5DB38ADC2AD0919F9A14_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAction::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Title_mCFCB94D7A5C1CF60342BD4E7C9B7FBE07A4554C0_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAction::set_Options(Unity.Notifications.iOS.iOSNotificationActionOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Options_mB57570C3425E330D6D74528777D0D78E3FBDFF96_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Title_m44DF5E056FD6A12373E6AA43A2841BE2DB3EE012_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationActionOptions Unity.Notifications.iOS.iOSNotificationAction::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationAction_get_Options_mEEDBE525091EDE4B06F7638293682C1AB9DFC65D_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationAction(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationAction_mDC3D4BE205D0F11FF94C5F54AF94813DFEBB5848 (String_t* ___id0, String_t* ___title1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAction::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction__ctor_m566C1EBCE6E24B9526C97579AD5F7FC7A1595BEE (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___id0, String_t* ___title1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSTextInputNotificationAction::set_TextInputButtonTitle(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSTextInputNotificationAction_set_TextInputButtonTitle_m56A810611C4AA5BDCD082632FB9CF85B6F5E6F85_inline (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSTextInputNotificationAction::get_TextInputButtonTitle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSTextInputNotificationAction_get_TextInputButtonTitle_m6FA9D43FEB99BE97A9047CBC0E030C8E2EB94818_inline (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSTextInputNotificationAction::get_TextInputPlaceholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSTextInputNotificationAction_get_TextInputPlaceholder_m23B1AFC4970F84F64A1EAB498CEED1316DA719F9_inline (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNTextInputNotificationAction(System.String,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNTextInputNotificationAction_m6FB822CAC7C7EB8AC3B94C421618AAAF98EA1DC6 (String_t* ___id0, String_t* ___title1, int32_t ___options2, String_t* ___buttonTitle3, String_t* ___placeholder4, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Id_m8A551CB233C83D05BDDACF9688CBECAAF9846C15_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Id_m7401F5705B3B4ADDC0DA5B372FE4579418891E7E_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Url_mE0C69FB858552B293B9C0BDDFF2894FC6EBE9BF0_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Url(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Url_m4F0B407457097EC2DEFDCD296E07CDDF624DE202_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>::ToArray()
inline iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* List_1_ToArray_m8FE3E081900C426C6F1CC9B83DEA764301795167 (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* (*) (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>::.ctor()
inline void List_1__ctor_m5301041AFE257DA38A4F2C462A732490A3287665 (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCategory_set_Id_mEDA4B676B8D390208CF1AE47350C5C80B5169400_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory__ctor_m810EE5490EA8ACE99B8A0150269489A02E6FBD73 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5 (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::.ctor(System.String,System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory__ctor_m86E79D1605C4B92D4F489AB30CD1996F8B5BDB44 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___id0, RuntimeObject* ___actions1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>::Add(T)
inline void List_1_Add_mF90EF7BD50490EB3ABEAB8C62ED4C5B4B4A8F9FF_inline (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* __this, iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3*, iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_m44AE9926E98242E6F356EBA0281584623627B436 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnNotificationReceived_m4E29F2436D73946B1BD36ADF023FA48785C1997E (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnNotificationReceived_m01505A43D8ED03C0D14073AB63B2B88B8EDB1F1E (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m771FE0AD91B59443803548F9404C40C695A964DE (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnRemoteNotificationReceived_m577446E53F345EF66CE3D3125AE7E536260D101D (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnRemoteNotificationReceived_m1A329A760E5952FDD06221C8687D9ACBF569FBE9 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_m0F9963248235DCA8F8D178390907819931B3FA79 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m340452ADA2F0E0C35F2E034B97AAE8F86827893B (int32_t ___badge0, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F (const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotification::GetDataForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 iOSNotification_GetDataForSending_m389ADA195D034D80F017CE145C149AFD66996B69 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m2C66F2E8B8E6A438424896D297650C6AF4228361 (iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* iOSNotificationsWrapper_GetScheduledNotificationData_m570771802615E6B7C2F423A59F24A5FF3D1AE4D1 (const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotification[] Unity.Notifications.iOS.iOSNotificationCenter::NotificationDataToNotifications(Unity.Notifications.iOS.iOSNotificationWithUserInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* iOSNotificationCenter_NotificationDataToNotifications_m082DCD2CE4FD2A32888F8ADD01E8AB1D1CDA6848 (iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* ___notificationData0, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* iOSNotificationsWrapper_GetDeliveredNotificationData_m6570276DA5405AE52F6B5FB81CE3646052DB69E9 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m480637048FB144A8C2E4014549FFEE9D4299F6E8 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) ;
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 iOSNotificationsWrapper_GetLastNotificationData_mEB08C18777114E3BD6197FC86C1BA4F6CBE3B3C0 (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_inline (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8*, const RuntimeMethod*))Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_gshared_inline)(__this, method);
}
// T System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::get_Value()
inline iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 (*) (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8*, const RuntimeMethod*))Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D_gshared)(__this, method);
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper_GetLastRespondedNotificationAction_mDE70405A1228FF1C25E14A0819F2624EB009EDD9 (const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper_GetLastRespondedNotificationUserText_mD7981FE4DC78ED85B7B7987875ED5CF30ADC4BE6 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m3D085E61FFCE3BBBBEE2C455F0D4757BD9FD4F6F (String_t* ___identifier0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m08D8941EED5B8205A4271B3DC67D67D3E8C2AD53 (String_t* ___identifier0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m9B342D2C0E7C7824E1B2A386D16C1E8C306C9607 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_m23751F2136004EBC7AF50B4E95988D203FD520B5 (const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 iOSNotificationsWrapper_GetNotificationSettings_m659C38E583D6A52DA9747BBB5707432A5CECC797 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetNotificationCategories(System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetNotificationCategories_m9874163A141115A2CAC03E821E582B70A48A4AEA (RuntimeObject* ___categories0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_inline (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_OpenNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__OpenNotificationSettings_m290E8631FF477F88F9D37727CD73F41A31ECD857 (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mF2B904C1330647023D5E7ECE08EDA8266BE8F55E (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4E1D6DB8C20ABB34DA458F6F8EAAEACD25B2208B (U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.AuthorizationStatus Unity.Notifications.iOS.iOSNotificationSettings::get_AuthorizationStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AuthorizationStatus_m86A3FC2E443F732C3882C199476EFBD4DFF8A191_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_NotificationCenterSetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_NotificationCenterSetting_m6D6259430B3E5D958FFE6AD9DF676CFD9ACBEFC6_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_LockScreenSetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_LockScreenSetting_mFC83E2FB7BA192A3ABF02171E9063628B6F04ED0_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_CarPlaySetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_CarPlaySetting_mBDE163089C469E1E0A0FEAC5F7ACD3FB60A3D882_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_AlertSetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AlertSetting_mE45B9D8C6057D4C7D9D368B018D61EBFEC60F7A7_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_BadgeSetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_BadgeSetting_m45FDA40AB94C8571CF748C429E4E083410A63693_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_SoundSetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_SoundSetting_m1D8F98A6C4BFB9A6982C0E0A8DD86302FB0E4353_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.AlertStyle Unity.Notifications.iOS.iOSNotificationSettings::get_AlertStyle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AlertStyle_m5ABA83D2E27559F94EE19316F46FE94CFDCCB927_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.ShowPreviewsSetting Unity.Notifications.iOS.iOSNotificationSettings::get_ShowPreviewsSetting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_ShowPreviewsSetting_m7C554A6BBBA9DC9AF7368C14F3F34FBF185736FE_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD (intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212 (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524 (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveNSDictionaryKeyValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveUNNotificationAttachment(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652 (intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_mE709FAE919D090ACC25038070BD2145F520DA0FE (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m88B1999865C9603B8A628DC185980C62A11E1731 (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m3448352ED953E95C4E5BAAE13D4C576B7161B772 (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mABF9B547DD1F0D569E1E8B202FC8312DA876EBA1 (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m7EF790D86C1B8E585CFBD1872FABA96171D07A3A (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_m0F1A24F99EF966055A145B95406B0DE10ACF92A8 (intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___requestData1, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationDataToDataWithUserInfo(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF4B498474102C537FAE4B24B8B1AE8613285A797 (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mC510FFDD28917371EB9312D7F6E2F63CDE03FC22 (iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m544D0B4C4887048904106DE1C463663A6DC3A906 (iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationsWrapper::NSDictionaryToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* iOSNotificationsWrapper_NSDictionaryToCs_m5A2FBC09A16627FC083C2EC31150C87ED4112D79 (intptr_t ___dict0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotificationsWrapper::AttachmentsNSArrayToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* iOSNotificationsWrapper_AttachmentsNSArrayToCs_mC89DB0002C5D4E8E443C2353E2FDB80190784128 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::Add(T)
inline void List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_inline (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933, const RuntimeMethod*))List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_mEA8CA44C7AA697DB3EA9D2C460924997CC075315 (intptr_t ___request0, int32_t ___options1, bool ___registerForRemote2, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 iOSNotificationsWrapper__GetNotificationSettings_m8DF3328D33595477ADD49C37CC36DA7553BF1077 (const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsDictionaryToObjC(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsDictionaryToObjC_mB8AE5486D42735F580154E24CFB8A024A8E47CE9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userInfo0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsAttachmentsToObjc(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsAttachmentsToObjc_m8EF0E9BAFFCCEE6A5EEC8C7D371C4BA1C5E15BF2 (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___attachments0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_mD2CC306854403F4BBE98648D761A41726BC75F7C (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataArray_m9416BEB875EA2D48C0927E85288E603D38AD92C0 (int32_t* ___count0, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::MarshalAndFreeNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m99000C4908D655F245E2EC76029B2B9718D7E491 (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationAction_mB6983CAFA2D834C868567F605F55CB844702BFF1 (const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationUserText_m39B79F2BDFA59A8780D852E5C8BBB4086E3A609B (const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataArray_m17748B95E93D87E25DF727C4A77348CAF8686457 (int32_t* ___count0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_m9BBE43390A00107B926480FA5C2062B81A8F1B1A (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddItemToNSDictionary(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddItemToNSDictionary_m3798785725CBF97127669F924EE9E35B336D41A5 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Count()
inline int32_t List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_inline (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*, const RuntimeMethod*))List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::GetEnumerator()
inline Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2 List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29 (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2 (*) (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*, const RuntimeMethod*))List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::Dispose()
inline void Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2*, const RuntimeMethod*))Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Current()
inline iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_inline (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 (*) (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2*, const RuntimeMethod*))Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_gshared_inline)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddAttachmentToNSArray(System.IntPtr,System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddAttachmentToNSArray_m84054FBACB7477A05721E119B028523ACA016F16 (intptr_t ___atts0, String_t* ___id1, String_t* ___url2, intptr_t* ___error3, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReleaseNSObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReleaseNSObject_mFFAD0F85055C706E8A5479A81B66A663831368FE (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_NSErrorToMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__NSErrorToMessage_m621C81B674107D57D52569733B5F7FAD29869C69 (intptr_t ___error0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::MoveNext()
inline bool Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441 (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2*, const RuntimeMethod*))Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback__ctor_m7E31544BB059836C992783780D71576AA277A22D (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadNSDictionary(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadNSDictionary_m1C436D4473181385D91702AAF13FB7D28A70F714 (intptr_t ___handle0, intptr_t ___nsDict1, ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* ___callback2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::.ctor()
inline void List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*, const RuntimeMethod*))List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback__ctor_m205C4D08A16088C9897995C35D865C64EDC016FC (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadAttachmentsNSArray(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadAttachmentsNSArray_m493603B5A3AC41CA7E9366B21F3A11F3E0F2DED4 (intptr_t ___handle0, intptr_t ___nsArray1, ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* ___callback2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m425633D16CA2A2A7AB652ADC723F37D499B64FF7 (int32_t ___badge0, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m53F1F38D3652F65C75E4ED7AE669F23B9D9628BC (const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m6EDB04FD2C23285C778D51EC2F8D3E329AD73B31 (const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_mBDAFB058A017C90FFD50DE741698BE38F832A4D6 (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::.ctor(T)
inline void Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8*, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5, const RuntimeMethod*))Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::.ctor()
inline void Dictionary_2__ctor_m4ABDF05BA4B194A57967F3B53D7422F6439255F1 (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9*, const RuntimeMethod*))Dictionary_2__ctor_m1191D06A22AB56CAEB33EB3C842940C1FDB9B77C_gshared)(__this, method);
}
// Unity.Notifications.iOS.iOSNotificationAction[] Unity.Notifications.iOS.iOSNotificationCategory::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* iOSNotificationCategory_get_Actions_m9958D87CD035EA242CEAB3BAC116C43B0CD8F895 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE0C48AA68D5546E0616D5D05E689FA0D00036203 (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mD7169108C4AD240C979A858B7985A20E1F21FFCF_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA3778483431364C6C54E792CD1AC43576F137AB4 (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* __this, String_t* ___key0, intptr_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9*, String_t*, intptr_t, const RuntimeMethod*))Dictionary_2_set_Item_mAAEF80C45B5DFFF50AF342166E34A5AE35E46349_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::get_Item(TKey)
inline intptr_t Dictionary_2_get_Item_m800AA5B33449643DC97AC1FF1F653A3B9D15CFE8 (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mD2C69EEF36D11090873931986EDE898163A0824C_gshared)(__this, ___key0, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddActionToNSArray(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddActionToNSArray_m686DFC012EFD29CFFD1BD4BF119F800C2FD29BCD (intptr_t ___actions0, intptr_t ___action1, int32_t ___capacity2, const RuntimeMethod* method) ;
// System.String[] Unity.Notifications.iOS.iOSNotificationCategory::get_IntentIdentifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* iOSNotificationCategory_get_IntentIdentifiers_m91CA55C622A693C0AAF6C5CE75322E3084B50FAC (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddStringToNSArray(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddStringToNSArray_m0BAB7C567291148EBE50227723B436D2066988AC (intptr_t ___array0, String_t* ___str1, int32_t ___capacity2, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_Id_m6A4071B537F6E5B51DA11DCB43613BBD691CFBA9_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_HiddenPreviewsBodyPlaceholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mCC5DF780F51E1AC578873FE372067DF14800A1C2_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_SummaryFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_SummaryFormat_m6835C27643601AFBCD4F51CA3E28C72E850164CB_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationCategoryOptions Unity.Notifications.iOS.iOSNotificationCategory::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationCategory_get_Options_m93741379CF2DF82295080957832C1D37D3DFC961_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationCategory(System.String,System.String,System.String,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationCategory_m11D21B22ED4FDF28B5F08E37EFC108A10D1415CE (String_t* ___id0, String_t* ___hiddenPreviewsBodyPlaceholder1, String_t* ___summaryFormat2, int32_t ___options3, intptr_t ___actions4, intptr_t ___intentIdentifiers5, const RuntimeMethod* method) ;
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddCategoryToCategorySet(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddCategoryToCategorySet_m358D50AFD799BB064CD2F079A7F2B89E04C1AEE4 (intptr_t ___categorySet0, intptr_t ___category1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationCategories(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationCategories_mD43856530598B70C8E32AF49A3D75E646484B46A (intptr_t ___categorySet0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::GetEnumerator()
inline Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8 Dictionary_2_GetEnumerator_m41265919586D29EB9B9463CA58C718650069662E (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8 (*) (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m14943B04CF9F3275383FD9A602776571CA736339_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>::Dispose()
inline void Enumerator_Dispose_m3DBCD92FD0C9A216ADA0B3A7125D18F23AB20C44 (Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8*, const RuntimeMethod*))Enumerator_Dispose_m5A0E1306BBC4B0F1118D05CD084D7E60B13DD376_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>::get_Current()
inline KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6 Enumerator_get_Current_mF15CFF294BE6EAD4E0D494A943C48290FDE615CF_inline (Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6 (*) (Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8*, const RuntimeMethod*))Enumerator_get_Current_m9424B04BBD0560732E1913809F3725C44401977C_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.IntPtr>::get_Value()
inline intptr_t KeyValuePair_2_get_Value_m4F01AB5E5AD186F63C33C6326B4020B0D76465D5_inline (KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD9B8955E1A15CC8D0F45A0938E0AD24926071553_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>::MoveNext()
inline bool Enumerator_MoveNext_m827F25AFA853D56D738631CA3CCFB0DABDE9C260 (Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8*, const RuntimeMethod*))Enumerator_MoveNext_m7BB28F194F5C57BC3C671D140718EAB7C8A7D43C_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m95AD5724B07112816285A5B3F9D72025C31D7B73 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationPushTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationPushTrigger_get_Type_m1DCD9C5923AD6284A690BAD62CDEA77253CE7340 (iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_mC688FDD7770A276C2FE0862FB3208D07CA1A6849 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___value0, const RuntimeMethod* method) ;
// System.TimeSpan Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_TimeInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A iOSNotificationTimeIntervalTrigger_get_TimeInterval_mF10F7EEE7AA273B280E29DD5535AE576147D1EB4 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_m8DDE94D778C187DAC0F82E324AF795E64E005130 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mB3B8E3E49566CDA04FD16B12BDDD8F53CDEB0EBA (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_UtcTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.DateTime Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignDateTimeComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D iOSNotificationCalendarTrigger_AssignDateTimeComponents_m864EC2AF260C484E6B16FC7ECBFD51647255021C (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignNonEmptyComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_AssignNonEmptyComponents_m048DBA5747F815A27EB4106983CFA0426D4569F4 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// Unity.Notifications.iOS.iOSNotificationCalendarTrigger Unity.Notifications.iOS.iOSNotificationCalendarTrigger::ToLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C iOSNotificationCalendarTrigger_ToLocal_mBC366DC7F7F9ADBF2C219BE19B0B4A14D5E8E573 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestAuthorization(intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _ScheduleLocalNotification(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetRemoteNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetAuthorizationRequestReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 DEFAULT_CALL _GetNotificationSettings();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetScheduledNotificationDataArray(int32_t*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetDeliveredNotificationDataArray(int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveScheduledNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllScheduledNotifications();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveDeliveredNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetApplicationBadge(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetApplicationBadge();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetAppOpenedUsingNotification();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllDeliveredNotifications();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetLastNotificationData();
IL2CPP_EXTERN_C char* DEFAULT_CALL _GetLastRespondedNotificationAction();
IL2CPP_EXTERN_C char* DEFAULT_CALL _GetLastRespondedNotificationUserText();
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagediOSNotificationDataArray(intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddItemToNSDictionary(intptr_t, char*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddAttachmentToNSArray(intptr_t, char*, char*, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReadNSDictionary(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReadAttachmentsNSArray(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CreateUNNotificationAction(char*, char*, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CreateUNTextInputNotificationAction(char*, char*, int32_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReleaseNSObject(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NSErrorToMessage(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddActionToNSArray(intptr_t, intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CreateUNNotificationCategory(char*, char*, char*, int32_t, intptr_t, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddCategoryToCategorySet(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationCategories(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddStringToNSArray(intptr_t, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _OpenNotificationSettings();
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke(const iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC& unmarshaled, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke& marshaled)
{
	marshaled.___granted_0 = unmarshaled.___granted_0;
	marshaled.___error_1 = il2cpp_codegen_marshal_string(unmarshaled.___error_1);
	marshaled.___deviceToken_2 = il2cpp_codegen_marshal_string(unmarshaled.___deviceToken_2);
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_back(const iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC& unmarshaled)
{
	int32_t unmarshaledgranted_temp_0 = 0;
	unmarshaledgranted_temp_0 = marshaled.___granted_0;
	unmarshaled.___granted_0 = unmarshaledgranted_temp_0;
	unmarshaled.___error_1 = il2cpp_codegen_marshal_string_result(marshaled.___error_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___error_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___error_1));
	unmarshaled.___deviceToken_2 = il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___deviceToken_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_2));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceToken_2);
	marshaled.___deviceToken_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_com(const iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC& unmarshaled, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_com& marshaled)
{
	marshaled.___granted_0 = unmarshaled.___granted_0;
	marshaled.___error_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___error_1);
	marshaled.___deviceToken_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___deviceToken_2);
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_com_back(const iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_com& marshaled, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC& unmarshaled)
{
	int32_t unmarshaledgranted_temp_0 = 0;
	unmarshaledgranted_temp_0 = marshaled.___granted_0;
	unmarshaled.___granted_0 = unmarshaledgranted_temp_0;
	unmarshaled.___error_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___error_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___error_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___error_1));
	unmarshaled.___deviceToken_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___deviceToken_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_2));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_com_cleanup(iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceToken_2);
	marshaled.___deviceToken_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthorizationRequest_get_IsFinished_mE33F31C34C68CF41E031401ED94107F635611786 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, const RuntimeMethod* method) 
{
	AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// get { lock (this) { return m_IsFinished; } }
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_001e;
					}
				}
				{
					AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_001e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// get { lock (this) { return m_IsFinished; } }
			bool L_3 = __this->___m_IsFinished_0;
			V_2 = L_3;
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// get { lock (this) { return m_IsFinished; } }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_m9AF9F366ABC34678151252ECFC3B4FF6959E6ED9 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_IsFinished = value; }
		bool L_0 = ___value0;
		__this->___m_IsFinished_0 = L_0;
		// private set { m_IsFinished = value; }
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::get_Granted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthorizationRequest_get_Granted_mECDFFF68D2DEAF78D4E7C5376ED0E2550D5EF164 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, const RuntimeMethod* method) 
{
	AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// get { lock (this) { return m_Granted; } }
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_001e;
					}
				}
				{
					AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_001e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// get { lock (this) { return m_Granted; } }
			bool L_3 = __this->___m_Granted_1;
			V_2 = L_3;
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// get { lock (this) { return m_Granted; } }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_mFC66547317A168FF388E5AFA19A4A1F31AAF7033 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_Granted = value; }
		bool L_0 = ___value0;
		__this->___m_Granted_1 = L_0;
		// private set { m_Granted = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.AuthorizationRequest::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthorizationRequest_get_Error_m24A9600E64700A0C659F82D034EA076393C04660 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, const RuntimeMethod* method) 
{
	AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// get { lock (this) { return m_Error; } }
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_001e;
					}
				}
				{
					AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_001e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// get { lock (this) { return m_Error; } }
			String_t* L_3 = __this->___m_Error_2;
			V_2 = L_3;
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// get { lock (this) { return m_Error; } }
		String_t* L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_m0310B101EB0CDE8DEF8FAA58E69513A810AF5F41 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_Error = value; }
		String_t* L_0 = ___value0;
		__this->___m_Error_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Error_2), (void*)L_0);
		// private set { m_Error = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.AuthorizationRequest::get_DeviceToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthorizationRequest_get_DeviceToken_m37FEE181AD1306710096FA6FD68CA0C7DB3082FE (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, const RuntimeMethod* method) 
{
	AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// get { lock (this) { return m_DeviceToken; } }
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_001e;
					}
				}
				{
					AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_001e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// get { lock (this) { return m_DeviceToken; } }
			String_t* L_3 = __this->___m_DeviceToken_3;
			V_2 = L_3;
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// get { lock (this) { return m_DeviceToken; } }
		String_t* L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_mDF3A4418B4B1D213AE14E590BCB36BD3C5FADAE3 (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_DeviceToken = value; }
		String_t* L_0 = ___value0;
		__this->___m_DeviceToken_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeviceToken_3), (void*)L_0);
		// private set { m_DeviceToken = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest__cctor_m79A3F9A51C73D573D6140DECD00F26458A13B6EA (const RuntimeMethod* method) 
{
	{
		// iOSNotificationsWrapper.RegisterAuthorizationRequestCallback();
		iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mCA40A1376B88E5CB45368F1814B8E29C82E16502(NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::.ctor(Unity.Notifications.iOS.AuthorizationOption,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest__ctor_mA2D61FE2CE62D08FAFF0C98BE07CDDB3AA61C57E (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, int32_t ___authorizationOption0, bool ___registerForRemoteNotifications1, const RuntimeMethod* method) 
{
	{
		// public AuthorizationRequest(AuthorizationOption authorizationOption, bool registerForRemoteNotifications)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var handle = GCHandle.Alloc(this);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0;
		L_0 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		// iOSNotificationsWrapper.RequestAuthorization(GCHandle.ToIntPtr(handle), (int)authorizationOption, registerForRemoteNotifications);
		intptr_t L_1;
		L_1 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_0, NULL);
		int32_t L_2 = ___authorizationOption0;
		bool L_3 = ___registerForRemoteNotifications1;
		iOSNotificationsWrapper_RequestAuthorization_mC1062AF0F279E5610F4559CFA756401291648BFA(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_m9A40CB3464048A5E0EE673AC50FF9AB462B7CD3E (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___requestData0, const RuntimeMethod* method) 
{
	AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0045;
					}
				}
				{
					AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// IsFinished = true;
			AuthorizationRequest_set_IsFinished_m9AF9F366ABC34678151252ECFC3B4FF6959E6ED9_inline(__this, (bool)1, NULL);
			// Granted = requestData.granted != 0;
			iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC L_3 = ___requestData0;
			int32_t L_4 = L_3.___granted_0;
			AuthorizationRequest_set_Granted_mFC66547317A168FF388E5AFA19A4A1F31AAF7033_inline(__this, (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), NULL);
			// Error = requestData.error;
			iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC L_5 = ___requestData0;
			String_t* L_6 = L_5.___error_1;
			AuthorizationRequest_set_Error_m0310B101EB0CDE8DEF8FAA58E69513A810AF5F41_inline(__this, L_6, NULL);
			// DeviceToken = requestData.deviceToken;
			iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC L_7 = ___requestData0;
			String_t* L_8 = L_7.___deviceToken_2;
			AuthorizationRequest_set_DeviceToken_mDF3A4418B4B1D213AE14E590BCB36BD3C5FADAE3_inline(__this, L_8, NULL);
			// }
			goto IL_0046;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_m0F1A24F99EF966055A145B95406B0DE10ACF92A8 (intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___requestData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var handle = GCHandle.FromIntPtr(request);
		intptr_t L_0 = ___request0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// var req = handle.Target as AuthorizationRequest;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// req.OnAuthorizationRequestCompleted(requestData);
		iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC L_3 = ___requestData1;
		NullCheck(((AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6*)IsInstClass((RuntimeObject*)L_2, AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6_il2cpp_TypeInfo_var)));
		AuthorizationRequest_OnAuthorizationRequestCompleted_m9A40CB3464048A5E0EE673AC50FF9AB462B7CD3E(((AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6*)IsInstClass((RuntimeObject*)L_2, AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6_il2cpp_TypeInfo_var)), L_3, NULL);
		// }
		goto IL_0029;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.Exception)
		// Debug.LogException(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_Dispose_mA7CA814C1D0F2C5B60913802FDF7923ABF8319DF (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, const RuntimeMethod* method) 
{
	{
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___identifier_0);
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.___title_1);
	marshaled.___body_2 = il2cpp_codegen_marshal_string(unmarshaled.___body_2);
	marshaled.___badge_3 = unmarshaled.___badge_3;
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_string(unmarshaled.___subtitle_4);
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string(unmarshaled.___categoryIdentifier_5);
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string(unmarshaled.___threadIdentifier_6);
	marshaled.___userInfo_7 = unmarshaled.___userInfo_7;
	marshaled.___attachments_8 = unmarshaled.___attachments_8;
	marshaled.___triggerType_9 = unmarshaled.___triggerType_9;
	marshaled.___trigger_10 = unmarshaled.___trigger_10;
}
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_back(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke& marshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled)
{
	unmarshaled.___identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___identifier_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___identifier_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___identifier_0));
	unmarshaled.___title_1 = il2cpp_codegen_marshal_string_result(marshaled.___title_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___title_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.___body_2 = il2cpp_codegen_marshal_string_result(marshaled.___body_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___body_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___body_2));
	int32_t unmarshaledbadge_temp_3 = 0;
	unmarshaledbadge_temp_3 = marshaled.___badge_3;
	unmarshaled.___badge_3 = unmarshaledbadge_temp_3;
	unmarshaled.___subtitle_4 = il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___subtitle_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4));
	unmarshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___categoryIdentifier_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5));
	unmarshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___threadIdentifier_6), (void*)il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6));
	intptr_t unmarshaleduserInfo_temp_7;
	memset((&unmarshaleduserInfo_temp_7), 0, sizeof(unmarshaleduserInfo_temp_7));
	unmarshaleduserInfo_temp_7 = marshaled.___userInfo_7;
	unmarshaled.___userInfo_7 = unmarshaleduserInfo_temp_7;
	intptr_t unmarshaledattachments_temp_8;
	memset((&unmarshaledattachments_temp_8), 0, sizeof(unmarshaledattachments_temp_8));
	unmarshaledattachments_temp_8 = marshaled.___attachments_8;
	unmarshaled.___attachments_8 = unmarshaledattachments_temp_8;
	int32_t unmarshaledtriggerType_temp_9 = 0;
	unmarshaledtriggerType_temp_9 = marshaled.___triggerType_9;
	unmarshaled.___triggerType_9 = unmarshaledtriggerType_temp_9;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E unmarshaledtrigger_temp_10;
	memset((&unmarshaledtrigger_temp_10), 0, sizeof(unmarshaledtrigger_temp_10));
	unmarshaledtrigger_temp_10 = marshaled.___trigger_10;
	unmarshaled.___trigger_10 = unmarshaledtrigger_temp_10;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_cleanup(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_com(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___identifier_0);
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___title_1);
	marshaled.___body_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___body_2);
	marshaled.___badge_3 = unmarshaled.___badge_3;
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___subtitle_4);
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___categoryIdentifier_5);
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring(unmarshaled.___threadIdentifier_6);
	marshaled.___userInfo_7 = unmarshaled.___userInfo_7;
	marshaled.___attachments_8 = unmarshaled.___attachments_8;
	marshaled.___triggerType_9 = unmarshaled.___triggerType_9;
	marshaled.___trigger_10 = unmarshaled.___trigger_10;
}
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_com_back(const iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com& marshaled, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED& unmarshaled)
{
	unmarshaled.___identifier_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___identifier_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0));
	unmarshaled.___title_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___title_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___title_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.___body_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___body_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___body_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___body_2));
	int32_t unmarshaledbadge_temp_3 = 0;
	unmarshaledbadge_temp_3 = marshaled.___badge_3;
	unmarshaled.___badge_3 = unmarshaledbadge_temp_3;
	unmarshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___subtitle_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4));
	unmarshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___categoryIdentifier_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5));
	unmarshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___threadIdentifier_6), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6));
	intptr_t unmarshaleduserInfo_temp_7;
	memset((&unmarshaleduserInfo_temp_7), 0, sizeof(unmarshaleduserInfo_temp_7));
	unmarshaleduserInfo_temp_7 = marshaled.___userInfo_7;
	unmarshaled.___userInfo_7 = unmarshaleduserInfo_temp_7;
	intptr_t unmarshaledattachments_temp_8;
	memset((&unmarshaledattachments_temp_8), 0, sizeof(unmarshaledattachments_temp_8));
	unmarshaledattachments_temp_8 = marshaled.___attachments_8;
	unmarshaled.___attachments_8 = unmarshaledattachments_temp_8;
	int32_t unmarshaledtriggerType_temp_9 = 0;
	unmarshaledtriggerType_temp_9 = marshaled.___triggerType_9;
	unmarshaled.___triggerType_9 = unmarshaledtriggerType_temp_9;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E unmarshaledtrigger_temp_10;
	memset((&unmarshaledtrigger_temp_10), 0, sizeof(unmarshaledtrigger_temp_10));
	unmarshaledtrigger_temp_10 = marshaled.___trigger_10;
	unmarshaled.___trigger_10 = unmarshaledtrigger_temp_10;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_com_cleanup(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Notifications.iOS.iOSNotification::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Identifier_mD29BD041CBA7DBBC52AE1F8B96A611C4D225FE29 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.identifier; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___identifier_0;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Identifier_mE3145BABCFC0000F3C9AB6AD49DE7D784570635D (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.identifier = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = ___value0;
		L_0->___identifier_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___identifier_0), (void*)L_1);
		// set { data.identifier = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_CategoryIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_CategoryIdentifier_m9D78200F00E25A3ED9BDD67E39FEF80E4DFB16CA (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.categoryIdentifier; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___categoryIdentifier_5;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_CategoryIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_CategoryIdentifier_mE805009CDA125BD6038146FB774B1AAD213E7283 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.categoryIdentifier = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = ___value0;
		L_0->___categoryIdentifier_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___categoryIdentifier_5), (void*)L_1);
		// set { data.categoryIdentifier = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_ThreadIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_ThreadIdentifier_m765A116B9C88CD4AB59BD2BCB351520FB0D68EFC (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.threadIdentifier; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___threadIdentifier_6;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ThreadIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ThreadIdentifier_m1DB3535D83AC1CD4EBD5E0C84A40AB43D311E303 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.threadIdentifier = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = ___value0;
		L_0->___threadIdentifier_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___threadIdentifier_6), (void*)L_1);
		// set { data.threadIdentifier = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Title_m32E658B0736C29D716D6026439297FD6C3E9943D (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.title; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___title_1;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Title_mAAB437F0A9964DB9ACC46E386CB158E554287832 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.title = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = ___value0;
		L_0->___title_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___title_1), (void*)L_1);
		// set { data.title = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Subtitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Subtitle_mEDAAFF7725FB813021524C43F21B9894D711EDFD (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.subtitle; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___subtitle_4;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Subtitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Subtitle_m7B1A7683AAF8E53C4F07C8D16D68F5F94DE4F69A (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.subtitle = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = ___value0;
		L_0->___subtitle_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___subtitle_4), (void*)L_1);
		// set { data.subtitle = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Body_m5CD84B7FB13E4E1FD3E0D116523EDF9DEEA33A7A (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.body; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___body_2;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Body(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Body_m5AE05A830B4B0D56C09DE9BEDC210C5F1316DB92 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.body = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = ___value0;
		L_0->___body_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___body_2), (void*)L_1);
		// set { data.body = value; }
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotification::get_ShowInForeground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotification_get_ShowInForeground_m0201CF79F451C45ADCB84A397D6A8FF72A92E438 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (userInfo.TryGetValue("showInForeground", out value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return value == "YES";
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA, NULL);
		return L_3;
	}

IL_0020:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_mB8363BB4B0C40234B565A24F6A979641DBA5A8D8 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B3_2 = NULL;
	{
		// set { userInfo["showInForeground"] = value ? "YES" : "NO"; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(G_B3_2, G_B3_1, G_B3_0, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// set { userInfo["showInForeground"] = value ? "YES" : "NO"; }
		return;
	}
}
// Unity.Notifications.iOS.PresentationOption Unity.Notifications.iOS.iOSNotification::get_ForegroundPresentationOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotification_get_ForegroundPresentationOption_m9EDF9BE96A123B4727010D00AC4B72823721923E (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (userInfo.TryGetValue("showInForegroundPresentationOptions", out value))
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
			NullCheck(L_0);
			bool L_1;
			L_1 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
			if (!L_1)
			{
				goto IL_001d_1;
			}
		}
		{
			// return (PresentationOption)Int32.Parse(value);
			String_t* L_2 = V_0;
			int32_t L_3;
			L_3 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_2, NULL);
			V_1 = L_3;
			goto IL_0026;
		}

IL_001d_1:
		{
			// return default;
			V_1 = 0;
			goto IL_0026;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{// begin catch(System.Exception)
		// catch (Exception)
		// return default;
		V_1 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	}// end catch (depth: 1)

IL_0026:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mE95C0D442FB78AC8ED3137CA19BF4C12963D2D57 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// set { userInfo["showInForegroundPresentationOptions"] = ((int)value).ToString(); }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
		int32_t L_1 = ___value0;
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// set { userInfo["showInForegroundPresentationOptions"] = ((int)value).ToString(); }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotification::get_Badge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotification_get_Badge_m2C4F12C4F17C2D68BF2453C9006BF5AF43126796 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return data.badge; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		int32_t L_1 = L_0->___badge_3;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Badge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Badge_m91BE817449342EA5AAA3B0616B60363FFF39DCDD (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { data.badge = value; }
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		int32_t L_1 = ___value0;
		L_0->___badge_3 = L_1;
		// set { data.badge = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Data_m047F0F45855B536B32217502912BEAB3FB080FAF (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// userInfo.TryGetValue("data", out value);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		// return value;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_mDDEDDFDC4DA023124B7CC8D0AA882F3EFD6C334A (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { userInfo["data"] = value; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, L_1, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// set { userInfo["data"] = value; }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotification::get_UserInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* iOSNotification_get_UserInfo_m92F60A3EC7460F6AD8B0CD93461EC425ED527237 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// get { return userInfo; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___userInfo_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotification::get_Attachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* iOSNotification_get_Attachments_m54CA2BC5B43417D01136FE5A72B0A0BD2636549D (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_0 = __this->___U3CAttachmentsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Attachments(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Attachments_m93E8FB777A55F4C6AB38922DBD0A0C8E9890D15C (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_0 = ___value0;
		__this->___U3CAttachmentsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttachmentsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Trigger(Unity.Notifications.iOS.iOSNotificationTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Trigger_m87A4F53B6CB98FE11AD98A5952F0CB2E95BCF52F (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTrigger_tC158EA08A8FCFBF7CF13CAF3A98EF0B1285C4AB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C V_2;
	memset((&V_2), 0, sizeof(V_2));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48 V_5;
	memset((&V_5), 0, sizeof(V_5));
	TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* G_B12_0 = NULL;
	TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* G_B13_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B16_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B17_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B19_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B20_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B22_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B23_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B25_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B26_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B28_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B29_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B31_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B30_0 = NULL;
	int32_t G_B32_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B32_1 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B34_0 = NULL;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B33_0 = NULL;
	int32_t G_B35_0 = 0;
	CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* G_B35_1 = NULL;
	LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* G_B38_0 = NULL;
	LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* G_B37_0 = NULL;
	int32_t G_B39_0 = 0;
	LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* G_B39_1 = NULL;
	LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* G_B41_0 = NULL;
	LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* G_B40_0 = NULL;
	int32_t G_B42_0 = 0;
	LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* G_B42_1 = NULL;
	{
		// switch (value.Type)
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTrigger::get_Type() */, iOSNotificationTrigger_tC158EA08A8FCFBF7CF13CAF3A98EF0B1285C4AB1_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_02d5;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)10))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_0227;
		}
	}
	{
		goto IL_02d5;
	}

IL_002c:
	{
		// var trigger = (iOSNotificationTimeIntervalTrigger)value;
		RuntimeObject* L_7 = ___value0;
		V_1 = ((*(iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*)((iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*)(iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*)UnBox(L_7, iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_il2cpp_TypeInfo_var))));
		// data.trigger.timeInterval.interval = trigger.timeInterval;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_8 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_9 = (&L_8->___trigger_10);
		TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* L_10 = (&L_9->___timeInterval_0);
		iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 L_11 = V_1;
		int32_t L_12 = L_11.___timeInterval_0;
		L_10->___interval_0 = L_12;
		// if (trigger.Repeats && trigger.timeInterval < 60)
		bool L_13;
		L_13 = iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD_inline((&V_1), NULL);
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 L_14 = V_1;
		int32_t L_15 = L_14.___timeInterval_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)60))))
		{
			goto IL_006c;
		}
	}
	{
		// throw new ArgumentException("Time interval must be 60 seconds or greater for repeating notifications.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_set_Trigger_m87A4F53B6CB98FE11AD98A5952F0CB2E95BCF52F_RuntimeMethod_var)));
	}

IL_006c:
	{
		// data.trigger.timeInterval.repeats = (byte)(trigger.Repeats ? 1 : 0);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_17 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_18 = (&L_17->___trigger_10);
		TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* L_19 = (&L_18->___timeInterval_0);
		bool L_20;
		L_20 = iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD_inline((&V_1), NULL);
		G_B11_0 = L_19;
		if (L_20)
		{
			G_B12_0 = L_19;
			goto IL_0088;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
	}

IL_0089:
	{
		G_B13_1->___repeats_1 = (uint8_t)((int32_t)(uint8_t)G_B13_0);
		// break;
		goto IL_02f0;
	}

IL_0094:
	{
		// var trigger = ((iOSNotificationCalendarTrigger)value).ToUtc();
		RuntimeObject* L_21 = ___value0;
		V_3 = ((*(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)((iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)UnBox(L_21, iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_il2cpp_TypeInfo_var))));
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_22;
		L_22 = iOSNotificationCalendarTrigger_ToUtc_mFC629A17E3B38EF5BFF057332D736CB26B80DAC3((&V_3), NULL);
		V_2 = L_22;
		// data.trigger.calendar.year = trigger.Year != null ? trigger.Year.Value : -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_23 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_24 = (&L_23->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_25 = (&L_24->___calendar_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_26;
		L_26 = iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline((&V_2), NULL);
		V_4 = L_26;
		bool L_27;
		L_27 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B15_0 = L_25;
		if (L_27)
		{
			G_B16_0 = L_25;
			goto IL_00c8;
		}
	}
	{
		G_B17_0 = (-1);
		G_B17_1 = G_B15_0;
		goto IL_00d8;
	}

IL_00c8:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_28;
		L_28 = iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline((&V_2), NULL);
		V_4 = L_28;
		int32_t L_29;
		L_29 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B17_0 = L_29;
		G_B17_1 = G_B16_0;
	}

IL_00d8:
	{
		G_B17_1->___year_0 = G_B17_0;
		// data.trigger.calendar.month = trigger.Month != null ? trigger.Month.Value : -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_30 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_31 = (&L_30->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_32 = (&L_31->___calendar_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_33;
		L_33 = iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline((&V_2), NULL);
		V_4 = L_33;
		bool L_34;
		L_34 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B18_0 = L_32;
		if (L_34)
		{
			G_B19_0 = L_32;
			goto IL_0102;
		}
	}
	{
		G_B20_0 = (-1);
		G_B20_1 = G_B18_0;
		goto IL_0112;
	}

IL_0102:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_35;
		L_35 = iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline((&V_2), NULL);
		V_4 = L_35;
		int32_t L_36;
		L_36 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B20_0 = L_36;
		G_B20_1 = G_B19_0;
	}

IL_0112:
	{
		G_B20_1->___month_1 = G_B20_0;
		// data.trigger.calendar.day = trigger.Day != null ? trigger.Day.Value : -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_37 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_38 = (&L_37->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_39 = (&L_38->___calendar_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_40;
		L_40 = iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline((&V_2), NULL);
		V_4 = L_40;
		bool L_41;
		L_41 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B21_0 = L_39;
		if (L_41)
		{
			G_B22_0 = L_39;
			goto IL_013c;
		}
	}
	{
		G_B23_0 = (-1);
		G_B23_1 = G_B21_0;
		goto IL_014c;
	}

IL_013c:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_42;
		L_42 = iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline((&V_2), NULL);
		V_4 = L_42;
		int32_t L_43;
		L_43 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B23_0 = L_43;
		G_B23_1 = G_B22_0;
	}

IL_014c:
	{
		G_B23_1->___day_2 = G_B23_0;
		// data.trigger.calendar.hour = trigger.Hour != null ? trigger.Hour.Value : -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_44 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_45 = (&L_44->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_46 = (&L_45->___calendar_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_47;
		L_47 = iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline((&V_2), NULL);
		V_4 = L_47;
		bool L_48;
		L_48 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B24_0 = L_46;
		if (L_48)
		{
			G_B25_0 = L_46;
			goto IL_0176;
		}
	}
	{
		G_B26_0 = (-1);
		G_B26_1 = G_B24_0;
		goto IL_0186;
	}

IL_0176:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_49;
		L_49 = iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline((&V_2), NULL);
		V_4 = L_49;
		int32_t L_50;
		L_50 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B26_0 = L_50;
		G_B26_1 = G_B25_0;
	}

IL_0186:
	{
		G_B26_1->___hour_3 = G_B26_0;
		// data.trigger.calendar.minute = trigger.Minute != null ? trigger.Minute.Value : -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_51 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_52 = (&L_51->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_53 = (&L_52->___calendar_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_54;
		L_54 = iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline((&V_2), NULL);
		V_4 = L_54;
		bool L_55;
		L_55 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B27_0 = L_53;
		if (L_55)
		{
			G_B28_0 = L_53;
			goto IL_01b0;
		}
	}
	{
		G_B29_0 = (-1);
		G_B29_1 = G_B27_0;
		goto IL_01c0;
	}

IL_01b0:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_56;
		L_56 = iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline((&V_2), NULL);
		V_4 = L_56;
		int32_t L_57;
		L_57 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B29_0 = L_57;
		G_B29_1 = G_B28_0;
	}

IL_01c0:
	{
		G_B29_1->___minute_4 = G_B29_0;
		// data.trigger.calendar.second = trigger.Second != null ? trigger.Second.Value : -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_58 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_59 = (&L_58->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_60 = (&L_59->___calendar_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_61;
		L_61 = iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline((&V_2), NULL);
		V_4 = L_61;
		bool L_62;
		L_62 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B30_0 = L_60;
		if (L_62)
		{
			G_B31_0 = L_60;
			goto IL_01ea;
		}
	}
	{
		G_B32_0 = (-1);
		G_B32_1 = G_B30_0;
		goto IL_01fa;
	}

IL_01ea:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_63;
		L_63 = iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline((&V_2), NULL);
		V_4 = L_63;
		int32_t L_64;
		L_64 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B32_0 = L_64;
		G_B32_1 = G_B31_0;
	}

IL_01fa:
	{
		G_B32_1->___second_5 = G_B32_0;
		// data.trigger.calendar.repeats = (byte)(trigger.Repeats ? 1 : 0);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_65 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_66 = (&L_65->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_67 = (&L_66->___calendar_1);
		bool L_68;
		L_68 = iOSNotificationCalendarTrigger_get_Repeats_m9F42C284F442180685A54C0108DFF7C3DBEC909E_inline((&V_2), NULL);
		G_B33_0 = L_67;
		if (L_68)
		{
			G_B34_0 = L_67;
			goto IL_021b;
		}
	}
	{
		G_B35_0 = 0;
		G_B35_1 = G_B33_0;
		goto IL_021c;
	}

IL_021b:
	{
		G_B35_0 = 1;
		G_B35_1 = G_B34_0;
	}

IL_021c:
	{
		G_B35_1->___repeats_6 = (uint8_t)((int32_t)(uint8_t)G_B35_0);
		// break;
		goto IL_02f0;
	}

IL_0227:
	{
		// var trigger = (iOSNotificationLocationTrigger)value;
		RuntimeObject* L_69 = ___value0;
		V_5 = ((*(iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*)((iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*)(iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*)UnBox(L_69, iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_il2cpp_TypeInfo_var))));
		// data.trigger.location.centerX = trigger.Center.x;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_70 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_71 = (&L_70->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_72 = (&L_71->___location_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B_inline((&V_5), NULL);
		float L_74 = L_73.___x_0;
		L_72->___centerX_0 = L_74;
		// data.trigger.location.centerY = trigger.Center.y;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_75 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_76 = (&L_75->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_77 = (&L_76->___location_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B_inline((&V_5), NULL);
		float L_79 = L_78.___y_1;
		L_77->___centerY_1 = L_79;
		// data.trigger.location.notifyOnEntry = (byte)(trigger.NotifyOnEntry ? 1 : 0);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_80 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_81 = (&L_80->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_82 = (&L_81->___location_2);
		bool L_83;
		L_83 = iOSNotificationLocationTrigger_get_NotifyOnEntry_m1CAB623B32CC86E1D88991D5D8D6610524C5F010_inline((&V_5), NULL);
		G_B37_0 = L_82;
		if (L_83)
		{
			G_B38_0 = L_82;
			goto IL_028d;
		}
	}
	{
		G_B39_0 = 0;
		G_B39_1 = G_B37_0;
		goto IL_028e;
	}

IL_028d:
	{
		G_B39_0 = 1;
		G_B39_1 = G_B38_0;
	}

IL_028e:
	{
		G_B39_1->___notifyOnEntry_3 = (uint8_t)((int32_t)(uint8_t)G_B39_0);
		// data.trigger.location.notifyOnExit = (byte)(trigger.NotifyOnExit ? 1 : 0);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_84 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_85 = (&L_84->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_86 = (&L_85->___location_2);
		bool L_87;
		L_87 = iOSNotificationLocationTrigger_get_NotifyOnExit_m8D0AAD323FAF46CA0DFCCE6FFE6C496A398E3FD6_inline((&V_5), NULL);
		G_B40_0 = L_86;
		if (L_87)
		{
			G_B41_0 = L_86;
			goto IL_02b0;
		}
	}
	{
		G_B42_0 = 0;
		G_B42_1 = G_B40_0;
		goto IL_02b1;
	}

IL_02b0:
	{
		G_B42_0 = 1;
		G_B42_1 = G_B41_0;
	}

IL_02b1:
	{
		G_B42_1->___notifyOnExit_4 = (uint8_t)((int32_t)(uint8_t)G_B42_0);
		// data.trigger.location.radius = trigger.Radius;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_88 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_89 = (&L_88->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_90 = (&L_89->___location_2);
		float L_91;
		L_91 = iOSNotificationLocationTrigger_get_Radius_m0C88F4129F152878B4992FBCC5F74209168C6065_inline((&V_5), NULL);
		L_90->___radius_2 = L_91;
		// break;
		goto IL_02f0;
	}

IL_02d5:
	{
		// throw new Exception($"Unknown trigger type {value.Type}");
		RuntimeObject* L_92 = ___value0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTrigger::get_Type() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTrigger_tC158EA08A8FCFBF7CF13CAF3A98EF0B1285C4AB1_il2cpp_TypeInfo_var)), L_92);
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTriggerType_t191C42E4D4E634B4694FB50559A1451AEFF6A19D_il2cpp_TypeInfo_var)), &L_94);
		String_t* L_96;
		L_96 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88B697A2C9C4DE6D613594AF141EACF167383C3E)), L_95, NULL);
		Exception_t* L_97 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_97);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_97, L_96, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_97, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_set_Trigger_m87A4F53B6CB98FE11AD98A5952F0CB2E95BCF52F_RuntimeMethod_var)));
	}

IL_02f0:
	{
		// data.triggerType = (int)value.Type;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_98 = (&__this->___data_1);
		RuntimeObject* L_99 = ___value0;
		NullCheck(L_99);
		int32_t L_100;
		L_100 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTrigger::get_Type() */, iOSNotificationTrigger_tC158EA08A8FCFBF7CF13CAF3A98EF0B1285C4AB1_il2cpp_TypeInfo_var, L_99);
		L_98->___triggerType_9 = L_100;
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationTrigger Unity.Notifications.iOS.iOSNotification::get_Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* iOSNotification_get_Trigger_m3C54C255331E7A1FF8F2B159D3546EEEF8247649 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48 V_4;
	memset((&V_4), 0, sizeof(V_4));
	iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B10_0 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B9_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B11_1 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B13_0 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B12_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B14_1 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B16_0 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B15_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B17_1 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B19_0 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B18_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B20_1 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B22_0 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B21_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B23_1 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B25_0 = NULL;
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B24_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* G_B26_1 = NULL;
	{
		// switch ((iOSNotificationTriggerType)data.triggerType)
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		int32_t L_1 = L_0->___triggerType_9;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_02e9;
		}
	}
	{
		goto IL_02f9;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)10))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_0249;
		}
	}
	{
		goto IL_02f9;
	}

IL_0031:
	{
		// return new iOSNotificationTimeIntervalTrigger()
		// {
		//     timeInterval = data.trigger.timeInterval.interval,
		//     Repeats = data.trigger.timeInterval.repeats != 0,
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649));
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_7 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_8 = (&L_7->___trigger_10);
		TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* L_9 = (&L_8->___timeInterval_0);
		int32_t L_10 = L_9->___interval_0;
		(&V_1)->___timeInterval_0 = L_10;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_11 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_12 = (&L_11->___trigger_10);
		TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823* L_13 = (&L_12->___timeInterval_0);
		uint8_t L_14 = L_13->___repeats_1;
		iOSNotificationTimeIntervalTrigger_set_Repeats_m7A9109F22E610DF25D696DD1CDEED9B311FBE5B9_inline((&V_1), (bool)((!(((uint32_t)L_14) <= ((uint32_t)0)))? 1 : 0), NULL);
		iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 L_15 = V_1;
		iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649 L_16 = L_15;
		RuntimeObject* L_17 = Box(iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_il2cpp_TypeInfo_var, &L_16);
		return (RuntimeObject*)L_17;
	}

IL_007b:
	{
		// return new iOSNotificationCalendarTrigger()
		// {
		//     Year = (data.trigger.calendar.year > 0) ? (int?)data.trigger.calendar.year : null,
		//     Month = (data.trigger.calendar.month > 0) ? (int?)data.trigger.calendar.month : null,
		//     Day = (data.trigger.calendar.day > 0) ? (int?)data.trigger.calendar.day : null,
		//     Hour = (data.trigger.calendar.hour >= 0) ? (int?)data.trigger.calendar.hour : null,
		//     Minute = (data.trigger.calendar.minute >= 0) ? (int?)data.trigger.calendar.minute : null,
		//     Second = (data.trigger.calendar.second >= 0) ? (int?)data.trigger.calendar.second : null,
		//     UtcTime = true,
		//     Repeats = data.trigger.calendar.repeats != 0
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C));
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_18 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_19 = (&L_18->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_20 = (&L_19->___calendar_1);
		int32_t L_21 = L_20->___year_0;
		G_B9_0 = (&V_2);
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			G_B10_0 = (&V_2);
			goto IL_00a8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = V_3;
		G_B11_0 = L_22;
		G_B11_1 = G_B9_0;
		goto IL_00c2;
	}

IL_00a8:
	{
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_23 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_24 = (&L_23->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_25 = (&L_24->___calendar_1);
		int32_t L_26 = L_25->___year_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_27), L_26, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B11_0 = L_27;
		G_B11_1 = G_B10_0;
	}

IL_00c2:
	{
		iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580_inline(G_B11_1, G_B11_0, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_28 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_29 = (&L_28->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_30 = (&L_29->___calendar_1);
		int32_t L_31 = L_30->___month_1;
		G_B12_0 = (&V_2);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			G_B13_0 = (&V_2);
			goto IL_00ec;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_32 = V_3;
		G_B14_0 = L_32;
		G_B14_1 = G_B12_0;
		goto IL_0106;
	}

IL_00ec:
	{
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_33 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_34 = (&L_33->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_35 = (&L_34->___calendar_1);
		int32_t L_36 = L_35->___month_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_37), L_36, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B14_0 = L_37;
		G_B14_1 = G_B13_0;
	}

IL_0106:
	{
		iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC_inline(G_B14_1, G_B14_0, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_38 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_39 = (&L_38->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_40 = (&L_39->___calendar_1);
		int32_t L_41 = L_40->___day_2;
		G_B15_0 = (&V_2);
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			G_B16_0 = (&V_2);
			goto IL_0130;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_42 = V_3;
		G_B17_0 = L_42;
		G_B17_1 = G_B15_0;
		goto IL_014a;
	}

IL_0130:
	{
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_43 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_44 = (&L_43->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_45 = (&L_44->___calendar_1);
		int32_t L_46 = L_45->___day_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_47), L_46, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B17_0 = L_47;
		G_B17_1 = G_B16_0;
	}

IL_014a:
	{
		iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B_inline(G_B17_1, G_B17_0, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_48 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_49 = (&L_48->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_50 = (&L_49->___calendar_1);
		int32_t L_51 = L_50->___hour_3;
		G_B18_0 = (&V_2);
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			G_B19_0 = (&V_2);
			goto IL_0174;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_52 = V_3;
		G_B20_0 = L_52;
		G_B20_1 = G_B18_0;
		goto IL_018e;
	}

IL_0174:
	{
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_53 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_54 = (&L_53->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_55 = (&L_54->___calendar_1);
		int32_t L_56 = L_55->___hour_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_57), L_56, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B20_0 = L_57;
		G_B20_1 = G_B19_0;
	}

IL_018e:
	{
		iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60_inline(G_B20_1, G_B20_0, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_58 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_59 = (&L_58->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_60 = (&L_59->___calendar_1);
		int32_t L_61 = L_60->___minute_4;
		G_B21_0 = (&V_2);
		if ((((int32_t)L_61) >= ((int32_t)0)))
		{
			G_B22_0 = (&V_2);
			goto IL_01b8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_62 = V_3;
		G_B23_0 = L_62;
		G_B23_1 = G_B21_0;
		goto IL_01d2;
	}

IL_01b8:
	{
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_63 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_64 = (&L_63->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_65 = (&L_64->___calendar_1);
		int32_t L_66 = L_65->___minute_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_67), L_66, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B23_0 = L_67;
		G_B23_1 = G_B22_0;
	}

IL_01d2:
	{
		iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82_inline(G_B23_1, G_B23_0, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_68 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_69 = (&L_68->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_70 = (&L_69->___calendar_1);
		int32_t L_71 = L_70->___second_5;
		G_B24_0 = (&V_2);
		if ((((int32_t)L_71) >= ((int32_t)0)))
		{
			G_B25_0 = (&V_2);
			goto IL_01fc;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_72 = V_3;
		G_B26_0 = L_72;
		G_B26_1 = G_B24_0;
		goto IL_0216;
	}

IL_01fc:
	{
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_73 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_74 = (&L_73->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_75 = (&L_74->___calendar_1);
		int32_t L_76 = L_75->___second_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_77), L_76, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B26_0 = L_77;
		G_B26_1 = G_B25_0;
	}

IL_0216:
	{
		iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D_inline(G_B26_1, G_B26_0, NULL);
		iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_inline((&V_2), (bool)1, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_78 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_79 = (&L_78->___trigger_10);
		CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23* L_80 = (&L_79->___calendar_1);
		uint8_t L_81 = L_80->___repeats_6;
		iOSNotificationCalendarTrigger_set_Repeats_m61C090AF21271FBAEB5E30E8A37F349BE822AE07_inline((&V_2), (bool)((!(((uint32_t)L_81) <= ((uint32_t)0)))? 1 : 0), NULL);
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_82 = V_2;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_83 = L_82;
		RuntimeObject* L_84 = Box(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_il2cpp_TypeInfo_var, &L_83);
		return (RuntimeObject*)L_84;
	}

IL_0249:
	{
		// return new iOSNotificationLocationTrigger()
		// {
		//     Center = new Vector2(data.trigger.location.centerX, data.trigger.location.centerY),
		//     Radius = data.trigger.location.radius,
		//     NotifyOnEntry = data.trigger.location.notifyOnEntry != 0,
		//     NotifyOnExit = data.trigger.location.notifyOnExit != 0
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48));
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_85 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_86 = (&L_85->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_87 = (&L_86->___location_2);
		float L_88 = L_87->___centerX_0;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_89 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_90 = (&L_89->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_91 = (&L_90->___location_2);
		float L_92 = L_91->___centerY_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
		memset((&L_93), 0, sizeof(L_93));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_93), L_88, L_92, /*hidden argument*/NULL);
		iOSNotificationLocationTrigger_set_Center_mA06C5E4FA9A108BA1C88AE3C392EA8027E357280_inline((&V_4), L_93, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_94 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_95 = (&L_94->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_96 = (&L_95->___location_2);
		float L_97 = L_96->___radius_2;
		iOSNotificationLocationTrigger_set_Radius_m7E204030C195EBB4800EE17D31616F22274AD019_inline((&V_4), L_97, NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_98 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_99 = (&L_98->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_100 = (&L_99->___location_2);
		uint8_t L_101 = L_100->___notifyOnEntry_3;
		iOSNotificationLocationTrigger_set_NotifyOnEntry_m451DBDBF73879CBF7B5D26402B45519BD34913D9_inline((&V_4), (bool)((!(((uint32_t)L_101) <= ((uint32_t)0)))? 1 : 0), NULL);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_102 = (&__this->___data_1);
		TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E* L_103 = (&L_102->___trigger_10);
		LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC* L_104 = (&L_103->___location_2);
		uint8_t L_105 = L_104->___notifyOnExit_4;
		iOSNotificationLocationTrigger_set_NotifyOnExit_m62C37F50D48DB3D9DE6C6D75BDDF065D807448D3_inline((&V_4), (bool)((!(((uint32_t)L_105) <= ((uint32_t)0)))? 1 : 0), NULL);
		iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48 L_106 = V_4;
		iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48 L_107 = L_106;
		RuntimeObject* L_108 = Box(iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_il2cpp_TypeInfo_var, &L_107);
		return (RuntimeObject*)L_108;
	}

IL_02e9:
	{
		// return new iOSNotificationPushTrigger();
		il2cpp_codegen_initobj((&V_5), sizeof(iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5));
		iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5 L_109 = V_5;
		iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5 L_110 = L_109;
		RuntimeObject* L_111 = Box(iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5_il2cpp_TypeInfo_var, &L_110);
		return (RuntimeObject*)L_111;
	}

IL_02f9:
	{
		// throw new Exception($"Unknown trigger type {data.triggerType}");
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_112 = (&__this->___data_1);
		int32_t L_113 = L_112->___triggerType_9;
		int32_t L_114 = L_113;
		RuntimeObject* L_115 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_114);
		String_t* L_116;
		L_116 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88B697A2C9C4DE6D613594AF141EACF167383C3E)), L_115, NULL);
		Exception_t* L_117 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_117);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_117, L_116, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_get_Trigger_m3C54C255331E7A1FF8F2B159D3546EEEF8247649_RuntimeMethod_var)));
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_mD6A35B90F34C752248B213A19EDCDC720EBF9C45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()).ToString();
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m7CFB3CF88F34E88EDC2CA56EC15F3510B1AAD69B (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotification() : this(GenerateUniqueID())
		String_t* L_0;
		L_0 = iOSNotification_GenerateUniqueID_mD6A35B90F34C752248B213A19EDCDC720EBF9C45(NULL);
		iOSNotification__ctor_m1EC6737F4C8ACFEA13E12E9F5F51C2F808AFEC58(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m1EC6737F4C8ACFEA13E12E9F5F51C2F808AFEC58 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, String_t* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotification(string identifier)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// data = new iOSNotificationData();
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		il2cpp_codegen_initobj(L_0, sizeof(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED));
		// data.identifier = identifier;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_1 = (&__this->___data_1);
		String_t* L_2 = ___identifier0;
		L_1->___identifier_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___identifier_0), (void*)L_2);
		// data.title = "";
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_3 = (&__this->___data_1);
		L_3->___title_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___title_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.body = "";
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_4 = (&__this->___data_1);
		L_4->___body_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___body_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.badge = -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_5 = (&__this->___data_1);
		L_5->___badge_3 = (-1);
		// data.subtitle = "";
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_6 = (&__this->___data_1);
		L_6->___subtitle_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___subtitle_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.categoryIdentifier = "";
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_7 = (&__this->___data_1);
		L_7->___categoryIdentifier_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___categoryIdentifier_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.threadIdentifier = "";
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_8 = (&__this->___data_1);
		L_8->___threadIdentifier_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___threadIdentifier_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.triggerType = -1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_9 = (&__this->___data_1);
		L_9->___triggerType_9 = (-1);
		// data.userInfo = IntPtr.Zero;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_10 = (&__this->___data_1);
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		L_10->___userInfo_7 = L_11;
		// userInfo = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_12, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___userInfo_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userInfo_2), (void*)L_12);
		// Data = "";
		iOSNotification_set_Data_mDDEDDFDC4DA023124B7CC8D0AA882F3EFD6C334A(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// ShowInForeground = false;
		iOSNotification_set_ShowInForeground_mB8363BB4B0C40234B565A24F6A979641DBA5A8D8(__this, (bool)0, NULL);
		// ForegroundPresentationOption = PresentationOption.Alert | PresentationOption.Sound;
		iOSNotification_set_ForegroundPresentationOption_mE95C0D442FB78AC8ED3137CA19BF4C12963D2D57(__this, 6, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m480637048FB144A8C2E4014549FFEE9D4299F6E8 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) 
{
	{
		// internal iOSNotification(iOSNotificationWithUserInfo data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.data = data.data;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_0 = ___data0;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_1 = L_0.___data_0;
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___data_1))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___data_1))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___data_1))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___data_1))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___data_1))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___data_1))->___threadIdentifier_6), (void*)NULL);
		#endif
		// userInfo = data.userInfo;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_2 = ___data0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2.___userInfo_1;
		__this->___userInfo_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userInfo_2), (void*)L_3);
		// Attachments = data.attachments;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_4 = ___data0;
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_5 = L_4.___attachments_2;
		iOSNotification_set_Attachments_m93E8FB777A55F4C6AB38922DBD0A0C8E9890D15C_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotification::GetDataForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 iOSNotification_GetDataForSending_m389ADA195D034D80F017CE145C149AFD66996B69 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (data.identifier == null)
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&__this->___data_1);
		String_t* L_1 = L_0->___identifier_0;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// data.identifier = GenerateUniqueID();
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_2 = (&__this->___data_1);
		String_t* L_3;
		L_3 = iOSNotification_GenerateUniqueID_mD6A35B90F34C752248B213A19EDCDC720EBF9C45(NULL);
		L_2->___identifier_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___identifier_0), (void*)L_3);
	}

IL_001d:
	{
		// ret.data = data;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_4 = __this->___data_1;
		(&V_0)->___data_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		// ret.userInfo = userInfo;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = __this->___userInfo_2;
		(&V_0)->___userInfo_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___userInfo_1), (void*)L_5);
		// ret.attachments = Attachments;
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_6;
		L_6 = iOSNotification_get_Attachments_m54CA2BC5B43417D01136FE5A72B0A0BD2636549D_inline(__this, NULL);
		(&V_0)->___attachments_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___attachments_2), (void*)L_6);
		// return ret;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_7 = V_0;
		return L_7;
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
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationAction::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Id_m0D72F28EC32CAC70BBDB5DB38ADC2AD0919F9A14 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Title_m44DF5E056FD6A12373E6AA43A2841BE2DB3EE012 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationAction::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Title_mCFCB94D7A5C1CF60342BD4E7C9B7FBE07A4554C0 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationActionOptions Unity.Notifications.iOS.iOSNotificationAction::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationAction_get_Options_mEEDBE525091EDE4B06F7638293682C1AB9DFC65D (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationActionOptions Options { get; set; }
		int32_t L_0 = __this->___U3COptionsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationAction::set_Options(Unity.Notifications.iOS.iOSNotificationActionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Options_mB57570C3425E330D6D74528777D0D78E3FBDFF96 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationActionOptions Options { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationAction::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction__ctor_m566C1EBCE6E24B9526C97579AD5F7FC7A1595BEE (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___id0, String_t* ___title1, const RuntimeMethod* method) 
{
	{
		// : this(id, title, 0)
		String_t* L_0 = ___id0;
		String_t* L_1 = ___title1;
		iOSNotificationAction__ctor_m862B26CBE20DCA2F658AB3D1FE495B8A7DB6ACD1(__this, L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationAction::.ctor(System.String,System.String,Unity.Notifications.iOS.iOSNotificationActionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAction__ctor_m862B26CBE20DCA2F658AB3D1FE495B8A7DB6ACD1 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___id0, String_t* ___title1, int32_t ___options2, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationAction(string id, string title, iOSNotificationActionOptions options)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = id;
		String_t* L_0 = ___id0;
		iOSNotificationAction_set_Id_m0D72F28EC32CAC70BBDB5DB38ADC2AD0919F9A14_inline(__this, L_0, NULL);
		// Title = title;
		String_t* L_1 = ___title1;
		iOSNotificationAction_set_Title_mCFCB94D7A5C1CF60342BD4E7C9B7FBE07A4554C0_inline(__this, L_1, NULL);
		// Options = options;
		int32_t L_2 = ___options2;
		iOSNotificationAction_set_Options_mB57570C3425E330D6D74528777D0D78E3FBDFF96_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationAction::CreateUNNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationAction_CreateUNNotificationAction_m698604E70CF8536008644C3EB53667E63A696E88 (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// return iOSNotificationsWrapper._CreateUNNotificationAction(Id, Title, (int)Options);
		String_t* L_0;
		L_0 = iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline(__this, NULL);
		String_t* L_1;
		L_1 = iOSNotificationAction_get_Title_m44DF5E056FD6A12373E6AA43A2841BE2DB3EE012_inline(__this, NULL);
		int32_t L_2;
		L_2 = iOSNotificationAction_get_Options_mEEDBE525091EDE4B06F7638293682C1AB9DFC65D_inline(__this, NULL);
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper__CreateUNNotificationAction_mDC3D4BE205D0F11FF94C5F54AF94813DFEBB5848(L_0, L_1, L_2, NULL);
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
// System.String Unity.Notifications.iOS.iOSTextInputNotificationAction::get_TextInputButtonTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSTextInputNotificationAction_get_TextInputButtonTitle_m6FA9D43FEB99BE97A9047CBC0E030C8E2EB94818 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) 
{
	{
		// public string TextInputButtonTitle { get; set; }
		String_t* L_0 = __this->___U3CTextInputButtonTitleU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSTextInputNotificationAction::set_TextInputButtonTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSTextInputNotificationAction_set_TextInputButtonTitle_m56A810611C4AA5BDCD082632FB9CF85B6F5E6F85 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TextInputButtonTitle { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextInputButtonTitleU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextInputButtonTitleU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSTextInputNotificationAction::get_TextInputPlaceholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSTextInputNotificationAction_get_TextInputPlaceholder_m23B1AFC4970F84F64A1EAB498CEED1316DA719F9 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) 
{
	{
		// public string TextInputPlaceholder { get; set; }
		String_t* L_0 = __this->___U3CTextInputPlaceholderU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSTextInputNotificationAction::set_TextInputPlaceholder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSTextInputNotificationAction_set_TextInputPlaceholder_m8F20AF7F3EF65BEFF3A7EF0FE93FEBCB3B4CC7D0 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TextInputPlaceholder { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextInputPlaceholderU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextInputPlaceholderU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSTextInputNotificationAction::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSTextInputNotificationAction__ctor_m74B3BC9B30E81A3C82AC1D69AF860E92D081D944 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, String_t* ___id0, String_t* ___title1, String_t* ___buttonTitle2, const RuntimeMethod* method) 
{
	{
		// : base(id, title)
		String_t* L_0 = ___id0;
		String_t* L_1 = ___title1;
		iOSNotificationAction__ctor_m566C1EBCE6E24B9526C97579AD5F7FC7A1595BEE(__this, L_0, L_1, NULL);
		// TextInputButtonTitle = buttonTitle;
		String_t* L_2 = ___buttonTitle2;
		iOSTextInputNotificationAction_set_TextInputButtonTitle_m56A810611C4AA5BDCD082632FB9CF85B6F5E6F85_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSTextInputNotificationAction::.ctor(System.String,System.String,Unity.Notifications.iOS.iOSNotificationActionOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSTextInputNotificationAction__ctor_mB5EFA7F1A107A2362087A87BBEA233406EF1BC19 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, String_t* ___id0, String_t* ___title1, int32_t ___options2, String_t* ___buttonTitle3, const RuntimeMethod* method) 
{
	{
		// : base(id, title, options)
		String_t* L_0 = ___id0;
		String_t* L_1 = ___title1;
		int32_t L_2 = ___options2;
		iOSNotificationAction__ctor_m862B26CBE20DCA2F658AB3D1FE495B8A7DB6ACD1(__this, L_0, L_1, L_2, NULL);
		// TextInputButtonTitle = buttonTitle;
		String_t* L_3 = ___buttonTitle3;
		iOSTextInputNotificationAction_set_TextInputButtonTitle_m56A810611C4AA5BDCD082632FB9CF85B6F5E6F85_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSTextInputNotificationAction::CreateUNNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSTextInputNotificationAction_CreateUNNotificationAction_m62D82C09FB196F73F28FC432B3CF09ED83B0FB82 (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) 
{
	{
		// return iOSNotificationsWrapper._CreateUNTextInputNotificationAction(Id, Title, (int)Options, TextInputButtonTitle, TextInputPlaceholder);
		String_t* L_0;
		L_0 = iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline(__this, NULL);
		String_t* L_1;
		L_1 = iOSNotificationAction_get_Title_m44DF5E056FD6A12373E6AA43A2841BE2DB3EE012_inline(__this, NULL);
		int32_t L_2;
		L_2 = iOSNotificationAction_get_Options_mEEDBE525091EDE4B06F7638293682C1AB9DFC65D_inline(__this, NULL);
		String_t* L_3;
		L_3 = iOSTextInputNotificationAction_get_TextInputButtonTitle_m6FA9D43FEB99BE97A9047CBC0E030C8E2EB94818_inline(__this, NULL);
		String_t* L_4;
		L_4 = iOSTextInputNotificationAction_get_TextInputPlaceholder_m23B1AFC4970F84F64A1EAB498CEED1316DA719F9_inline(__this, NULL);
		intptr_t L_5;
		L_5 = iOSNotificationsWrapper__CreateUNTextInputNotificationAction_m6FB822CAC7C7EB8AC3B94C421618AAAF98EA1DC6(L_0, L_1, L_2, L_3, L_4, NULL);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshal_pinvoke(const iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933& unmarshaled, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CUrlU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CUrlU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshal_pinvoke_back(const iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_pinvoke& marshaled, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933& unmarshaled)
{
	unmarshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CIdU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.___U3CUrlU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CUrlU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CUrlU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CUrlU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshal_pinvoke_cleanup(iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CUrlU3Ek__BackingField_1);
	marshaled.___U3CUrlU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshal_com(const iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933& unmarshaled, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CUrlU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CUrlU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshal_com_back(const iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_com& marshaled, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933& unmarshaled)
{
	unmarshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CIdU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.___U3CUrlU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CUrlU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CUrlU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CUrlU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshal_com_cleanup(iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CUrlU3Ek__BackingField_1);
	marshaled.___U3CUrlU3Ek__BackingField_1 = NULL;
}
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Id_m8A551CB233C83D05BDDACF9688CBECAAF9846C15 (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* iOSNotificationAttachment_get_Id_m8A551CB233C83D05BDDACF9688CBECAAF9846C15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = iOSNotificationAttachment_get_Id_m8A551CB233C83D05BDDACF9688CBECAAF9846C15_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Id_m7401F5705B3B4ADDC0DA5B372FE4579418891E7E (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationAttachment_set_Id_m7401F5705B3B4ADDC0DA5B372FE4579418891E7E_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933*>(__this + _offset);
	iOSNotificationAttachment_set_Id_m7401F5705B3B4ADDC0DA5B372FE4579418891E7E_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Url_mE0C69FB858552B293B9C0BDDFF2894FC6EBE9BF0 (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, const RuntimeMethod* method) 
{
	{
		// public string Url { get; set; }
		String_t* L_0 = __this->___U3CUrlU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* iOSNotificationAttachment_get_Url_mE0C69FB858552B293B9C0BDDFF2894FC6EBE9BF0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = iOSNotificationAttachment_get_Url_mE0C69FB858552B293B9C0BDDFF2894FC6EBE9BF0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Url_m4F0B407457097EC2DEFDCD296E07CDDF624DE202 (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Url { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUrlU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUrlU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationAttachment_set_Url_m4F0B407457097EC2DEFDCD296E07CDDF624DE202_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933*>(__this + _offset);
	iOSNotificationAttachment_set_Url_m4F0B407457097EC2DEFDCD296E07CDDF624DE202_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_Id_m6A4071B537F6E5B51DA11DCB43613BBD691CFBA9 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_set_Id_mEDA4B676B8D390208CF1AE47350C5C80B5169400 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationAction[] Unity.Notifications.iOS.iOSNotificationCategory::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* iOSNotificationCategory_get_Actions_m9958D87CD035EA242CEAB3BAC116C43B0CD8F895 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m8FE3E081900C426C6F1CC9B83DEA764301795167_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotificationAction[] Actions { get { return m_Actions.ToArray(); } }
		List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* L_0 = __this->___m_Actions_0;
		NullCheck(L_0);
		iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_1;
		L_1 = List_1_ToArray_m8FE3E081900C426C6F1CC9B83DEA764301795167(L_0, List_1_ToArray_m8FE3E081900C426C6F1CC9B83DEA764301795167_RuntimeMethod_var);
		return L_1;
	}
}
// System.String[] Unity.Notifications.iOS.iOSNotificationCategory::get_IntentIdentifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* iOSNotificationCategory_get_IntentIdentifiers_m91CA55C622A693C0AAF6C5CE75322E3084B50FAC (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string[] IntentIdentifiers { get { return m_IntentIdentifiers.ToArray(); } }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_IntentIdentifiers_1;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_0, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_HiddenPreviewsBodyPlaceholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mCC5DF780F51E1AC578873FE372067DF14800A1C2 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public string HiddenPreviewsBodyPlaceholder { get; set; }
		String_t* L_0 = __this->___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::set_HiddenPreviewsBodyPlaceholder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_set_HiddenPreviewsBodyPlaceholder_mE4236373C03680A332BD46906446FCC6575B8706 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string HiddenPreviewsBodyPlaceholder { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_SummaryFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_SummaryFormat_m6835C27643601AFBCD4F51CA3E28C72E850164CB (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public string SummaryFormat { get; set; }
		String_t* L_0 = __this->___U3CSummaryFormatU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::set_SummaryFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_set_SummaryFormat_m1F6BD8A0239C10732E501E9656F80395830975E6 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SummaryFormat { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSummaryFormatU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSummaryFormatU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationCategoryOptions Unity.Notifications.iOS.iOSNotificationCategory::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCategory_get_Options_m93741379CF2DF82295080957832C1D37D3DFC961 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationCategoryOptions Options { get; set; }
		int32_t L_0 = __this->___U3COptionsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::set_Options(Unity.Notifications.iOS.iOSNotificationCategoryOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_set_Options_mBD7D5BCEB04A37420BEA6F83BDB389A504901A4D (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationCategoryOptions Options { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory__ctor_m810EE5490EA8ACE99B8A0150269489A02E6FBD73 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5301041AFE257DA38A4F2C462A732490A3287665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<iOSNotificationAction> m_Actions = new List<iOSNotificationAction>();
		List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* L_0 = (List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3*)il2cpp_codegen_object_new(List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5301041AFE257DA38A4F2C462A732490A3287665(L_0, List_1__ctor_m5301041AFE257DA38A4F2C462A732490A3287665_RuntimeMethod_var);
		__this->___m_Actions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Actions_0), (void*)L_0);
		// List<string> m_IntentIdentifiers = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_IntentIdentifiers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IntentIdentifiers_1), (void*)L_1);
		// public iOSNotificationCategory(string id)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = id;
		String_t* L_2 = ___id0;
		iOSNotificationCategory_set_Id_mEDA4B676B8D390208CF1AE47350C5C80B5169400_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::.ctor(System.String,System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory__ctor_m86E79D1605C4B92D4F489AB30CD1996F8B5BDB44 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___id0, RuntimeObject* ___actions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(id)
		String_t* L_0 = ___id0;
		iOSNotificationCategory__ctor_m810EE5490EA8ACE99B8A0150269489A02E6FBD73(__this, L_0, NULL);
		// if (actions != null)
		RuntimeObject* L_1 = ___actions1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// m_Actions.AddRange(actions);
		List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* L_2 = __this->___m_Actions_0;
		RuntimeObject* L_3 = ___actions1;
		NullCheck(L_2);
		List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5(L_2, L_3, List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5_RuntimeMethod_var);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::.ctor(System.String,System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationAction>,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory__ctor_mA9EF06509B1E8EFC55CD89B7E1C953732B805C08 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___id0, RuntimeObject* ___actions1, RuntimeObject* ___intentIdentifiers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(id, actions)
		String_t* L_0 = ___id0;
		RuntimeObject* L_1 = ___actions1;
		iOSNotificationCategory__ctor_m86E79D1605C4B92D4F489AB30CD1996F8B5BDB44(__this, L_0, L_1, NULL);
		// if (intentIdentifiers != null)
		RuntimeObject* L_2 = ___intentIdentifiers2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// m_IntentIdentifiers.AddRange(intentIdentifiers);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___m_IntentIdentifiers_1;
		RuntimeObject* L_4 = ___intentIdentifiers2;
		NullCheck(L_3);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_3, L_4, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::AddAction(Unity.Notifications.iOS.iOSNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_AddAction_m69C2674E73A8123159783E521E3E29869B1A22D3 (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF90EF7BD50490EB3ABEAB8C62ED4C5B4B4A8F9FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (action == null)
		iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException("Cannot add null action");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral565608521CF382E522664CD340B7AF2FC9F6A187)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationCategory_AddAction_m69C2674E73A8123159783E521E3E29869B1A22D3_RuntimeMethod_var)));
	}

IL_000e:
	{
		// m_Actions.Add(action);
		List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* L_2 = __this->___m_Actions_0;
		iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_3 = ___action0;
		NullCheck(L_2);
		List_1_Add_mF90EF7BD50490EB3ABEAB8C62ED4C5B4B4A8F9FF_inline(L_2, L_3, List_1_Add_mF90EF7BD50490EB3ABEAB8C62ED4C5B4B4A8F9FF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::AddActions(System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_AddActions_mC4F68982BE6E1EEDF9A8B28D92168DC3F73E53BF (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, RuntimeObject* ___actions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (actions == null)
		RuntimeObject* L_0 = ___actions0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException("Cannot add null actions collection");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA17B781105AAACA023788DDE79367DCD66386754)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationCategory_AddActions_mC4F68982BE6E1EEDF9A8B28D92168DC3F73E53BF_RuntimeMethod_var)));
	}

IL_000e:
	{
		// m_Actions.AddRange(actions);
		List_1_tC1CA64216E385BF5F13004E02F90F6B326BEA8F3* L_2 = __this->___m_Actions_0;
		RuntimeObject* L_3 = ___actions0;
		NullCheck(L_2);
		List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5(L_2, L_3, List_1_AddRange_mB0372DD04FCAC104B79550518D341A73D5ACAAB5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::AddIntentIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_AddIntentIdentifier_mACFFCA6D3AFFB27A45AA710F6CA6FC45716BFB5C (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (identifier == null)
		String_t* L_0 = ___identifier0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException("Cannot add null intent identifier");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37DEA1EEF98A4BE778D92644C1BC0F79B9881E13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationCategory_AddIntentIdentifier_mACFFCA6D3AFFB27A45AA710F6CA6FC45716BFB5C_RuntimeMethod_var)));
	}

IL_000e:
	{
		// m_IntentIdentifiers.Add(identifier);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___m_IntentIdentifiers_1;
		String_t* L_3 = ___identifier0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCategory::AddIntentIdentifiers(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCategory_AddIntentIdentifiers_m39C87755E7FC4A520627B5A06B7540C797FCFC7A (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, RuntimeObject* ___identifiers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (identifiers == null)
		RuntimeObject* L_0 = ___identifiers0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException("Cannot add null intent identifiers collection");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF960186B386979168CAE6DF6BC328CD86C1C7BE3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationCategory_AddIntentIdentifiers_m39C87755E7FC4A520627B5A06B7540C797FCFC7A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// m_IntentIdentifiers.AddRange(identifiers);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___m_IntentIdentifiers_1;
		RuntimeObject* L_3 = ___identifiers0;
		NullCheck(L_2);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_2, L_3, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_OnNotificationReceived_mBDDFEE1D07C6758432146DA63D549BBD9B6E478D (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s_OnNotificationReceivedCallbackSet)
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceivedCallbackSet_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		iOSNotificationsWrapper_RegisterOnReceivedCallback_m44AE9926E98242E6F356EBA0281584623627B436(NULL);
		// s_OnNotificationReceivedCallbackSet = true;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceivedCallbackSet_1 = (bool)1;
	}

IL_0012:
	{
		// s_OnNotificationReceived += value;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationCenter_add_s_OnNotificationReceived_m4E29F2436D73946B1BD36ADF023FA48785C1997E(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_OnNotificationReceived_m68E9DB4B4DB9FF09B19C26A62219B2D5452CF141 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnNotificationReceived -= value;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationCenter_remove_s_OnNotificationReceived_m01505A43D8ED03C0D14073AB63B2B88B8EDB1F1E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnNotificationReceived_m4E29F2436D73946B1BD36ADF023FA48785C1997E (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_0 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_1 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2;
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_2 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_5 = V_2;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_6 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*>((&((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_8 = V_0;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnNotificationReceived_m01505A43D8ED03C0D14073AB63B2B88B8EDB1F1E (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_0 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_1 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2;
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_2 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_5 = V_2;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_6 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*>((&((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_8 = V_0;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_OnRemoteNotificationReceived_m9792696D830ECDBB207C6CA3D7DCE50EB440D8BC (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s_OnRemoteNotificationReceivedCallbackSet)
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceivedCallbackSet_3;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// iOSNotificationsWrapper.RegisterOnReceivedRemoteNotificationCallback();
		iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m771FE0AD91B59443803548F9404C40C695A964DE(NULL);
		// s_OnRemoteNotificationReceivedCallbackSet = true;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceivedCallbackSet_3 = (bool)1;
	}

IL_0012:
	{
		// s_OnRemoteNotificationReceived += value;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationCenter_add_s_OnRemoteNotificationReceived_m577446E53F345EF66CE3D3125AE7E536260D101D(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_OnRemoteNotificationReceived_m5908F7C44697E4A75DE9997F299AE1B0E2BA4E27 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnRemoteNotificationReceived -= value;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationCenter_remove_s_OnRemoteNotificationReceived_m1A329A760E5952FDD06221C8687D9ACBF569FBE9(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnRemoteNotificationReceived_m577446E53F345EF66CE3D3125AE7E536260D101D (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_0 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_1 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4;
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_2 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_5 = V_2;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_6 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*>((&((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_8 = V_0;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnRemoteNotificationReceived_m1A329A760E5952FDD06221C8687D9ACBF569FBE9 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_0 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_1 = NULL;
	NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4;
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_2 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_5 = V_2;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_6 = V_1;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*>((&((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_8 = V_0;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationCenter::get_ApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCenter_get_ApplicationBadge_m69557DCB222CA139BD795427419EADB7E91D33D5 (const RuntimeMethod* method) 
{
	{
		// get { return iOSNotificationsWrapper.GetApplicationBadge(); }
		int32_t L_0;
		L_0 = iOSNotificationsWrapper_GetApplicationBadge_m0F9963248235DCA8F8D178390907819931B3FA79(NULL);
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::set_ApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_set_ApplicationBadge_mF99E5A0665BE591B48DCA64D37AC8B1947B2F6E4 (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { iOSNotificationsWrapper.SetApplicationBadge(value); }
		int32_t L_0 = ___value0;
		iOSNotificationsWrapper_SetApplicationBadge_m340452ADA2F0E0C35F2E034B97AAE8F86827893B(L_0, NULL);
		// set { iOSNotificationsWrapper.SetApplicationBadge(value); }
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Initialized)
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_Initialized_0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		iOSNotificationsWrapper_RegisterOnReceivedCallback_m44AE9926E98242E6F356EBA0281584623627B436(NULL);
		// return s_Initialized = true;
		int32_t L_1 = 1;
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_Initialized_0 = (bool)L_1;
		return (bool)L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::ScheduleNotification(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_ScheduleNotification_m12235032140F0EEDBCAA2B0F29876E8FE9AA5995 (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// iOSNotificationsWrapper.ScheduleLocalNotification(notification.GetDataForSending());
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_1 = ___notification0;
		NullCheck(L_1);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_2;
		L_2 = iOSNotification_GetDataForSending_m389ADA195D034D80F017CE145C149AFD66996B69(L_1, NULL);
		iOSNotificationsWrapper_ScheduleLocalNotification_m2C66F2E8B8E6A438424896D297650C6AF4228361(L_2, NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotification[] Unity.Notifications.iOS.iOSNotificationCenter::GetScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* iOSNotificationCenter_GetScheduledNotifications_m7F18ECEC26EC2E07A1B6A74BD581913E9B427EF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NotificationDataToNotifications(iOSNotificationsWrapper.GetScheduledNotificationData());
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_0;
		L_0 = iOSNotificationsWrapper_GetScheduledNotificationData_m570771802615E6B7C2F423A59F24A5FF3D1AE4D1(NULL);
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* L_1;
		L_1 = iOSNotificationCenter_NotificationDataToNotifications_m082DCD2CE4FD2A32888F8ADD01E8AB1D1CDA6848(L_0, NULL);
		return L_1;
	}
}
// Unity.Notifications.iOS.iOSNotification[] Unity.Notifications.iOS.iOSNotificationCenter::GetDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* iOSNotificationCenter_GetDeliveredNotifications_m7431E0C0A6E89392CB6A614AA315ACF46AFC7AE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NotificationDataToNotifications(iOSNotificationsWrapper.GetDeliveredNotificationData());
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_0;
		L_0 = iOSNotificationsWrapper_GetDeliveredNotificationData_m6570276DA5405AE52F6B5FB81CE3646052DB69E9(NULL);
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* L_1;
		L_1 = iOSNotificationCenter_NotificationDataToNotifications_m082DCD2CE4FD2A32888F8ADD01E8AB1D1CDA6848(L_0, NULL);
		return L_1;
	}
}
// Unity.Notifications.iOS.iOSNotification[] Unity.Notifications.iOS.iOSNotificationCenter::NotificationDataToNotifications(Unity.Notifications.iOS.iOSNotificationWithUserInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* iOSNotificationCenter_NotificationDataToNotifications_m082DCD2CE4FD2A32888F8ADD01E8AB1D1CDA6848 (iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* ___notificationData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// var iOSNotifications = new iOSNotification[notificationData == null ? 0 : notificationData.Length];
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_0 = ___notificationData0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_1 = ___notificationData0;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 0;
	}

IL_0009:
	{
		iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* L_2 = (iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415*)(iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415*)SZArrayNew(iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415_il2cpp_TypeInfo_var, (uint32_t)G_B3_0);
		V_0 = L_2;
		// for (int i = 0; i < iOSNotifications.Length; ++i)
		V_1 = 0;
		goto IL_0026;
	}

IL_0013:
	{
		// iOSNotifications[i] = new iOSNotification(notificationData[i]);
		iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* L_3 = V_0;
		int32_t L_4 = V_1;
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_5 = ___notificationData0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_9 = (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*)il2cpp_codegen_object_new(iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		iOSNotification__ctor_m480637048FB144A8C2E4014549FFEE9D4299F6E8(L_9, L_8, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*)L_9);
		// for (int i = 0; i < iOSNotifications.Length; ++i)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < iOSNotifications.Length; ++i)
		int32_t L_11 = V_1;
		iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return iOSNotifications;
		iOSNotificationU5BU5D_t8419969AA363CFD4EBC7780AD306C62E50221415* L_13 = V_0;
		return L_13;
	}
}
// Unity.Notifications.iOS.iOSNotification Unity.Notifications.iOS.iOSNotificationCenter::GetLastRespondedNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* iOSNotificationCenter_GetLastRespondedNotification_m2684388B10EA120284FD99B1CD59AA4CD4B83530 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = iOSNotificationsWrapper.GetLastNotificationData();
		Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 L_0;
		L_0 = iOSNotificationsWrapper_GetLastNotificationData_mEB08C18777114E3BD6197FC86C1BA4F6CBE3B3C0(NULL);
		V_0 = L_0;
		// if (data == null)
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_inline((&V_0), Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*)NULL;
	}

IL_0011:
	{
		// return new iOSNotification(data.Value);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_2;
		L_2 = Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D((&V_0), Nullable_1_get_Value_m351860EC4953D4334289259611186DCE3377240D_RuntimeMethod_var);
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_3 = (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*)il2cpp_codegen_object_new(iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		iOSNotification__ctor_m480637048FB144A8C2E4014549FFEE9D4299F6E8(L_3, L_2, NULL);
		return L_3;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationCenter::GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCenter_GetLastRespondedNotificationAction_m856545B89FEB056FC3165FFAD0C18B8C071143C3 (const RuntimeMethod* method) 
{
	{
		// return iOSNotificationsWrapper.GetLastRespondedNotificationAction();
		String_t* L_0;
		L_0 = iOSNotificationsWrapper_GetLastRespondedNotificationAction_mDE70405A1228FF1C25E14A0819F2624EB009EDD9(NULL);
		return L_0;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationCenter::GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCenter_GetLastRespondedNotificationUserText_m760683BA8850297627E01CDADC5A48276E4168E7 (const RuntimeMethod* method) 
{
	{
		// return iOSNotificationsWrapper.GetLastRespondedNotificationUserText();
		String_t* L_0;
		L_0 = iOSNotificationsWrapper_GetLastRespondedNotificationUserText_mD7981FE4DC78ED85B7B7987875ED5CF30ADC4BE6(NULL);
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveScheduledNotification_m6E4905A8B1F0A8EC617B07B656D2615AE4AF990B (String_t* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveScheduledNotification(identifier);
		String_t* L_1 = ___identifier0;
		iOSNotificationsWrapper__RemoveScheduledNotification_m3D085E61FFCE3BBBBEE2C455F0D4757BD9FD4F6F(L_1, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveDeliveredNotification_m161648F9386D35C17747738FDA8CF7F82FF3E0A1 (String_t* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveDeliveredNotification(identifier);
		String_t* L_1 = ___identifier0;
		iOSNotificationsWrapper__RemoveDeliveredNotification_m08D8941EED5B8205A4271B3DC67D67D3E8C2AD53(L_1, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllScheduledNotifications_m44068D9155DC22C114EE5C11CDEE34F747B3EE3F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveAllScheduledNotifications();
		iOSNotificationsWrapper__RemoveAllScheduledNotifications_m9B342D2C0E7C7824E1B2A386D16C1E8C306C9607(NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllDeliveredNotifications_m853D9D2A75A28AEDDB7F5FD383C8E6FECB3B995F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m3ABD98E821A5025EDC2B8D97F5851194A336DA5F(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveAllDeliveredNotifications();
		iOSNotificationsWrapper__RemoveAllDeliveredNotifications_m23751F2136004EBC7AF50B4E95988D203FD520B5(NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationCenter::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 iOSNotificationCenter_GetNotificationSettings_m554B4E26A8B1E0E67F3457ED4DE894E7BF9F43BC (const RuntimeMethod* method) 
{
	{
		// return iOSNotificationsWrapper.GetNotificationSettings();
		iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 L_0;
		L_0 = iOSNotificationsWrapper_GetNotificationSettings_m659C38E583D6A52DA9747BBB5707432A5CECC797(NULL);
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::SetNotificationCategories(System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_SetNotificationCategories_m86DF5C1D40AA31AA4EAA19E75316BBA126282AD0 (RuntimeObject* ___categories0, const RuntimeMethod* method) 
{
	{
		// iOSNotificationsWrapper.SetNotificationCategories(categories);
		RuntimeObject* L_0 = ___categories0;
		iOSNotificationsWrapper_SetNotificationCategories_m9874163A141115A2CAC03E821E582B70A48A4AEA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mC510FFDD28917371EB9312D7F6E2F63CDE03FC22 (iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* V_0 = NULL;
	{
		// var notification = new iOSNotification(data);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_0 = ___data0;
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_1 = (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*)il2cpp_codegen_object_new(iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		iOSNotification__ctor_m480637048FB144A8C2E4014549FFEE9D4299F6E8(L_1, L_0, NULL);
		V_0 = L_1;
		// s_OnRemoteNotificationReceived(notification);
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_2 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4;
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m544D0B4C4887048904106DE1C463663A6DC3A906 (iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* V_0 = NULL;
	{
		// var notification = new iOSNotification(data);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_0 = ___data0;
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_1 = (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*)il2cpp_codegen_object_new(iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		iOSNotification__ctor_m480637048FB144A8C2E4014549FFEE9D4299F6E8(L_1, L_0, NULL);
		V_0 = L_1;
		// s_OnNotificationReceived(notification);
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_2 = ((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2;
		iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OpenNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OpenNotificationSettings_mC178DE775D715AD5195B51904B7B18B684212DF5 (const RuntimeMethod* method) 
{
	{
		// iOSNotificationsWrapper._OpenNotificationSettings();
		iOSNotificationsWrapper__OpenNotificationSettings_m290E8631FF477F88F9D37727CD73F41A31ECD857(NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__ctor_mF73974FEE231D6B65C5E541C4D2EDBE76548A508 (iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__cctor_m20CD6B08F2DFAFAF231368FC496254EA680228FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__38_0_m199A8E36941FC6A81CB2C019BF06CA2F3E0D51FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__38_1_m4F8AE0FFC91B6C9E8C6C8619C5FD682F22A7C474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* L_0 = ((U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_1 = (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)il2cpp_codegen_object_new(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotificationReceivedCallback__ctor_mF2B904C1330647023D5E7ECE08EDA8266BE8F55E(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__38_0_m199A8E36941FC6A81CB2C019BF06CA2F3E0D51FC_RuntimeMethod_var), NULL);
		((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnNotificationReceived_2), (void*)L_1);
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate { };
		U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* L_2 = ((U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* L_3 = (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*)il2cpp_codegen_object_new(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NotificationReceivedCallback__ctor_mF2B904C1330647023D5E7ECE08EDA8266BE8F55E(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__38_1_m4F8AE0FFC91B6C9E8C6C8619C5FD682F22A7C474_RuntimeMethod_var), NULL);
		((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var))->___s_OnRemoteNotificationReceived_4), (void*)L_3);
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
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_Multicast(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* currentDelegate = reinterpret_cast<NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___notification0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenInst(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	NullCheck(___notification0);
	typedef void (*FunctionPointerType) (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___notification0, method);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenStatic(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___notification0, method);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenStaticInvoker(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* >::Invoke(__this->___method_ptr_0, method, NULL, ___notification0);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_ClosedStaticInvoker(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___notification0);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenVirtual(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	NullCheck(___notification0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___notification0);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenInterface(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	NullCheck(___notification0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___notification0);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenGenericVirtual(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	NullCheck(___notification0);
	GenericVirtualActionInvoker0::Invoke(method, ___notification0);
}
void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenGenericInterface(NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method)
{
	NullCheck(___notification0);
	GenericInterfaceActionInvoker0::Invoke(method, ___notification0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mF2B904C1330647023D5E7ECE08EDA8266BE8F55E (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_Multicast;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___notification0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m59412CBB479AEA8DF40C3E026C34C1DD27B78514 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m26AA6848E0200067BB8CA843BB443238C8853EF1 (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_Multicast(AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* currentDelegate = reinterpret_cast<AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_OpenInst(AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_OpenStatic(AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_OpenStaticInvoker(AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_ClosedStaticInvoker(AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0 (AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data0' to native representation
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke ____data0_marshaled = {};
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_mB21FEDE67BB8EDD8633799508079A0E001006C73 (AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0_Multicast;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_mBAE506F83076A08A5E17F4DAE69B7F7818547FB0 (AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::BeginInvoke(Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCompletedCallback_BeginInvoke_mC2FFC41F4A01C89D767E816C07AE6C36C265C5D9 (AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_il2cpp_TypeInfo_var, &___data0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_EndInvoke_m6CF913603412CEAFA26D79B0CCC4FBB15AC12D46 (AuthorizationRequestCompletedCallback_tDB72B9CE75D4D14CC5B9D18BF170ED0925BBBAF0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBC9ECF1831C6FFC9ACD710C25890BDBF554081AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* L_0 = (U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE*)il2cpp_codegen_object_new(U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4E1D6DB8C20ABB34DA458F6F8EAAEACD25B2208B(L_0, NULL);
		((U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4E1D6DB8C20ABB34DA458F6F8EAAEACD25B2208B (U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__38_0(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__38_0_m199A8E36941FC6A81CB2C019BF06CA2F3E0D51FC (U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate { };
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__38_1(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__38_1_m4F8AE0FFC91B6C9E8C6C8619C5FD682F22A7C474 (U3CU3Ec_t4BB034961FECB1AD65FD080CE469C198E6FE36EE* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate { };
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
// Unity.Notifications.iOS.AuthorizationStatus Unity.Notifications.iOS.iOSNotificationSettings::get_AuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AuthorizationStatus_m86A3FC2E443F732C3882C199476EFBD4DFF8A191 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (AuthorizationStatus)authorizationStatus; }
		int32_t L_0 = __this->___authorizationStatus_0;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_AuthorizationStatus_m86A3FC2E443F732C3882C199476EFBD4DFF8A191_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_AuthorizationStatus_m86A3FC2E443F732C3882C199476EFBD4DFF8A191_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_NotificationCenterSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_NotificationCenterSetting_m6D6259430B3E5D958FFE6AD9DF676CFD9ACBEFC6 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)notificationCenterSetting; }
		int32_t L_0 = __this->___notificationCenterSetting_1;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_NotificationCenterSetting_m6D6259430B3E5D958FFE6AD9DF676CFD9ACBEFC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_NotificationCenterSetting_m6D6259430B3E5D958FFE6AD9DF676CFD9ACBEFC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_LockScreenSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_LockScreenSetting_mFC83E2FB7BA192A3ABF02171E9063628B6F04ED0 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)lockScreenSetting; }
		int32_t L_0 = __this->___lockScreenSetting_2;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_LockScreenSetting_mFC83E2FB7BA192A3ABF02171E9063628B6F04ED0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_LockScreenSetting_mFC83E2FB7BA192A3ABF02171E9063628B6F04ED0_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_CarPlaySetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_CarPlaySetting_mBDE163089C469E1E0A0FEAC5F7ACD3FB60A3D882 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)carPlaySetting; }
		int32_t L_0 = __this->___carPlaySetting_3;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_CarPlaySetting_mBDE163089C469E1E0A0FEAC5F7ACD3FB60A3D882_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_CarPlaySetting_mBDE163089C469E1E0A0FEAC5F7ACD3FB60A3D882_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_AlertSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AlertSetting_mE45B9D8C6057D4C7D9D368B018D61EBFEC60F7A7 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)alertSetting; }
		int32_t L_0 = __this->___alertSetting_4;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_AlertSetting_mE45B9D8C6057D4C7D9D368B018D61EBFEC60F7A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_AlertSetting_mE45B9D8C6057D4C7D9D368B018D61EBFEC60F7A7_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_BadgeSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_BadgeSetting_m45FDA40AB94C8571CF748C429E4E083410A63693 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)badgeSetting; }
		int32_t L_0 = __this->___badgeSetting_5;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_BadgeSetting_m45FDA40AB94C8571CF748C429E4E083410A63693_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_BadgeSetting_m45FDA40AB94C8571CF748C429E4E083410A63693_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.NotificationSetting Unity.Notifications.iOS.iOSNotificationSettings::get_SoundSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_SoundSetting_m1D8F98A6C4BFB9A6982C0E0A8DD86302FB0E4353 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)soundSetting; }
		int32_t L_0 = __this->___soundSetting_6;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_SoundSetting_m1D8F98A6C4BFB9A6982C0E0A8DD86302FB0E4353_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_SoundSetting_m1D8F98A6C4BFB9A6982C0E0A8DD86302FB0E4353_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.AlertStyle Unity.Notifications.iOS.iOSNotificationSettings::get_AlertStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AlertStyle_m5ABA83D2E27559F94EE19316F46FE94CFDCCB927 (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (AlertStyle)alertStyle; }
		int32_t L_0 = __this->___alertStyle_7;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_AlertStyle_m5ABA83D2E27559F94EE19316F46FE94CFDCCB927_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_AlertStyle_m5ABA83D2E27559F94EE19316F46FE94CFDCCB927_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.ShowPreviewsSetting Unity.Notifications.iOS.iOSNotificationSettings::get_ShowPreviewsSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_ShowPreviewsSetting_m7C554A6BBBA9DC9AF7368C14F3F34FBF185736FE (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (ShowPreviewsSetting)showPreviewsSetting; }
		int32_t L_0 = __this->___showPreviewsSetting_8;
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationSettings_get_ShowPreviewsSetting_m7C554A6BBBA9DC9AF7368C14F3F34FBF185736FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationSettings_get_ShowPreviewsSetting_m7C554A6BBBA9DC9AF7368C14F3F34FBF185736FE_inline(_thisAdjusted, method);
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


// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshal_pinvoke(const iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5& unmarshaled, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshal_pinvoke_back(const iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_pinvoke& marshaled, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5& unmarshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshal_pinvoke_cleanup(iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshal_com(const iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5& unmarshaled, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_com& marshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshal_com_back(const iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_com& marshaled, iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5& unmarshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshal_com_cleanup(iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5_marshaled_com& marshaled)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD(intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke ___data1)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data1' to managed representation
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ____data1_unmarshaled;
	memset((&____data1_unmarshaled), 0, sizeof(____data1_unmarshaled));
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_back(___data1, ____data1_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD(___request0, ____data1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___data0)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data0' to managed representation
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ____data0_unmarshaled;
	memset((&____data0_unmarshaled), 0, sizeof(____data0_unmarshaled));
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_back(___data0, ____data0_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212(____data0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___data0)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data0' to managed representation
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ____data0_unmarshaled;
	memset((&____data0_unmarshaled), 0, sizeof(____data0_unmarshaled));
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_back(___data0, ____data0_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524(____data0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856(intptr_t ___dict0, char* ___key1, char* ___value2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key1' to managed representation
	String_t* ____key1_unmarshaled = NULL;
	____key1_unmarshaled = il2cpp_codegen_marshal_string_result(___key1);

	// Marshaling of parameter '___value2' to managed representation
	String_t* ____value2_unmarshaled = NULL;
	____value2_unmarshaled = il2cpp_codegen_marshal_string_result(___value2);

	// Managed method invocation
	iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856(___dict0, ____key1_unmarshaled, ____value2_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652(intptr_t ___array0, char* ___id1, char* ___url2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___id1' to managed representation
	String_t* ____id1_unmarshaled = NULL;
	____id1_unmarshaled = il2cpp_codegen_marshal_string_result(___id1);

	// Marshaling of parameter '___url2' to managed representation
	String_t* ____url2_unmarshaled = NULL;
	____url2_unmarshaled = il2cpp_codegen_marshal_string_result(___url2);

	// Managed method invocation
	iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652(___array0, ____id1_unmarshaled, ____url2_unmarshaled, NULL);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_mEA8CA44C7AA697DB3EA9D2C460924997CC075315 (intptr_t ___request0, int32_t ___options1, bool ___registerForRemote2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestAuthorization)(___request0, ___options1, static_cast<int32_t>(___registerForRemote2));

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_mD2CC306854403F4BBE98648D761A41726BC75F7C (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) 
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke);

	// Marshaling of parameter '___data0' to native representation
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ____data0_marshaled = {};
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ScheduleLocalNotification)(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m7EF790D86C1B8E585CFBD1872FABA96171D07A3A (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mABF9B547DD1F0D569E1E8B202FC8312DA876EBA1 (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetRemoteNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m88B1999865C9603B8A628DC185980C62A11E1731 (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetAuthorizationRequestReceivedDelegate)(____callback0_marshaled);

}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 iOSNotificationsWrapper__GetNotificationSettings_m8DF3328D33595477ADD49C37CC36DA7553BF1077 (const RuntimeMethod* method) 
{
	typedef iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 returnValue = reinterpret_cast<PInvokeFunc>(_GetNotificationSettings)();

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataArray_m17748B95E93D87E25DF727C4A77348CAF8686457 (int32_t* ___count0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataArray)(___count0);

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataArray_m9416BEB875EA2D48C0927E85288E603D38AD92C0 (int32_t* ___count0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataArray)(___count0);

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m3D085E61FFCE3BBBBEE2C455F0D4757BD9FD4F6F (String_t* ___identifier0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveScheduledNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m9B342D2C0E7C7824E1B2A386D16C1E8C306C9607 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllScheduledNotifications)();

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m08D8941EED5B8205A4271B3DC67D67D3E8C2AD53 (String_t* ___identifier0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveDeliveredNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m425633D16CA2A2A7AB652ADC723F37D499B64FF7 (int32_t ___badge0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetApplicationBadge)(___badge0);

}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m53F1F38D3652F65C75E4ED7AE669F23B9D9628BC (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetApplicationBadge)();

	return returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m6EDB04FD2C23285C778D51EC2F8D3E329AD73B31 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetAppOpenedUsingNotification)();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_m23751F2136004EBC7AF50B4E95988D203FD520B5 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllDeliveredNotifications)();

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_mBDAFB058A017C90FFD50DE741698BE38F832A4D6 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastNotificationData)();

	return returnValue;
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationAction_mB6983CAFA2D834C868567F605F55CB844702BFF1 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetLastRespondedNotificationAction)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationUserText_m39B79F2BDFA59A8780D852E5C8BBB4086E3A609B (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetLastRespondedNotificationUserText)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_m9BBE43390A00107B926480FA5C2062B81A8F1B1A (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagediOSNotificationDataArray)(___ptr0, ___count1);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddItemToNSDictionary(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddItemToNSDictionary_m3798785725CBF97127669F924EE9E35B336D41A5 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddItemToNSDictionary)(___dict0, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddAttachmentToNSArray(System.IntPtr,System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddAttachmentToNSArray_m84054FBACB7477A05721E119B028523ACA016F16 (intptr_t ___atts0, String_t* ___id1, String_t* ___url2, intptr_t* ___error3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, intptr_t*);

	// Marshaling of parameter '___id1' to native representation
	char* ____id1_marshaled = NULL;
	____id1_marshaled = il2cpp_codegen_marshal_string(___id1);

	// Marshaling of parameter '___url2' to native representation
	char* ____url2_marshaled = NULL;
	____url2_marshaled = il2cpp_codegen_marshal_string(___url2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddAttachmentToNSArray)(___atts0, ____id1_marshaled, ____url2_marshaled, ___error3);

	// Marshaling cleanup of parameter '___id1' native representation
	il2cpp_codegen_marshal_free(____id1_marshaled);
	____id1_marshaled = NULL;

	// Marshaling cleanup of parameter '___url2' native representation
	il2cpp_codegen_marshal_free(____url2_marshaled);
	____url2_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadNSDictionary(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadNSDictionary_m1C436D4473181385D91702AAF13FB7D28A70F714 (intptr_t ___handle0, intptr_t ___nsDict1, ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReadNSDictionary)(___handle0, ___nsDict1, ____callback2_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadAttachmentsNSArray(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadAttachmentsNSArray_m493603B5A3AC41CA7E9366B21F3A11F3E0F2DED4 (intptr_t ___handle0, intptr_t ___nsArray1, ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReadAttachmentsNSArray)(___handle0, ___nsArray1, ____callback2_marshaled);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationAction(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationAction_mDC3D4BE205D0F11FF94C5F54AF94813DFEBB5848 (String_t* ___id0, String_t* ___title1, int32_t ___options2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CreateUNNotificationAction)(____id0_marshaled, ____title1_marshaled, ___options2);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNTextInputNotificationAction(System.String,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNTextInputNotificationAction_m6FB822CAC7C7EB8AC3B94C421618AAAF98EA1DC6 (String_t* ___id0, String_t* ___title1, int32_t ___options2, String_t* ___buttonTitle3, String_t* ___placeholder4, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, char*, char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Marshaling of parameter '___buttonTitle3' to native representation
	char* ____buttonTitle3_marshaled = NULL;
	____buttonTitle3_marshaled = il2cpp_codegen_marshal_string(___buttonTitle3);

	// Marshaling of parameter '___placeholder4' to native representation
	char* ____placeholder4_marshaled = NULL;
	____placeholder4_marshaled = il2cpp_codegen_marshal_string(___placeholder4);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CreateUNTextInputNotificationAction)(____id0_marshaled, ____title1_marshaled, ___options2, ____buttonTitle3_marshaled, ____placeholder4_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	// Marshaling cleanup of parameter '___buttonTitle3' native representation
	il2cpp_codegen_marshal_free(____buttonTitle3_marshaled);
	____buttonTitle3_marshaled = NULL;

	// Marshaling cleanup of parameter '___placeholder4' native representation
	il2cpp_codegen_marshal_free(____placeholder4_marshaled);
	____placeholder4_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReleaseNSObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReleaseNSObject_mFFAD0F85055C706E8A5479A81B66A663831368FE (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReleaseNSObject)(___obj0);

}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_NSErrorToMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__NSErrorToMessage_m621C81B674107D57D52569733B5F7FAD29869C69 (intptr_t ___error0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NSErrorToMessage)(___error0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddActionToNSArray(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddActionToNSArray_m686DFC012EFD29CFFD1BD4BF119F800C2FD29BCD (intptr_t ___actions0, intptr_t ___action1, int32_t ___capacity2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddActionToNSArray)(___actions0, ___action1, ___capacity2);

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationCategory(System.String,System.String,System.String,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationCategory_m11D21B22ED4FDF28B5F08E37EFC108A10D1415CE (String_t* ___id0, String_t* ___hiddenPreviewsBodyPlaceholder1, String_t* ___summaryFormat2, int32_t ___options3, intptr_t ___actions4, intptr_t ___intentIdentifiers5, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, int32_t, intptr_t, intptr_t);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___hiddenPreviewsBodyPlaceholder1' to native representation
	char* ____hiddenPreviewsBodyPlaceholder1_marshaled = NULL;
	____hiddenPreviewsBodyPlaceholder1_marshaled = il2cpp_codegen_marshal_string(___hiddenPreviewsBodyPlaceholder1);

	// Marshaling of parameter '___summaryFormat2' to native representation
	char* ____summaryFormat2_marshaled = NULL;
	____summaryFormat2_marshaled = il2cpp_codegen_marshal_string(___summaryFormat2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CreateUNNotificationCategory)(____id0_marshaled, ____hiddenPreviewsBodyPlaceholder1_marshaled, ____summaryFormat2_marshaled, ___options3, ___actions4, ___intentIdentifiers5);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	// Marshaling cleanup of parameter '___hiddenPreviewsBodyPlaceholder1' native representation
	il2cpp_codegen_marshal_free(____hiddenPreviewsBodyPlaceholder1_marshaled);
	____hiddenPreviewsBodyPlaceholder1_marshaled = NULL;

	// Marshaling cleanup of parameter '___summaryFormat2' native representation
	il2cpp_codegen_marshal_free(____summaryFormat2_marshaled);
	____summaryFormat2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddCategoryToCategorySet(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddCategoryToCategorySet_m358D50AFD799BB064CD2F079A7F2B89E04C1AEE4 (intptr_t ___categorySet0, intptr_t ___category1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddCategoryToCategorySet)(___categorySet0, ___category1);

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationCategories(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationCategories_mD43856530598B70C8E32AF49A3D75E646484B46A (intptr_t ___categorySet0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationCategories)(___categorySet0);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddStringToNSArray(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddStringToNSArray_m0BAB7C567291148EBE50227723B436D2066988AC (intptr_t ___array0, String_t* ___str1, int32_t ___capacity2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, int32_t);

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddStringToNSArray)(___array0, ____str1_marshaled, ___capacity2);

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_OpenNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__OpenNotificationSettings_m290E8631FF477F88F9D37727CD73F41A31ECD857 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_OpenNotificationSettings)();

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mCA40A1376B88E5CB45368F1814B8E29C82E16502 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetAuthorizationRequestReceivedDelegate(AuthorizationRequestReceived);
		AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* L_0 = (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD*)il2cpp_codegen_object_new(AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AuthorizationRequestCallback__ctor_mE709FAE919D090ACC25038070BD2145F520DA0FE(L_0, NULL, (intptr_t)((void*)iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD_RuntimeMethod_var), NULL);
		iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m88B1999865C9603B8A628DC185980C62A11E1731(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m771FE0AD91B59443803548F9404C40C695A964DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetRemoteNotificationReceivedDelegate(RemoteNotificationReceived);
		NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* L_0 = (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2*)il2cpp_codegen_object_new(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotificationReceivedCallback__ctor_m3448352ED953E95C4E5BAAE13D4C576B7161B772(L_0, NULL, (intptr_t)((void*)iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212_RuntimeMethod_var), NULL);
		iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mABF9B547DD1F0D569E1E8B202FC8312DA876EBA1(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_m44AE9926E98242E6F356EBA0281584623627B436 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetNotificationReceivedDelegate(NotificationReceived);
		NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* L_0 = (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2*)il2cpp_codegen_object_new(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotificationReceivedCallback__ctor_m3448352ED953E95C4E5BAAE13D4C576B7161B772(L_0, NULL, (intptr_t)((void*)iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524_RuntimeMethod_var), NULL);
		iOSNotificationsWrapper__SetNotificationReceivedDelegate_m7EF790D86C1B8E585CFBD1872FABA96171D07A3A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD (intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AuthorizationRequest.OnAuthorizationRequestCompleted(request, data);
		intptr_t L_0 = ___request0;
		iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC L_1 = ___data1;
		il2cpp_codegen_runtime_class_init_inline(AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6_il2cpp_TypeInfo_var);
		AuthorizationRequest_OnAuthorizationRequestCompleted_m0F1A24F99EF966055A145B95406B0DE10ACF92A8(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212 (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnReceivedRemoteNotification(NotificationDataToDataWithUserInfo(data));
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_0 = ___data0;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_1;
		L_1 = iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF4B498474102C537FAE4B24B8B1AE8613285A797(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnReceivedRemoteNotification_mC510FFDD28917371EB9312D7F6E2F63CDE03FC22(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524 (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnSentNotification(NotificationDataToDataWithUserInfo(data));
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_0 = ___data0;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_1;
		L_1 = iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF4B498474102C537FAE4B24B8B1AE8613285A797(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(iOSNotificationCenter_t74DF080370FA0C88E42962A44D1F9EC025B84E53_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnSentNotification_m544D0B4C4887048904106DE1C463663A6DC3A906(L_1, NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationDataToDataWithUserInfo(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF4B498474102C537FAE4B24B8B1AE8613285A797 (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ret.data = data;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		// ret.data.userInfo = IntPtr.Zero;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_1 = (&(&V_0)->___data_0);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		L_1->___userInfo_7 = L_2;
		// ret.userInfo = NSDictionaryToCs(data.userInfo);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_3 = ___data0;
		intptr_t L_4 = L_3.___userInfo_7;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = iOSNotificationsWrapper_NSDictionaryToCs_m5A2FBC09A16627FC083C2EC31150C87ED4112D79(L_4, NULL);
		(&V_0)->___userInfo_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___userInfo_1), (void*)L_5);
		// ret.attachments = AttachmentsNSArrayToCs(data.attachments);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_6 = ___data0;
		intptr_t L_7 = L_6.___attachments_8;
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_8;
		L_8 = iOSNotificationsWrapper_AttachmentsNSArrayToCs_mC89DB0002C5D4E8E443C2353E2FDB80190784128(L_7, NULL);
		(&V_0)->___attachments_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___attachments_2), (void*)L_8);
		// return ret;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_9 = V_0;
		return L_9;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveNSDictionaryKeyValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// GCHandle handle = GCHandle.FromIntPtr(dict);
		intptr_t L_0 = ___dict0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// var dictionary = (Dictionary<string, string>)handle.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)CastclassClass((RuntimeObject*)L_2, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var));
		// if (dictionary == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// dictionary[key] = value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_1;
		String_t* L_5 = ___key1;
		String_t* L_6 = ___value2;
		NullCheck(L_4);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_4, L_5, L_6, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveUNNotificationAttachment(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652 (intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC74F654247ABF5958BE119A0484FED155A4FA129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* V_1 = NULL;
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GCHandle handle = GCHandle.FromIntPtr(array);
		intptr_t L_0 = ___array0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// var list = (List<iOSNotificationAttachment>)handle.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*)CastclassClass((RuntimeObject*)L_2, List_1_tC74F654247ABF5958BE119A0484FED155A4FA129_il2cpp_TypeInfo_var));
		// if (list == null)
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// list.Add(new iOSNotificationAttachment()
		// {
		//     Id = id,
		//     Url = url,
		// });
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_4 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933));
		String_t* L_5 = ___id1;
		iOSNotificationAttachment_set_Id_m7401F5705B3B4ADDC0DA5B372FE4579418891E7E_inline((&V_2), L_5, NULL);
		String_t* L_6 = ___url2;
		iOSNotificationAttachment_set_Url_m4F0B407457097EC2DEFDCD296E07CDDF624DE202_inline((&V_2), L_6, NULL);
		iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 L_7 = V_2;
		NullCheck(L_4);
		List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_inline(L_4, L_7, List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_mC1062AF0F279E5610F4559CFA756401291648BFA (intptr_t ___request0, int32_t ___options1, bool ___registerRemote2, const RuntimeMethod* method) 
{
	{
		// _RequestAuthorization(request, options, registerRemote);
		intptr_t L_0 = ___request0;
		int32_t L_1 = ___options1;
		bool L_2 = ___registerRemote2;
		iOSNotificationsWrapper__RequestAuthorization_mEA8CA44C7AA697DB3EA9D2C460924997CC075315(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 iOSNotificationsWrapper_GetNotificationSettings_m659C38E583D6A52DA9747BBB5707432A5CECC797 (const RuntimeMethod* method) 
{
	{
		// return _GetNotificationSettings();
		iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21 L_0;
		L_0 = iOSNotificationsWrapper__GetNotificationSettings_m8DF3328D33595477ADD49C37CC36DA7553BF1077(NULL);
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m2C66F2E8B8E6A438424896D297650C6AF4228361 (iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 ___data0, const RuntimeMethod* method) 
{
	{
		// data.data.userInfo = iOSNotificationsWrapper.CsDictionaryToObjC(data.userInfo);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_0 = (&(&___data0)->___data_0);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_1 = ___data0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1.___userInfo_1;
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper_CsDictionaryToObjC_mB8AE5486D42735F580154E24CFB8A024A8E47CE9(L_2, NULL);
		L_0->___userInfo_7 = L_3;
		// data.data.attachments = iOSNotificationsWrapper.CsAttachmentsToObjc(data.attachments);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_4 = (&(&___data0)->___data_0);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_5 = ___data0;
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_6 = L_5.___attachments_2;
		intptr_t L_7;
		L_7 = iOSNotificationsWrapper_CsAttachmentsToObjc_m8EF0E9BAFFCCEE6A5EEC8C7D371C4BA1C5E15BF2(L_6, NULL);
		L_4->___attachments_8 = L_7;
		// _ScheduleLocalNotification(data.data);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_8 = ___data0;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_9 = L_8.___data_0;
		iOSNotificationsWrapper__ScheduleLocalNotification_mD2CC306854403F4BBE98648D761A41726BC75F7C(L_9, NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* iOSNotificationsWrapper_GetDeliveredNotificationData_m6570276DA5405AE52F6B5FB81CE3646052DB69E9 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var ptr = _GetDeliveredNotificationDataArray(out count);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetDeliveredNotificationDataArray_m9416BEB875EA2D48C0927E85288E603D38AD92C0((&V_0), NULL);
		// return MarshalAndFreeNotificationDataArray(ptr, count);
		int32_t L_1 = V_0;
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_2;
		L_2 = iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m99000C4908D655F245E2EC76029B2B9718D7E491(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper_GetLastRespondedNotificationAction_mDE70405A1228FF1C25E14A0819F2624EB009EDD9 (const RuntimeMethod* method) 
{
	{
		// return _GetLastRespondedNotificationAction();
		String_t* L_0;
		L_0 = iOSNotificationsWrapper__GetLastRespondedNotificationAction_mB6983CAFA2D834C868567F605F55CB844702BFF1(NULL);
		return L_0;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper_GetLastRespondedNotificationUserText_mD7981FE4DC78ED85B7B7987875ED5CF30ADC4BE6 (const RuntimeMethod* method) 
{
	{
		// return _GetLastRespondedNotificationUserText();
		String_t* L_0;
		L_0 = iOSNotificationsWrapper__GetLastRespondedNotificationUserText_m39B79F2BDFA59A8780D852E5C8BBB4086E3A609B(NULL);
		return L_0;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* iOSNotificationsWrapper_GetScheduledNotificationData_m570771802615E6B7C2F423A59F24A5FF3D1AE4D1 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var ptr = _GetScheduledNotificationDataArray(out count);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetScheduledNotificationDataArray_m17748B95E93D87E25DF727C4A77348CAF8686457((&V_0), NULL);
		// return MarshalAndFreeNotificationDataArray(ptr, count);
		int32_t L_1 = V_0;
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_2;
		L_2 = iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m99000C4908D655F245E2EC76029B2B9718D7E491(L_0, L_1, NULL);
		return L_2;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::MarshalAndFreeNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m99000C4908D655F245E2EC76029B2B9718D7E491 (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (count == 0 || ptr == IntPtr.Zero)
		int32_t L_0 = ___count1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t L_1 = ___ptr0;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return null;
		return (iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09*)NULL;
	}

IL_0012:
	{
		// var dataArray = new iOSNotificationWithUserInfo[count];
		int32_t L_4 = ___count1;
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_5 = (iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09*)(iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09*)SZArrayNew(iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		// var structSize = Marshal.SizeOf(typeof(iOSNotificationData));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_7, NULL);
		V_1 = L_8;
		// var next = ptr;
		intptr_t L_9 = ___ptr0;
		V_2 = L_9;
		// for (var i = 0; i < count; ++i)
		V_3 = 0;
		goto IL_00a0;
	}

IL_002f:
	{
		// dataArray[i].data = (iOSNotificationData)Marshal.PtrToStructure(next, typeof(iOSNotificationData));
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_10 = V_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		intptr_t L_12 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_12, L_14, NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0 = ((*(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED*)((iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED*)(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED*)UnBox(L_15, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var))));
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		// dataArray[i].userInfo = NSDictionaryToCs(dataArray[i].data.userInfo);
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_18 = V_0;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_20 = (&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___data_0);
		intptr_t L_21 = L_20->___userInfo_7;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22;
		L_22 = iOSNotificationsWrapper_NSDictionaryToCs_m5A2FBC09A16627FC083C2EC31150C87ED4112D79(L_21, NULL);
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___userInfo_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___userInfo_1), (void*)L_22);
		// dataArray[i].attachments = AttachmentsNSArrayToCs(dataArray[i].data.attachments);
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_23 = V_0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_25 = V_0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_27 = (&((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___data_0);
		intptr_t L_28 = L_27->___attachments_8;
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_29;
		L_29 = iOSNotificationsWrapper_AttachmentsNSArrayToCs_mC89DB0002C5D4E8E443C2353E2FDB80190784128(L_28, NULL);
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___attachments_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___attachments_2), (void*)L_29);
		// next = next + structSize;
		intptr_t L_30 = V_2;
		int32_t L_31 = V_1;
		intptr_t L_32;
		L_32 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, L_31, NULL);
		V_2 = L_32;
		// for (var i = 0; i < count; ++i)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a0:
	{
		// for (var i = 0; i < count; ++i)
		int32_t L_34 = V_3;
		int32_t L_35 = ___count1;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_002f;
		}
	}
	{
		// _FreeUnmanagediOSNotificationDataArray(ptr, count);
		intptr_t L_36 = ___ptr0;
		int32_t L_37 = ___count1;
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_m9BBE43390A00107B926480FA5C2062B81A8F1B1A(L_36, L_37, NULL);
		// return dataArray;
		iOSNotificationWithUserInfoU5BU5D_tA10CD6260B4DF620F1E5B924B93D77510CBB1F09* L_38 = V_0;
		return L_38;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsDictionaryToObjC(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsDictionaryToObjC_mB8AE5486D42735F580154E24CFB8A024A8E47CE9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (userInfo == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___userInfo0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return IntPtr.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_1;
	}

IL_0009:
	{
		// IntPtr dict = IntPtr.Zero;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_2;
		// foreach (var item in userInfo)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___userInfo0;
		NullCheck(L_3);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_4;
		L_4 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_3, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_1), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_0018_1:
			{
				// foreach (var item in userInfo)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_5;
				L_5 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_1), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_2 = L_5;
				// dict = _AddItemToNSDictionary(dict, item.Key, item.Value);
				intptr_t L_6 = V_0;
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				intptr_t L_9;
				L_9 = iOSNotificationsWrapper__AddItemToNSDictionary_m3798785725CBF97127669F924EE9E35B336D41A5(L_6, L_7, L_8, NULL);
				V_0 = L_9;
			}

IL_0035_1:
			{
				// foreach (var item in userInfo)
				bool L_10;
				L_10 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_1), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// return dict;
		intptr_t L_11 = V_0;
		return L_11;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsAttachmentsToObjc(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsAttachmentsToObjc_m8EF0E9BAFFCCEE6A5EEC8C7D371C4BA1C5E15BF2 (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___attachments0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (attachments == null || attachments.Count == 0)
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_0 = ___attachments0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_1 = ___attachments0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_inline(L_1, List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		// return IntPtr.Zero;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_3;
	}

IL_0011:
	{
		// var atts = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_4;
		// foreach (var attachment in attachments)
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_5 = ___attachments0;
		NullCheck(L_5);
		Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2 L_6;
		L_6 = List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29(L_5, List_1_GetEnumerator_m85DC382BDB220A86D7F10CD22CD1EADCBA5D6C29_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA((&V_1), Enumerator_Dispose_m95922EA1AC2DAA1D6A62F9CEDB8B2E71B49214BA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_0020_1:
			{
				// foreach (var attachment in attachments)
				iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 L_7;
				L_7 = Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_inline((&V_1), Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_RuntimeMethod_var);
				V_2 = L_7;
				// atts = _AddAttachmentToNSArray(atts, attachment.Id, attachment.Url, out error);
				intptr_t L_8 = V_0;
				String_t* L_9;
				L_9 = iOSNotificationAttachment_get_Id_m8A551CB233C83D05BDDACF9688CBECAAF9846C15_inline((&V_2), NULL);
				String_t* L_10;
				L_10 = iOSNotificationAttachment_get_Url_mE0C69FB858552B293B9C0BDDFF2894FC6EBE9BF0_inline((&V_2), NULL);
				intptr_t L_11;
				L_11 = iOSNotificationsWrapper__AddAttachmentToNSArray_m84054FBACB7477A05721E119B028523ACA016F16(L_8, L_9, L_10, (&V_3), NULL);
				V_0 = L_11;
				// if (error != IntPtr.Zero)
				intptr_t L_12 = V_3;
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_14;
				L_14 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_12, L_13, NULL);
				if (!L_14)
				{
					goto IL_006b_1;
				}
			}
			{
				// if (atts != IntPtr.Zero)
				intptr_t L_15 = V_0;
				intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var))))->___Zero_1;
				bool L_17;
				L_17 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_15, L_16, NULL);
				if (!L_17)
				{
					goto IL_005f_1;
				}
			}
			{
				// _ReleaseNSObject(atts);
				intptr_t L_18 = V_0;
				iOSNotificationsWrapper__ReleaseNSObject_mFFAD0F85055C706E8A5479A81B66A663831368FE(L_18, NULL);
			}

IL_005f_1:
			{
				// var msg = _NSErrorToMessage(error);
				intptr_t L_19 = V_3;
				String_t* L_20;
				L_20 = iOSNotificationsWrapper__NSErrorToMessage_m621C81B674107D57D52569733B5F7FAD29869C69(L_19, NULL);
				// throw new Exception(msg);
				Exception_t* L_21 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_21);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_21, L_20, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationsWrapper_CsAttachmentsToObjc_m8EF0E9BAFFCCEE6A5EEC8C7D371C4BA1C5E15BF2_RuntimeMethod_var)));
			}

IL_006b_1:
			{
				// foreach (var attachment in attachments)
				bool L_22;
				L_22 = Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441((&V_1), Enumerator_MoveNext_m5AF13D1DDEFE6AC1F317C3F1861616F12D72E441_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// return atts;
		intptr_t L_23 = V_0;
		return L_23;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationsWrapper::NSDictionaryToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* iOSNotificationsWrapper_NSDictionaryToCs_m5A2FBC09A16627FC083C2EC31150C87ED4112D79 (intptr_t ___dict0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var ret = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		// var handle = GCHandle.Alloc(ret);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_1, NULL);
		V_0 = L_2;
		// _ReadNSDictionary(GCHandle.ToIntPtr(handle), dict, ReceiveNSDictionaryKeyValue);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = V_0;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_3, NULL);
		intptr_t L_5 = ___dict0;
		ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* L_6 = (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4*)il2cpp_codegen_object_new(ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ReceiveNSDictionaryKeyValueCallback__ctor_m7E31544BB059836C992783780D71576AA277A22D(L_6, NULL, (intptr_t)((void*)iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856_RuntimeMethod_var), NULL);
		iOSNotificationsWrapper__ReadNSDictionary_m1C436D4473181385D91702AAF13FB7D28A70F714(L_4, L_5, L_6, NULL);
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// return ret;
		return L_1;
	}
}
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotificationsWrapper::AttachmentsNSArrayToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* iOSNotificationsWrapper_AttachmentsNSArrayToCs_mC89DB0002C5D4E8E443C2353E2FDB80190784128 (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC74F654247ABF5958BE119A0484FED155A4FA129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (array == IntPtr.Zero)
		intptr_t L_0 = ___array0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*)NULL;
	}

IL_000f:
	{
		// var ret = new List<iOSNotificationAttachment>();
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_3 = (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*)il2cpp_codegen_object_new(List_1_tC74F654247ABF5958BE119A0484FED155A4FA129_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B(L_3, List_1__ctor_mCA6A82D2347A66651ABA4216D8CAF21CBC97B06B_RuntimeMethod_var);
		// var handle = GCHandle.Alloc(ret);
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_4 = L_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_4, NULL);
		V_0 = L_5;
		// _ReadAttachmentsNSArray(GCHandle.ToIntPtr(handle), array, ReceiveUNNotificationAttachment);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6 = V_0;
		intptr_t L_7;
		L_7 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_6, NULL);
		intptr_t L_8 = ___array0;
		ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* L_9 = (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E*)il2cpp_codegen_object_new(ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ReceiveUNNotificationAttachmentCallback__ctor_m205C4D08A16088C9897995C35D865C64EDC016FC(L_9, NULL, (intptr_t)((void*)iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652_RuntimeMethod_var), NULL);
		iOSNotificationsWrapper__ReadAttachmentsNSArray_m493603B5A3AC41CA7E9366B21F3A11F3E0F2DED4(L_7, L_8, L_9, NULL);
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// return ret;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m340452ADA2F0E0C35F2E034B97AAE8F86827893B (int32_t ___badge0, const RuntimeMethod* method) 
{
	{
		// _SetApplicationBadge(badge);
		int32_t L_0 = ___badge0;
		iOSNotificationsWrapper__SetApplicationBadge_m425633D16CA2A2A7AB652ADC723F37D499B64FF7(L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_m0F9963248235DCA8F8D178390907819931B3FA79 (const RuntimeMethod* method) 
{
	{
		// return _GetApplicationBadge();
		int32_t L_0;
		L_0 = iOSNotificationsWrapper__GetApplicationBadge_m53F1F38D3652F65C75E4ED7AE669F23B9D9628BC(NULL);
		return L_0;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper_GetAppOpenedUsingNotification_mD1DA7C06CE90D72977577DAC717BB2FCA85EEC07 (const RuntimeMethod* method) 
{
	{
		// return _GetAppOpenedUsingNotification();
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m6EDB04FD2C23285C778D51EC2F8D3E329AD73B31(NULL);
		return L_0;
	}
}
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 iOSNotificationsWrapper_GetLastNotificationData_mEB08C18777114E3BD6197FC86C1BA4F6CBE3B3C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_GetAppOpenedUsingNotification())
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m6EDB04FD2C23285C778D51EC2F8D3E329AD73B31(NULL);
		if (!L_0)
		{
			goto IL_0097;
		}
	}
	{
		// IntPtr ptr = _GetLastNotificationData();
		intptr_t L_1;
		L_1 = iOSNotificationsWrapper__GetLastNotificationData_mBDAFB058A017C90FFD50DE741698BE38F832A4D6(NULL);
		V_0 = L_1;
		// if (ptr != IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0097;
		}
	}
	{
		// data.data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_5, L_7, NULL);
		(&V_1)->___data_0 = ((*(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED*)((iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED*)(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED*)UnBox(L_8, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var))));
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_1)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_1)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_1)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_1)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_1)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_1)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		// data.userInfo = NSDictionaryToCs(data.data.userInfo);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_9 = V_1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_10 = L_9.___data_0;
		intptr_t L_11 = L_10.___userInfo_7;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12;
		L_12 = iOSNotificationsWrapper_NSDictionaryToCs_m5A2FBC09A16627FC083C2EC31150C87ED4112D79(L_11, NULL);
		(&V_1)->___userInfo_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___userInfo_1), (void*)L_12);
		// data.data.userInfo = IntPtr.Zero;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_13 = (&(&V_1)->___data_0);
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		L_13->___userInfo_7 = L_14;
		// data.attachments = AttachmentsNSArrayToCs(data.data.attachments);
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_15 = V_1;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED L_16 = L_15.___data_0;
		intptr_t L_17 = L_16.___attachments_8;
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_18;
		L_18 = iOSNotificationsWrapper_AttachmentsNSArrayToCs_mC89DB0002C5D4E8E443C2353E2FDB80190784128(L_17, NULL);
		(&V_1)->___attachments_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___attachments_2), (void*)L_18);
		// data.data.attachments = IntPtr.Zero;
		iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED* L_19 = (&(&V_1)->___data_0);
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		L_19->___attachments_8 = L_20;
		// _FreeUnmanagediOSNotificationDataArray(ptr, 1);
		intptr_t L_21 = V_0;
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_m9BBE43390A00107B926480FA5C2062B81A8F1B1A(L_21, 1, NULL);
		// return data;
		iOSNotificationWithUserInfo_tEBF7E61C8AC189D82F3EE4C40FF137812F6399E5 L_22 = V_1;
		Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C((&L_23), L_22, /*hidden argument*/Nullable_1__ctor_m560689C7326F028C51F97F2CB36CB9CDCF15935C_RuntimeMethod_var);
		return L_23;
	}

IL_0097:
	{
		// return null;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8));
		Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8 L_24 = V_2;
		return L_24;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetNotificationCategories(System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetNotificationCategories_m9874163A141115A2CAC03E821E582B70A48A4AEA (RuntimeObject* ___categories0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE0C48AA68D5546E0616D5D05E689FA0D00036203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m41265919586D29EB9B9463CA58C718650069662E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4ABDF05BA4B194A57967F3B53D7422F6439255F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m800AA5B33449643DC97AC1FF1F653A3B9D15CFE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA3778483431364C6C54E792CD1AC43576F137AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3DBCD92FD0C9A216ADA0B3A7125D18F23AB20C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m827F25AFA853D56D738631CA3CCFB0DABDE9C260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF15CFF294BE6EAD4E0D494A943C48290FDE615CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t690156ADFB7DA3B6FFCBA7786B7F9E63BE340211_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7D43D204798B36A9A7FDE86EB3DEA6B375F1A977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m4F01AB5E5AD186F63C33C6326B4020B0D76465D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* V_3 = NULL;
	int32_t V_4 = 0;
	iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* V_5 = NULL;
	iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	intptr_t V_9;
	memset((&V_9), 0, sizeof(V_9));
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* V_11 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_12 = NULL;
	String_t* V_13 = NULL;
	Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8 V_14;
	memset((&V_14), 0, sizeof(V_14));
	KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		// var allActions = new Dictionary<string, IntPtr>();
		Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* L_0 = (Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9*)il2cpp_codegen_object_new(Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4ABDF05BA4B194A57967F3B53D7422F6439255F1(L_0, Dictionary_2__ctor_m4ABDF05BA4B194A57967F3B53D7422F6439255F1_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var category in categories)
		RuntimeObject* L_1 = ___categories0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>::GetEnumerator() */, IEnumerable_1_t690156ADFB7DA3B6FFCBA7786B7F9E63BE340211_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_000f_1:
			{
				// foreach (var category in categories)
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_6;
				L_6 = InterfaceFuncInvoker0< iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.Notifications.iOS.iOSNotificationCategory>::get_Current() */, IEnumerator_1_t7D43D204798B36A9A7FDE86EB3DEA6B375F1A977_il2cpp_TypeInfo_var, L_5);
				// foreach (var action in category.Actions)
				NullCheck(L_6);
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_7;
				L_7 = iOSNotificationCategory_get_Actions_m9958D87CD035EA242CEAB3BAC116C43B0CD8F895(L_6, NULL);
				V_3 = L_7;
				V_4 = 0;
				goto IL_0068_1;
			}

IL_0020_1:
			{
				// foreach (var action in category.Actions)
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_8 = V_3;
				int32_t L_9 = V_4;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_5 = L_11;
				// if (string.IsNullOrEmpty(action.Id))
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_12 = V_5;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline(L_12, NULL);
				bool L_14;
				L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
				if (!L_14)
				{
					goto IL_003f_1;
				}
			}
			{
				// throw new ArgumentException("Action must have a valid and unique ID");
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_15);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3445424CCE31FF31906AAE9ADB0236D08C87E42B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationsWrapper_SetNotificationCategories_m9874163A141115A2CAC03E821E582B70A48A4AEA_RuntimeMethod_var)));
			}

IL_003f_1:
			{
				// if (!allActions.ContainsKey(action.Id))
				Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* L_16 = V_0;
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_17 = V_5;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline(L_17, NULL);
				NullCheck(L_16);
				bool L_19;
				L_19 = Dictionary_2_ContainsKey_mE0C48AA68D5546E0616D5D05E689FA0D00036203(L_16, L_18, Dictionary_2_ContainsKey_mE0C48AA68D5546E0616D5D05E689FA0D00036203_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0062_1;
				}
			}
			{
				// allActions[action.Id] = action.CreateUNNotificationAction();
				Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* L_20 = V_0;
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_21 = V_5;
				NullCheck(L_21);
				String_t* L_22;
				L_22 = iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline(L_21, NULL);
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_23 = V_5;
				NullCheck(L_23);
				intptr_t L_24;
				L_24 = VirtualFuncInvoker0< intptr_t >::Invoke(4 /* System.IntPtr Unity.Notifications.iOS.iOSNotificationAction::CreateUNNotificationAction() */, L_23);
				NullCheck(L_20);
				Dictionary_2_set_Item_mA3778483431364C6C54E792CD1AC43576F137AB4(L_20, L_22, L_24, Dictionary_2_set_Item_mA3778483431364C6C54E792CD1AC43576F137AB4_RuntimeMethod_var);
			}

IL_0062_1:
			{
				int32_t L_25 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_0068_1:
			{
				// foreach (var action in category.Actions)
				int32_t L_26 = V_4;
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_27 = V_3;
				NullCheck(L_27);
				if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
				{
					goto IL_0020_1;
				}
			}

IL_006f_1:
			{
				// foreach (var category in categories)
				RuntimeObject* L_28 = V_2;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// IntPtr categorySet = IntPtr.Zero;
		intptr_t L_30 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_1 = L_30;
		// foreach (var category in categories)
		RuntimeObject* L_31 = ___categories0;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>::GetEnumerator() */, IEnumerable_1_t690156ADFB7DA3B6FFCBA7786B7F9E63BE340211_il2cpp_TypeInfo_var, L_31);
		V_2 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0166:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_33 = V_2;
					if (!L_33)
					{
						goto IL_016f;
					}
				}
				{
					RuntimeObject* L_34 = V_2;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_34);
				}

IL_016f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0159_1;
			}

IL_0095_1:
			{
				// foreach (var category in categories)
				RuntimeObject* L_35 = V_2;
				NullCheck(L_35);
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_36;
				L_36 = InterfaceFuncInvoker0< iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.Notifications.iOS.iOSNotificationCategory>::get_Current() */, IEnumerator_1_t7D43D204798B36A9A7FDE86EB3DEA6B375F1A977_il2cpp_TypeInfo_var, L_35);
				V_6 = L_36;
				// IntPtr actions = IntPtr.Zero;
				intptr_t L_37 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				V_7 = L_37;
				// int count = category.Actions.Length;
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_38 = V_6;
				NullCheck(L_38);
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_39;
				L_39 = iOSNotificationCategory_get_Actions_m9958D87CD035EA242CEAB3BAC116C43B0CD8F895(L_38, NULL);
				NullCheck(L_39);
				V_8 = ((int32_t)(((RuntimeArray*)L_39)->max_length));
				// foreach (var action in category.Actions)
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_40 = V_6;
				NullCheck(L_40);
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_41;
				L_41 = iOSNotificationCategory_get_Actions_m9958D87CD035EA242CEAB3BAC116C43B0CD8F895(L_40, NULL);
				V_3 = L_41;
				V_4 = 0;
				goto IL_00e0_1;
			}

IL_00bc_1:
			{
				// foreach (var action in category.Actions)
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_42 = V_3;
				int32_t L_43 = V_4;
				NullCheck(L_42);
				int32_t L_44 = L_43;
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				V_11 = L_45;
				// actions = _AddActionToNSArray(actions, allActions[action.Id], count);
				intptr_t L_46 = V_7;
				Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* L_47 = V_0;
				iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* L_48 = V_11;
				NullCheck(L_48);
				String_t* L_49;
				L_49 = iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline(L_48, NULL);
				NullCheck(L_47);
				intptr_t L_50;
				L_50 = Dictionary_2_get_Item_m800AA5B33449643DC97AC1FF1F653A3B9D15CFE8(L_47, L_49, Dictionary_2_get_Item_m800AA5B33449643DC97AC1FF1F653A3B9D15CFE8_RuntimeMethod_var);
				int32_t L_51 = V_8;
				intptr_t L_52;
				L_52 = iOSNotificationsWrapper__AddActionToNSArray_m686DFC012EFD29CFFD1BD4BF119F800C2FD29BCD(L_46, L_50, L_51, NULL);
				V_7 = L_52;
				int32_t L_53 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
			}

IL_00e0_1:
			{
				// foreach (var action in category.Actions)
				int32_t L_54 = V_4;
				iOSNotificationActionU5BU5D_t18A4AEF543002EF5A58DFB73858B184FFD525757* L_55 = V_3;
				NullCheck(L_55);
				if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
				{
					goto IL_00bc_1;
				}
			}
			{
				// IntPtr intentIdentifiers = IntPtr.Zero;
				intptr_t L_56 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				V_9 = L_56;
				// count = category.IntentIdentifiers.Length;
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_57 = V_6;
				NullCheck(L_57);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58;
				L_58 = iOSNotificationCategory_get_IntentIdentifiers_m91CA55C622A693C0AAF6C5CE75322E3084B50FAC(L_57, NULL);
				NullCheck(L_58);
				V_8 = ((int32_t)(((RuntimeArray*)L_58)->max_length));
				// foreach (var idr in category.IntentIdentifiers)
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_59 = V_6;
				NullCheck(L_59);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60;
				L_60 = iOSNotificationCategory_get_IntentIdentifiers_m91CA55C622A693C0AAF6C5CE75322E3084B50FAC(L_59, NULL);
				V_12 = L_60;
				V_4 = 0;
				goto IL_0121_1;
			}

IL_0107_1:
			{
				// foreach (var idr in category.IntentIdentifiers)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_12;
				int32_t L_62 = V_4;
				NullCheck(L_61);
				int32_t L_63 = L_62;
				String_t* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
				V_13 = L_64;
				// intentIdentifiers = _AddStringToNSArray(intentIdentifiers, idr, count);
				intptr_t L_65 = V_9;
				String_t* L_66 = V_13;
				int32_t L_67 = V_8;
				intptr_t L_68;
				L_68 = iOSNotificationsWrapper__AddStringToNSArray_m0BAB7C567291148EBE50227723B436D2066988AC(L_65, L_66, L_67, NULL);
				V_9 = L_68;
				int32_t L_69 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0121_1:
			{
				// foreach (var idr in category.IntentIdentifiers)
				int32_t L_70 = V_4;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_12;
				NullCheck(L_71);
				if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
				{
					goto IL_0107_1;
				}
			}
			{
				// var cat = _CreateUNNotificationCategory(category.Id, category.HiddenPreviewsBodyPlaceholder, category.SummaryFormat, (int)category.Options,
				//     actions, intentIdentifiers);
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_72 = V_6;
				NullCheck(L_72);
				String_t* L_73;
				L_73 = iOSNotificationCategory_get_Id_m6A4071B537F6E5B51DA11DCB43613BBD691CFBA9_inline(L_72, NULL);
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_74 = V_6;
				NullCheck(L_74);
				String_t* L_75;
				L_75 = iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mCC5DF780F51E1AC578873FE372067DF14800A1C2_inline(L_74, NULL);
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_76 = V_6;
				NullCheck(L_76);
				String_t* L_77;
				L_77 = iOSNotificationCategory_get_SummaryFormat_m6835C27643601AFBCD4F51CA3E28C72E850164CB_inline(L_76, NULL);
				iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* L_78 = V_6;
				NullCheck(L_78);
				int32_t L_79;
				L_79 = iOSNotificationCategory_get_Options_m93741379CF2DF82295080957832C1D37D3DFC961_inline(L_78, NULL);
				intptr_t L_80 = V_7;
				intptr_t L_81 = V_9;
				intptr_t L_82;
				L_82 = iOSNotificationsWrapper__CreateUNNotificationCategory_m11D21B22ED4FDF28B5F08E37EFC108A10D1415CE(L_73, L_75, L_77, L_79, L_80, L_81, NULL);
				V_10 = L_82;
				// categorySet = _AddCategoryToCategorySet(categorySet, cat);
				intptr_t L_83 = V_1;
				intptr_t L_84 = V_10;
				intptr_t L_85;
				L_85 = iOSNotificationsWrapper__AddCategoryToCategorySet_m358D50AFD799BB064CD2F079A7F2B89E04C1AEE4(L_83, L_84, NULL);
				V_1 = L_85;
			}

IL_0159_1:
			{
				// foreach (var category in categories)
				RuntimeObject* L_86 = V_2;
				NullCheck(L_86);
				bool L_87;
				L_87 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_86);
				if (L_87)
				{
					goto IL_0095_1;
				}
			}
			{
				goto IL_0170;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0170:
	{
		// _SetNotificationCategories(categorySet);
		intptr_t L_88 = V_1;
		iOSNotificationsWrapper__SetNotificationCategories_mD43856530598B70C8E32AF49A3D75E646484B46A(L_88, NULL);
		// foreach (var act in allActions)
		Dictionary_2_t773E327FDA553CD97D06EAE14E2299684DFE7DF9* L_89 = V_0;
		NullCheck(L_89);
		Enumerator_t4576E9828A5C7D89C43F2AD1D83855944862B6C8 L_90;
		L_90 = Dictionary_2_GetEnumerator_m41265919586D29EB9B9463CA58C718650069662E(L_89, Dictionary_2_GetEnumerator_m41265919586D29EB9B9463CA58C718650069662E_RuntimeMethod_var);
		V_14 = L_90;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01a0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3DBCD92FD0C9A216ADA0B3A7125D18F23AB20C44((&V_14), Enumerator_Dispose_m3DBCD92FD0C9A216ADA0B3A7125D18F23AB20C44_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0195_1;
			}

IL_0180_1:
			{
				// foreach (var act in allActions)
				KeyValuePair_2_t3FA9D502CC27B123E99A6A0DED92BFC1A6D755C6 L_91;
				L_91 = Enumerator_get_Current_mF15CFF294BE6EAD4E0D494A943C48290FDE615CF_inline((&V_14), Enumerator_get_Current_mF15CFF294BE6EAD4E0D494A943C48290FDE615CF_RuntimeMethod_var);
				V_15 = L_91;
				// _ReleaseNSObject(act.Value);
				intptr_t L_92;
				L_92 = KeyValuePair_2_get_Value_m4F01AB5E5AD186F63C33C6326B4020B0D76465D5_inline((&V_15), KeyValuePair_2_get_Value_m4F01AB5E5AD186F63C33C6326B4020B0D76465D5_RuntimeMethod_var);
				iOSNotificationsWrapper__ReleaseNSObject_mFFAD0F85055C706E8A5479A81B66A663831368FE(L_92, NULL);
			}

IL_0195_1:
			{
				// foreach (var act in allActions)
				bool L_93;
				L_93 = Enumerator_MoveNext_m827F25AFA853D56D738631CA3CCFB0DABDE9C260((&V_14), Enumerator_MoveNext_m827F25AFA853D56D738631CA3CCFB0DABDE9C260_RuntimeMethod_var);
				if (L_93)
				{
					goto IL_0180_1;
				}
			}
			{
				goto IL_01ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ctor_m62AE738599FAE8E65ABE3947FDCD7D80F6911F27 (iOSNotificationsWrapper_t03E2DC53BCC5038CF3B2643C4C2EB105AFB28975* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_Multicast(AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* currentDelegate = reinterpret_cast<AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___request0, ___data1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_OpenInst(AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, ___data1, method);
}
void AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_OpenStatic(AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, ___data1, method);
}
void AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_OpenStaticInvoker(AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC >::Invoke(__this->___method_ptr_0, method, NULL, ___request0, ___data1);
}
void AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_ClosedStaticInvoker(AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___request0, ___data1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data1' to native representation
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke ____data1_marshaled = {};
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke(___data1, ____data1_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___request0, ____data1_marshaled);

	// Marshaling cleanup of parameter '___data1' native representation
	iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshal_pinvoke_cleanup(____data1_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_mE709FAE919D090ACC25038070BD2145F520DA0FE (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6_Multicast;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::Invoke(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_Invoke_m0BC99D8AACE6EEB72168EFFD58C14DF549BC8CA6 (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___request0, ___data1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::BeginInvoke(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCallback_BeginInvoke_m56E6685C3FDB6DE1B9EDB57B74C0AECBAD0D7C94 (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC ___data1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___request0);
	__d_args[1] = Box(iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_il2cpp_TypeInfo_var, &___data1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_EndInvoke_m9729CF16A7A9D3A0AED0A6CEFAB7EF0D03BB04AD (AuthorizationRequestCallback_tA51CE2A78EDCE2D7440BBB2611695CC7DAD959CD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_Multicast(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* currentDelegate = reinterpret_cast<NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___notificationData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_OpenInst(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___notificationData0, method);
}
void NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_OpenStatic(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___notificationData0, method);
}
void NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_OpenStaticInvoker(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED >::Invoke(__this->___method_ptr_0, method, NULL, ___notificationData0);
}
void NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_ClosedStaticInvoker(NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___notificationData0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2 (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___notificationData0' to native representation
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ____notificationData0_marshaled = {};
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke(___notificationData0, ____notificationData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____notificationData0_marshaled);

	// Marshaling cleanup of parameter '___notificationData0' native representation
	iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshal_pinvoke_cleanup(____notificationData0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m3448352ED953E95C4E5BAAE13D4C576B7161B772 (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF_Multicast;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mD7BEEA306BE8224ACA9E4B9C6670E35FA4F24CEF (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___notificationData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotificationData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m2761EDAB89EF2DDDA676E6E6D10E670A33D7EF3C (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED ___notificationData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_il2cpp_TypeInfo_var, &___notificationData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m9BF63A09CC75F3D0C011EBD83B30853859E93403 (NotificationReceivedCallback_t7455AC9C9452A69E691AD6D87AFBF9CFA055AFC2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_Multicast(ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* currentDelegate = reinterpret_cast<ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___dict0, ___key1, ___value2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_OpenInst(ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___dict0, ___key1, ___value2, method);
}
void ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_OpenStatic(ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___dict0, ___key1, ___value2, method);
}
void ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_OpenStaticInvoker(ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___dict0, ___key1, ___value2);
}
void ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_ClosedStaticInvoker(ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___dict0, ___key1, ___value2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4 (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	il2cppPInvokeFunc(___dict0, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback__ctor_m7E31544BB059836C992783780D71576AA277A22D (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C_Multicast;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback_Invoke_m97AC6546983BD91A90D6DE0D6FD4AE9407FA4F5C (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___dict0, ___key1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveNSDictionaryKeyValueCallback_BeginInvoke_m4E1F15FD4C7C6D8EBA83F4C099FAD543D0A23A67 (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dict0);
	__d_args[1] = ___key1;
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback_EndInvoke_m6CD82AA54B05005C6FD7C7ACE5BA0A6CC81E5607 (ReceiveNSDictionaryKeyValueCallback_tA8DB9C3C323EB0E5C364BDBD4D5EA233BA1863E4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_Multicast(ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* currentDelegate = reinterpret_cast<ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___id1, ___url2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_OpenInst(ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___id1, ___url2, method);
}
void ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_OpenStatic(ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___id1, ___url2, method);
}
void ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_OpenStaticInvoker(ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___id1, ___url2);
}
void ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_ClosedStaticInvoker(ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___id1, ___url2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___id1' to native representation
	char* ____id1_marshaled = NULL;
	____id1_marshaled = il2cpp_codegen_marshal_string(___id1);

	// Marshaling of parameter '___url2' to native representation
	char* ____url2_marshaled = NULL;
	____url2_marshaled = il2cpp_codegen_marshal_string(___url2);

	// Native function invocation
	il2cppPInvokeFunc(___array0, ____id1_marshaled, ____url2_marshaled);

	// Marshaling cleanup of parameter '___id1' native representation
	il2cpp_codegen_marshal_free(____id1_marshaled);
	____id1_marshaled = NULL;

	// Marshaling cleanup of parameter '___url2' native representation
	il2cpp_codegen_marshal_free(____url2_marshaled);
	____url2_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback__ctor_m205C4D08A16088C9897995C35D865C64EDC016FC (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2_Multicast;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback_Invoke_mBABC4148DE22971FCC40FD0EA31047212BA329E2 (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___id1, ___url2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveUNNotificationAttachmentCallback_BeginInvoke_m1A7C1AB7B3B1A13D08C114A70D7C205710B5D31E (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___array0);
	__d_args[1] = ___id1;
	__d_args[2] = ___url2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback_EndInvoke_m97F641224DC257A91203EC4F9B68D9EE6CF7E79F (ReceiveUNNotificationAttachmentCallback_t83B0A933BF29517D6BB5FA8A81B837112C902D3E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshal_pinvoke(const iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48& unmarshaled, iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.___U3CCenterU3Ek__BackingField_0;
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.___U3CRadiusU3Ek__BackingField_1;
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshal_pinvoke_back(const iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_pinvoke& marshaled, iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48& unmarshaled)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledU3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaledU3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaledU3CCenterU3Ek__BackingField_temp_0));
	unmarshaledU3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaledU3CCenterU3Ek__BackingField_temp_0;
	float unmarshaledU3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaledU3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaledU3CRadiusU3Ek__BackingField_temp_1;
	bool unmarshaledU3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = unmarshaledU3CNotifyOnEntryU3Ek__BackingField_temp_2;
	bool unmarshaledU3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = unmarshaledU3CNotifyOnExitU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshal_pinvoke_cleanup(iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshal_com(const iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48& unmarshaled, iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_com& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.___U3CCenterU3Ek__BackingField_0;
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.___U3CRadiusU3Ek__BackingField_1;
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshal_com_back(const iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_com& marshaled, iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48& unmarshaled)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledU3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaledU3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaledU3CCenterU3Ek__BackingField_temp_0));
	unmarshaledU3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaledU3CCenterU3Ek__BackingField_temp_0;
	float unmarshaledU3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaledU3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaledU3CRadiusU3Ek__BackingField_temp_1;
	bool unmarshaledU3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = unmarshaledU3CNotifyOnEntryU3Ek__BackingField_temp_2;
	bool unmarshaledU3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = unmarshaledU3CNotifyOnExitU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshal_com_cleanup(iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48_marshaled_com& marshaled)
{
}
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m95AD5724B07112816285A5B3F9D72025C31D7B73 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Location; } }
		return (int32_t)(((int32_t)20));
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationLocationTrigger_get_Type_m95AD5724B07112816285A5B3F9D72025C31D7B73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Type_m95AD5724B07112816285A5B3F9D72025C31D7B73(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Center { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CCenterU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Center(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Center_mA06C5E4FA9A108BA1C88AE3C392EA8027E357280 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 Center { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CCenterU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_Center_mA06C5E4FA9A108BA1C88AE3C392EA8027E357280_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	iOSNotificationLocationTrigger_set_Center_mA06C5E4FA9A108BA1C88AE3C392EA8027E357280_inline(_thisAdjusted, ___value0, method);
}
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m0C88F4129F152878B4992FBCC5F74209168C6065 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->___U3CRadiusU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float iOSNotificationLocationTrigger_get_Radius_m0C88F4129F152878B4992FBCC5F74209168C6065_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	float _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Radius_m0C88F4129F152878B4992FBCC5F74209168C6065_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Radius_m7E204030C195EBB4800EE17D31616F22274AD019 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Radius { get; set; }
		float L_0 = ___value0;
		__this->___U3CRadiusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_Radius_m7E204030C195EBB4800EE17D31616F22274AD019_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	iOSNotificationLocationTrigger_set_Radius_m7E204030C195EBB4800EE17D31616F22274AD019_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m1CAB623B32CC86E1D88991D5D8D6610524C5F010 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->___U3CNotifyOnEntryU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m1CAB623B32CC86E1D88991D5D8D6610524C5F010_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnEntry_m1CAB623B32CC86E1D88991D5D8D6610524C5F010_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnEntry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnEntry_m451DBDBF73879CBF7B5D26402B45519BD34913D9 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = ___value0;
		__this->___U3CNotifyOnEntryU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_NotifyOnEntry_m451DBDBF73879CBF7B5D26402B45519BD34913D9_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	iOSNotificationLocationTrigger_set_NotifyOnEntry_m451DBDBF73879CBF7B5D26402B45519BD34913D9_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_m8D0AAD323FAF46CA0DFCCE6FFE6C496A398E3FD6 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->___U3CNotifyOnExitU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnExit_m8D0AAD323FAF46CA0DFCCE6FFE6C496A398E3FD6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnExit_m8D0AAD323FAF46CA0DFCCE6FFE6C496A398E3FD6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationLocationTrigger::set_NotifyOnExit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnExit_m62C37F50D48DB3D9DE6C6D75BDDF065D807448D3 (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = ___value0;
		__this->___U3CNotifyOnExitU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationLocationTrigger_set_NotifyOnExit_m62C37F50D48DB3D9DE6C6D75BDDF065D807448D3_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48*>(__this + _offset);
	iOSNotificationLocationTrigger_set_NotifyOnExit_m62C37F50D48DB3D9DE6C6D75BDDF065D807448D3_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationPushTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationPushTrigger_get_Type_m1DCD9C5923AD6284A690BAD62CDEA77253CE7340 (iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Push; } }
		return (int32_t)(3);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationPushTrigger_get_Type_m1DCD9C5923AD6284A690BAD62CDEA77253CE7340_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationPushTrigger_t6BAE77C353D7013A9821FDEB266CF0040811FEE5*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationPushTrigger_get_Type_m1DCD9C5923AD6284A690BAD62CDEA77253CE7340(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshal_pinvoke(const iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649& unmarshaled, iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_pinvoke& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.___timeInterval_0;
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CRepeatsU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshal_pinvoke_back(const iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_pinvoke& marshaled, iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649& unmarshaled)
{
	int32_t unmarshaledtimeInterval_temp_0 = 0;
	unmarshaledtimeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.___timeInterval_0 = unmarshaledtimeInterval_temp_0;
	bool unmarshaledU3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.___U3CRepeatsU3Ek__BackingField_1 = unmarshaledU3CRepeatsU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshal_pinvoke_cleanup(iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshal_com(const iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649& unmarshaled, iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_com& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.___timeInterval_0;
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CRepeatsU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshal_com_back(const iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_com& marshaled, iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649& unmarshaled)
{
	int32_t unmarshaledtimeInterval_temp_0 = 0;
	unmarshaledtimeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.___timeInterval_0 = unmarshaledtimeInterval_temp_0;
	bool unmarshaledU3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.___U3CRepeatsU3Ek__BackingField_1 = unmarshaledU3CRepeatsU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshal_com_cleanup(iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649_marshaled_com& marshaled)
{
}
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_mC688FDD7770A276C2FE0862FB3208D07CA1A6849 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.TimeInterval; } }
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationTimeIntervalTrigger_get_Type_mC688FDD7770A276C2FE0862FB3208D07CA1A6849_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_Type_mC688FDD7770A276C2FE0862FB3208D07CA1A6849(_thisAdjusted, method);
	return _returnValue;
}
// System.TimeSpan Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_TimeInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A iOSNotificationTimeIntervalTrigger_get_TimeInterval_mF10F7EEE7AA273B280E29DD5535AE576147D1EB4 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return TimeSpan.FromSeconds(timeInterval); }
		int32_t L_0 = __this->___timeInterval_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F(((double)L_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A iOSNotificationTimeIntervalTrigger_get_TimeInterval_mF10F7EEE7AA273B280E29DD5535AE576147D1EB4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*>(__this + _offset);
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_TimeInterval_mF10F7EEE7AA273B280E29DD5535AE576147D1EB4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_m8DDE94D778C187DAC0F82E324AF795E64E005130 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	{
		// timeInterval = (int)value.TotalSeconds;
		double L_0;
		L_0 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&___value0), NULL);
		__this->___timeInterval_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_0);
		// if (timeInterval <= 0)
		int32_t L_1 = __this->___timeInterval_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// throw new ArgumentException("Time interval must be greater than 0.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCA8707FE0861CE909C71CAD2EB86B6143B5E8D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTimeIntervalTrigger_set_TimeInterval_m8DDE94D778C187DAC0F82E324AF795E64E005130_RuntimeMethod_var)));
	}

IL_0022:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_TimeInterval_m8DDE94D778C187DAC0F82E324AF795E64E005130_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method)
{
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_TimeInterval_m8DDE94D778C187DAC0F82E324AF795E64E005130(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->___U3CRepeatsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m7A9109F22E610DF25D696DD1CDEED9B311FBE5B9 (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRepeatsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_Repeats_m7A9109F22E610DF25D696DD1CDEED9B311FBE5B9_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649*>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_Repeats_m7A9109F22E610DF25D696DD1CDEED9B311FBE5B9_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshal_pinvoke(const iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C& unmarshaled, iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshal_pinvoke_back(const iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_pinvoke& marshaled, iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshal_pinvoke_cleanup(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshal_com(const iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C& unmarshaled, iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_com& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshal_com_back(const iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_com& marshaled, iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshal_com_cleanup(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C_marshaled_com& marshaled)
{
}
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mB3B8E3E49566CDA04FD16B12BDDD8F53CDEB0EBA (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Calendar; } }
		return (int32_t)(((int32_t)10));
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationCalendarTrigger_get_Type_mB3B8E3E49566CDA04FD16B12BDDD8F53CDEB0EBA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Type_mB3B8E3E49566CDA04FD16B12BDDD8F53CDEB0EBA(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Year { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CYearU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Year { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CYearU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Month { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMonthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Month { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CMonthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Day { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CDayU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Day { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CDayU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Hour { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CHourU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Hour { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CHourU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Minute { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMinuteU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Minute { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CMinuteU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Second { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CSecondU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Second { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CSecondU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D_AdjustorThunk (RuntimeObject* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_UtcTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = __this->___U3CUtcTimeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_UtcTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUtcTimeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_m9F42C284F442180685A54C0108DFF7C3DBEC909E (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->___U3CRepeatsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_Repeats_m9F42C284F442180685A54C0108DFF7C3DBEC909E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Repeats_m9F42C284F442180685A54C0108DFF7C3DBEC909E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m61C090AF21271FBAEB5E30E8A37F349BE822AE07 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRepeatsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Repeats_m61C090AF21271FBAEB5E30E8A37F349BE822AE07_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Repeats_m61C090AF21271FBAEB5E30E8A37F349BE822AE07_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.iOS.iOSNotificationCalendarTrigger Unity.Notifications.iOS.iOSNotificationCalendarTrigger::ToUtc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C iOSNotificationCalendarTrigger_ToUtc_mFC629A17E3B38EF5BFF057332D736CB26B80DAC3 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (UtcTime)
		bool L_0;
		L_0 = iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return this;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_1 = (*(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)__this);
		return L_1;
	}

IL_000f:
	{
		// var notificationTime = AssignDateTimeComponents(DateTime.Now).ToUniversalTime();
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = iOSNotificationCalendarTrigger_AssignDateTimeComponents_m864EC2AF260C484E6B16FC7ECBFD51647255021C(__this, L_2, NULL);
		V_2 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_2), NULL);
		V_0 = L_4;
		// iOSNotificationCalendarTrigger result = this;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_5 = (*(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)__this);
		V_1 = L_5;
		// result.UtcTime = true;
		iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_inline((&V_1), (bool)1, NULL);
		// result.AssignNonEmptyComponents(notificationTime);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = V_0;
		iOSNotificationCalendarTrigger_AssignNonEmptyComponents_m048DBA5747F815A27EB4106983CFA0426D4569F4((&V_1), L_6, NULL);
		// return result;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C iOSNotificationCalendarTrigger_ToUtc_mFC629A17E3B38EF5BFF057332D736CB26B80DAC3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_ToUtc_mFC629A17E3B38EF5BFF057332D736CB26B80DAC3(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.iOS.iOSNotificationCalendarTrigger Unity.Notifications.iOS.iOSNotificationCalendarTrigger::ToLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C iOSNotificationCalendarTrigger_ToLocal_mBC366DC7F7F9ADBF2C219BE19B0B4A14D5E8E573 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!UtcTime)
		bool L_0;
		L_0 = iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return this;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_1 = (*(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)__this);
		return L_1;
	}

IL_000f:
	{
		// var notificationTime = AssignDateTimeComponents(DateTime.UtcNow).ToLocalTime();
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = iOSNotificationCalendarTrigger_AssignDateTimeComponents_m864EC2AF260C484E6B16FC7ECBFD51647255021C(__this, L_2, NULL);
		V_2 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_2), NULL);
		V_0 = L_4;
		// iOSNotificationCalendarTrigger result = this;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_5 = (*(iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*)__this);
		V_1 = L_5;
		// result.UtcTime = false;
		iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_inline((&V_1), (bool)0, NULL);
		// result.AssignNonEmptyComponents(notificationTime);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = V_0;
		iOSNotificationCalendarTrigger_AssignNonEmptyComponents_m048DBA5747F815A27EB4106983CFA0426D4569F4((&V_1), L_6, NULL);
		// return result;
		iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C iOSNotificationCalendarTrigger_ToLocal_mBC366DC7F7F9ADBF2C219BE19B0B4A14D5E8E573_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_ToLocal_mBC366DC7F7F9ADBF2C219BE19B0B4A14D5E8E573(_thisAdjusted, method);
	return _returnValue;
}
// System.DateTime Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignDateTimeComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D iOSNotificationCalendarTrigger_AssignDateTimeComponents_m864EC2AF260C484E6B16FC7ECBFD51647255021C (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		// int year = Year != null ? Year.Value : dt.Year;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		L_0 = iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline(__this, NULL);
		V_5 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2;
		L_2 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___dt0), NULL);
		G_B3_0 = L_2;
		goto IL_0029;
	}

IL_001a:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
		L_3 = iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline(__this, NULL);
		V_5 = L_3;
		int32_t L_4;
		L_4 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_0029:
	{
		// int month = Month != null ? Month.Value : dt.Month;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5;
		L_5 = iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline(__this, NULL);
		V_5 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		if (L_6)
		{
			G_B5_0 = G_B3_0;
			goto IL_0043;
		}
	}
	{
		int32_t L_7;
		L_7 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___dt0), NULL);
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0043:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8;
		L_8 = iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline(__this, NULL);
		V_5 = L_8;
		int32_t L_9;
		L_9 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// int day = Day != null ? Day.Value : dt.Day;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10;
		L_10 = iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline(__this, NULL);
		V_5 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B7_0 = G_B6_1;
		if (L_11)
		{
			G_B8_0 = G_B6_1;
			goto IL_006d;
		}
	}
	{
		int32_t L_12;
		L_12 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___dt0), NULL);
		G_B9_0 = L_12;
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006d:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_13;
		L_13 = iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline(__this, NULL);
		V_5 = L_13;
		int32_t L_14;
		L_14 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B9_0 = L_14;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// int hour = Hour != null ? Hour.Value : dt.Hour;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_15;
		L_15 = iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline(__this, NULL);
		V_5 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B10_0 = G_B9_1;
		if (L_16)
		{
			G_B11_0 = G_B9_1;
			goto IL_0097;
		}
	}
	{
		int32_t L_17;
		L_17 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&___dt0), NULL);
		G_B12_0 = L_17;
		G_B12_1 = G_B10_0;
		goto IL_00a6;
	}

IL_0097:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_18;
		L_18 = iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline(__this, NULL);
		V_5 = L_18;
		int32_t L_19;
		L_19 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
	}

IL_00a6:
	{
		V_2 = G_B12_0;
		// int minute = Minute != null ? Minute.Value : dt.Minute;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_20;
		L_20 = iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline(__this, NULL);
		V_5 = L_20;
		bool L_21;
		L_21 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B13_0 = G_B12_1;
		if (L_21)
		{
			G_B14_0 = G_B12_1;
			goto IL_00c1;
		}
	}
	{
		int32_t L_22;
		L_22 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&___dt0), NULL);
		G_B15_0 = L_22;
		G_B15_1 = G_B13_0;
		goto IL_00d0;
	}

IL_00c1:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23;
		L_23 = iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline(__this, NULL);
		V_5 = L_23;
		int32_t L_24;
		L_24 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B15_0 = L_24;
		G_B15_1 = G_B14_0;
	}

IL_00d0:
	{
		V_3 = G_B15_0;
		// int second = Second != null ? Second.Value : dt.Second;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_25;
		L_25 = iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline(__this, NULL);
		V_5 = L_25;
		bool L_26;
		L_26 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B16_0 = G_B15_1;
		if (L_26)
		{
			G_B17_0 = G_B15_1;
			goto IL_00eb;
		}
	}
	{
		int32_t L_27;
		L_27 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&___dt0), NULL);
		G_B18_0 = L_27;
		G_B18_1 = G_B16_0;
		goto IL_00fa;
	}

IL_00eb:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_28;
		L_28 = iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline(__this, NULL);
		V_5 = L_28;
		int32_t L_29;
		L_29 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B18_0 = L_29;
		G_B18_1 = G_B17_0;
	}

IL_00fa:
	{
		V_4 = G_B18_0;
		// return new DateTime(year, month, day, hour, minute, second, dt.Kind);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		int32_t L_35;
		L_35 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___dt0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36;
		memset((&L_36), 0, sizeof(L_36));
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&L_36), G_B18_1, L_30, L_31, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D iOSNotificationCalendarTrigger_AssignDateTimeComponents_m864EC2AF260C484E6B16FC7ECBFD51647255021C_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_AssignDateTimeComponents_m864EC2AF260C484E6B16FC7ECBFD51647255021C(_thisAdjusted, ___dt0, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignNonEmptyComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_AssignNonEmptyComponents_m048DBA5747F815A27EB4106983CFA0426D4569F4 (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Year != null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		L_0 = iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Year = dt.Year;
		int32_t L_2;
		L_2 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___dt0), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580_inline(__this, L_3, NULL);
	}

IL_0022:
	{
		// if (Month != null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4;
		L_4 = iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline(__this, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// Month = dt.Month;
		int32_t L_6;
		L_6 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___dt0), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC_inline(__this, L_7, NULL);
	}

IL_0044:
	{
		// if (Day != null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8;
		L_8 = iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline(__this, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// Day = dt.Day;
		int32_t L_10;
		L_10 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___dt0), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B_inline(__this, L_11, NULL);
	}

IL_0066:
	{
		// if (Hour != null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12;
		L_12 = iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline(__this, NULL);
		V_0 = L_12;
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		// Hour = dt.Hour;
		int32_t L_14;
		L_14 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&___dt0), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60_inline(__this, L_15, NULL);
	}

IL_0088:
	{
		// if (Minute != null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16;
		L_16 = iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline(__this, NULL);
		V_0 = L_16;
		bool L_17;
		L_17 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// Minute = dt.Minute;
		int32_t L_18;
		L_18 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&___dt0), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82_inline(__this, L_19, NULL);
	}

IL_00aa:
	{
		// if (Second != null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_20;
		L_20 = iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline(__this, NULL);
		V_0 = L_20;
		bool L_21;
		L_21 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00cc;
		}
	}
	{
		// Second = dt.Second;
		int32_t L_22;
		L_22 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&___dt0), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_23), L_22, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D_inline(__this, L_23, NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_AssignNonEmptyComponents_m048DBA5747F815A27EB4106983CFA0426D4569F4_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt0, const RuntimeMethod* method)
{
	iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C*>(__this + _offset);
	iOSNotificationCalendarTrigger_AssignNonEmptyComponents_m048DBA5747F815A27EB4106983CFA0426D4569F4(_thisAdjusted, ___dt0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_m9AF9F366ABC34678151252ECFC3B4FF6959E6ED9_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_IsFinished = value; }
		bool L_0 = ___value0;
		__this->___m_IsFinished_0 = L_0;
		// private set { m_IsFinished = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_mFC66547317A168FF388E5AFA19A4A1F31AAF7033_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_Granted = value; }
		bool L_0 = ___value0;
		__this->___m_Granted_1 = L_0;
		// private set { m_Granted = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_m0310B101EB0CDE8DEF8FAA58E69513A810AF5F41_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_Error = value; }
		String_t* L_0 = ___value0;
		__this->___m_Error_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Error_2), (void*)L_0);
		// private set { m_Error = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_mDF3A4418B4B1D213AE14E590BCB36BD3C5FADAE3_inline (AuthorizationRequest_t47AE642A3B68B0822738A9B2101E8F28D47A99A6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { m_DeviceToken = value; }
		String_t* L_0 = ___value0;
		__this->___m_DeviceToken_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeviceToken_3), (void*)L_0);
		// private set { m_DeviceToken = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_mFE259880B9E33257AC4D52608430BE18906C7EBD_inline (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->___U3CRepeatsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Year_m374E19995A7D455F538AD624B45038314F67A552_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Year { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CYearU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Month_mDB1FF22A26190D324FA2E318A568DADD8052B880_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Month { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMonthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Day_mC4F7971F8793F44ABC30D0EF92ACB3E48764E0AB_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Day { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CDayU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Hour_mCD81C83676F017602B51D1F20874004DCA39FF6F_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Hour { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CHourU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Minute_m97CA25E0086BCBCA95CFE75393756A0831B32124_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Minute { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMinuteU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 iOSNotificationCalendarTrigger_get_Second_m676B6BFE09F0C90AFF8CF222D4C8D859C9DA184F_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public int? Second { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CSecondU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_m9F42C284F442180685A54C0108DFF7C3DBEC909E_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->___U3CRepeatsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 iOSNotificationLocationTrigger_get_Center_mB1ED06211B4770C1C71DCE235011C89DF531620B_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Center { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CCenterU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m1CAB623B32CC86E1D88991D5D8D6610524C5F010_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->___U3CNotifyOnEntryU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_m8D0AAD323FAF46CA0DFCCE6FFE6C496A398E3FD6_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->___U3CNotifyOnExitU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m0C88F4129F152878B4992FBCC5F74209168C6065_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, const RuntimeMethod* method) 
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->___U3CRadiusU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m7A9109F22E610DF25D696DD1CDEED9B311FBE5B9_inline (iOSNotificationTimeIntervalTrigger_t593870D7C4B3A93D9395C1A58DC4F98B445B2649* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRepeatsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m4990382171B1A2F2BA9E8EF70EE3BA3780A7C580_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Year { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CYearU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A0717CC00C5710782F55B6E8F235A8CCA783FCC_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Month { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CMonthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m8FB648F44C32FF032448CA475F56AF12FC7E760B_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Day { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CDayU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m3322D5351F9E8EFC284E552E55BF145355F8CF60_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Hour { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CHourU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mF59941F1A7D0B027AACDAB8445DAC99DAE9AEE82_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Minute { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CMinuteU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_m2347F668195B9C4773D4B0B3B297221FF8561F7D_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? Second { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CSecondU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_UtcTime_m59C6E06208F57EA735F80A33A486EC98A05CFDB2_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUtcTimeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m61C090AF21271FBAEB5E30E8A37F349BE822AE07_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRepeatsU3Ek__BackingField_7 = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Center_mA06C5E4FA9A108BA1C88AE3C392EA8027E357280_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 Center { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CCenterU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_Radius_m7E204030C195EBB4800EE17D31616F22274AD019_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Radius { get; set; }
		float L_0 = ___value0;
		__this->___U3CRadiusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnEntry_m451DBDBF73879CBF7B5D26402B45519BD34913D9_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = ___value0;
		__this->___U3CNotifyOnEntryU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationLocationTrigger_set_NotifyOnExit_m62C37F50D48DB3D9DE6C6D75BDDF065D807448D3_inline (iOSNotificationLocationTrigger_tA27CD1A09F1B72EC07D3E67173FDD25C8A914B48* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = ___value0;
		__this->___U3CNotifyOnExitU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotification_set_Attachments_m93E8FB777A55F4C6AB38922DBD0A0C8E9890D15C_inline (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_0 = ___value0;
		__this->___U3CAttachmentsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttachmentsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* iOSNotification_get_Attachments_m54CA2BC5B43417D01136FE5A72B0A0BD2636549D_inline (iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* __this, const RuntimeMethod* method) 
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* L_0 = __this->___U3CAttachmentsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Id_m0D72F28EC32CAC70BBDB5DB38ADC2AD0919F9A14_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Title_mCFCB94D7A5C1CF60342BD4E7C9B7FBE07A4554C0_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAction_set_Options_mB57570C3425E330D6D74528777D0D78E3FBDFF96_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationActionOptions Options { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Id_m2EDC9A71F4912737711EAE8C9B09D8D496A3E3FA_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Title_m44DF5E056FD6A12373E6AA43A2841BE2DB3EE012_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationAction_get_Options_mEEDBE525091EDE4B06F7638293682C1AB9DFC65D_inline (iOSNotificationAction_tD8E5D341A875E263D6879512F6663003431FA319* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationActionOptions Options { get; set; }
		int32_t L_0 = __this->___U3COptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSTextInputNotificationAction_set_TextInputButtonTitle_m56A810611C4AA5BDCD082632FB9CF85B6F5E6F85_inline (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TextInputButtonTitle { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextInputButtonTitleU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextInputButtonTitleU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSTextInputNotificationAction_get_TextInputButtonTitle_m6FA9D43FEB99BE97A9047CBC0E030C8E2EB94818_inline (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) 
{
	{
		// public string TextInputButtonTitle { get; set; }
		String_t* L_0 = __this->___U3CTextInputButtonTitleU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSTextInputNotificationAction_get_TextInputPlaceholder_m23B1AFC4970F84F64A1EAB498CEED1316DA719F9_inline (iOSTextInputNotificationAction_tDEE99C2E12E44B75192FE89E445D5BFAC84D6A82* __this, const RuntimeMethod* method) 
{
	{
		// public string TextInputPlaceholder { get; set; }
		String_t* L_0 = __this->___U3CTextInputPlaceholderU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Id_m8A551CB233C83D05BDDACF9688CBECAAF9846C15_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Id_m7401F5705B3B4ADDC0DA5B372FE4579418891E7E_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Url_mE0C69FB858552B293B9C0BDDFF2894FC6EBE9BF0_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, const RuntimeMethod* method) 
{
	{
		// public string Url { get; set; }
		String_t* L_0 = __this->___U3CUrlU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Url_m4F0B407457097EC2DEFDCD296E07CDDF624DE202_inline (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Url { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUrlU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUrlU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCategory_set_Id_mEDA4B676B8D390208CF1AE47350C5C80B5169400_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3B1BDE2C1BB4A179891B70D1E0B3D22CCD1F1B36_inline (NotificationReceivedCallback_t4F2B50B8353419C0464767673653A46F08E4F0A1* __this, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327* ___notification0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, iOSNotification_t9191FC8C8CEEDE5C6B16D90A1CA0B85293C3B327*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___notification0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AuthorizationStatus_m86A3FC2E443F732C3882C199476EFBD4DFF8A191_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (AuthorizationStatus)authorizationStatus; }
		int32_t L_0 = __this->___authorizationStatus_0;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_NotificationCenterSetting_m6D6259430B3E5D958FFE6AD9DF676CFD9ACBEFC6_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)notificationCenterSetting; }
		int32_t L_0 = __this->___notificationCenterSetting_1;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_LockScreenSetting_mFC83E2FB7BA192A3ABF02171E9063628B6F04ED0_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)lockScreenSetting; }
		int32_t L_0 = __this->___lockScreenSetting_2;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_CarPlaySetting_mBDE163089C469E1E0A0FEAC5F7ACD3FB60A3D882_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)carPlaySetting; }
		int32_t L_0 = __this->___carPlaySetting_3;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AlertSetting_mE45B9D8C6057D4C7D9D368B018D61EBFEC60F7A7_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)alertSetting; }
		int32_t L_0 = __this->___alertSetting_4;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_BadgeSetting_m45FDA40AB94C8571CF748C429E4E083410A63693_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)badgeSetting; }
		int32_t L_0 = __this->___badgeSetting_5;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_SoundSetting_m1D8F98A6C4BFB9A6982C0E0A8DD86302FB0E4353_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NotificationSetting)soundSetting; }
		int32_t L_0 = __this->___soundSetting_6;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_AlertStyle_m5ABA83D2E27559F94EE19316F46FE94CFDCCB927_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (AlertStyle)alertStyle; }
		int32_t L_0 = __this->___alertStyle_7;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationSettings_get_ShowPreviewsSetting_m7C554A6BBBA9DC9AF7368C14F3F34FBF185736FE_inline (iOSNotificationSettings_tBDCE6AE27851787C044FEBC52ED202D4BBD24B21* __this, const RuntimeMethod* method) 
{
	{
		// get { return (ShowPreviewsSetting)showPreviewsSetting; }
		int32_t L_0 = __this->___showPreviewsSetting_8;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_Id_m6A4071B537F6E5B51DA11DCB43613BBD691CFBA9_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mCC5DF780F51E1AC578873FE372067DF14800A1C2_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public string HiddenPreviewsBodyPlaceholder { get; set; }
		String_t* L_0 = __this->___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_SummaryFormat_m6835C27643601AFBCD4F51CA3E28C72E850164CB_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public string SummaryFormat { get; set; }
		String_t* L_0 = __this->___U3CSummaryFormatU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationCategory_get_Options_m93741379CF2DF82295080957832C1D37D3DFC961_inline (iOSNotificationCategory_tA1484A3FB74ADB6798FDF886440E28EB19DEB89F* __this, const RuntimeMethod* method) 
{
	{
		// public iOSNotificationCategoryOptions Options { get; set; }
		int32_t L_0 = __this->___U3COptionsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_UtcTime_m5AA0A42A0D637AEC93FEE561A327E1910AE88E90_inline (iOSNotificationCalendarTrigger_tFBBE4331865F1CDB941E7B2B636906E5642C283C* __this, const RuntimeMethod* method) 
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = __this->___U3CUtcTimeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m75F49037515C97B2CB9BDC5290FE336E42CA1C4B_gshared_inline (Nullable_1_tE7C41C3C4F3877D5835C9E9568BDAADAD8FA67A8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AA65AE0FA98A54B451AF71C63369111FF50A855_gshared_inline (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 ___item0, const RuntimeMethod* method) 
{
	iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908* L_1 = (iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		iOSNotificationAttachmentU5BU5D_t609D3C4CF05546E716C096241B03644FD9A9F908* L_6 = V_0;
		int32_t L_7 = V_1;
		iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933)L_8);
		return;
	}

IL_0034:
	{
		iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 L_9 = ___item0;
		((  void (*) (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129*, iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3CB4D035F9ED8FB5E637FFC298A063FD58C0FC06_gshared_inline (List_1_tC74F654247ABF5958BE119A0484FED155A4FA129* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 Enumerator_get_Current_m8C61C8C66929068D7ED0AACA335678BF2551F90C_gshared_inline (Enumerator_t56BF2F0145B3E67F0E126AF3268C9EC41795E1E2* __this, const RuntimeMethod* method) 
{
	{
		iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933 L_0 = (iOSNotificationAttachment_t9EB7149B6AD8B739CD96042CCE0C5F4D2DC29933)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE Enumerator_get_Current_m9424B04BBD0560732E1913809F3725C44401977C_gshared_inline (Enumerator_tA7EC39CE1B8A2482A44DEE4E5F736BB3945E048C* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE L_0 = (KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Value_mD9B8955E1A15CC8D0F45A0938E0AD24926071553_gshared_inline (KeyValuePair_2_tFC4FF02B97026C0CCC439FD7ED3DEFA306C098CE* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = (intptr_t)__this->___value_1;
		return L_0;
	}
}
