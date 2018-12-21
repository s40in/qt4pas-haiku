//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebpage_hook.h"

C_EXPORT QWebPage_hookH QWebPage_hook_create(QObjectH handle)
{
	return (QWebPage_hookH) new QWebPage_hook((QObject*)handle);
}

C_EXPORT void QWebPage_hook_destroy(QWebPage_hookH handle)
{
	delete (QWebPage_hook *)handle;
}

C_EXPORT void QWebPage_hook_hook_loadStarted(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_loadStarted(hook);
}

C_EXPORT void QWebPage_hook_hook_loadProgress(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_loadProgress(hook);
}

C_EXPORT void QWebPage_hook_hook_loadFinished(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_loadFinished(hook);
}

C_EXPORT void QWebPage_hook_hook_linkHovered(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_linkHovered(hook);
}

C_EXPORT void QWebPage_hook_hook_statusBarMessage(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_statusBarMessage(hook);
}

C_EXPORT void QWebPage_hook_hook_selectionChanged(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_selectionChanged(hook);
}

C_EXPORT void QWebPage_hook_hook_frameCreated(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_frameCreated(hook);
}

C_EXPORT void QWebPage_hook_hook_geometryChangeRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_geometryChangeRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_repaintRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_repaintRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_scrollRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_scrollRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_windowCloseRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_windowCloseRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_printRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_printRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_linkClicked(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_linkClicked(hook);
}

C_EXPORT void QWebPage_hook_hook_toolBarVisibilityChangeRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_toolBarVisibilityChangeRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_statusBarVisibilityChangeRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_statusBarVisibilityChangeRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_menuBarVisibilityChangeRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_menuBarVisibilityChangeRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_unsupportedContent(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_unsupportedContent(hook);
}

C_EXPORT void QWebPage_hook_hook_downloadRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_downloadRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_microFocusChanged(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_microFocusChanged(hook);
}

C_EXPORT void QWebPage_hook_hook_contentsChanged(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_contentsChanged(hook);
}

C_EXPORT void QWebPage_hook_hook_databaseQuotaExceeded(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_databaseQuotaExceeded(hook);
}

C_EXPORT void QWebPage_hook_hook_saveFrameStateRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_saveFrameStateRequested(hook);
}

C_EXPORT void QWebPage_hook_hook_restoreFrameStateRequested(QWebPage_hookH handle, QHookH hook)
{
	((QWebPage_hook *)handle)->hook_restoreFrameStateRequested(hook);
}

