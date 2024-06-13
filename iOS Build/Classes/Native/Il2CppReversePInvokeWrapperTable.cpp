#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// Unity.Notifications.iOS.TimeTriggerData
struct TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 
{
	// System.Int32 Unity.Notifications.iOS.TimeTriggerData::interval
	int32_t ___interval_0;
	// System.Byte Unity.Notifications.iOS.TimeTriggerData::repeats
	uint8_t ___repeats_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___language0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD(intptr_t ___request0, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856(intptr_t ___dict0, char* ___key1, char* ___value2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652(intptr_t ___array0, char* ___id1, char* ___url2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSStepCounter_OnDataReceived_m5026961D9D4D64A5930020A91D82DF64E65591C0(int32_t ___deviceId0, int32_t ___numberOfSteps1);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[8] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSStepCounter_OnDataReceived_m5026961D9D4D64A5930020A91D82DF64E65591C0),
};
