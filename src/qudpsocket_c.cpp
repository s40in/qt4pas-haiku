//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QUdpSocketH QUdpSocket_create(QObjectH parent)
{
	return (QUdpSocketH) new QUdpSocket((QObject*)parent);
}

C_EXPORT void QUdpSocket_destroy(QUdpSocketH handle)
{
	delete (QUdpSocket *)handle;
}

C_EXPORT bool QUdpSocket_bind(QUdpSocketH handle, const QHostAddressH address, quint16 port)
{
	return (bool) ((QUdpSocket *)handle)->bind(*(const QHostAddress*)address, port);
}

C_EXPORT bool QUdpSocket_bind2(QUdpSocketH handle, quint16 port)
{
	return (bool) ((QUdpSocket *)handle)->bind(port);
}

C_EXPORT bool QUdpSocket_bind3(QUdpSocketH handle, const QHostAddressH address, quint16 port, unsigned int mode)
{
	return (bool) ((QUdpSocket *)handle)->bind(*(const QHostAddress*)address, port, (QUdpSocket::BindMode)mode);
}

C_EXPORT bool QUdpSocket_bind4(QUdpSocketH handle, quint16 port, unsigned int mode)
{
	return (bool) ((QUdpSocket *)handle)->bind(port, (QUdpSocket::BindMode)mode);
}

C_EXPORT bool QUdpSocket_hasPendingDatagrams(QUdpSocketH handle)
{
	return (bool) ((QUdpSocket *)handle)->hasPendingDatagrams();
}

C_EXPORT qint64 QUdpSocket_pendingDatagramSize(QUdpSocketH handle)
{
	return (qint64) ((QUdpSocket *)handle)->pendingDatagramSize();
}

C_EXPORT qint64 QUdpSocket_readDatagram(QUdpSocketH handle, char* data, qint64 maxlen, QHostAddressH host, quint16* port)
{
	return (qint64) ((QUdpSocket *)handle)->readDatagram(data, maxlen, (QHostAddress*)host, port);
}

C_EXPORT qint64 QUdpSocket_writeDatagram(QUdpSocketH handle, const char* data, qint64 len, const QHostAddressH host, quint16 port)
{
	return (qint64) ((QUdpSocket *)handle)->writeDatagram(data, len, *(const QHostAddress*)host, port);
}

C_EXPORT qint64 QUdpSocket_writeDatagram2(QUdpSocketH handle, const QByteArrayH datagram, const QHostAddressH host, quint16 port)
{
	return (qint64) ((QUdpSocket *)handle)->writeDatagram(*(const QByteArray*)datagram, *(const QHostAddress*)host, port);
}

