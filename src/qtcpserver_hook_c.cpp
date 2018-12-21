//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtcpserver_hook.h"

C_EXPORT QTcpServer_hookH QTcpServer_hook_create(QObjectH handle)
{
	return (QTcpServer_hookH) new QTcpServer_hook((QObject*)handle);
}

C_EXPORT void QTcpServer_hook_destroy(QTcpServer_hookH handle)
{
	delete (QTcpServer_hook *)handle;
}

C_EXPORT void QTcpServer_hook_hook_newConnection(QTcpServer_hookH handle, QHookH hook)
{
	((QTcpServer_hook *)handle)->hook_newConnection(hook);
}

