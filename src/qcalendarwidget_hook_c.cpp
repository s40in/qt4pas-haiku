//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qcalendarwidget_hook.h"

C_EXPORT QCalendarWidget_hookH QCalendarWidget_hook_create(QObjectH handle)
{
	return (QCalendarWidget_hookH) new QCalendarWidget_hook((QObject*)handle);
}

C_EXPORT void QCalendarWidget_hook_destroy(QCalendarWidget_hookH handle)
{
	delete (QCalendarWidget_hook *)handle;
}

C_EXPORT void QCalendarWidget_hook_hook_selectionChanged(QCalendarWidget_hookH handle, QHookH hook)
{
	((QCalendarWidget_hook *)handle)->hook_selectionChanged(hook);
}

C_EXPORT void QCalendarWidget_hook_hook_clicked(QCalendarWidget_hookH handle, QHookH hook)
{
	((QCalendarWidget_hook *)handle)->hook_clicked(hook);
}

C_EXPORT void QCalendarWidget_hook_hook_activated(QCalendarWidget_hookH handle, QHookH hook)
{
	((QCalendarWidget_hook *)handle)->hook_activated(hook);
}

C_EXPORT void QCalendarWidget_hook_hook_currentPageChanged(QCalendarWidget_hookH handle, QHookH hook)
{
	((QCalendarWidget_hook *)handle)->hook_currentPageChanged(hook);
}

