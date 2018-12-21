//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QNetworkProxyQueryH QNetworkProxyQuery_create()
{
	return (QNetworkProxyQueryH) new QNetworkProxyQuery();
}

C_EXPORT void QNetworkProxyQuery_destroy(QNetworkProxyQueryH handle)
{
	delete (QNetworkProxyQuery *)handle;
}

C_EXPORT QNetworkProxyQueryH QNetworkProxyQuery_create2(const QUrlH requestUrl, QNetworkProxyQuery::QueryType queryType)
{
	return (QNetworkProxyQueryH) new QNetworkProxyQuery(*(const QUrl*)requestUrl, queryType);
}

C_EXPORT QNetworkProxyQueryH QNetworkProxyQuery_create3(PWideString hostname, int port, PWideString protocolTag, QNetworkProxyQuery::QueryType queryType)
{
	QString t_hostname;
	QString t_protocolTag;
	copyPWideStringToQString(hostname, t_hostname);
	copyPWideStringToQString(protocolTag, t_protocolTag);
	return (QNetworkProxyQueryH) new QNetworkProxyQuery(t_hostname, port, t_protocolTag, queryType);
}

C_EXPORT QNetworkProxyQueryH QNetworkProxyQuery_create4(quint16 bindPort, PWideString protocolTag, QNetworkProxyQuery::QueryType queryType)
{
	QString t_protocolTag;
	copyPWideStringToQString(protocolTag, t_protocolTag);
	return (QNetworkProxyQueryH) new QNetworkProxyQuery(bindPort, t_protocolTag, queryType);
}

C_EXPORT QNetworkProxyQueryH QNetworkProxyQuery_create5(const QNetworkProxyQueryH other)
{
	return (QNetworkProxyQueryH) new QNetworkProxyQuery(*(const QNetworkProxyQuery*)other);
}

C_EXPORT QNetworkProxyQuery::QueryType QNetworkProxyQuery_queryType(QNetworkProxyQueryH handle)
{
	return (QNetworkProxyQuery::QueryType) ((QNetworkProxyQuery *)handle)->queryType();
}

C_EXPORT void QNetworkProxyQuery_setQueryType(QNetworkProxyQueryH handle, QNetworkProxyQuery::QueryType type)
{
	((QNetworkProxyQuery *)handle)->setQueryType(type);
}

C_EXPORT int QNetworkProxyQuery_peerPort(QNetworkProxyQueryH handle)
{
	return (int) ((QNetworkProxyQuery *)handle)->peerPort();
}

C_EXPORT void QNetworkProxyQuery_setPeerPort(QNetworkProxyQueryH handle, int port)
{
	((QNetworkProxyQuery *)handle)->setPeerPort(port);
}

C_EXPORT void QNetworkProxyQuery_peerHostName(QNetworkProxyQueryH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkProxyQuery *)handle)->peerHostName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkProxyQuery_setPeerHostName(QNetworkProxyQueryH handle, PWideString hostname)
{
	QString t_hostname;
	copyPWideStringToQString(hostname, t_hostname);
	((QNetworkProxyQuery *)handle)->setPeerHostName(t_hostname);
}

C_EXPORT int QNetworkProxyQuery_localPort(QNetworkProxyQueryH handle)
{
	return (int) ((QNetworkProxyQuery *)handle)->localPort();
}

C_EXPORT void QNetworkProxyQuery_setLocalPort(QNetworkProxyQueryH handle, int port)
{
	((QNetworkProxyQuery *)handle)->setLocalPort(port);
}

C_EXPORT void QNetworkProxyQuery_protocolTag(QNetworkProxyQueryH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkProxyQuery *)handle)->protocolTag();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkProxyQuery_setProtocolTag(QNetworkProxyQueryH handle, PWideString protocolTag)
{
	QString t_protocolTag;
	copyPWideStringToQString(protocolTag, t_protocolTag);
	((QNetworkProxyQuery *)handle)->setProtocolTag(t_protocolTag);
}

C_EXPORT void QNetworkProxyQuery_url(QNetworkProxyQueryH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QNetworkProxyQuery *)handle)->url();
}

C_EXPORT void QNetworkProxyQuery_setUrl(QNetworkProxyQueryH handle, const QUrlH url)
{
	((QNetworkProxyQuery *)handle)->setUrl(*(const QUrl*)url);
}

