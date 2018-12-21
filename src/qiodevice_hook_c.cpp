//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qiodevice_hook.h"

C_EXPORT QIODevice_hookH QIODevice_hook_create(QObjectH handle)
{
	return (QIODevice_hookH) new QIODevice_hook((QObject*)handle);
}

C_EXPORT void QIODevice_hook_destroy(QIODevice_hookH handle)
{
	delete (QIODevice_hook *)handle;
}

C_EXPORT void QIODevice_hook_hook_readyRead(QIODevice_hookH handle, QHookH hook)
{
	((QIODevice_hook *)handle)->hook_readyRead(hook);
}

C_EXPORT void QIODevice_hook_hook_bytesWritten(QIODevice_hookH handle, QHookH hook)
{
	((QIODevice_hook *)handle)->hook_bytesWritten(hook);
}

C_EXPORT void QIODevice_hook_hook_aboutToClose(QIODevice_hookH handle, QHookH hook)
{
	((QIODevice_hook *)handle)->hook_aboutToClose(hook);
}

C_EXPORT void QIODevice_hook_hook_readChannelFinished(QIODevice_hookH handle, QHookH hook)
{
	((QIODevice_hook *)handle)->hook_readChannelFinished(hook);
}

