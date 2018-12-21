//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebframe_hook.h"

C_EXPORT QWebHitTestResult_hookH QWebHitTestResult_hook_create(QObjectH handle)
{
	return (QWebHitTestResult_hookH) new QWebHitTestResult_hook((QObject*)handle);
}

C_EXPORT void QWebHitTestResult_hook_destroy(QWebHitTestResult_hookH handle)
{
	delete (QWebHitTestResult_hook *)handle;
}

C_EXPORT QWebFrame_hookH QWebFrame_hook_create(QObjectH handle)
{
	return (QWebFrame_hookH) new QWebFrame_hook((QObject*)handle);
}

C_EXPORT void QWebFrame_hook_destroy(QWebFrame_hookH handle)
{
	delete (QWebFrame_hook *)handle;
}

C_EXPORT void QWebFrame_hook_hook_javaScriptWindowObjectCleared(QWebFrame_hookH handle, QHookH hook)
{
	((QWebFrame_hook *)handle)->hook_javaScriptWindowObjectCleared(hook);
}

C_EXPORT void QWebFrame_hook_hook_provisionalLoad(QWebFrame_hookH handle, QHookH hook)
{
	((QWebFrame_hook *)handle)->hook_provisionalLoad(hook);
}

C_EXPORT void QWebFrame_hook_hook_titleChanged(QWebFrame_hookH handle, QHookH hook)
{
	((QWebFrame_hook *)handle)->hook_titleChanged(hook);
}

C_EXPORT void QWebFrame_hook_hook_urlChanged(QWebFrame_hookH handle, QHookH hook)
{
	((QWebFrame_hook *)handle)->hook_urlChanged(hook);
}

C_EXPORT void QWebFrame_hook_hook_initialLayoutCompleted(QWebFrame_hookH handle, QHookH hook)
{
	((QWebFrame_hook *)handle)->hook_initialLayoutCompleted(hook);
}

C_EXPORT void QWebFrame_hook_hook_iconChanged(QWebFrame_hookH handle, QHookH hook)
{
	((QWebFrame_hook *)handle)->hook_iconChanged(hook);
}

