//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtabwidget_hook.h"

C_EXPORT QTabWidget_hookH QTabWidget_hook_create(QObjectH handle)
{
	return (QTabWidget_hookH) new QTabWidget_hook((QObject*)handle);
}

C_EXPORT void QTabWidget_hook_destroy(QTabWidget_hookH handle)
{
	delete (QTabWidget_hook *)handle;
}

C_EXPORT void QTabWidget_hook_hook_currentChanged(QTabWidget_hookH handle, QHookH hook)
{
	((QTabWidget_hook *)handle)->hook_currentChanged(hook);
}

C_EXPORT void QTabWidget_hook_hook_tabCloseRequested(QTabWidget_hookH handle, QHookH hook)
{
	((QTabWidget_hook *)handle)->hook_tabCloseRequested(hook);
}

