//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFontMetricsH QFontMetrics_create(const QFontH AnonParam1)
{
	return (QFontMetricsH) new QFontMetrics(*(const QFont*)AnonParam1);
}

C_EXPORT void QFontMetrics_destroy(QFontMetricsH handle)
{
	delete (QFontMetrics *)handle;
}

C_EXPORT QFontMetricsH QFontMetrics_create2(const QFontH AnonParam1, QPaintDeviceH pd)
{
	return (QFontMetricsH) new QFontMetrics(*(const QFont*)AnonParam1, (QPaintDevice*)pd);
}

C_EXPORT QFontMetricsH QFontMetrics_create3(const QFontMetricsH AnonParam1)
{
	return (QFontMetricsH) new QFontMetrics(*(const QFontMetrics*)AnonParam1);
}

C_EXPORT int QFontMetrics_ascent(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->ascent();
}

C_EXPORT int QFontMetrics_descent(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->descent();
}

C_EXPORT int QFontMetrics_height(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->height();
}

C_EXPORT int QFontMetrics_leading(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->leading();
}

C_EXPORT int QFontMetrics_lineSpacing(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->lineSpacing();
}

C_EXPORT int QFontMetrics_minLeftBearing(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->minLeftBearing();
}

C_EXPORT int QFontMetrics_minRightBearing(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->minRightBearing();
}

C_EXPORT int QFontMetrics_maxWidth(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->maxWidth();
}

C_EXPORT int QFontMetrics_xHeight(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->xHeight();
}

C_EXPORT int QFontMetrics_averageCharWidth(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->averageCharWidth();
}

C_EXPORT bool QFontMetrics_inFont(QFontMetricsH handle, PWideChar AnonParam1)
{
	return (bool) ((QFontMetrics *)handle)->inFont(*(QChar *)AnonParam1);
}

C_EXPORT int QFontMetrics_leftBearing(QFontMetricsH handle, PWideChar AnonParam1)
{
	return (int) ((QFontMetrics *)handle)->leftBearing(*(QChar *)AnonParam1);
}

C_EXPORT int QFontMetrics_rightBearing(QFontMetricsH handle, PWideChar AnonParam1)
{
	return (int) ((QFontMetrics *)handle)->rightBearing(*(QChar *)AnonParam1);
}

C_EXPORT int QFontMetrics_width(QFontMetricsH handle, PWideString AnonParam1, int len)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	return (int) ((QFontMetrics *)handle)->width(t_AnonParam1, len);
}

C_EXPORT int QFontMetrics_width2(QFontMetricsH handle, PWideChar AnonParam1)
{
	return (int) ((QFontMetrics *)handle)->width(*(QChar *)AnonParam1);
}

C_EXPORT int QFontMetrics_charWidth(QFontMetricsH handle, PWideString str, int pos)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	return (int) ((QFontMetrics *)handle)->charWidth(t_str, pos);
}

C_EXPORT void QFontMetrics_boundingRect(QFontMetricsH handle, PRect retval, PWideChar AnonParam1)
{
	QRect t_retval;
	t_retval = ((QFontMetrics *)handle)->boundingRect(*(QChar *)AnonParam1);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QFontMetrics_boundingRect2(QFontMetricsH handle, PRect retval, PWideString text)
{
	QRect t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QFontMetrics *)handle)->boundingRect(t_text);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QFontMetrics_boundingRect3(QFontMetricsH handle, PRect retval, PRect r, int flags, PWideString text, int tabstops, int* tabarray)
{
	QRect t_retval;
	QRect t_r;
	QString t_text;
	copyPRectToQRect(r, t_r);
	copyPWideStringToQString(text, t_text);
	t_retval = ((QFontMetrics *)handle)->boundingRect(t_r, flags, t_text, tabstops, tabarray);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QFontMetrics_boundingRect4(QFontMetricsH handle, PRect retval, int x, int y, int w, int h, int flags, PWideString text, int tabstops, int* tabarray)
{
	QRect t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QFontMetrics *)handle)->boundingRect(x, y, w, h, flags, t_text, tabstops, tabarray);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QFontMetrics_size(QFontMetricsH handle, PSize retval, int flags, PWideString str, int tabstops, int* tabarray)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	*(QSize *)retval = ((QFontMetrics *)handle)->size(flags, t_str, tabstops, tabarray);
}

