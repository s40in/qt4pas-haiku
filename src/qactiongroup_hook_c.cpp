//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qactiongroup_hook.h"

C_EXPORT QActionGroup_hookH QActionGroup_hook_create(QObjectH handle)
{
	return (QActionGroup_hookH) new QActionGroup_hook((QObject*)handle);
}

C_EXPORT void QActionGroup_hook_destroy(QActionGroup_hookH handle)
{
	delete (QActionGroup_hook *)handle;
}

C_EXPORT void QActionGroup_hook_hook_triggered(QActionGroup_hookH handle, QHookH hook)
{
	((QActionGroup_hook *)handle)->hook_triggered(hook);
}

C_EXPORT void QActionGroup_hook_hook_selected(QActionGroup_hookH handle, QHookH hook)
{
	((QActionGroup_hook *)handle)->hook_selected(hook);
}

C_EXPORT void QActionGroup_hook_hook_hovered(QActionGroup_hookH handle, QHookH hook)
{
	((QActionGroup_hook *)handle)->hook_hovered(hook);
}

