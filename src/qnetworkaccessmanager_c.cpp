//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QNetworkAccessManagerH QNetworkAccessManager_create(QObjectH parent)
{
	return (QNetworkAccessManagerH) new QNetworkAccessManager((QObject*)parent);
}

C_EXPORT void QNetworkAccessManager_destroy(QNetworkAccessManagerH handle)
{
	delete (QNetworkAccessManager *)handle;
}

C_EXPORT void QNetworkAccessManager_proxy(QNetworkAccessManagerH handle, QNetworkProxyH retval)
{
	*(QNetworkProxy *)retval = ((QNetworkAccessManager *)handle)->proxy();
}

C_EXPORT void QNetworkAccessManager_setProxy(QNetworkAccessManagerH handle, const QNetworkProxyH proxy)
{
	((QNetworkAccessManager *)handle)->setProxy(*(const QNetworkProxy*)proxy);
}

C_EXPORT QNetworkProxyFactoryH QNetworkAccessManager_proxyFactory(QNetworkAccessManagerH handle)
{
	return (QNetworkProxyFactoryH) ((QNetworkAccessManager *)handle)->proxyFactory();
}

C_EXPORT void QNetworkAccessManager_setProxyFactory(QNetworkAccessManagerH handle, QNetworkProxyFactoryH factory)
{
	((QNetworkAccessManager *)handle)->setProxyFactory((QNetworkProxyFactory*)factory);
}

C_EXPORT QAbstractNetworkCacheH QNetworkAccessManager_cache(QNetworkAccessManagerH handle)
{
	return (QAbstractNetworkCacheH) ((QNetworkAccessManager *)handle)->cache();
}

C_EXPORT void QNetworkAccessManager_setCache(QNetworkAccessManagerH handle, QAbstractNetworkCacheH cache)
{
	((QNetworkAccessManager *)handle)->setCache((QAbstractNetworkCache*)cache);
}

C_EXPORT QNetworkCookieJarH QNetworkAccessManager_cookieJar(QNetworkAccessManagerH handle)
{
	return (QNetworkCookieJarH) ((QNetworkAccessManager *)handle)->cookieJar();
}

C_EXPORT void QNetworkAccessManager_setCookieJar(QNetworkAccessManagerH handle, QNetworkCookieJarH cookieJar)
{
	((QNetworkAccessManager *)handle)->setCookieJar((QNetworkCookieJar*)cookieJar);
}

C_EXPORT QNetworkReplyH QNetworkAccessManager_head(QNetworkAccessManagerH handle, const QNetworkRequestH request)
{
	return (QNetworkReplyH) ((QNetworkAccessManager *)handle)->head(*(const QNetworkRequest*)request);
}

C_EXPORT QNetworkReplyH QNetworkAccessManager_get(QNetworkAccessManagerH handle, const QNetworkRequestH request)
{
	return (QNetworkReplyH) ((QNetworkAccessManager *)handle)->get(*(const QNetworkRequest*)request);
}

C_EXPORT QNetworkReplyH QNetworkAccessManager_post(QNetworkAccessManagerH handle, const QNetworkRequestH request, QIODeviceH data)
{
	return (QNetworkReplyH) ((QNetworkAccessManager *)handle)->post(*(const QNetworkRequest*)request, (QIODevice*)data);
}

C_EXPORT QNetworkReplyH QNetworkAccessManager_post2(QNetworkAccessManagerH handle, const QNetworkRequestH request, const QByteArrayH data)
{
	return (QNetworkReplyH) ((QNetworkAccessManager *)handle)->post(*(const QNetworkRequest*)request, *(const QByteArray*)data);
}

C_EXPORT QNetworkReplyH QNetworkAccessManager_put(QNetworkAccessManagerH handle, const QNetworkRequestH request, QIODeviceH data)
{
	return (QNetworkReplyH) ((QNetworkAccessManager *)handle)->put(*(const QNetworkRequest*)request, (QIODevice*)data);
}

C_EXPORT QNetworkReplyH QNetworkAccessManager_put2(QNetworkAccessManagerH handle, const QNetworkRequestH request, const QByteArrayH data)
{
	return (QNetworkReplyH) ((QNetworkAccessManager *)handle)->put(*(const QNetworkRequest*)request, *(const QByteArray*)data);
}

