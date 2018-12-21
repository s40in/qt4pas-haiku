//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTcpServerH QTcpServer_create(QObjectH parent)
{
	return (QTcpServerH) new QTcpServer((QObject*)parent);
}

C_EXPORT void QTcpServer_destroy(QTcpServerH handle)
{
	delete (QTcpServer *)handle;
}

C_EXPORT bool QTcpServer_listen(QTcpServerH handle, const QHostAddressH address, quint16 port)
{
	return (bool) ((QTcpServer *)handle)->listen(*(const QHostAddress*)address, port);
}

C_EXPORT void QTcpServer_close(QTcpServerH handle)
{
	((QTcpServer *)handle)->close();
}

C_EXPORT bool QTcpServer_isListening(QTcpServerH handle)
{
	return (bool) ((QTcpServer *)handle)->isListening();
}

C_EXPORT void QTcpServer_setMaxPendingConnections(QTcpServerH handle, int numConnections)
{
	((QTcpServer *)handle)->setMaxPendingConnections(numConnections);
}

C_EXPORT int QTcpServer_maxPendingConnections(QTcpServerH handle)
{
	return (int) ((QTcpServer *)handle)->maxPendingConnections();
}

C_EXPORT quint16 QTcpServer_serverPort(QTcpServerH handle)
{
	return (quint16) ((QTcpServer *)handle)->serverPort();
}

C_EXPORT void QTcpServer_serverAddress(QTcpServerH handle, QHostAddressH retval)
{
	*(QHostAddress *)retval = ((QTcpServer *)handle)->serverAddress();
}

C_EXPORT int QTcpServer_socketDescriptor(QTcpServerH handle)
{
	return (int) ((QTcpServer *)handle)->socketDescriptor();
}

C_EXPORT bool QTcpServer_setSocketDescriptor(QTcpServerH handle, int socketDescriptor)
{
	return (bool) ((QTcpServer *)handle)->setSocketDescriptor(socketDescriptor);
}

C_EXPORT bool QTcpServer_waitForNewConnection(QTcpServerH handle, int msec, bool* timedOut)
{
	return (bool) ((QTcpServer *)handle)->waitForNewConnection(msec, timedOut);
}

C_EXPORT bool QTcpServer_hasPendingConnections(QTcpServerH handle)
{
	return (bool) ((QTcpServer *)handle)->hasPendingConnections();
}

C_EXPORT QTcpSocketH QTcpServer_nextPendingConnection(QTcpServerH handle)
{
	return (QTcpSocketH) ((QTcpServer *)handle)->nextPendingConnection();
}

C_EXPORT QAbstractSocket::SocketError QTcpServer_serverError(QTcpServerH handle)
{
	return (QAbstractSocket::SocketError) ((QTcpServer *)handle)->serverError();
}

C_EXPORT void QTcpServer_errorString(QTcpServerH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTcpServer *)handle)->errorString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTcpServer_setProxy(QTcpServerH handle, const QNetworkProxyH networkProxy)
{
	((QTcpServer *)handle)->setProxy(*(const QNetworkProxy*)networkProxy);
}

C_EXPORT void QTcpServer_proxy(QTcpServerH handle, QNetworkProxyH retval)
{
	*(QNetworkProxy *)retval = ((QTcpServer *)handle)->proxy();
}

