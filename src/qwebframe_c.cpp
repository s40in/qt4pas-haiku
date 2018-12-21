//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWebHitTestResultH QWebHitTestResult_create()
{
	return (QWebHitTestResultH) new QWebHitTestResult();
}

C_EXPORT void QWebHitTestResult_destroy(QWebHitTestResultH handle)
{
	delete (QWebHitTestResult *)handle;
}

C_EXPORT QWebHitTestResultH QWebHitTestResult_create2(const QWebHitTestResultH other)
{
	return (QWebHitTestResultH) new QWebHitTestResult(*(const QWebHitTestResult*)other);
}

C_EXPORT bool QWebHitTestResult_isNull(QWebHitTestResultH handle)
{
	return (bool) ((QWebHitTestResult *)handle)->isNull();
}

C_EXPORT void QWebHitTestResult_pos(QWebHitTestResultH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QWebHitTestResult *)handle)->pos();
}

C_EXPORT void QWebHitTestResult_boundingRect(QWebHitTestResultH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWebHitTestResult *)handle)->boundingRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QWebHitTestResult_title(QWebHitTestResultH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebHitTestResult *)handle)->title();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebHitTestResult_linkText(QWebHitTestResultH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebHitTestResult *)handle)->linkText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebHitTestResult_linkUrl(QWebHitTestResultH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebHitTestResult *)handle)->linkUrl();
}

C_EXPORT void QWebHitTestResult_linkTitle(QWebHitTestResultH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebHitTestResult *)handle)->linkTitle();
}

C_EXPORT QWebFrameH QWebHitTestResult_linkTargetFrame(QWebHitTestResultH handle)
{
	return (QWebFrameH) ((QWebHitTestResult *)handle)->linkTargetFrame();
}

C_EXPORT void QWebHitTestResult_alternateText(QWebHitTestResultH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebHitTestResult *)handle)->alternateText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebHitTestResult_imageUrl(QWebHitTestResultH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebHitTestResult *)handle)->imageUrl();
}

C_EXPORT void QWebHitTestResult_pixmap(QWebHitTestResultH handle, QPixmapH retval)
{
	*(QPixmap *)retval = ((QWebHitTestResult *)handle)->pixmap();
}

C_EXPORT bool QWebHitTestResult_isContentEditable(QWebHitTestResultH handle)
{
	return (bool) ((QWebHitTestResult *)handle)->isContentEditable();
}

C_EXPORT bool QWebHitTestResult_isContentSelected(QWebHitTestResultH handle)
{
	return (bool) ((QWebHitTestResult *)handle)->isContentSelected();
}

C_EXPORT QWebFrameH QWebHitTestResult_frame(QWebHitTestResultH handle)
{
	return (QWebFrameH) ((QWebHitTestResult *)handle)->frame();
}

C_EXPORT QWebPageH QWebFrame_page(QWebFrameH handle)
{
	return (QWebPageH) ((QWebFrame *)handle)->page();
}

C_EXPORT void QWebFrame_load(QWebFrameH handle, const QUrlH url)
{
	((QWebFrame *)handle)->load(*(const QUrl*)url);
}

C_EXPORT void QWebFrame_load2(QWebFrameH handle, const QNetworkRequestH request, QNetworkAccessManager::Operation operation, const QByteArrayH body)
{
	((QWebFrame *)handle)->load(*(const QNetworkRequest*)request, operation, *(const QByteArray*)body);
}

C_EXPORT void QWebFrame_setHtml(QWebFrameH handle, PWideString html, const QUrlH baseUrl)
{
	QString t_html;
	copyPWideStringToQString(html, t_html);
	((QWebFrame *)handle)->setHtml(t_html, *(const QUrl*)baseUrl);
}

C_EXPORT void QWebFrame_setContent(QWebFrameH handle, const QByteArrayH data, PWideString mimeType, const QUrlH baseUrl)
{
	QString t_mimeType;
	copyPWideStringToQString(mimeType, t_mimeType);
	((QWebFrame *)handle)->setContent(*(const QByteArray*)data, t_mimeType, *(const QUrl*)baseUrl);
}

C_EXPORT void QWebFrame_addToJavaScriptWindowObject(QWebFrameH handle, PWideString name, QObjectH object)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QWebFrame *)handle)->addToJavaScriptWindowObject(t_name, (QObject*)object);
}

C_EXPORT void QWebFrame_toHtml(QWebFrameH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebFrame *)handle)->toHtml();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebFrame_toPlainText(QWebFrameH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebFrame *)handle)->toPlainText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebFrame_renderTreeDump(QWebFrameH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebFrame *)handle)->renderTreeDump();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebFrame_title(QWebFrameH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebFrame *)handle)->title();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebFrame_setUrl(QWebFrameH handle, const QUrlH url)
{
	((QWebFrame *)handle)->setUrl(*(const QUrl*)url);
}

C_EXPORT void QWebFrame_url(QWebFrameH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebFrame *)handle)->url();
}

