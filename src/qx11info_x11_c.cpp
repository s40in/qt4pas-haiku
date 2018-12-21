//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#if defined BINUX || MAEMO5
#include <qx11info_x11.h>

#endif
#if defined BINUX
C_EXPORT QX11InfoH QX11Info_create()
{
	return (QX11InfoH) new QX11Info();
}

C_EXPORT void QX11Info_destroy(QX11InfoH handle)
{
	delete (QX11Info *)handle;
}

C_EXPORT QX11InfoH QX11Info_create2(const QX11InfoH other)
{
	return (QX11InfoH) new QX11Info(*(const QX11Info*)other);
}

C_EXPORT Display* QX11Info_display()
{
	return (Display*) QX11Info::display();
}

C_EXPORT const char* QX11Info_appClass()
{
	return (const char*) QX11Info::appClass();
}

C_EXPORT int QX11Info_screen(QX11InfoH handle)
{
	return (int) ((QX11Info *)handle)->screen();
}

C_EXPORT int QX11Info_depth(QX11InfoH handle)
{
	return (int) ((QX11Info *)handle)->depth();
}

C_EXPORT int QX11Info_cells(QX11InfoH handle)
{
	return (int) ((QX11Info *)handle)->cells();
}

C_EXPORT Qt::HANDLE QX11Info_colormap(QX11InfoH handle)
{
	return (Qt::HANDLE) ((QX11Info *)handle)->colormap();
}

C_EXPORT bool QX11Info_defaultColormap(QX11InfoH handle)
{
	return (bool) ((QX11Info *)handle)->defaultColormap();
}

C_EXPORT void* QX11Info_visual(QX11InfoH handle)
{
	return (void*) ((QX11Info *)handle)->visual();
}

C_EXPORT bool QX11Info_defaultVisual(QX11InfoH handle)
{
	return (bool) ((QX11Info *)handle)->defaultVisual();
}

C_EXPORT int QX11Info_appScreen()
{
	return (int) QX11Info::appScreen();
}

C_EXPORT int QX11Info_appDepth(int screen)
{
	return (int) QX11Info::appDepth(screen);
}

C_EXPORT int QX11Info_appCells(int screen)
{
	return (int) QX11Info::appCells(screen);
}

C_EXPORT Qt::HANDLE QX11Info_appColormap(int screen)
{
	return (Qt::HANDLE) QX11Info::appColormap(screen);
}

C_EXPORT void* QX11Info_appVisual(int screen)
{
	return (void*) QX11Info::appVisual(screen);
}

C_EXPORT Qt::HANDLE QX11Info_appRootWindow(int screen)
{
	return (Qt::HANDLE) QX11Info::appRootWindow(screen);
}

C_EXPORT bool QX11Info_appDefaultColormap(int screen)
{
	return (bool) QX11Info::appDefaultColormap(screen);
}

C_EXPORT bool QX11Info_appDefaultVisual(int screen)
{
	return (bool) QX11Info::appDefaultVisual(screen);
}

C_EXPORT int QX11Info_appDpiX(int screen)
{
	return (int) QX11Info::appDpiX(screen);
}

C_EXPORT int QX11Info_appDpiY(int screen)
{
	return (int) QX11Info::appDpiY(screen);
}

C_EXPORT void QX11Info_setAppDpiX(int screen, int dpi)
{
	QX11Info::setAppDpiX(screen, dpi);
}

C_EXPORT void QX11Info_setAppDpiY(int screen, int dpi)
{
	QX11Info::setAppDpiY(screen, dpi);
}

C_EXPORT unsigned long QX11Info_appTime()
{
	return (unsigned long) QX11Info::appTime();
}

C_EXPORT unsigned long QX11Info_appUserTime()
{
	return (unsigned long) QX11Info::appUserTime();
}

C_EXPORT void QX11Info_setAppTime(unsigned long time)
{
	QX11Info::setAppTime(time);
}

C_EXPORT void QX11Info_setAppUserTime(unsigned long time)
{
	QX11Info::setAppUserTime(time);
}

C_EXPORT bool QX11Info_isCompositingManagerRunning()
{
	return (bool) QX11Info::isCompositingManagerRunning();
}

#endif
