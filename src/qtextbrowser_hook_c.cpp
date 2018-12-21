//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtextbrowser_hook.h"

C_EXPORT QTextBrowser_hookH QTextBrowser_hook_create(QObjectH handle)
{
	return (QTextBrowser_hookH) new QTextBrowser_hook((QObject*)handle);
}

C_EXPORT void QTextBrowser_hook_destroy(QTextBrowser_hookH handle)
{
	delete (QTextBrowser_hook *)handle;
}

C_EXPORT void QTextBrowser_hook_hook_backwardAvailable(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_backwardAvailable(hook);
}

C_EXPORT void QTextBrowser_hook_hook_forwardAvailable(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_forwardAvailable(hook);
}

C_EXPORT void QTextBrowser_hook_hook_historyChanged(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_historyChanged(hook);
}

C_EXPORT void QTextBrowser_hook_hook_sourceChanged(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_sourceChanged(hook);
}

C_EXPORT void QTextBrowser_hook_hook_highlighted(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_highlighted(hook);
}

C_EXPORT void QTextBrowser_hook_hook_highlighted2(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_highlighted2(hook);
}

C_EXPORT void QTextBrowser_hook_hook_anchorClicked(QTextBrowser_hookH handle, QHookH hook)
{
	((QTextBrowser_hook *)handle)->hook_anchorClicked(hook);
}

