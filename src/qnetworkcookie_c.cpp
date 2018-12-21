//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QNetworkCookieH QNetworkCookie_create(const QByteArrayH name, const QByteArrayH value)
{
	return (QNetworkCookieH) new QNetworkCookie(*(const QByteArray*)name, *(const QByteArray*)value);
}

C_EXPORT void QNetworkCookie_destroy(QNetworkCookieH handle)
{
	delete (QNetworkCookie *)handle;
}

C_EXPORT QNetworkCookieH QNetworkCookie_create2(const QNetworkCookieH other)
{
	return (QNetworkCookieH) new QNetworkCookie(*(const QNetworkCookie*)other);
}

C_EXPORT bool QNetworkCookie_isSecure(QNetworkCookieH handle)
{
	return (bool) ((QNetworkCookie *)handle)->isSecure();
}

C_EXPORT void QNetworkCookie_setSecure(QNetworkCookieH handle, bool enable)
{
	((QNetworkCookie *)handle)->setSecure(enable);
}

C_EXPORT bool QNetworkCookie_isHttpOnly(QNetworkCookieH handle)
{
	return (bool) ((QNetworkCookie *)handle)->isHttpOnly();
}

C_EXPORT void QNetworkCookie_setHttpOnly(QNetworkCookieH handle, bool enable)
{
	((QNetworkCookie *)handle)->setHttpOnly(enable);
}

C_EXPORT bool QNetworkCookie_isSessionCookie(QNetworkCookieH handle)
{
	return (bool) ((QNetworkCookie *)handle)->isSessionCookie();
}

C_EXPORT void QNetworkCookie_expirationDate(QNetworkCookieH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QNetworkCookie *)handle)->expirationDate();
}

C_EXPORT void QNetworkCookie_setExpirationDate(QNetworkCookieH handle, const QDateTimeH date)
{
	((QNetworkCookie *)handle)->setExpirationDate(*(const QDateTime*)date);
}

C_EXPORT void QNetworkCookie_domain(QNetworkCookieH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkCookie *)handle)->domain();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkCookie_setDomain(QNetworkCookieH handle, PWideString domain)
{
	QString t_domain;
	copyPWideStringToQString(domain, t_domain);
	((QNetworkCookie *)handle)->setDomain(t_domain);
}

C_EXPORT void QNetworkCookie_path(QNetworkCookieH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkCookie *)handle)->path();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkCookie_setPath(QNetworkCookieH handle, PWideString path)
{
	QString t_path;
	copyPWideStringToQString(path, t_path);
	((QNetworkCookie *)handle)->setPath(t_path);
}

C_EXPORT void QNetworkCookie_name(QNetworkCookieH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QNetworkCookie *)handle)->name();
}

C_EXPORT void QNetworkCookie_setName(QNetworkCookieH handle, const QByteArrayH cookieName)
{
	((QNetworkCookie *)handle)->setName(*(const QByteArray*)cookieName);
}

C_EXPORT void QNetworkCookie_value(QNetworkCookieH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QNetworkCookie *)handle)->value();
}

C_EXPORT void QNetworkCookie_setValue(QNetworkCookieH handle, const QByteArrayH value)
{
	((QNetworkCookie *)handle)->setValue(*(const QByteArray*)value);
}

C_EXPORT void QNetworkCookie_toRawForm(QNetworkCookieH handle, QByteArrayH retval, QNetworkCookie::RawForm form)
{
	*(QByteArray *)retval = ((QNetworkCookie *)handle)->toRawForm(form);
}

C_EXPORT QNetworkCookieJarH QNetworkCookieJar_create(QObjectH parent)
{
	return (QNetworkCookieJarH) new QNetworkCookieJar((QObject*)parent);
}

C_EXPORT void QNetworkCookieJar_destroy(QNetworkCookieJarH handle)
{
	delete (QNetworkCookieJar *)handle;
}

