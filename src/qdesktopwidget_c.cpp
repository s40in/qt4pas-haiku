//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QDesktopWidgetH QDesktopWidget_create()
{
	return (QDesktopWidgetH) new QDesktopWidget();
}

C_EXPORT void QDesktopWidget_destroy(QDesktopWidgetH handle)
{
	delete (QDesktopWidget *)handle;
}

C_EXPORT bool QDesktopWidget_isVirtualDesktop(QDesktopWidgetH handle)
{
	return (bool) ((QDesktopWidget *)handle)->isVirtualDesktop();
}

C_EXPORT int QDesktopWidget_numScreens(QDesktopWidgetH handle)
{
	return (int) ((QDesktopWidget *)handle)->numScreens();
}

C_EXPORT int QDesktopWidget_primaryScreen(QDesktopWidgetH handle)
{
	return (int) ((QDesktopWidget *)handle)->primaryScreen();
}

C_EXPORT int QDesktopWidget_screenNumber(QDesktopWidgetH handle, const QWidgetH widget)
{
	return (int) ((QDesktopWidget *)handle)->screenNumber((const QWidget*)widget);
}

C_EXPORT int QDesktopWidget_screenNumber2(QDesktopWidgetH handle, const QPointH AnonParam1)
{
	return (int) ((QDesktopWidget *)handle)->screenNumber(*(const QPoint*)AnonParam1);
}

C_EXPORT QWidgetH QDesktopWidget_screen(QDesktopWidgetH handle, int screen)
{
	return (QWidgetH) ((QDesktopWidget *)handle)->screen(screen);
}

C_EXPORT void QDesktopWidget_screenGeometry(QDesktopWidgetH handle, PRect retval, int screen)
{
	QRect t_retval;
	t_retval = ((QDesktopWidget *)handle)->screenGeometry(screen);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QDesktopWidget_screenGeometry2(QDesktopWidgetH handle, PRect retval, const QWidgetH widget)
{
	QRect t_retval;
	t_retval = ((QDesktopWidget *)handle)->screenGeometry((const QWidget*)widget);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QDesktopWidget_screenGeometry3(QDesktopWidgetH handle, PRect retval, const QPointH point)
{
	QRect t_retval;
	t_retval = ((QDesktopWidget *)handle)->screenGeometry(*(const QPoint*)point);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QDesktopWidget_availableGeometry(QDesktopWidgetH handle, PRect retval, int screen)
{
	QRect t_retval;
	t_retval = ((QDesktopWidget *)handle)->availableGeometry(screen);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QDesktopWidget_availableGeometry2(QDesktopWidgetH handle, PRect retval, const QWidgetH widget)
{
	QRect t_retval;
	t_retval = ((QDesktopWidget *)handle)->availableGeometry((const QWidget*)widget);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QDesktopWidget_availableGeometry3(QDesktopWidgetH handle, PRect retval, const QPointH point)
{
	QRect t_retval;
	t_retval = ((QDesktopWidget *)handle)->availableGeometry(*(const QPoint*)point);
	copyQRectToPRect(t_retval, retval);
}

