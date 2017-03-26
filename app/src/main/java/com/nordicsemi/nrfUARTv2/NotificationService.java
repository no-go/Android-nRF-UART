package com.nordicsemi.nrfUARTv2;

import android.app.Notification;
import android.content.Intent;
import android.service.notification.NotificationListenerService;
import android.service.notification.StatusBarNotification;

public class NotificationService extends NotificationListenerService {
    @Override
    public void onNotificationPosted(StatusBarNotification statusBarNotification) {
        Notification noti = statusBarNotification.getNotification();
        String msg = (String) noti.tickerText;
        if (!statusBarNotification.isClearable()) return;
        if (msg == null) return;
        Intent i = new Intent("heuteTollesWetter.NOTIFICATION");
        i.putExtra("MSG", msg);
        sendBroadcast(i);
    }

    @Override
    public void onNotificationRemoved(StatusBarNotification statusBarNotification) {}
}
