//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qdockwidget_hook.h"

C_EXPORT QDockWidget_hookH QDockWidget_hook_create(QObjectH handle)
{
	return (QDockWidget_hookH) new QDockWidget_hook((QObject*)handle);
}

C_EXPORT void QDockWidget_hook_destroy(QDockWidget_hookH handle)
{
	delete (QDockWidget_hook *)handle;
}

C_EXPORT void QDockWidget_hook_hook_featuresChanged(QDockWidget_hookH handle, QHookH hook)
{
	((QDockWidget_hook *)handle)->hook_featuresChanged(hook);
}

C_EXPORT void QDockWidget_hook_hook_topLevelChanged(QDockWidget_hookH handle, QHookH hook)
{
	((QDockWidget_hook *)handle)->hook_topLevelChanged(hook);
}

C_EXPORT void QDockWidget_hook_hook_allowedAreasChanged(QDockWidget_hookH handle, QHookH hook)
{
	((QDockWidget_hook *)handle)->hook_allowedAreasChanged(hook);
}

C_EXPORT void QDockWidget_hook_hook_visibilityChanged(QDockWidget_hookH handle, QHookH hook)
{
	((QDockWidget_hook *)handle)->hook_visibilityChanged(hook);
}

C_EXPORT void QDockWidget_hook_hook_dockLocationChanged(QDockWidget_hookH handle, QHookH hook)
{
	((QDockWidget_hook *)handle)->hook_dockLocationChanged(hook);
}

