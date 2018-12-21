//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qnetworkreply_hook.h"

C_EXPORT QNetworkReply_hookH QNetworkReply_hook_create(QObjectH handle)
{
	return (QNetworkReply_hookH) new QNetworkReply_hook((QObject*)handle);
}

C_EXPORT void QNetworkReply_hook_destroy(QNetworkReply_hookH handle)
{
	delete (QNetworkReply_hook *)handle;
}

C_EXPORT void QNetworkReply_hook_hook_metaDataChanged(QNetworkReply_hookH handle, QHookH hook)
{
	((QNetworkReply_hook *)handle)->hook_metaDataChanged(hook);
}

C_EXPORT void QNetworkReply_hook_hook_finished(QNetworkReply_hookH handle, QHookH hook)
{
	((QNetworkReply_hook *)handle)->hook_finished(hook);
}

C_EXPORT void QNetworkReply_hook_hook_error(QNetworkReply_hookH handle, QHookH hook)
{
	((QNetworkReply_hook *)handle)->hook_error(hook);
}

C_EXPORT void QNetworkReply_hook_hook_uploadProgress(QNetworkReply_hookH handle, QHookH hook)
{
	((QNetworkReply_hook *)handle)->hook_uploadProgress(hook);
}

C_EXPORT void QNetworkReply_hook_hook_downloadProgress(QNetworkReply_hookH handle, QHookH hook)
{
	((QNetworkReply_hook *)handle)->hook_downloadProgress(hook);
}

