//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qobject_hook.h"

C_EXPORT QObject_hookH QObject_hook_create(QObjectH handle)
{
	return (QObject_hookH) new QObject_hook((QObject*)handle);
}

C_EXPORT void QObject_hook_destroy(QObject_hookH handle)
{
	delete (QObject_hook *)handle;
}

C_EXPORT void QObject_hook_hook_events(QObject_hookH handle, QHookH hook)
{
	((QObject_hook *)handle)->hook_events(hook);
}

C_EXPORT void QObject_hook_hook_destroyed(QObject_hookH handle, QHookH hook)
{
	((QObject_hook *)handle)->hook_destroyed(hook);
}

