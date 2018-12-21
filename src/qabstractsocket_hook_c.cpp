//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractsocket_hook.h"

C_EXPORT QAbstractSocket_hookH QAbstractSocket_hook_create(QObjectH handle)
{
	return (QAbstractSocket_hookH) new QAbstractSocket_hook((QObject*)handle);
}

C_EXPORT void QAbstractSocket_hook_destroy(QAbstractSocket_hookH handle)
{
	delete (QAbstractSocket_hook *)handle;
}

C_EXPORT void QAbstractSocket_hook_hook_hostFound(QAbstractSocket_hookH handle, QHookH hook)
{
	((QAbstractSocket_hook *)handle)->hook_hostFound(hook);
}

C_EXPORT void QAbstractSocket_hook_hook_connected(QAbstractSocket_hookH handle, QHookH hook)
{
	((QAbstractSocket_hook *)handle)->hook_connected(hook);
}

C_EXPORT void QAbstractSocket_hook_hook_disconnected(QAbstractSocket_hookH handle, QHookH hook)
{
	((QAbstractSocket_hook *)handle)->hook_disconnected(hook);
}

C_EXPORT void QAbstractSocket_hook_hook_stateChanged(QAbstractSocket_hookH handle, QHookH hook)
{
	((QAbstractSocket_hook *)handle)->hook_stateChanged(hook);
}

C_EXPORT void QAbstractSocket_hook_hook_error(QAbstractSocket_hookH handle, QHookH hook)
{
	((QAbstractSocket_hook *)handle)->hook_error(hook);
}

C_EXPORT void QAbstractSocket_hook_hook_proxyAuthenticationRequired(QAbstractSocket_hookH handle, QHookH hook)
{
	((QAbstractSocket_hook *)handle)->hook_proxyAuthenticationRequired(hook);
}

