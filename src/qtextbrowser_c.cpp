//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTextBrowserH QTextBrowser_create(QWidgetH parent)
{
	return (QTextBrowserH) new QTextBrowser((QWidget*)parent);
}

C_EXPORT void QTextBrowser_destroy(QTextBrowserH handle)
{
	delete (QTextBrowser *)handle;
}

C_EXPORT void QTextBrowser_source(QTextBrowserH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QTextBrowser *)handle)->source();
}

C_EXPORT void QTextBrowser_searchPaths(QTextBrowserH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QTextBrowser *)handle)->searchPaths();
}

C_EXPORT void QTextBrowser_setSearchPaths(QTextBrowserH handle, const QStringListH paths)
{
	((QTextBrowser *)handle)->setSearchPaths(*(const QStringList*)paths);
}

C_EXPORT void QTextBrowser_loadResource(QTextBrowserH handle, QVariantH retval, int type, const QUrlH name)
{
	*(QVariant *)retval = ((QTextBrowser *)handle)->loadResource(type, *(const QUrl*)name);
}

C_EXPORT bool QTextBrowser_isBackwardAvailable(QTextBrowserH handle)
{
	return (bool) ((QTextBrowser *)handle)->isBackwardAvailable();
}

C_EXPORT bool QTextBrowser_isForwardAvailable(QTextBrowserH handle)
{
	return (bool) ((QTextBrowser *)handle)->isForwardAvailable();
}

C_EXPORT void QTextBrowser_clearHistory(QTextBrowserH handle)
{
	((QTextBrowser *)handle)->clearHistory();
}

C_EXPORT void QTextBrowser_historyTitle(QTextBrowserH handle, PWideString retval, int AnonParam1)
{
	QString t_retval;
	t_retval = ((QTextBrowser *)handle)->historyTitle(AnonParam1);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextBrowser_historyUrl(QTextBrowserH handle, QUrlH retval, int AnonParam1)
{
	*(QUrl *)retval = ((QTextBrowser *)handle)->historyUrl(AnonParam1);
}

C_EXPORT int QTextBrowser_backwardHistoryCount(QTextBrowserH handle)
{
	return (int) ((QTextBrowser *)handle)->backwardHistoryCount();
}

C_EXPORT int QTextBrowser_forwardHistoryCount(QTextBrowserH handle)
{
	return (int) ((QTextBrowser *)handle)->forwardHistoryCount();
}

C_EXPORT bool QTextBrowser_openExternalLinks(QTextBrowserH handle)
{
	return (bool) ((QTextBrowser *)handle)->openExternalLinks();
}

C_EXPORT void QTextBrowser_setOpenExternalLinks(QTextBrowserH handle, bool open)
{
	((QTextBrowser *)handle)->setOpenExternalLinks(open);
}

C_EXPORT bool QTextBrowser_openLinks(QTextBrowserH handle)
{
	return (bool) ((QTextBrowser *)handle)->openLinks();
}

C_EXPORT void QTextBrowser_setOpenLinks(QTextBrowserH handle, bool open)
{
	((QTextBrowser *)handle)->setOpenLinks(open);
}

C_EXPORT void QTextBrowser_setSource(QTextBrowserH handle, const QUrlH name)
{
	((QTextBrowser *)handle)->setSource(*(const QUrl*)name);
}

C_EXPORT void QTextBrowser_backward(QTextBrowserH handle)
{
	((QTextBrowser *)handle)->backward();
}

C_EXPORT void QTextBrowser_forward(QTextBrowserH handle)
{
	((QTextBrowser *)handle)->forward();
}

C_EXPORT void QTextBrowser_home(QTextBrowserH handle)
{
	((QTextBrowser *)handle)->home();
}

C_EXPORT void QTextBrowser_reload(QTextBrowserH handle)
{
	((QTextBrowser *)handle)->reload();
}

