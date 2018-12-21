//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSslCipherH QSslCipher_create()
{
	return (QSslCipherH) new QSslCipher();
}

C_EXPORT void QSslCipher_destroy(QSslCipherH handle)
{
	delete (QSslCipher *)handle;
}

C_EXPORT QSslCipherH QSslCipher_create2(PWideString name, QSsl::SslProtocol protocol)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	return (QSslCipherH) new QSslCipher(t_name, protocol);
}

C_EXPORT QSslCipherH QSslCipher_create3(const QSslCipherH other)
{
	return (QSslCipherH) new QSslCipher(*(const QSslCipher*)other);
}

C_EXPORT bool QSslCipher_isNull(QSslCipherH handle)
{
	return (bool) ((QSslCipher *)handle)->isNull();
}

C_EXPORT void QSslCipher_name(QSslCipherH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSslCipher *)handle)->name();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QSslCipher_supportedBits(QSslCipherH handle)
{
	return (int) ((QSslCipher *)handle)->supportedBits();
}

C_EXPORT int QSslCipher_usedBits(QSslCipherH handle)
{
	return (int) ((QSslCipher *)handle)->usedBits();
}

C_EXPORT void QSslCipher_keyExchangeMethod(QSslCipherH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSslCipher *)handle)->keyExchangeMethod();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QSslCipher_authenticationMethod(QSslCipherH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSslCipher *)handle)->authenticationMethod();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QSslCipher_encryptionMethod(QSslCipherH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSslCipher *)handle)->encryptionMethod();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QSslCipher_protocolString(QSslCipherH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSslCipher *)handle)->protocolString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QSsl::SslProtocol QSslCipher_protocol(QSslCipherH handle)
{
	return (QSsl::SslProtocol) ((QSslCipher *)handle)->protocol();
}

