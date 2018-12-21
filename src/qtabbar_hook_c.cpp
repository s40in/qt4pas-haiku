//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtabbar_hook.h"

C_EXPORT QTabBar_hookH QTabBar_hook_create(QObjectH handle)
{
	return (QTabBar_hookH) new QTabBar_hook((QObject*)handle);
}

C_EXPORT void QTabBar_hook_destroy(QTabBar_hookH handle)
{
	delete (QTabBar_hook *)handle;
}

C_EXPORT void QTabBar_hook_hook_currentChanged(QTabBar_hookH handle, QHookH hook)
{
	((QTabBar_hook *)handle)->hook_currentChanged(hook);
}

C_EXPORT void QTabBar_hook_hook_tabCloseRequested(QTabBar_hookH handle, QHookH hook)
{
	((QTabBar_hook *)handle)->hook_tabCloseRequested(hook);
}

C_EXPORT void QTabBar_hook_hook_tabMoved(QTabBar_hookH handle, QHookH hook)
{
	((QTabBar_hook *)handle)->hook_tabMoved(hook);
}

