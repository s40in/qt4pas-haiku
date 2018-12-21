//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWebViewH QWebView_create(QWidgetH parent)
{
	return (QWebViewH) new QWebView((QWidget*)parent);
}

C_EXPORT void QWebView_destroy(QWebViewH handle)
{
	delete (QWebView *)handle;
}

C_EXPORT QWebPageH QWebView_page(QWebViewH handle)
{
	return (QWebPageH) ((QWebView *)handle)->page();
}

C_EXPORT void QWebView_setPage(QWebViewH handle, QWebPageH page)
{
	((QWebView *)handle)->setPage((QWebPage*)page);
}

C_EXPORT void QWebView_load(QWebViewH handle, const QUrlH url)
{
	((QWebView *)handle)->load(*(const QUrl*)url);
}

C_EXPORT void QWebView_load2(QWebViewH handle, const QNetworkRequestH request, QNetworkAccessManager::Operation operation, const QByteArrayH body)
{
	((QWebView *)handle)->load(*(const QNetworkRequest*)request, operation, *(const QByteArray*)body);
}

C_EXPORT void QWebView_setHtml(QWebViewH handle, PWideString html, const QUrlH baseUrl)
{
	QString t_html;
	copyPWideStringToQString(html, t_html);
	((QWebView *)handle)->setHtml(t_html, *(const QUrl*)baseUrl);
}

C_EXPORT void QWebView_setContent(QWebViewH handle, const QByteArrayH data, PWideString mimeType, const QUrlH baseUrl)
{
	QString t_mimeType;
	copyPWideStringToQString(mimeType, t_mimeType);
	((QWebView *)handle)->setContent(*(const QByteArray*)data, t_mimeType, *(const QUrl*)baseUrl);
}

C_EXPORT QWebHistoryH QWebView_history(QWebViewH handle)
{
	return (QWebHistoryH) ((QWebView *)handle)->history();
}

C_EXPORT QWebSettingsH QWebView_settings(QWebViewH handle)
{
	return (QWebSettingsH) ((QWebView *)handle)->settings();
}

C_EXPORT void QWebView_title(QWebViewH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebView *)handle)->title();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebView_setUrl(QWebViewH handle, const QUrlH url)
{
	((QWebView *)handle)->setUrl(*(const QUrl*)url);
}

C_EXPORT void QWebView_url(QWebViewH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebView *)handle)->url();
}

C_EXPORT void QWebView_icon(QWebViewH handle, QIconH retval)
{
	*(QIcon *)retval = ((QWebView *)handle)->icon();
}

C_EXPORT void QWebView_selectedText(QWebViewH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebView *)handle)->selectedText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QActionH QWebView_pageAction(QWebViewH handle, QWebPage::WebAction action)
{
	return (QActionH) ((QWebView *)handle)->pageAction(action);
}

C_EXPORT void QWebView_triggerPageAction(QWebViewH handle, QWebPage::WebAction action, bool checked)
{
	((QWebView *)handle)->triggerPageAction(action, checked);
}

C_EXPORT bool QWebView_isModified(QWebViewH handle)
{
	return (bool) ((QWebView *)handle)->isModified();
}

C_EXPORT void QWebView_inputMethodQuery(QWebViewH handle, QVariantH retval, Qt::InputMethodQuery property)
{
	*(QVariant *)retval = ((QWebView *)handle)->inputMethodQuery(property);
}

C_EXPORT void QWebView_sizeHint(QWebViewH handle, PSize retval)
{
	*(QSize *)retval = ((QWebView *)handle)->sizeHint();
}

C_EXPORT qreal QWebView_zoomFactor(QWebViewH handle)
{
	return (qreal) ((QWebView *)handle)->zoomFactor();
}

C_EXPORT void QWebView_setZoomFactor(QWebViewH handle, qreal factor)
{
	((QWebView *)handle)->setZoomFactor(factor);
}

C_EXPORT void QWebView_setTextSizeMultiplier(QWebViewH handle, qreal factor)
{
	((QWebView *)handle)->setTextSizeMultiplier(factor);
}

C_EXPORT qreal QWebView_textSizeMultiplier(QWebViewH handle)
{
	return (qreal) ((QWebView *)handle)->textSizeMultiplier();
}

C_EXPORT bool QWebView_findText(QWebViewH handle, PWideString subString, unsigned int options)
{
	QString t_subString;
	copyPWideStringToQString(subString, t_subString);
	return (bool) ((QWebView *)handle)->findText(t_subString, (QWebPage::FindFlags)options);
}

C_EXPORT bool QWebView_event(QWebViewH handle, QEventH AnonParam1)
{
	return (bool) ((QWebView *)handle)->event((QEvent*)AnonParam1);
}

C_EXPORT void QWebView_stop(QWebViewH handle)
{
	((QWebView *)handle)->stop();
}

C_EXPORT void QWebView_back(QWebViewH handle)
{
	((QWebView *)handle)->back();
}

C_EXPORT void QWebView_forward(QWebViewH handle)
{
	((QWebView *)handle)->forward();
}

C_EXPORT void QWebView_reload(QWebViewH handle)
{
	((QWebView *)handle)->reload();
}

C_EXPORT void QWebView_print(QWebViewH handle, QPrinterH printer)
{
	((QWebView *)handle)->print((QPrinter*)printer);
}

