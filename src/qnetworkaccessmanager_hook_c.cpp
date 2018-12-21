//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qnetworkaccessmanager_hook.h"

C_EXPORT QNetworkAccessManager_hookH QNetworkAccessManager_hook_create(QObjectH handle)
{
	return (QNetworkAccessManager_hookH) new QNetworkAccessManager_hook((QObject*)handle);
}

C_EXPORT void QNetworkAccessManager_hook_destroy(QNetworkAccessManager_hookH handle)
{
	delete (QNetworkAccessManager_hook *)handle;
}

C_EXPORT void QNetworkAccessManager_hook_hook_proxyAuthenticationRequired(QNetworkAccessManager_hookH handle, QHookH hook)
{
	((QNetworkAccessManager_hook *)handle)->hook_proxyAuthenticationRequired(hook);
}

C_EXPORT void QNetworkAccessManager_hook_hook_authenticationRequired(QNetworkAccessManager_hookH handle, QHookH hook)
{
	((QNetworkAccessManager_hook *)handle)->hook_authenticationRequired(hook);
}

C_EXPORT void QNetworkAccessManager_hook_hook_finished(QNetworkAccessManager_hookH handle, QHookH hook)
{
	((QNetworkAccessManager_hook *)handle)->hook_finished(hook);
}

