//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTextInlineObjectH QTextInlineObject_create()
{
	return (QTextInlineObjectH) new QTextInlineObject();
}

C_EXPORT void QTextInlineObject_destroy(QTextInlineObjectH handle)
{
	delete (QTextInlineObject *)handle;
}

C_EXPORT bool QTextInlineObject_isValid(QTextInlineObjectH handle)
{
	return (bool) ((QTextInlineObject *)handle)->isValid();
}

C_EXPORT void QTextInlineObject_rect(QTextInlineObjectH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QTextInlineObject *)handle)->rect();
}

C_EXPORT qreal QTextInlineObject_width(QTextInlineObjectH handle)
{
	return (qreal) ((QTextInlineObject *)handle)->width();
}

C_EXPORT qreal QTextInlineObject_ascent(QTextInlineObjectH handle)
{
	return (qreal) ((QTextInlineObject *)handle)->ascent();
}

C_EXPORT qreal QTextInlineObject_descent(QTextInlineObjectH handle)
{
	return (qreal) ((QTextInlineObject *)handle)->descent();
}

C_EXPORT qreal QTextInlineObject_height(QTextInlineObjectH handle)
{
	return (qreal) ((QTextInlineObject *)handle)->height();
}

C_EXPORT Qt::LayoutDirection QTextInlineObject_textDirection(QTextInlineObjectH handle)
{
	return (Qt::LayoutDirection) ((QTextInlineObject *)handle)->textDirection();
}

C_EXPORT void QTextInlineObject_setWidth(QTextInlineObjectH handle, qreal w)
{
	((QTextInlineObject *)handle)->setWidth(w);
}

C_EXPORT void QTextInlineObject_setAscent(QTextInlineObjectH handle, qreal a)
{
	((QTextInlineObject *)handle)->setAscent(a);
}

C_EXPORT void QTextInlineObject_setDescent(QTextInlineObjectH handle, qreal d)
{
	((QTextInlineObject *)handle)->setDescent(d);
}

C_EXPORT int QTextInlineObject_textPosition(QTextInlineObjectH handle)
{
	return (int) ((QTextInlineObject *)handle)->textPosition();
}

C_EXPORT int QTextInlineObject_formatIndex(QTextInlineObjectH handle)
{
	return (int) ((QTextInlineObject *)handle)->formatIndex();
}

C_EXPORT void QTextInlineObject_format(QTextInlineObjectH handle, QTextFormatH retval)
{
	*(QTextFormat *)retval = ((QTextInlineObject *)handle)->format();
}

C_EXPORT QTextLayoutH QTextLayout_create()
{
	return (QTextLayoutH) new QTextLayout();
}

C_EXPORT void QTextLayout_destroy(QTextLayoutH handle)
{
	delete (QTextLayout *)handle;
}

C_EXPORT QTextLayoutH QTextLayout_create2(PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QTextLayoutH) new QTextLayout(t_text);
}

C_EXPORT QTextLayoutH QTextLayout_create3(PWideString text, const QFontH font, QPaintDeviceH paintdevice)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QTextLayoutH) new QTextLayout(t_text, *(const QFont*)font, (QPaintDevice*)paintdevice);
}

C_EXPORT QTextLayoutH QTextLayout_create4(const QTextBlockH b)
{
	return (QTextLayoutH) new QTextLayout(*(const QTextBlock*)b);
}

C_EXPORT void QTextLayout_setFont(QTextLayoutH handle, const QFontH f)
{
	((QTextLayout *)handle)->setFont(*(const QFont*)f);
}

C_EXPORT void QTextLayout_font(QTextLayoutH handle, QFontH retval)
{
	*(QFont *)retval = ((QTextLayout *)handle)->font();
}

C_EXPORT void QTextLayout_setText(QTextLayoutH handle, PWideString string)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	((QTextLayout *)handle)->setText(t_string);
}

