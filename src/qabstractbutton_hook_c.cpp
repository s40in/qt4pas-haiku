//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractbutton_hook.h"

C_EXPORT QAbstractButton_hookH QAbstractButton_hook_create(QObjectH handle)
{
	return (QAbstractButton_hookH) new QAbstractButton_hook((QObject*)handle);
}

C_EXPORT void QAbstractButton_hook_destroy(QAbstractButton_hookH handle)
{
	delete (QAbstractButton_hook *)handle;
}

C_EXPORT void QAbstractButton_hook_hook_pressed(QAbstractButton_hookH handle, QHookH hook)
{
	((QAbstractButton_hook *)handle)->hook_pressed(hook);
}

C_EXPORT void QAbstractButton_hook_hook_released(QAbstractButton_hookH handle, QHookH hook)
{
	((QAbstractButton_hook *)handle)->hook_released(hook);
}

C_EXPORT void QAbstractButton_hook_hook_clicked(QAbstractButton_hookH handle, QHookH hook)
{
	((QAbstractButton_hook *)handle)->hook_clicked(hook);
}

C_EXPORT void QAbstractButton_hook_hook_clicked2(QAbstractButton_hookH handle, QHookH hook)
{
	((QAbstractButton_hook *)handle)->hook_clicked2(hook);
}

C_EXPORT void QAbstractButton_hook_hook_toggled(QAbstractButton_hookH handle, QHookH hook)
{
	((QAbstractButton_hook *)handle)->hook_toggled(hook);
}