C_EXPORT QNetworkProxyH QNetworkProxy_create()
{
	return (QNetworkProxyH) new QNetworkProxy();
}

C_EXPORT void QNetworkProxy_destroy(QNetworkProxyH handle)
{
	delete (QNetworkProxy *)handle;
}

C_EXPORT QNetworkProxyH QNetworkProxy_create2(QNetworkProxy::ProxyType type, PWideString hostName, quint16 port, PWideString user, PWideString password)
{
	QString t_hostName;
	QString t_user;
	QString t_password;
	copyPWideStringToQString(hostName, t_hostName);
	copyPWideStringToQString(user, t_user);
	copyPWideStringToQString(password, t_password);
	return (QNetworkProxyH) new QNetworkProxy(type, t_hostName, port, t_user, t_password);
}

C_EXPORT QNetworkProxyH QNetworkProxy_create3(const QNetworkProxyH other)
{
	return (QNetworkProxyH) new QNetworkProxy(*(const QNetworkProxy*)other);
}

C_EXPORT void QNetworkProxy_setType(QNetworkProxyH handle, QNetworkProxy::ProxyType type)
{
	((QNetworkProxy *)handle)->setType(type);
}

C_EXPORT QNetworkProxy::ProxyType QNetworkProxy_type(QNetworkProxyH handle)
{
	return (QNetworkProxy::ProxyType) ((QNetworkProxy *)handle)->type();
}

C_EXPORT void QNetworkProxy_setCapabilities(QNetworkProxyH handle, unsigned int capab)
{
	((QNetworkProxy *)handle)->setCapabilities((QNetworkProxy::Capabilities)capab);
}

C_EXPORT unsigned int QNetworkProxy_capabilities(QNetworkProxyH handle)
{
	return (unsigned int) ((QNetworkProxy *)handle)->capabilities();
}

C_EXPORT bool QNetworkProxy_isCachingProxy(QNetworkProxyH handle)
{
	return (bool) ((QNetworkProxy *)handle)->isCachingProxy();
}

C_EXPORT bool QNetworkProxy_isTransparentProxy(QNetworkProxyH handle)
{
	return (bool) ((QNetworkProxy *)handle)->isTransparentProxy();
}

C_EXPORT void QNetworkProxy_setUser(QNetworkProxyH handle, PWideString userName)
{
	QString t_userName;
	copyPWideStringToQString(userName, t_userName);
	((QNetworkProxy *)handle)->setUser(t_userName);
}

C_EXPORT void QNetworkProxy_user(QNetworkProxyH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkProxy *)handle)->user();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkProxy_setPassword(QNetworkProxyH handle, PWideString password)
{
	QString t_password;
	copyPWideStringToQString(password, t_password);
	((QNetworkProxy *)handle)->setPassword(t_password);
}

C_EXPORT void QNetworkProxy_password(QNetworkProxyH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkProxy *)handle)->password();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkProxy_setHostName(QNetworkProxyH handle, PWideString hostName)
{
	QString t_hostName;
	copyPWideStringToQString(hostName, t_hostName);
	((QNetworkProxy *)handle)->setHostName(t_hostName);
}

C_EXPORT void QNetworkProxy_hostName(QNetworkProxyH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QNetworkProxy *)handle)->hostName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QNetworkProxy_setPort(QNetworkProxyH handle, quint16 port)
{
	((QNetworkProxy *)handle)->setPort(port);
}

C_EXPORT quint16 QNetworkProxy_port(QNetworkProxyH handle)
{
	return (quint16) ((QNetworkProxy *)handle)->port();
}

C_EXPORT void QNetworkProxy_setApplicationProxy(const QNetworkProxyH proxy)
{
	QNetworkProxy::setApplicationProxy(*(const QNetworkProxy*)proxy);
}

C_EXPORT void QNetworkProxy_applicationProxy(QNetworkProxyH retval)
{
	*(QNetworkProxy *)retval = QNetworkProxy::applicationProxy();
}

C_EXPORT void QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactoryH factory)
{
	QNetworkProxyFactory::setApplicationProxyFactory((QNetworkProxyFactory*)factory);
}