C_EXPORT void QTextLayout_text(QTextLayoutH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextLayout *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextLayout_setTextOption(QTextLayoutH handle, const QTextOptionH option)
{
	((QTextLayout *)handle)->setTextOption(*(const QTextOption*)option);
}

C_EXPORT void QTextLayout_textOption(QTextLayoutH handle, QTextOptionH retval)
{
	*(QTextOption *)retval = ((QTextLayout *)handle)->textOption();
}

C_EXPORT void QTextLayout_setPreeditArea(QTextLayoutH handle, int position, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextLayout *)handle)->setPreeditArea(position, t_text);
}

C_EXPORT int QTextLayout_preeditAreaPosition(QTextLayoutH handle)
{
	return (int) ((QTextLayout *)handle)->preeditAreaPosition();
}

C_EXPORT void QTextLayout_preeditAreaText(QTextLayoutH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextLayout *)handle)->preeditAreaText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextLayout_clearAdditionalFormats(QTextLayoutH handle)
{
	((QTextLayout *)handle)->clearAdditionalFormats();
}

C_EXPORT void QTextLayout_setCacheEnabled(QTextLayoutH handle, bool enable)
{
	((QTextLayout *)handle)->setCacheEnabled(enable);
}

C_EXPORT bool QTextLayout_cacheEnabled(QTextLayoutH handle)
{
	return (bool) ((QTextLayout *)handle)->cacheEnabled();
}

C_EXPORT void QTextLayout_beginLayout(QTextLayoutH handle)
{
	((QTextLayout *)handle)->beginLayout();
}

C_EXPORT void QTextLayout_endLayout(QTextLayoutH handle)
{
	((QTextLayout *)handle)->endLayout();
}

C_EXPORT void QTextLayout_clearLayout(QTextLayoutH handle)
{
	((QTextLayout *)handle)->clearLayout();
}

C_EXPORT void QTextLayout_createLine(QTextLayoutH handle, QTextLineH retval)
{
	*(QTextLine *)retval = ((QTextLayout *)handle)->createLine();
}

C_EXPORT int QTextLayout_lineCount(QTextLayoutH handle)
{
	return (int) ((QTextLayout *)handle)->lineCount();
}

C_EXPORT void QTextLayout_lineAt(QTextLayoutH handle, QTextLineH retval, int i)
{
	*(QTextLine *)retval = ((QTextLayout *)handle)->lineAt(i);
}

C_EXPORT void QTextLayout_lineForTextPosition(QTextLayoutH handle, QTextLineH retval, int pos)
{
	*(QTextLine *)retval = ((QTextLayout *)handle)->lineForTextPosition(pos);
}

C_EXPORT bool QTextLayout_isValidCursorPosition(QTextLayoutH handle, int pos)
{
	return (bool) ((QTextLayout *)handle)->isValidCursorPosition(pos);
}

C_EXPORT int QTextLayout_nextCursorPosition(QTextLayoutH handle, int oldPos, QTextLayout::CursorMode mode)
{
	return (int) ((QTextLayout *)handle)->nextCursorPosition(oldPos, mode);
}

C_EXPORT int QTextLayout_previousCursorPosition(QTextLayoutH handle, int oldPos, QTextLayout::CursorMode mode)
{
	return (int) ((QTextLayout *)handle)->previousCursorPosition(oldPos, mode);
}

C_EXPORT void QTextLayout_drawCursor(QTextLayoutH handle, QPainterH p, const QPointFH pos, int cursorPosition)
{
	((QTextLayout *)handle)->drawCursor((QPainter*)p, *(const QPointF*)pos, cursorPosition);
}

C_EXPORT void QTextLayout_drawCursor2(QTextLayoutH handle, QPainterH p, const QPointFH pos, int cursorPosition, int width)
{
	((QTextLayout *)handle)->drawCursor((QPainter*)p, *(const QPointF*)pos, cursorPosition, width);
}

C_EXPORT void QTextLayout_position(QTextLayoutH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QTextLayout *)handle)->position();
}

