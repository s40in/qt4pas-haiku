//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSystemTrayIconH QSystemTrayIcon_create(QObjectH parent)
{
	return (QSystemTrayIconH) new QSystemTrayIcon((QObject*)parent);
}

C_EXPORT void QSystemTrayIcon_destroy(QSystemTrayIconH handle)
{
	delete (QSystemTrayIcon *)handle;
}

C_EXPORT QSystemTrayIconH QSystemTrayIcon_create2(const QIconH icon, QObjectH parent)
{
	return (QSystemTrayIconH) new QSystemTrayIcon(*(const QIcon*)icon, (QObject*)parent);
}

C_EXPORT void QSystemTrayIcon_setContextMenu(QSystemTrayIconH handle, QMenuH menu)
{
	((QSystemTrayIcon *)handle)->setContextMenu((QMenu*)menu);
}

C_EXPORT QMenuH QSystemTrayIcon_contextMenu(QSystemTrayIconH handle)
{
	return (QMenuH) ((QSystemTrayIcon *)handle)->contextMenu();
}

C_EXPORT void QSystemTrayIcon_icon(QSystemTrayIconH handle, QIconH retval)
{
	*(QIcon *)retval = ((QSystemTrayIcon *)handle)->icon();
}

C_EXPORT void QSystemTrayIcon_setIcon(QSystemTrayIconH handle, const QIconH icon)
{
	((QSystemTrayIcon *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QSystemTrayIcon_toolTip(QSystemTrayIconH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSystemTrayIcon *)handle)->toolTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QSystemTrayIcon_setToolTip(QSystemTrayIconH handle, PWideString tip)
{
	QString t_tip;
	copyPWideStringToQString(tip, t_tip);
	((QSystemTrayIcon *)handle)->setToolTip(t_tip);
}

C_EXPORT bool QSystemTrayIcon_isSystemTrayAvailable()
{
	return (bool) QSystemTrayIcon::isSystemTrayAvailable();
}

C_EXPORT bool QSystemTrayIcon_supportsMessages()
{
	return (bool) QSystemTrayIcon::supportsMessages();
}

C_EXPORT void QSystemTrayIcon_showMessage(QSystemTrayIconH handle, PWideString title, PWideString msg, QSystemTrayIcon::MessageIcon icon, int msecs)
{
	QString t_title;
	QString t_msg;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(msg, t_msg);
	((QSystemTrayIcon *)handle)->showMessage(t_title, t_msg, icon, msecs);
}

C_EXPORT void QSystemTrayIcon_geometry(QSystemTrayIconH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QSystemTrayIcon *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QSystemTrayIcon_isVisible(QSystemTrayIconH handle)
{
	return (bool) ((QSystemTrayIcon *)handle)->isVisible();
}

C_EXPORT void QSystemTrayIcon_setVisible(QSystemTrayIconH handle, bool visible)
{
	((QSystemTrayIcon *)handle)->setVisible(visible);
}

C_EXPORT void QSystemTrayIcon_show(QSystemTrayIconH handle)
{
	((QSystemTrayIcon *)handle)->show();
}

C_EXPORT void QSystemTrayIcon_hide(QSystemTrayIconH handle)
{
	((QSystemTrayIcon *)handle)->hide();
}

