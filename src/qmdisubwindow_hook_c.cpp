//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qmdisubwindow_hook.h"

C_EXPORT QMdiSubWindow_hookH QMdiSubWindow_hook_create(QObjectH handle)
{
	return (QMdiSubWindow_hookH) new QMdiSubWindow_hook((QObject*)handle);
}

C_EXPORT void QMdiSubWindow_hook_destroy(QMdiSubWindow_hookH handle)
{
	delete (QMdiSubWindow_hook *)handle;
}

C_EXPORT void QMdiSubWindow_hook_hook_windowStateChanged(QMdiSubWindow_hookH handle, QHookH hook)
{
	((QMdiSubWindow_hook *)handle)->hook_windowStateChanged(hook);
}

C_EXPORT void QMdiSubWindow_hook_hook_aboutToActivate(QMdiSubWindow_hookH handle, QHookH hook)
{
	((QMdiSubWindow_hook *)handle)->hook_aboutToActivate(hook);
}

