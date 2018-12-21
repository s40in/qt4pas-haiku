//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtoolbar_hook.h"

C_EXPORT QToolBar_hookH QToolBar_hook_create(QObjectH handle)
{
	return (QToolBar_hookH) new QToolBar_hook((QObject*)handle);
}

C_EXPORT void QToolBar_hook_destroy(QToolBar_hookH handle)
{
	delete (QToolBar_hook *)handle;
}

C_EXPORT void QToolBar_hook_hook_actionTriggered(QToolBar_hookH handle, QHookH hook)
{
	((QToolBar_hook *)handle)->hook_actionTriggered(hook);
}

C_EXPORT void QToolBar_hook_hook_movableChanged(QToolBar_hookH handle, QHookH hook)
{
	((QToolBar_hook *)handle)->hook_movableChanged(hook);
}

C_EXPORT void QToolBar_hook_hook_allowedAreasChanged(QToolBar_hookH handle, QHookH hook)
{
	((QToolBar_hook *)handle)->hook_allowedAreasChanged(hook);
}

C_EXPORT void QToolBar_hook_hook_orientationChanged(QToolBar_hookH handle, QHookH hook)
{
	((QToolBar_hook *)handle)->hook_orientationChanged(hook);
}

C_EXPORT void QToolBar_hook_hook_iconSizeChanged(QToolBar_hookH handle, QHookH hook)
{
	((QToolBar_hook *)handle)->hook_iconSizeChanged(hook);
}

C_EXPORT void QToolBar_hook_hook_toolButtonStyleChanged(QToolBar_hookH handle, QHookH hook)
{
	((QToolBar_hook *)handle)->hook_toolButtonStyleChanged(hook);
}

