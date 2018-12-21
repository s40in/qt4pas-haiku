//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwidget_hook.h"

C_EXPORT QWidget_hookH QWidget_hook_create(QObjectH handle)
{
	return (QWidget_hookH) new QWidget_hook((QObject*)handle);
}

C_EXPORT void QWidget_hook_destroy(QWidget_hookH handle)
{
	delete (QWidget_hook *)handle;
}

C_EXPORT void QWidget_hook_hook_customContextMenuRequested(QWidget_hookH handle, QHookH hook)
{
	((QWidget_hook *)handle)->hook_customContextMenuRequested(hook);
}

