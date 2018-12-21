//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QAuthenticatorH QAuthenticator_create()
{
	return (QAuthenticatorH) new QAuthenticator();
}

C_EXPORT void QAuthenticator_destroy(QAuthenticatorH handle)
{
	delete (QAuthenticator *)handle;
}

C_EXPORT QAuthenticatorH QAuthenticator_create2(const QAuthenticatorH other)
{
	return (QAuthenticatorH) new QAuthenticator(*(const QAuthenticator*)other);
}

C_EXPORT void QAuthenticator_user(QAuthenticatorH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAuthenticator *)handle)->user();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAuthenticator_setUser(QAuthenticatorH handle, PWideString user)
{
	QString t_user;
	copyPWideStringToQString(user, t_user);
	((QAuthenticator *)handle)->setUser(t_user);
}

C_EXPORT void QAuthenticator_password(QAuthenticatorH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAuthenticator *)handle)->password();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAuthenticator_setPassword(QAuthenticatorH handle, PWideString password)
{
	QString t_password;
	copyPWideStringToQString(password, t_password);
	((QAuthenticator *)handle)->setPassword(t_password);
}

C_EXPORT void QAuthenticator_realm(QAuthenticatorH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAuthenticator *)handle)->realm();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QAuthenticator_isNull(QAuthenticatorH handle)
{
	return (bool) ((QAuthenticator *)handle)->isNull();
}

C_EXPORT void QAuthenticator_detach(QAuthenticatorH handle)
{
	((QAuthenticator *)handle)->detach();
}

