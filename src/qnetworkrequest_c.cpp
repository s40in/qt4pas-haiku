//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QNetworkRequestH QNetworkRequest_create(const QUrlH url)
{
	return (QNetworkRequestH) new QNetworkRequest(*(const QUrl*)url);
}

C_EXPORT void QNetworkRequest_destroy(QNetworkRequestH handle)
{
	delete (QNetworkRequest *)handle;
}

C_EXPORT QNetworkRequestH QNetworkRequest_create2(const QNetworkRequestH other)
{
	return (QNetworkRequestH) new QNetworkRequest(*(const QNetworkRequest*)other);
}

C_EXPORT void QNetworkRequest_url(QNetworkRequestH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QNetworkRequest *)handle)->url();
}

C_EXPORT void QNetworkRequest_setUrl(QNetworkRequestH handle, const QUrlH url)
{
	((QNetworkRequest *)handle)->setUrl(*(const QUrl*)url);
}

C_EXPORT void QNetworkRequest_header(QNetworkRequestH handle, QVariantH retval, QNetworkRequest::KnownHeaders header)
{
	*(QVariant *)retval = ((QNetworkRequest *)handle)->header(header);
}

C_EXPORT void QNetworkRequest_setHeader(QNetworkRequestH handle, QNetworkRequest::KnownHeaders header, const QVariantH value)
{
	((QNetworkRequest *)handle)->setHeader(header, *(const QVariant*)value);
}

C_EXPORT bool QNetworkRequest_hasRawHeader(QNetworkRequestH handle, const QByteArrayH headerName)
{
	return (bool) ((QNetworkRequest *)handle)->hasRawHeader(*(const QByteArray*)headerName);
}

C_EXPORT void QNetworkRequest_rawHeader(QNetworkRequestH handle, QByteArrayH retval, const QByteArrayH headerName)
{
	*(QByteArray *)retval = ((QNetworkRequest *)handle)->rawHeader(*(const QByteArray*)headerName);
}

C_EXPORT void QNetworkRequest_setRawHeader(QNetworkRequestH handle, const QByteArrayH headerName, const QByteArrayH value)
{
	((QNetworkRequest *)handle)->setRawHeader(*(const QByteArray*)headerName, *(const QByteArray*)value);
}

C_EXPORT void QNetworkRequest_attribute(QNetworkRequestH handle, QVariantH retval, QNetworkRequest::Attribute code, const QVariantH defaultValue)
{
	*(QVariant *)retval = ((QNetworkRequest *)handle)->attribute(code, *(const QVariant*)defaultValue);
}

C_EXPORT void QNetworkRequest_setAttribute(QNetworkRequestH handle, QNetworkRequest::Attribute code, const QVariantH value)
{
	((QNetworkRequest *)handle)->setAttribute(code, *(const QVariant*)value);
}

C_EXPORT void QNetworkRequest_sslConfiguration(QNetworkRequestH handle, QSslConfigurationH retval)
{
	*(QSslConfiguration *)retval = ((QNetworkRequest *)handle)->sslConfiguration();
}

C_EXPORT void QNetworkRequest_setSslConfiguration(QNetworkRequestH handle, const QSslConfigurationH configuration)
{
	((QNetworkRequest *)handle)->setSslConfiguration(*(const QSslConfiguration*)configuration);
}

