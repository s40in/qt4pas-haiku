//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QUrlH QUrl_create()
{
	return (QUrlH) new QUrl();
}

C_EXPORT void QUrl_destroy(QUrlH handle)
{
	delete (QUrl *)handle;
}

C_EXPORT QUrlH QUrl_create2(PWideString url)
{
	QString t_url;
	copyPWideStringToQString(url, t_url);
	return (QUrlH) new QUrl(t_url);
}

C_EXPORT QUrlH QUrl_create3(PWideString url, QUrl::ParsingMode mode)
{
	QString t_url;
	copyPWideStringToQString(url, t_url);
	return (QUrlH) new QUrl(t_url, mode);
}

C_EXPORT QUrlH QUrl_create4(const QUrlH copy)
{
	return (QUrlH) new QUrl(*(const QUrl*)copy);
}

C_EXPORT void QUrl_setUrl(QUrlH handle, PWideString url)
{
	QString t_url;
	copyPWideStringToQString(url, t_url);
	((QUrl *)handle)->setUrl(t_url);
}

C_EXPORT void QUrl_setUrl2(QUrlH handle, PWideString url, QUrl::ParsingMode mode)
{
	QString t_url;
	copyPWideStringToQString(url, t_url);
	((QUrl *)handle)->setUrl(t_url, mode);
}

C_EXPORT void QUrl_setEncodedUrl(QUrlH handle, const QByteArrayH url)
{
	((QUrl *)handle)->setEncodedUrl(*(const QByteArray*)url);
}

C_EXPORT void QUrl_setEncodedUrl2(QUrlH handle, const QByteArrayH url, QUrl::ParsingMode mode)
{
	((QUrl *)handle)->setEncodedUrl(*(const QByteArray*)url, mode);
}

C_EXPORT bool QUrl_isValid(QUrlH handle)
{
	return (bool) ((QUrl *)handle)->isValid();
}

C_EXPORT bool QUrl_isEmpty(QUrlH handle)
{
	return (bool) ((QUrl *)handle)->isEmpty();
}

C_EXPORT void QUrl_clear(QUrlH handle)
{
	((QUrl *)handle)->clear();
}

C_EXPORT void QUrl_setScheme(QUrlH handle, PWideString scheme)
{
	QString t_scheme;
	copyPWideStringToQString(scheme, t_scheme);
	((QUrl *)handle)->setScheme(t_scheme);
}

