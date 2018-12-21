//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractitemview_hook.h"

C_EXPORT QAbstractItemView_hookH QAbstractItemView_hook_create(QObjectH handle)
{
	return (QAbstractItemView_hookH) new QAbstractItemView_hook((QObject*)handle);
}

C_EXPORT void QAbstractItemView_hook_destroy(QAbstractItemView_hookH handle)
{
	delete (QAbstractItemView_hook *)handle;
}

C_EXPORT void QAbstractItemView_hook_hook_pressed(QAbstractItemView_hookH handle, QHookH hook)
{
	((QAbstractItemView_hook *)handle)->hook_pressed(hook);
}

C_EXPORT void QAbstractItemView_hook_hook_clicked(QAbstractItemView_hookH handle, QHookH hook)
{
	((QAbstractItemView_hook *)handle)->hook_clicked(hook);
}

C_EXPORT void QAbstractItemView_hook_hook_doubleClicked(QAbstractItemView_hookH handle, QHookH hook)
{
	((QAbstractItemView_hook *)handle)->hook_doubleClicked(hook);
}

C_EXPORT void QAbstractItemView_hook_hook_activated(QAbstractItemView_hookH handle, QHookH hook)
{
	((QAbstractItemView_hook *)handle)->hook_activated(hook);
}

C_EXPORT void QAbstractItemView_hook_hook_entered(QAbstractItemView_hookH handle, QHookH hook)
{
	((QAbstractItemView_hook *)handle)->hook_entered(hook);
}

C_EXPORT void QAbstractItemView_hook_hook_viewportEntered(QAbstractItemView_hookH handle, QHookH hook)
{
	((QAbstractItemView_hook *)handle)->hook_viewportEntered(hook);
}

