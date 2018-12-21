//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSslSocketH QSslSocket_create(QObjectH parent)
{
	return (QSslSocketH) new QSslSocket((QObject*)parent);
}

C_EXPORT void QSslSocket_destroy(QSslSocketH handle)
{
	delete (QSslSocket *)handle;
}

C_EXPORT void QSslSocket_connectToHostEncrypted(QSslSocketH handle, PWideString hostName, quint16 port, unsigned int mode)
{
	QString t_hostName;
	copyPWideStringToQString(hostName, t_hostName);
	((QSslSocket *)handle)->connectToHostEncrypted(t_hostName, port, (QIODevice::OpenMode)mode);
}

C_EXPORT QSslSocket::SslMode QSslSocket_mode(QSslSocketH handle)
{
	return (QSslSocket::SslMode) ((QSslSocket *)handle)->mode();
}

C_EXPORT bool QSslSocket_isEncrypted(QSslSocketH handle)
{
	return (bool) ((QSslSocket *)handle)->isEncrypted();
}

C_EXPORT QSsl::SslProtocol QSslSocket_protocol(QSslSocketH handle)
{
	return (QSsl::SslProtocol) ((QSslSocket *)handle)->protocol();
}

C_EXPORT void QSslSocket_setProtocol(QSslSocketH handle, QSsl::SslProtocol protocol)
{
	((QSslSocket *)handle)->setProtocol(protocol);
}

C_EXPORT QSslSocket::PeerVerifyMode QSslSocket_peerVerifyMode(QSslSocketH handle)
{
	return (QSslSocket::PeerVerifyMode) ((QSslSocket *)handle)->peerVerifyMode();
}

C_EXPORT void QSslSocket_setPeerVerifyMode(QSslSocketH handle, QSslSocket::PeerVerifyMode mode)
{
	((QSslSocket *)handle)->setPeerVerifyMode(mode);
}

C_EXPORT int QSslSocket_peerVerifyDepth(QSslSocketH handle)
{
	return (int) ((QSslSocket *)handle)->peerVerifyDepth();
}

C_EXPORT void QSslSocket_setPeerVerifyDepth(QSslSocketH handle, int depth)
{
	((QSslSocket *)handle)->setPeerVerifyDepth(depth);
}

C_EXPORT qint64 QSslSocket_bytesAvailable(QSslSocketH handle)
{
	return (qint64) ((QSslSocket *)handle)->bytesAvailable();
}

C_EXPORT qint64 QSslSocket_bytesToWrite(QSslSocketH handle)
{
	return (qint64) ((QSslSocket *)handle)->bytesToWrite();
}

C_EXPORT bool QSslSocket_canReadLine(QSslSocketH handle)
{
	return (bool) ((QSslSocket *)handle)->canReadLine();
}

C_EXPORT void QSslSocket_close(QSslSocketH handle)
{
	((QSslSocket *)handle)->close();
}

C_EXPORT bool QSslSocket_atEnd(QSslSocketH handle)
{
	return (bool) ((QSslSocket *)handle)->atEnd();
}

C_EXPORT bool QSslSocket_flush(QSslSocketH handle)
{
	return (bool) ((QSslSocket *)handle)->flush();
}

C_EXPORT void QSslSocket_abort(QSslSocketH handle)
{
	((QSslSocket *)handle)->abort();
}

C_EXPORT void QSslSocket_setReadBufferSize(QSslSocketH handle, qint64 size)
{
	((QSslSocket *)handle)->setReadBufferSize(size);
}

C_EXPORT qint64 QSslSocket_encryptedBytesAvailable(QSslSocketH handle)
{
	return (qint64) ((QSslSocket *)handle)->encryptedBytesAvailable();
}

C_EXPORT qint64 QSslSocket_encryptedBytesToWrite(QSslSocketH handle)
{
	return (qint64) ((QSslSocket *)handle)->encryptedBytesToWrite();
}

C_EXPORT void QSslSocket_sslConfiguration(QSslSocketH handle, QSslConfigurationH retval)
{
	*(QSslConfiguration *)retval = ((QSslSocket *)handle)->sslConfiguration();
}

