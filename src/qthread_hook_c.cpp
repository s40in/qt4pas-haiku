//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qthread_hook.h"

C_EXPORT QThread_hookH QThread_hook_create(QObjectH handle)
{
	return (QThread_hookH) new QThread_hook((QObject*)handle);
}

C_EXPORT void QThread_hook_destroy(QThread_hookH handle)
{
	delete (QThread_hook *)handle;
}

C_EXPORT void QThread_hook_hook_started(QThread_hookH handle, QHookH hook)
{
	((QThread_hook *)handle)->hook_started(hook);
}

C_EXPORT void QThread_hook_hook_finished(QThread_hookH handle, QHookH hook)
{
	((QThread_hook *)handle)->hook_finished(hook);
}

C_EXPORT void QThread_hook_hook_terminated(QThread_hookH handle, QHookH hook)
{
	((QThread_hook *)handle)->hook_terminated(hook);
}