C_EXPORT void QWebFrame_icon(QWebFrameH handle, QIconH retval)
{
	*(QIcon *)retval = ((QWebFrame *)handle)->icon();
}

C_EXPORT void QWebFrame_frameName(QWebFrameH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebFrame *)handle)->frameName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QWebFrameH QWebFrame_parentFrame(QWebFrameH handle)
{
	return (QWebFrameH) ((QWebFrame *)handle)->parentFrame();
}

C_EXPORT void QWebFrame_childFrames(QWebFrameH handle, PPtrIntArray retval)
{
	QList<QWebFrame*> t_retval;
	t_retval = ((QWebFrame *)handle)->childFrames();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT Qt::ScrollBarPolicy QWebFrame_scrollBarPolicy(QWebFrameH handle, Qt::Orientation orientation)
{
	return (Qt::ScrollBarPolicy) ((QWebFrame *)handle)->scrollBarPolicy(orientation);
}

C_EXPORT void QWebFrame_setScrollBarPolicy(QWebFrameH handle, Qt::Orientation orientation, Qt::ScrollBarPolicy policy)
{
	((QWebFrame *)handle)->setScrollBarPolicy(orientation, policy);
}

C_EXPORT void QWebFrame_setScrollBarValue(QWebFrameH handle, Qt::Orientation orientation, int value)
{
	((QWebFrame *)handle)->setScrollBarValue(orientation, value);
}

C_EXPORT int QWebFrame_scrollBarValue(QWebFrameH handle, Qt::Orientation orientation)
{
	return (int) ((QWebFrame *)handle)->scrollBarValue(orientation);
}

C_EXPORT int QWebFrame_scrollBarMinimum(QWebFrameH handle, Qt::Orientation orientation)
{
	return (int) ((QWebFrame *)handle)->scrollBarMinimum(orientation);
}

C_EXPORT int QWebFrame_scrollBarMaximum(QWebFrameH handle, Qt::Orientation orientation)
{
	return (int) ((QWebFrame *)handle)->scrollBarMaximum(orientation);
}

C_EXPORT void QWebFrame_scroll(QWebFrameH handle, int AnonParam1, int AnonParam2)
{
	((QWebFrame *)handle)->scroll(AnonParam1, AnonParam2);
}

C_EXPORT void QWebFrame_scrollPosition(QWebFrameH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QWebFrame *)handle)->scrollPosition();
}

C_EXPORT void QWebFrame_setScrollPosition(QWebFrameH handle, const QPointH pos)
{
	((QWebFrame *)handle)->setScrollPosition(*(const QPoint*)pos);
}

C_EXPORT void QWebFrame_render(QWebFrameH handle, QPainterH painter, const QRegionH clip)
{
	((QWebFrame *)handle)->render((QPainter*)painter, *(const QRegion*)clip);
}

C_EXPORT void QWebFrame_render2(QWebFrameH handle, QPainterH painter)
{
	((QWebFrame *)handle)->render((QPainter*)painter);
}

C_EXPORT void QWebFrame_setTextSizeMultiplier(QWebFrameH handle, qreal factor)
{
	((QWebFrame *)handle)->setTextSizeMultiplier(factor);
}

C_EXPORT qreal QWebFrame_textSizeMultiplier(QWebFrameH handle)
{
	return (qreal) ((QWebFrame *)handle)->textSizeMultiplier();
}

C_EXPORT qreal QWebFrame_zoomFactor(QWebFrameH handle)
{
	return (qreal) ((QWebFrame *)handle)->zoomFactor();
}

C_EXPORT void QWebFrame_setZoomFactor(QWebFrameH handle, qreal factor)
{
	((QWebFrame *)handle)->setZoomFactor(factor);
}

C_EXPORT void QWebFrame_pos(QWebFrameH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QWebFrame *)handle)->pos();
}

C_EXPORT void QWebFrame_geometry(QWebFrameH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWebFrame *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QWebFrame_contentsSize(QWebFrameH handle, PSize retval)
{
	*(QSize *)retval = ((QWebFrame *)handle)->contentsSize();
}

C_EXPORT void QWebFrame_hitTestContent(QWebFrameH handle, QWebHitTestResultH retval, const QPointH pos)
{
	*(QWebHitTestResult *)retval = ((QWebFrame *)handle)->hitTestContent(*(const QPoint*)pos);
}

C_EXPORT bool QWebFrame_event(QWebFrameH handle, QEventH AnonParam1)
{
	return (bool) ((QWebFrame *)handle)->event((QEvent*)AnonParam1);
}

C_EXPORT void QWebFrame_evaluateJavaScript(QWebFrameH handle, QVariantH retval, PWideString scriptSource)
{
	QString t_scriptSource;
	copyPWideStringToQString(scriptSource, t_scriptSource);
	*(QVariant *)retval = ((QWebFrame *)handle)->evaluateJavaScript(t_scriptSource);
}

C_EXPORT void QWebFrame_print(QWebFrameH handle, QPrinterH printer)
{
	((QWebFrame *)handle)->print((QPrinter*)printer);
}

