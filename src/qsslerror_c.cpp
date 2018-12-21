//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSslErrorH QSslError_create(QSslError::SslError error, const QSslCertificateH certificate)
{
	return (QSslErrorH) new QSslError(error, *(const QSslCertificate*)certificate);
}

C_EXPORT void QSslError_destroy(QSslErrorH handle)
{
	delete (QSslError *)handle;
}

C_EXPORT QSslErrorH QSslError_create2(const QSslErrorH other)
{
	return (QSslErrorH) new QSslError(*(const QSslError*)other);
}

C_EXPORT QSslError::SslError QSslError_error(QSslErrorH handle)
{
	return (QSslError::SslError) ((QSslError *)handle)->error();
}

C_EXPORT void QSslError_errorString(QSslErrorH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSslError *)handle)->errorString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QSslError_certificate(QSslErrorH handle, QSslCertificateH retval)
{
	*(QSslCertificate *)retval = ((QSslError *)handle)->certificate();
}

