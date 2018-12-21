//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qstackedwidget_hook.h"

C_EXPORT QStackedWidget_hookH QStackedWidget_hook_create(QObjectH handle)
{
	return (QStackedWidget_hookH) new QStackedWidget_hook((QObject*)handle);
}

C_EXPORT void QStackedWidget_hook_destroy(QStackedWidget_hookH handle)
{
	delete (QStackedWidget_hook *)handle;
}

C_EXPORT void QStackedWidget_hook_hook_currentChanged(QStackedWidget_hookH handle, QHookH hook)
{
	((QStackedWidget_hook *)handle)->hook_currentChanged(hook);
}

C_EXPORT void QStackedWidget_hook_hook_widgetRemoved(QStackedWidget_hookH handle, QHookH hook)
{
	((QStackedWidget_hook *)handle)->hook_widgetRemoved(hook);
}