C_EXPORT void QTextLayout_setPosition(QTextLayoutH handle, const QPointFH p)
{
	((QTextLayout *)handle)->setPosition(*(const QPointF*)p);
}

C_EXPORT void QTextLayout_boundingRect(QTextLayoutH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QTextLayout *)handle)->boundingRect();
}

C_EXPORT qreal QTextLayout_minimumWidth(QTextLayoutH handle)
{
	return (qreal) ((QTextLayout *)handle)->minimumWidth();
}

C_EXPORT qreal QTextLayout_maximumWidth(QTextLayoutH handle)
{
	return (qreal) ((QTextLayout *)handle)->maximumWidth();
}

C_EXPORT void QTextLayout_setFlags(QTextLayoutH handle, int flags)
{
	((QTextLayout *)handle)->setFlags(flags);
}

C_EXPORT QTextLineH QTextLine_create()
{
	return (QTextLineH) new QTextLine();
}

C_EXPORT void QTextLine_destroy(QTextLineH handle)
{
	delete (QTextLine *)handle;
}

C_EXPORT bool QTextLine_isValid(QTextLineH handle)
{
	return (bool) ((QTextLine *)handle)->isValid();
}

C_EXPORT void QTextLine_rect(QTextLineH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QTextLine *)handle)->rect();
}

C_EXPORT qreal QTextLine_x(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->x();
}

C_EXPORT qreal QTextLine_y(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->y();
}

C_EXPORT qreal QTextLine_width(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->width();
}

C_EXPORT qreal QTextLine_ascent(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->ascent();
}

C_EXPORT qreal QTextLine_descent(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->descent();
}

C_EXPORT qreal QTextLine_height(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->height();
}

C_EXPORT qreal QTextLine_naturalTextWidth(QTextLineH handle)
{
	return (qreal) ((QTextLine *)handle)->naturalTextWidth();
}

C_EXPORT void QTextLine_naturalTextRect(QTextLineH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QTextLine *)handle)->naturalTextRect();
}

C_EXPORT qreal QTextLine_cursorToX(QTextLineH handle, int* cursorPos, QTextLine::Edge edge)
{
	return (qreal) ((QTextLine *)handle)->cursorToX(cursorPos, edge);
}

C_EXPORT qreal QTextLine_cursorToX2(QTextLineH handle, int cursorPos, QTextLine::Edge edge)
{
	return (qreal) ((QTextLine *)handle)->cursorToX(cursorPos, edge);
}

C_EXPORT int QTextLine_xToCursor(QTextLineH handle, qreal x, QTextLine::CursorPosition AnonParam2)
{
	return (int) ((QTextLine *)handle)->xToCursor(x, AnonParam2);
}

C_EXPORT void QTextLine_setLineWidth(QTextLineH handle, qreal width)
{
	((QTextLine *)handle)->setLineWidth(width);
}

C_EXPORT void QTextLine_setNumColumns(QTextLineH handle, int columns)
{
	((QTextLine *)handle)->setNumColumns(columns);
}

C_EXPORT void QTextLine_setNumColumns2(QTextLineH handle, int columns, qreal alignmentWidth)
{
	((QTextLine *)handle)->setNumColumns(columns, alignmentWidth);
}

C_EXPORT void QTextLine_setPosition(QTextLineH handle, const QPointFH pos)
{
	((QTextLine *)handle)->setPosition(*(const QPointF*)pos);
}

C_EXPORT void QTextLine_position(QTextLineH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QTextLine *)handle)->position();
}

C_EXPORT int QTextLine_textStart(QTextLineH handle)
{
	return (int) ((QTextLine *)handle)->textStart();
}

C_EXPORT int QTextLine_textLength(QTextLineH handle)
{
	return (int) ((QTextLine *)handle)->textLength();
}

C_EXPORT int QTextLine_lineNumber(QTextLineH handle)
{
	return (int) ((QTextLine *)handle)->lineNumber();
}

