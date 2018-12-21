//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtcpsocket_hook.h"

C_EXPORT QTcpSocket_hookH QTcpSocket_hook_create(QObjectH handle)
{
	return (QTcpSocket_hookH) new QTcpSocket_hook((QObject*)handle);
}

C_EXPORT void QTcpSocket_hook_destroy(QTcpSocket_hookH handle)
{
	delete (QTcpSocket_hook *)handle;
}

