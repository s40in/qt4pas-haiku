//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebview_hook.h"

C_EXPORT QWebView_hookH QWebView_hook_create(QObjectH handle)
{
	return (QWebView_hookH) new QWebView_hook((QObject*)handle);
}

C_EXPORT void QWebView_hook_destroy(QWebView_hookH handle)
{
	delete (QWebView_hook *)handle;
}

C_EXPORT void QWebView_hook_hook_loadStarted(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_loadStarted(hook);
}

C_EXPORT void QWebView_hook_hook_loadProgress(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_loadProgress(hook);
}

C_EXPORT void QWebView_hook_hook_loadFinished(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_loadFinished(hook);
}

C_EXPORT void QWebView_hook_hook_titleChanged(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_titleChanged(hook);
}

C_EXPORT void QWebView_hook_hook_statusBarMessage(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_statusBarMessage(hook);
}

C_EXPORT void QWebView_hook_hook_linkClicked(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_linkClicked(hook);
}

C_EXPORT void QWebView_hook_hook_selectionChanged(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_selectionChanged(hook);
}

C_EXPORT void QWebView_hook_hook_iconChanged(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_iconChanged(hook);
}

C_EXPORT void QWebView_hook_hook_urlChanged(QWebView_hookH handle, QHookH hook)
{
	((QWebView_hook *)handle)->hook_urlChanged(hook);
}