C_EXPORT void QSslSocket_setSslConfiguration(QSslSocketH handle, const QSslConfigurationH config)
{
	((QSslSocket *)handle)->setSslConfiguration(*(const QSslConfiguration*)config);
}

C_EXPORT void QSslSocket_setLocalCertificate(QSslSocketH handle, const QSslCertificateH certificate)
{
	((QSslSocket *)handle)->setLocalCertificate(*(const QSslCertificate*)certificate);
}

C_EXPORT void QSslSocket_setLocalCertificate2(QSslSocketH handle, PWideString fileName, QSsl::EncodingFormat format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QSslSocket *)handle)->setLocalCertificate(t_fileName, format);
}

C_EXPORT void QSslSocket_localCertificate(QSslSocketH handle, QSslCertificateH retval)
{
	*(QSslCertificate *)retval = ((QSslSocket *)handle)->localCertificate();
}

C_EXPORT void QSslSocket_peerCertificate(QSslSocketH handle, QSslCertificateH retval)
{
	*(QSslCertificate *)retval = ((QSslSocket *)handle)->peerCertificate();
}

C_EXPORT void QSslSocket_sessionCipher(QSslSocketH handle, QSslCipherH retval)
{
	*(QSslCipher *)retval = ((QSslSocket *)handle)->sessionCipher();
}

C_EXPORT void QSslSocket_setPrivateKey(QSslSocketH handle, const QSslKeyH key)
{
	((QSslSocket *)handle)->setPrivateKey(*(const QSslKey*)key);
}

C_EXPORT void QSslSocket_setPrivateKey2(QSslSocketH handle, PWideString fileName, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, const QByteArrayH passPhrase)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QSslSocket *)handle)->setPrivateKey(t_fileName, algorithm, format, *(const QByteArray*)passPhrase);
}

C_EXPORT void QSslSocket_privateKey(QSslSocketH handle, QSslKeyH retval)
{
	*(QSslKey *)retval = ((QSslSocket *)handle)->privateKey();
}

C_EXPORT void QSslSocket_setCiphers(QSslSocketH handle, PWideString ciphers)
{
	QString t_ciphers;
	copyPWideStringToQString(ciphers, t_ciphers);
	((QSslSocket *)handle)->setCiphers(t_ciphers);
}

C_EXPORT void QSslSocket_addCaCertificate(QSslSocketH handle, const QSslCertificateH certificate)
{
	((QSslSocket *)handle)->addCaCertificate(*(const QSslCertificate*)certificate);
}

C_EXPORT void QSslSocket_addDefaultCaCertificate(const QSslCertificateH certificate)
{
	QSslSocket::addDefaultCaCertificate(*(const QSslCertificate*)certificate);
}

C_EXPORT bool QSslSocket_waitForConnected(QSslSocketH handle, int msecs)
{
	return (bool) ((QSslSocket *)handle)->waitForConnected(msecs);
}

C_EXPORT bool QSslSocket_waitForEncrypted(QSslSocketH handle, int msecs)
{
	return (bool) ((QSslSocket *)handle)->waitForEncrypted(msecs);
}

C_EXPORT bool QSslSocket_waitForReadyRead(QSslSocketH handle, int msecs)
{
	return (bool) ((QSslSocket *)handle)->waitForReadyRead(msecs);
}

C_EXPORT bool QSslSocket_waitForBytesWritten(QSslSocketH handle, int msecs)
{
	return (bool) ((QSslSocket *)handle)->waitForBytesWritten(msecs);
}

C_EXPORT bool QSslSocket_waitForDisconnected(QSslSocketH handle, int msecs)
{
	return (bool) ((QSslSocket *)handle)->waitForDisconnected(msecs);
}

C_EXPORT bool QSslSocket_supportsSsl()
{
	return (bool) QSslSocket::supportsSsl();
}

C_EXPORT void QSslSocket_startClientEncryption(QSslSocketH handle)
{
	((QSslSocket *)handle)->startClientEncryption();
}

C_EXPORT void QSslSocket_startServerEncryption(QSslSocketH handle)
{
	((QSslSocket *)handle)->startServerEncryption();
}

C_EXPORT void QSslSocket_ignoreSslErrors(QSslSocketH handle)
{
	((QSslSocket *)handle)->ignoreSslErrors();
}

