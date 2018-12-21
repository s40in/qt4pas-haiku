//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QAbstractSocketH QAbstractSocket_create(QAbstractSocket::SocketType socketType, QObjectH parent)
{
	return (QAbstractSocketH) new QAbstractSocket(socketType, (QObject*)parent);
}

C_EXPORT void QAbstractSocket_destroy(QAbstractSocketH handle)
{
	delete (QAbstractSocket *)handle;
}

C_EXPORT void QAbstractSocket_connectToHost(QAbstractSocketH handle, PWideString hostName, quint16 port, unsigned int mode)
{
	QString t_hostName;
	copyPWideStringToQString(hostName, t_hostName);
	((QAbstractSocket *)handle)->connectToHost(t_hostName, port, (QIODevice::OpenMode)mode);
}

C_EXPORT void QAbstractSocket_connectToHost2(QAbstractSocketH handle, const QHostAddressH address, quint16 port, unsigned int mode)
{
	((QAbstractSocket *)handle)->connectToHost(*(const QHostAddress*)address, port, (QIODevice::OpenMode)mode);
}

C_EXPORT void QAbstractSocket_disconnectFromHost(QAbstractSocketH handle)
{
	((QAbstractSocket *)handle)->disconnectFromHost();
}

C_EXPORT bool QAbstractSocket_isValid(QAbstractSocketH handle)
{
	return (bool) ((QAbstractSocket *)handle)->isValid();
}

C_EXPORT qint64 QAbstractSocket_bytesAvailable(QAbstractSocketH handle)
{
	return (qint64) ((QAbstractSocket *)handle)->bytesAvailable();
}

C_EXPORT qint64 QAbstractSocket_bytesToWrite(QAbstractSocketH handle)
{
	return (qint64) ((QAbstractSocket *)handle)->bytesToWrite();
}

C_EXPORT bool QAbstractSocket_canReadLine(QAbstractSocketH handle)
{
	return (bool) ((QAbstractSocket *)handle)->canReadLine();
}

C_EXPORT quint16 QAbstractSocket_localPort(QAbstractSocketH handle)
{
	return (quint16) ((QAbstractSocket *)handle)->localPort();
}

C_EXPORT void QAbstractSocket_localAddress(QAbstractSocketH handle, QHostAddressH retval)
{
	*(QHostAddress *)retval = ((QAbstractSocket *)handle)->localAddress();
}

C_EXPORT quint16 QAbstractSocket_peerPort(QAbstractSocketH handle)
{
	return (quint16) ((QAbstractSocket *)handle)->peerPort();
}

C_EXPORT void QAbstractSocket_peerAddress(QAbstractSocketH handle, QHostAddressH retval)
{
	*(QHostAddress *)retval = ((QAbstractSocket *)handle)->peerAddress();
}

C_EXPORT void QAbstractSocket_peerName(QAbstractSocketH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAbstractSocket *)handle)->peerName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT qint64 QAbstractSocket_readBufferSize(QAbstractSocketH handle)
{
	return (qint64) ((QAbstractSocket *)handle)->readBufferSize();
}

C_EXPORT void QAbstractSocket_setReadBufferSize(QAbstractSocketH handle, qint64 size)
{
	((QAbstractSocket *)handle)->setReadBufferSize(size);
}

C_EXPORT void QAbstractSocket_abort(QAbstractSocketH handle)
{
	((QAbstractSocket *)handle)->abort();
}

C_EXPORT int QAbstractSocket_socketDescriptor(QAbstractSocketH handle)
{
	return (int) ((QAbstractSocket *)handle)->socketDescriptor();
}

C_EXPORT QAbstractSocket::SocketType QAbstractSocket_socketType(QAbstractSocketH handle)
{
	return (QAbstractSocket::SocketType) ((QAbstractSocket *)handle)->socketType();
}

C_EXPORT QAbstractSocket::SocketError QAbstractSocket_error(QAbstractSocketH handle)
{
	return (QAbstractSocket::SocketError) ((QAbstractSocket *)handle)->error();
}

C_EXPORT void QAbstractSocket_close(QAbstractSocketH handle)
{
	((QAbstractSocket *)handle)->close();
}

C_EXPORT bool QAbstractSocket_isSequential(QAbstractSocketH handle)
{
	return (bool) ((QAbstractSocket *)handle)->isSequential();
}

C_EXPORT bool QAbstractSocket_atEnd(QAbstractSocketH handle)
{
	return (bool) ((QAbstractSocket *)handle)->atEnd();
}

C_EXPORT bool QAbstractSocket_flush(QAbstractSocketH handle)
{
	return (bool) ((QAbstractSocket *)handle)->flush();
}

C_EXPORT bool QAbstractSocket_waitForConnected(QAbstractSocketH handle, int msecs)
{
	return (bool) ((QAbstractSocket *)handle)->waitForConnected(msecs);
}

C_EXPORT bool QAbstractSocket_waitForReadyRead(QAbstractSocketH handle, int msecs)
{
	return (bool) ((QAbstractSocket *)handle)->waitForReadyRead(msecs);
}

C_EXPORT bool QAbstractSocket_waitForBytesWritten(QAbstractSocketH handle, int msecs)
{
	return (bool) ((QAbstractSocket *)handle)->waitForBytesWritten(msecs);
}

C_EXPORT bool QAbstractSocket_waitForDisconnected(QAbstractSocketH handle, int msecs)
{
	return (bool) ((QAbstractSocket *)handle)->waitForDisconnected(msecs);
}

C_EXPORT void QAbstractSocket_setProxy(QAbstractSocketH handle, const QNetworkProxyH networkProxy)
{
	((QAbstractSocket *)handle)->setProxy(*(const QNetworkProxy*)networkProxy);
}

C_EXPORT void QAbstractSocket_proxy(QAbstractSocketH handle, QNetworkProxyH retval)
{
	*(QNetworkProxy *)retval = ((QAbstractSocket *)handle)->proxy();
}

