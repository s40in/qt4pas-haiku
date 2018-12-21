//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTcpSocketH QTcpSocket_create(QObjectH parent)
{
	return (QTcpSocketH) new QTcpSocket((QObject*)parent);
}

C_EXPORT void QTcpSocket_destroy(QTcpSocketH handle)
{
	delete (QTcpSocket *)handle;
}