C_EXPORT void QUrl_scheme(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->scheme();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setAuthority(QUrlH handle, PWideString authority)
{
	QString t_authority;
	copyPWideStringToQString(authority, t_authority);
	((QUrl *)handle)->setAuthority(t_authority);
}

C_EXPORT void QUrl_authority(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->authority();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setUserInfo(QUrlH handle, PWideString userInfo)
{
	QString t_userInfo;
	copyPWideStringToQString(userInfo, t_userInfo);
	((QUrl *)handle)->setUserInfo(t_userInfo);
}

C_EXPORT void QUrl_userInfo(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->userInfo();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setUserName(QUrlH handle, PWideString userName)
{
	QString t_userName;
	copyPWideStringToQString(userName, t_userName);
	((QUrl *)handle)->setUserName(t_userName);
}

C_EXPORT void QUrl_userName(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->userName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setEncodedUserName(QUrlH handle, const QByteArrayH userName)
{
	((QUrl *)handle)->setEncodedUserName(*(const QByteArray*)userName);
}

C_EXPORT void QUrl_encodedUserName(QUrlH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedUserName();
}

C_EXPORT void QUrl_setPassword(QUrlH handle, PWideString password)
{
	QString t_password;
	copyPWideStringToQString(password, t_password);
	((QUrl *)handle)->setPassword(t_password);
}

C_EXPORT void QUrl_password(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->password();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setEncodedPassword(QUrlH handle, const QByteArrayH password)
{
	((QUrl *)handle)->setEncodedPassword(*(const QByteArray*)password);
}

C_EXPORT void QUrl_encodedPassword(QUrlH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedPassword();
}

C_EXPORT void QUrl_setHost(QUrlH handle, PWideString host)
{
	QString t_host;
	copyPWideStringToQString(host, t_host);
	((QUrl *)handle)->setHost(t_host);
}

C_EXPORT void QUrl_host(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->host();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setEncodedHost(QUrlH handle, const QByteArrayH host)
{
	((QUrl *)handle)->setEncodedHost(*(const QByteArray*)host);
}

C_EXPORT void QUrl_encodedHost(QUrlH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedHost();
}

C_EXPORT void QUrl_setPort(QUrlH handle, int port)
{
	((QUrl *)handle)->setPort(port);
}

C_EXPORT int QUrl_port(QUrlH handle)
{
	return (int) ((QUrl *)handle)->port();
}

C_EXPORT int QUrl_port2(QUrlH handle, int defaultPort)
{
	return (int) ((QUrl *)handle)->port(defaultPort);
}

C_EXPORT void QUrl_setPath(QUrlH handle, PWideString path)
{
	QString t_path;
	copyPWideStringToQString(path, t_path);
	((QUrl *)handle)->setPath(t_path);
}

C_EXPORT void QUrl_path(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->path();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setEncodedPath(QUrlH handle, const QByteArrayH path)
{
	((QUrl *)handle)->setEncodedPath(*(const QByteArray*)path);
}

C_EXPORT void QUrl_encodedPath(QUrlH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedPath();
}

C_EXPORT bool QUrl_hasQuery(QUrlH handle)
{
	return (bool) ((QUrl *)handle)->hasQuery();
}

C_EXPORT void QUrl_setEncodedQuery(QUrlH handle, const QByteArrayH query)
{
	((QUrl *)handle)->setEncodedQuery(*(const QByteArray*)query);
}

C_EXPORT void QUrl_encodedQuery(QUrlH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedQuery();
}

C_EXPORT void QUrl_setQueryDelimiters(QUrlH handle, char valueDelimiter, char pairDelimiter)
{
	((QUrl *)handle)->setQueryDelimiters(valueDelimiter, pairDelimiter);
}

C_EXPORT char QUrl_queryValueDelimiter(QUrlH handle)
{
	return (char) ((QUrl *)handle)->queryValueDelimiter();
}

C_EXPORT char QUrl_queryPairDelimiter(QUrlH handle)
{
	return (char) ((QUrl *)handle)->queryPairDelimiter();
}

C_EXPORT void QUrl_addQueryItem(QUrlH handle, PWideString key, PWideString value)
{
	QString t_key;
	QString t_value;
	copyPWideStringToQString(key, t_key);
	copyPWideStringToQString(value, t_value);
	((QUrl *)handle)->addQueryItem(t_key, t_value);
}

C_EXPORT bool QUrl_hasQueryItem(QUrlH handle, PWideString key)
{
	QString t_key;
	copyPWideStringToQString(key, t_key);
	return (bool) ((QUrl *)handle)->hasQueryItem(t_key);
}

C_EXPORT void QUrl_queryItemValue(QUrlH handle, PWideString retval, PWideString key)
{
	QString t_retval;
	QString t_key;
	copyPWideStringToQString(key, t_key);
	t_retval = ((QUrl *)handle)->queryItemValue(t_key);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_allQueryItemValues(QUrlH handle, QStringListH retval, PWideString key)
{
	QString t_key;
	copyPWideStringToQString(key, t_key);
	*(QStringList *)retval = ((QUrl *)handle)->allQueryItemValues(t_key);
}

C_EXPORT void QUrl_removeQueryItem(QUrlH handle, PWideString key)
{
	QString t_key;
	copyPWideStringToQString(key, t_key);
	((QUrl *)handle)->removeQueryItem(t_key);
}

C_EXPORT void QUrl_removeAllQueryItems(QUrlH handle, PWideString key)
{
	QString t_key;
	copyPWideStringToQString(key, t_key);
	((QUrl *)handle)->removeAllQueryItems(t_key);
}

C_EXPORT void QUrl_addEncodedQueryItem(QUrlH handle, const QByteArrayH key, const QByteArrayH value)
{
	((QUrl *)handle)->addEncodedQueryItem(*(const QByteArray*)key, *(const QByteArray*)value);
}

C_EXPORT bool QUrl_hasEncodedQueryItem(QUrlH handle, const QByteArrayH key)
{
	return (bool) ((QUrl *)handle)->hasEncodedQueryItem(*(const QByteArray*)key);
}

C_EXPORT void QUrl_encodedQueryItemValue(QUrlH handle, QByteArrayH retval, const QByteArrayH key)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedQueryItemValue(*(const QByteArray*)key);
}

C_EXPORT void QUrl_removeEncodedQueryItem(QUrlH handle, const QByteArrayH key)
{
	((QUrl *)handle)->removeEncodedQueryItem(*(const QByteArray*)key);
}

C_EXPORT void QUrl_removeAllEncodedQueryItems(QUrlH handle, const QByteArrayH key)
{
	((QUrl *)handle)->removeAllEncodedQueryItems(*(const QByteArray*)key);
}

C_EXPORT void QUrl_setFragment(QUrlH handle, PWideString fragment)
{
	QString t_fragment;
	copyPWideStringToQString(fragment, t_fragment);
	((QUrl *)handle)->setFragment(t_fragment);
}

C_EXPORT void QUrl_fragment(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->fragment();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_setEncodedFragment(QUrlH handle, const QByteArrayH fragment)
{
	((QUrl *)handle)->setEncodedFragment(*(const QByteArray*)fragment);
}

C_EXPORT void QUrl_encodedFragment(QUrlH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QUrl *)handle)->encodedFragment();
}

C_EXPORT bool QUrl_hasFragment(QUrlH handle)
{
	return (bool) ((QUrl *)handle)->hasFragment();
}

C_EXPORT void QUrl_resolved(QUrlH handle, QUrlH retval, const QUrlH relative)
{
	*(QUrl *)retval = ((QUrl *)handle)->resolved(*(const QUrl*)relative);
}

C_EXPORT bool QUrl_isRelative(QUrlH handle)
{
	return (bool) ((QUrl *)handle)->isRelative();
}

C_EXPORT bool QUrl_isParentOf(QUrlH handle, const QUrlH url)
{
	return (bool) ((QUrl *)handle)->isParentOf(*(const QUrl*)url);
}

C_EXPORT void QUrl_fromLocalFile(QUrlH retval, PWideString localfile)
{
	QString t_localfile;
	copyPWideStringToQString(localfile, t_localfile);
	*(QUrl *)retval = QUrl::fromLocalFile(t_localfile);
}

C_EXPORT void QUrl_toLocalFile(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->toLocalFile();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_toString(QUrlH handle, PWideString retval, unsigned int options)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->toString((QUrl::FormattingOptions)options);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_toEncoded(QUrlH handle, QByteArrayH retval, unsigned int options)
{
	*(QByteArray *)retval = ((QUrl *)handle)->toEncoded((QUrl::FormattingOptions)options);
}

C_EXPORT void QUrl_fromEncoded(QUrlH retval, const QByteArrayH url)
{
	*(QUrl *)retval = QUrl::fromEncoded(*(const QByteArray*)url);
}

C_EXPORT void QUrl_fromEncoded2(QUrlH retval, const QByteArrayH url, QUrl::ParsingMode mode)
{
	*(QUrl *)retval = QUrl::fromEncoded(*(const QByteArray*)url, mode);
}

C_EXPORT void QUrl_detach(QUrlH handle)
{
	((QUrl *)handle)->detach();
}

C_EXPORT bool QUrl_isDetached(QUrlH handle)
{
	return (bool) ((QUrl *)handle)->isDetached();
}

C_EXPORT void QUrl_fromPercentEncoding(PWideString retval, const QByteArrayH AnonParam1)
{
	QString t_retval;
	t_retval = QUrl::fromPercentEncoding(*(const QByteArray*)AnonParam1);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_toPercentEncoding(QByteArrayH retval, PWideString AnonParam1, const QByteArrayH exclude, const QByteArrayH include)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	*(QByteArray *)retval = QUrl::toPercentEncoding(t_AnonParam1, *(const QByteArray*)exclude, *(const QByteArray*)include);
}

C_EXPORT void QUrl_fromPunycode(PWideString retval, const QByteArrayH AnonParam1)
{
	QString t_retval;
	t_retval = QUrl::fromPunycode(*(const QByteArray*)AnonParam1);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_toPunycode(QByteArrayH retval, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	*(QByteArray *)retval = QUrl::toPunycode(t_AnonParam1);
}

C_EXPORT void QUrl_fromAce(PWideString retval, const QByteArrayH AnonParam1)
{
	QString t_retval;
	t_retval = QUrl::fromAce(*(const QByteArray*)AnonParam1);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QUrl_toAce(QByteArrayH retval, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	*(QByteArray *)retval = QUrl::toAce(t_AnonParam1);
}

C_EXPORT void QUrl_idnWhitelist(QStringListH retval)
{
	*(QStringList *)retval = QUrl::idnWhitelist();
}

C_EXPORT void QUrl_setIdnWhitelist(const QStringListH AnonParam1)
{
	QUrl::setIdnWhitelist(*(const QStringList*)AnonParam1);
}

C_EXPORT void QUrl_errorString(QUrlH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QUrl *)handle)->errorString();
	copyQStringToPWideString(t_retval, retval);
}

