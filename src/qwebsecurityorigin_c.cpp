//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QWebSecurityOrigin_allOrigins(PPtrIntArray retval)
{
	QList<QWebSecurityOrigin> t_retval;
	t_retval = QWebSecurityOrigin::allOrigins();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QWebSecurityOrigin_scheme(QWebSecurityOriginH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebSecurityOrigin *)handle)->scheme();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebSecurityOrigin_host(QWebSecurityOriginH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebSecurityOrigin *)handle)->host();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QWebSecurityOrigin_port(QWebSecurityOriginH handle)
{
	return (int) ((QWebSecurityOrigin *)handle)->port();
}

C_EXPORT qint64 QWebSecurityOrigin_databaseUsage(QWebSecurityOriginH handle)
{
	return (qint64) ((QWebSecurityOrigin *)handle)->databaseUsage();
}

C_EXPORT qint64 QWebSecurityOrigin_databaseQuota(QWebSecurityOriginH handle)
{
	return (qint64) ((QWebSecurityOrigin *)handle)->databaseQuota();
}

C_EXPORT void QWebSecurityOrigin_setDatabaseQuota(QWebSecurityOriginH handle, qint64 quota)
{
	((QWebSecurityOrigin *)handle)->setDatabaseQuota(quota);
}

C_EXPORT void QWebSecurityOrigin_databases(QWebSecurityOriginH handle, PPtrIntArray retval)
{
	QList<QWebDatabase> t_retval;
	t_retval = ((QWebSecurityOrigin *)handle)->databases();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT QWebSecurityOriginH QWebSecurityOrigin_create(const QWebSecurityOriginH other)
{
	return (QWebSecurityOriginH) new QWebSecurityOrigin(*(const QWebSecurityOrigin*)other);
}

C_EXPORT void QWebSecurityOrigin_destroy(QWebSecurityOriginH handle)
{
	delete (QWebSecurityOrigin *)handle;
}

