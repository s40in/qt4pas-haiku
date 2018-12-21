//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSslConfigurationH QSslConfiguration_create()
{
	return (QSslConfigurationH) new QSslConfiguration();
}

C_EXPORT void QSslConfiguration_destroy(QSslConfigurationH handle)
{
	delete (QSslConfiguration *)handle;
}

C_EXPORT QSslConfigurationH QSslConfiguration_create2(const QSslConfigurationH other)
{
	return (QSslConfigurationH) new QSslConfiguration(*(const QSslConfiguration*)other);
}

C_EXPORT bool QSslConfiguration_isNull(QSslConfigurationH handle)
{
	return (bool) ((QSslConfiguration *)handle)->isNull();
}

C_EXPORT QSsl::SslProtocol QSslConfiguration_protocol(QSslConfigurationH handle)
{
	return (QSsl::SslProtocol) ((QSslConfiguration *)handle)->protocol();
}

C_EXPORT void QSslConfiguration_setProtocol(QSslConfigurationH handle, QSsl::SslProtocol protocol)
{
	((QSslConfiguration *)handle)->setProtocol(protocol);
}

C_EXPORT QSslSocket::PeerVerifyMode QSslConfiguration_peerVerifyMode(QSslConfigurationH handle)
{
	return (QSslSocket::PeerVerifyMode) ((QSslConfiguration *)handle)->peerVerifyMode();
}

C_EXPORT void QSslConfiguration_setPeerVerifyMode(QSslConfigurationH handle, QSslSocket::PeerVerifyMode mode)
{
	((QSslConfiguration *)handle)->setPeerVerifyMode(mode);
}

C_EXPORT int QSslConfiguration_peerVerifyDepth(QSslConfigurationH handle)
{
	return (int) ((QSslConfiguration *)handle)->peerVerifyDepth();
}

C_EXPORT void QSslConfiguration_setPeerVerifyDepth(QSslConfigurationH handle, int depth)
{
	((QSslConfiguration *)handle)->setPeerVerifyDepth(depth);
}

C_EXPORT void QSslConfiguration_localCertificate(QSslConfigurationH handle, QSslCertificateH retval)
{
	*(QSslCertificate *)retval = ((QSslConfiguration *)handle)->localCertificate();
}

C_EXPORT void QSslConfiguration_setLocalCertificate(QSslConfigurationH handle, const QSslCertificateH certificate)
{
	((QSslConfiguration *)handle)->setLocalCertificate(*(const QSslCertificate*)certificate);
}

C_EXPORT void QSslConfiguration_peerCertificate(QSslConfigurationH handle, QSslCertificateH retval)
{
	*(QSslCertificate *)retval = ((QSslConfiguration *)handle)->peerCertificate();
}

C_EXPORT void QSslConfiguration_sessionCipher(QSslConfigurationH handle, QSslCipherH retval)
{
	*(QSslCipher *)retval = ((QSslConfiguration *)handle)->sessionCipher();
}

C_EXPORT void QSslConfiguration_privateKey(QSslConfigurationH handle, QSslKeyH retval)
{
	*(QSslKey *)retval = ((QSslConfiguration *)handle)->privateKey();
}

C_EXPORT void QSslConfiguration_setPrivateKey(QSslConfigurationH handle, const QSslKeyH key)
{
	((QSslConfiguration *)handle)->setPrivateKey(*(const QSslKey*)key);
}

C_EXPORT void QSslConfiguration_defaultConfiguration(QSslConfigurationH retval)
{
	*(QSslConfiguration *)retval = QSslConfiguration::defaultConfiguration();
}

C_EXPORT void QSslConfiguration_setDefaultConfiguration(const QSslConfigurationH configuration)
{
	QSslConfiguration::setDefaultConfiguration(*(const QSslConfiguration*)configuration);
}

