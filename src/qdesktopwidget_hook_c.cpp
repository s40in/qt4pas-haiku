//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qdesktopwidget_hook.h"

C_EXPORT QDesktopWidget_hookH QDesktopWidget_hook_create(QObjectH handle)
{
	return (QDesktopWidget_hookH) new QDesktopWidget_hook((QObject*)handle);
}

C_EXPORT void QDesktopWidget_hook_destroy(QDesktopWidget_hookH handle)
{
	delete (QDesktopWidget_hook *)handle;
}

C_EXPORT void QDesktopWidget_hook_hook_resized(QDesktopWidget_hookH handle, QHookH hook)
{
	((QDesktopWidget_hook *)handle)->hook_resized(hook);
}

C_EXPORT void QDesktopWidget_hook_hook_workAreaResized(QDesktopWidget_hookH handle, QHookH hook)
{
	((QDesktopWidget_hook *)handle)->hook_workAreaResized(hook);
}

