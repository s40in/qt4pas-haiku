//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QNetworkReply_abort(QNetworkReplyH handle)
{
	((QNetworkReply *)handle)->abort();
}

C_EXPORT void QNetworkReply_close(QNetworkReplyH handle)
{
	((QNetworkReply *)handle)->close();
}

C_EXPORT bool QNetworkReply_isSequential(QNetworkReplyH handle)
{
	return (bool) ((QNetworkReply *)handle)->isSequential();
}

C_EXPORT qint64 QNetworkReply_readBufferSize(QNetworkReplyH handle)
{
	return (qint64) ((QNetworkReply *)handle)->readBufferSize();
}

C_EXPORT void QNetworkReply_setReadBufferSize(QNetworkReplyH handle, qint64 size)
{
	((QNetworkReply *)handle)->setReadBufferSize(size);
}

C_EXPORT QNetworkAccessManagerH QNetworkReply_manager(QNetworkReplyH handle)
{
	return (QNetworkAccessManagerH) ((QNetworkReply *)handle)->manager();
}

C_EXPORT QNetworkAccessManager::Operation QNetworkReply_operation(QNetworkReplyH handle)
{
	return (QNetworkAccessManager::Operation) ((QNetworkReply *)handle)->operation();
}

C_EXPORT void QNetworkReply_request(QNetworkReplyH handle, QNetworkRequestH retval)
{
	*(QNetworkRequest *)retval = ((QNetworkReply *)handle)->request();
}

C_EXPORT QNetworkReply::NetworkError QNetworkReply_error(QNetworkReplyH handle)
{
	return (QNetworkReply::NetworkError) ((QNetworkReply *)handle)->error();
}

C_EXPORT void QNetworkReply_url(QNetworkReplyH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QNetworkReply *)handle)->url();
}

C_EXPORT void QNetworkReply_header(QNetworkReplyH handle, QVariantH retval, QNetworkRequest::KnownHeaders header)
{
	*(QVariant *)retval = ((QNetworkReply *)handle)->header(header);
}

C_EXPORT bool QNetworkReply_hasRawHeader(QNetworkReplyH handle, const QByteArrayH headerName)
{
	return (bool) ((QNetworkReply *)handle)->hasRawHeader(*(const QByteArray*)headerName);
}

C_EXPORT void QNetworkReply_rawHeader(QNetworkReplyH handle, QByteArrayH retval, const QByteArrayH headerName)
{
	*(QByteArray *)retval = ((QNetworkReply *)handle)->rawHeader(*(const QByteArray*)headerName);
}

C_EXPORT void QNetworkReply_attribute(QNetworkReplyH handle, QVariantH retval, QNetworkRequest::Attribute code)
{
	*(QVariant *)retval = ((QNetworkReply *)handle)->attribute(code);
}

C_EXPORT void QNetworkReply_sslConfiguration(QNetworkReplyH handle, QSslConfigurationH retval)
{
	*(QSslConfiguration *)retval = ((QNetworkReply *)handle)->sslConfiguration();
}

C_EXPORT void QNetworkReply_setSslConfiguration(QNetworkReplyH handle, const QSslConfigurationH configuration)
{
	((QNetworkReply *)handle)->setSslConfiguration(*(const QSslConfiguration*)configuration);
}

C_EXPORT void QNetworkReply_ignoreSslErrors(QNetworkReplyH handle)
{
	((QNetworkReply *)handle)->ignoreSslErrors();
}

