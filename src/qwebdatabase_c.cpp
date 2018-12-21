//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWebDatabaseH QWebDatabase_create(const QWebDatabaseH other)
{
	return (QWebDatabaseH) new QWebDatabase(*(const QWebDatabase*)other);
}

C_EXPORT void QWebDatabase_destroy(QWebDatabaseH handle)
{
	delete (QWebDatabase *)handle;
}

C_EXPORT void QWebDatabase_name(QWebDatabaseH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebDatabase *)handle)->name();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebDatabase_displayName(QWebDatabaseH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebDatabase *)handle)->displayName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT qint64 QWebDatabase_expectedSize(QWebDatabaseH handle)
{
	return (qint64) ((QWebDatabase *)handle)->expectedSize();
}

C_EXPORT qint64 QWebDatabase_size(QWebDatabaseH handle)
{
	return (qint64) ((QWebDatabase *)handle)->size();
}

C_EXPORT void QWebDatabase_fileName(QWebDatabaseH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebDatabase *)handle)->fileName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebDatabase_origin(QWebDatabaseH handle, QWebSecurityOriginH retval)
{
	*(QWebSecurityOrigin *)retval = ((QWebDatabase *)handle)->origin();
}

C_EXPORT void QWebDatabase_removeDatabase(const QWebDatabaseH db)
{
	QWebDatabase::removeDatabase(*(const QWebDatabase*)db);
}