C_EXPORT void QFontMetrics_tightBoundingRect(QFontMetricsH handle, PRect retval, PWideString text)
{
	QRect t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QFontMetrics *)handle)->tightBoundingRect(t_text);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QFontMetrics_elidedText(QFontMetricsH handle, PWideString retval, PWideString text, Qt::TextElideMode mode, int width, int flags)
{
	QString t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QFontMetrics *)handle)->elidedText(t_text, mode, width, flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QFontMetrics_underlinePos(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->underlinePos();
}

C_EXPORT int QFontMetrics_overlinePos(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->overlinePos();
}

C_EXPORT int QFontMetrics_strikeOutPos(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->strikeOutPos();
}

C_EXPORT int QFontMetrics_lineWidth(QFontMetricsH handle)
{
	return (int) ((QFontMetrics *)handle)->lineWidth();
}

C_EXPORT QFontMetricsFH QFontMetricsF_create(const QFontH AnonParam1)
{
	return (QFontMetricsFH) new QFontMetricsF(*(const QFont*)AnonParam1);
}

C_EXPORT void QFontMetricsF_destroy(QFontMetricsFH handle)
{
	delete (QFontMetricsF *)handle;
}

C_EXPORT QFontMetricsFH QFontMetricsF_create2(const QFontH AnonParam1, QPaintDeviceH pd)
{
	return (QFontMetricsFH) new QFontMetricsF(*(const QFont*)AnonParam1, (QPaintDevice*)pd);
}

C_EXPORT QFontMetricsFH QFontMetricsF_create4(const QFontMetricsFH AnonParam1)
{
	return (QFontMetricsFH) new QFontMetricsF(*(const QFontMetricsF*)AnonParam1);
}

C_EXPORT qreal QFontMetricsF_ascent(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->ascent();
}

C_EXPORT qreal QFontMetricsF_descent(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->descent();
}

C_EXPORT qreal QFontMetricsF_height(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->height();
}

C_EXPORT qreal QFontMetricsF_leading(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->leading();
}

C_EXPORT qreal QFontMetricsF_lineSpacing(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->lineSpacing();
}

C_EXPORT qreal QFontMetricsF_minLeftBearing(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->minLeftBearing();
}

C_EXPORT qreal QFontMetricsF_minRightBearing(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->minRightBearing();
}

C_EXPORT qreal QFontMetricsF_maxWidth(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->maxWidth();
}

C_EXPORT qreal QFontMetricsF_xHeight(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->xHeight();
}

C_EXPORT qreal QFontMetricsF_averageCharWidth(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->averageCharWidth();
}

C_EXPORT bool QFontMetricsF_inFont(QFontMetricsFH handle, PWideChar AnonParam1)
{
	return (bool) ((QFontMetricsF *)handle)->inFont(*(QChar *)AnonParam1);
}

C_EXPORT qreal QFontMetricsF_leftBearing(QFontMetricsFH handle, PWideChar AnonParam1)
{
	return (qreal) ((QFontMetricsF *)handle)->leftBearing(*(QChar *)AnonParam1);
}

C_EXPORT qreal QFontMetricsF_rightBearing(QFontMetricsFH handle, PWideChar AnonParam1)
{
	return (qreal) ((QFontMetricsF *)handle)->rightBearing(*(QChar *)AnonParam1);
}

C_EXPORT qreal QFontMetricsF_width(QFontMetricsFH handle, PWideString string)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	return (qreal) ((QFontMetricsF *)handle)->width(t_string);
}

C_EXPORT qreal QFontMetricsF_width2(QFontMetricsFH handle, PWideChar AnonParam1)
{
	return (qreal) ((QFontMetricsF *)handle)->width(*(QChar *)AnonParam1);
}

C_EXPORT void QFontMetricsF_boundingRect(QFontMetricsFH handle, QRectFH retval, PWideString string)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	*(QRectF *)retval = ((QFontMetricsF *)handle)->boundingRect(t_string);
}

C_EXPORT void QFontMetricsF_boundingRect2(QFontMetricsFH handle, QRectFH retval, PWideChar AnonParam1)
{
	*(QRectF *)retval = ((QFontMetricsF *)handle)->boundingRect(*(QChar *)AnonParam1);
}

C_EXPORT void QFontMetricsF_boundingRect3(QFontMetricsFH handle, QRectFH retval, const QRectFH r, int flags, PWideString string, int tabstops, int* tabarray)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	*(QRectF *)retval = ((QFontMetricsF *)handle)->boundingRect(*(const QRectF*)r, flags, t_string, tabstops, tabarray);
}

C_EXPORT void QFontMetricsF_size(QFontMetricsFH handle, QSizeFH retval, int flags, PWideString str, int tabstops, int* tabarray)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	*(QSizeF *)retval = ((QFontMetricsF *)handle)->size(flags, t_str, tabstops, tabarray);
}

C_EXPORT void QFontMetricsF_tightBoundingRect(QFontMetricsFH handle, QRectFH retval, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	*(QRectF *)retval = ((QFontMetricsF *)handle)->tightBoundingRect(t_text);
}

C_EXPORT void QFontMetricsF_elidedText(QFontMetricsFH handle, PWideString retval, PWideString text, Qt::TextElideMode mode, qreal width, int flags)
{
	QString t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QFontMetricsF *)handle)->elidedText(t_text, mode, width, flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT qreal QFontMetricsF_underlinePos(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->underlinePos();
}

C_EXPORT qreal QFontMetricsF_overlinePos(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->overlinePos();
}

C_EXPORT qreal QFontMetricsF_strikeOutPos(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->strikeOutPos();
}

C_EXPORT qreal QFontMetricsF_lineWidth(QFontMetricsFH handle)
{
	return (qreal) ((QFontMetricsF *)handle)->lineWidth();
}

