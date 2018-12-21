//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qprocess_hook.h"

C_EXPORT QProcess_hookH QProcess_hook_create(QObjectH handle)
{
	return (QProcess_hookH) new QProcess_hook((QObject*)handle);
}

C_EXPORT void QProcess_hook_destroy(QProcess_hookH handle)
{
	delete (QProcess_hook *)handle;
}

C_EXPORT void QProcess_hook_hook_started(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_started(hook);
}

C_EXPORT void QProcess_hook_hook_finished(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_finished(hook);
}

C_EXPORT void QProcess_hook_hook_finished2(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_finished2(hook);
}

C_EXPORT void QProcess_hook_hook_error(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_error(hook);
}

C_EXPORT void QProcess_hook_hook_stateChanged(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_stateChanged(hook);
}

C_EXPORT void QProcess_hook_hook_readyReadStandardOutput(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_readyReadStandardOutput(hook);
}

C_EXPORT void QProcess_hook_hook_readyReadStandardError(QProcess_hookH handle, QHookH hook)
{
	((QProcess_hook *)handle)->hook_readyReadStandardError(hook);
}

