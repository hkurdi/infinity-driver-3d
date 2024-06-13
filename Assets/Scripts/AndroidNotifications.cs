using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_ANDROID 
using Unity.Notifications.Android;
#endif

public class AndroidNotifications : MonoBehaviour
{
#if UNITY_ANDROID 
    private const string ChannelID = "notification_channel";
    public void ScheduleNotification(DateTime dateTime) {
        AndroidNotificationChannel notifChannel = new AndroidNotificationChannel {
            Id = ChannelID,
            Name = "Notification Channel",
            Description = "Desc",
            Importance = Importance.Default
        };
        AndroidNotificationCenter.RegisterNotificationChannel(notifChannel);
        AndroidNotification notification = new AndroidNotification {
            Title = "Energy Recharged!",
            Text = "Your energy has recharged, come back to play again!",
            SmallIcon = "stopIconSm",
            LargeIcon = "stopIconLg",
            FireTime = dateTime
        };
        AndroidNotificationCenter.SendNotification(notification, ChannelID);
    }
#endif
}
