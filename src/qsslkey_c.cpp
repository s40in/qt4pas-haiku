//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSslKeyH QSslKey_create()
{
	return (QSslKeyH) new QSslKey();
}

C_EXPORT void QSslKey_destroy(QSslKeyH handle)
{
	delete (QSslKey *)handle;
}

C_EXPORT QSslKeyH QSslKey_create2(const QByteArrayH encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArrayH passPhrase)
{
	return (QSslKeyH) new QSslKey(*(const QByteArray*)encoded, algorithm, format, type, *(const QByteArray*)passPhrase);
}

C_EXPORT QSslKeyH QSslKey_create3(QIODeviceH device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArrayH passPhrase)
{
	return (QSslKeyH) new QSslKey((QIODevice*)device, algorithm, format, type, *(const QByteArray*)passPhrase);
}

C_EXPORT QSslKeyH QSslKey_create4(const QSslKeyH other)
{
	return (QSslKeyH) new QSslKey(*(const QSslKey*)other);
}

C_EXPORT bool QSslKey_isNull(QSslKeyH handle)
{
	return (bool) ((QSslKey *)handle)->isNull();
}

C_EXPORT void QSslKey_clear(QSslKeyH handle)
{
	((QSslKey *)handle)->clear();
}

C_EXPORT int QSslKey_length(QSslKeyH handle)
{
	return (int) ((QSslKey *)handle)->length();
}

C_EXPORT QSsl::KeyType QSslKey_type(QSslKeyH handle)
{
	return (QSsl::KeyType) ((QSslKey *)handle)->type();
}

C_EXPORT QSsl::KeyAlgorithm QSslKey_algorithm(QSslKeyH handle)
{
	return (QSsl::KeyAlgorithm) ((QSslKey *)handle)->algorithm();
}

C_EXPORT void QSslKey_toPem(QSslKeyH handle, QByteArrayH retval, const QByteArrayH passPhrase)
{
	*(QByteArray *)retval = ((QSslKey *)handle)->toPem(*(const QByteArray*)passPhrase);
}

C_EXPORT void QSslKey_toDer(QSslKeyH handle, QByteArrayH retval, const QByteArrayH passPhrase)
{
	*(QByteArray *)retval = ((QSslKey *)handle)->toDer(*(const QByteArray*)passPhrase);
}

C_EXPORT Qt::HANDLE QSslKey_handle(QSslKeyH handle)
{
	return (Qt::HANDLE) ((QSslKey *)handle)->handle();
}

