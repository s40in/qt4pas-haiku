//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qudpsocket_hook.h"

C_EXPORT QUdpSocket_hookH QUdpSocket_hook_create(QObjectH handle)
{
	return (QUdpSocket_hookH) new QUdpSocket_hook((QObject*)handle);
}

C_EXPORT void QUdpSocket_hook_destroy(QUdpSocket_hookH handle)
{
	delete (QUdpSocket_hook *)handle;
}

