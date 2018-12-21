//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPainterPathH QPainterPath_create()
{
	return (QPainterPathH) new QPainterPath();
}

C_EXPORT void QPainterPath_destroy(QPainterPathH handle)
{
	delete (QPainterPath *)handle;
}

C_EXPORT QPainterPathH QPainterPath_create2(const QPointFH startPoint)
{
	return (QPainterPathH) new QPainterPath(*(const QPointF*)startPoint);
}

C_EXPORT QPainterPathH QPainterPath_create3(const QPainterPathH other)
{
	return (QPainterPathH) new QPainterPath(*(const QPainterPath*)other);
}

C_EXPORT void QPainterPath_closeSubpath(QPainterPathH handle)
{
	((QPainterPath *)handle)->closeSubpath();
}

C_EXPORT void QPainterPath_moveTo(QPainterPathH handle, const QPointFH p)
{
	((QPainterPath *)handle)->moveTo(*(const QPointF*)p);
}

C_EXPORT void QPainterPath_moveTo2(QPainterPathH handle, qreal x, qreal y)
{
	((QPainterPath *)handle)->moveTo(x, y);
}

C_EXPORT void QPainterPath_lineTo(QPainterPathH handle, const QPointFH p)
{
	((QPainterPath *)handle)->lineTo(*(const QPointF*)p);
}

C_EXPORT void QPainterPath_lineTo2(QPainterPathH handle, qreal x, qreal y)
{
	((QPainterPath *)handle)->lineTo(x, y);
}

C_EXPORT void QPainterPath_arcMoveTo(QPainterPathH handle, const QRectFH rect, qreal angle)
{
	((QPainterPath *)handle)->arcMoveTo(*(const QRectF*)rect, angle);
}

C_EXPORT void QPainterPath_arcMoveTo2(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h, qreal angle)
{
	((QPainterPath *)handle)->arcMoveTo(x, y, w, h, angle);
}

C_EXPORT void QPainterPath_arcTo(QPainterPathH handle, const QRectFH rect, qreal startAngle, qreal arcLength)
{
	((QPainterPath *)handle)->arcTo(*(const QRectF*)rect, startAngle, arcLength);
}

C_EXPORT void QPainterPath_arcTo2(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h, qreal startAngle, qreal arcLength)
{
	((QPainterPath *)handle)->arcTo(x, y, w, h, startAngle, arcLength);
}

C_EXPORT void QPainterPath_cubicTo(QPainterPathH handle, const QPointFH ctrlPt1, const QPointFH ctrlPt2, const QPointFH endPt)
{
	((QPainterPath *)handle)->cubicTo(*(const QPointF*)ctrlPt1, *(const QPointF*)ctrlPt2, *(const QPointF*)endPt);
}

C_EXPORT void QPainterPath_cubicTo2(QPainterPathH handle, qreal ctrlPt1x, qreal ctrlPt1y, qreal ctrlPt2x, qreal ctrlPt2y, qreal endPtx, qreal endPty)
{
	((QPainterPath *)handle)->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

C_EXPORT void QPainterPath_quadTo(QPainterPathH handle, const QPointFH ctrlPt, const QPointFH endPt)
{
	((QPainterPath *)handle)->quadTo(*(const QPointF*)ctrlPt, *(const QPointF*)endPt);
}

C_EXPORT void QPainterPath_quadTo2(QPainterPathH handle, qreal ctrlPtx, qreal ctrlPty, qreal endPtx, qreal endPty)
{
	((QPainterPath *)handle)->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}

C_EXPORT void QPainterPath_currentPosition(QPainterPathH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QPainterPath *)handle)->currentPosition();
}

C_EXPORT void QPainterPath_addRect(QPainterPathH handle, const QRectFH rect)
{
	((QPainterPath *)handle)->addRect(*(const QRectF*)rect);
}

C_EXPORT void QPainterPath_addRect2(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h)
{
	((QPainterPath *)handle)->addRect(x, y, w, h);
}

C_EXPORT void QPainterPath_addEllipse(QPainterPathH handle, const QRectFH rect)
{
	((QPainterPath *)handle)->addEllipse(*(const QRectF*)rect);
}

C_EXPORT void QPainterPath_addEllipse2(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h)
{
	((QPainterPath *)handle)->addEllipse(x, y, w, h);
}

C_EXPORT void QPainterPath_addEllipse3(QPainterPathH handle, const QPointFH center, qreal rx, qreal ry)
{
	((QPainterPath *)handle)->addEllipse(*(const QPointF*)center, rx, ry);
}

C_EXPORT void QPainterPath_addPolygon(QPainterPathH handle, const QPolygonFH polygon)
{
	((QPainterPath *)handle)->addPolygon(*(const QPolygonF*)polygon);
}

C_EXPORT void QPainterPath_addText(QPainterPathH handle, const QPointFH point, const QFontH f, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QPainterPath *)handle)->addText(*(const QPointF*)point, *(const QFont*)f, t_text);
}

C_EXPORT void QPainterPath_addText2(QPainterPathH handle, qreal x, qreal y, const QFontH f, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QPainterPath *)handle)->addText(x, y, *(const QFont*)f, t_text);
}

C_EXPORT void QPainterPath_addPath(QPainterPathH handle, const QPainterPathH path)
{
	((QPainterPath *)handle)->addPath(*(const QPainterPath*)path);
}

C_EXPORT void QPainterPath_addRegion(QPainterPathH handle, const QRegionH region)
{
	((QPainterPath *)handle)->addRegion(*(const QRegion*)region);
}

C_EXPORT void QPainterPath_addRoundedRect(QPainterPathH handle, const QRectFH rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode)
{
	((QPainterPath *)handle)->addRoundedRect(*(const QRectF*)rect, xRadius, yRadius, mode);
}

C_EXPORT void QPainterPath_addRoundedRect2(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h, qreal xRadius, qreal yRadius, Qt::SizeMode mode)
{
	((QPainterPath *)handle)->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}

C_EXPORT void QPainterPath_addRoundRect(QPainterPathH handle, const QRectFH rect, int xRnd, int yRnd)
{
	((QPainterPath *)handle)->addRoundRect(*(const QRectF*)rect, xRnd, yRnd);
}

C_EXPORT void QPainterPath_addRoundRect2(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h, int xRnd, int yRnd)
{
	((QPainterPath *)handle)->addRoundRect(x, y, w, h, xRnd, yRnd);
}

C_EXPORT void QPainterPath_addRoundRect3(QPainterPathH handle, const QRectFH rect, int roundness)
{
	((QPainterPath *)handle)->addRoundRect(*(const QRectF*)rect, roundness);
}

C_EXPORT void QPainterPath_addRoundRect4(QPainterPathH handle, qreal x, qreal y, qreal w, qreal h, int roundness)
{
	((QPainterPath *)handle)->addRoundRect(x, y, w, h, roundness);
}

C_EXPORT void QPainterPath_connectPath(QPainterPathH handle, const QPainterPathH path)
{
	((QPainterPath *)handle)->connectPath(*(const QPainterPath*)path);
}

C_EXPORT bool QPainterPath_contains(QPainterPathH handle, const QPointFH pt)
{
	return (bool) ((QPainterPath *)handle)->contains(*(const QPointF*)pt);
}

C_EXPORT bool QPainterPath_contains2(QPainterPathH handle, const QRectFH rect)
{
	return (bool) ((QPainterPath *)handle)->contains(*(const QRectF*)rect);
}

C_EXPORT bool QPainterPath_intersects(QPainterPathH handle, const QRectFH rect)
{
	return (bool) ((QPainterPath *)handle)->intersects(*(const QRectF*)rect);
}

C_EXPORT void QPainterPath_boundingRect(QPainterPathH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QPainterPath *)handle)->boundingRect();
}

C_EXPORT void QPainterPath_controlPointRect(QPainterPathH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QPainterPath *)handle)->controlPointRect();
}

C_EXPORT Qt::FillRule QPainterPath_fillRule(QPainterPathH handle)
{
	return (Qt::FillRule) ((QPainterPath *)handle)->fillRule();
}

C_EXPORT void QPainterPath_setFillRule(QPainterPathH handle, Qt::FillRule fillRule)
{
	((QPainterPath *)handle)->setFillRule(fillRule);
}

C_EXPORT bool QPainterPath_isEmpty(QPainterPathH handle)
{
	return (bool) ((QPainterPath *)handle)->isEmpty();
}

C_EXPORT void QPainterPath_toReversed(QPainterPathH handle, QPainterPathH retval)
{
	*(QPainterPath *)retval = ((QPainterPath *)handle)->toReversed();
}

C_EXPORT void QPainterPath_toFillPolygon(QPainterPathH handle, QPolygonFH retval, const QMatrixH matrix)
{
	*(QPolygonF *)retval = ((QPainterPath *)handle)->toFillPolygon(*(const QMatrix*)matrix);
}

C_EXPORT void QPainterPath_toFillPolygon2(QPainterPathH handle, QPolygonFH retval, const QTransformH matrix)
{
	*(QPolygonF *)retval = ((QPainterPath *)handle)->toFillPolygon(*(const QTransform*)matrix);
}

C_EXPORT int QPainterPath_elementCount(QPainterPathH handle)
{
	return (int) ((QPainterPath *)handle)->elementCount();
}

C_EXPORT const QPainterPath::Element* QPainterPath_elementAt(QPainterPathH handle, int i)
{
	return (const QPainterPath::Element*) &((QPainterPath *)handle)->elementAt(i);
}

C_EXPORT void QPainterPath_setElementPositionAt(QPainterPathH handle, int i, qreal x, qreal y)
{
	((QPainterPath *)handle)->setElementPositionAt(i, x, y);
}

C_EXPORT qreal QPainterPath_length(QPainterPathH handle)
{
	return (qreal) ((QPainterPath *)handle)->length();
}

C_EXPORT qreal QPainterPath_percentAtLength(QPainterPathH handle, qreal t)
{
	return (qreal) ((QPainterPath *)handle)->percentAtLength(t);
}

C_EXPORT void QPainterPath_pointAtPercent(QPainterPathH handle, PQtPointF retval, qreal t)
{
	*(QPointF *)retval = ((QPainterPath *)handle)->pointAtPercent(t);
}

C_EXPORT qreal QPainterPath_angleAtPercent(QPainterPathH handle, qreal t)
{
	return (qreal) ((QPainterPath *)handle)->angleAtPercent(t);
}

C_EXPORT qreal QPainterPath_slopeAtPercent(QPainterPathH handle, qreal t)
{
	return (qreal) ((QPainterPath *)handle)->slopeAtPercent(t);
}

C_EXPORT bool QPainterPath_intersects2(QPainterPathH handle, const QPainterPathH p)
{
	return (bool) ((QPainterPath *)handle)->intersects(*(const QPainterPath*)p);
}

C_EXPORT bool QPainterPath_contains3(QPainterPathH handle, const QPainterPathH p)
{
	return (bool) ((QPainterPath *)handle)->contains(*(const QPainterPath*)p);
}

C_EXPORT void QPainterPath_united(QPainterPathH handle, QPainterPathH retval, const QPainterPathH r)
{
	*(QPainterPath *)retval = ((QPainterPath *)handle)->united(*(const QPainterPath*)r);
}

C_EXPORT void QPainterPath_intersected(QPainterPathH handle, QPainterPathH retval, const QPainterPathH r)
{
	*(QPainterPath *)retval = ((QPainterPath *)handle)->intersected(*(const QPainterPath*)r);
}

C_EXPORT void QPainterPath_subtracted(QPainterPathH handle, QPainterPathH retval, const QPainterPathH r)
{
	*(QPainterPath *)retval = ((QPainterPath *)handle)->subtracted(*(const QPainterPath*)r);
}

C_EXPORT void QPainterPath_subtractedInverted(QPainterPathH handle, QPainterPathH retval, const QPainterPathH r)
{
	*(QPainterPath *)retval = ((QPainterPath *)handle)->subtractedInverted(*(const QPainterPath*)r);
}

C_EXPORT void QPainterPath_simplified(QPainterPathH handle, QPainterPathH retval)
{
	*(QPainterPath *)retval = ((QPainterPath *)handle)->simplified();
}

C_EXPORT QPainterPathStrokerH QPainterPathStroker_create()
{
	return (QPainterPathStrokerH) new QPainterPathStroker();
}

C_EXPORT void QPainterPathStroker_destroy(QPainterPathStrokerH handle)
{
	delete (QPainterPathStroker *)handle;
}

C_EXPORT void QPainterPathStroker_setWidth(QPainterPathStrokerH handle, qreal width)
{
	((QPainterPathStroker *)handle)->setWidth(width);
}

C_EXPORT qreal QPainterPathStroker_width(QPainterPathStrokerH handle)
{
	return (qreal) ((QPainterPathStroker *)handle)->width();
}

C_EXPORT void QPainterPathStroker_setCapStyle(QPainterPathStrokerH handle, Qt::PenCapStyle style)
{
	((QPainterPathStroker *)handle)->setCapStyle(style);
}

C_EXPORT Qt::PenCapStyle QPainterPathStroker_capStyle(QPainterPathStrokerH handle)
{
	return (Qt::PenCapStyle) ((QPainterPathStroker *)handle)->capStyle();
}

C_EXPORT void QPainterPathStroker_setJoinStyle(QPainterPathStrokerH handle, Qt::PenJoinStyle style)
{
	((QPainterPathStroker *)handle)->setJoinStyle(style);
}

C_EXPORT Qt::PenJoinStyle QPainterPathStroker_joinStyle(QPainterPathStrokerH handle)
{
	return (Qt::PenJoinStyle) ((QPainterPathStroker *)handle)->joinStyle();
}

C_EXPORT void QPainterPathStroker_setMiterLimit(QPainterPathStrokerH handle, qreal length)
{
	((QPainterPathStroker *)handle)->setMiterLimit(length);
}

C_EXPORT qreal QPainterPathStroker_miterLimit(QPainterPathStrokerH handle)
{
	return (qreal) ((QPainterPathStroker *)handle)->miterLimit();
}

C_EXPORT void QPainterPathStroker_setCurveThreshold(QPainterPathStrokerH handle, qreal threshold)
{
	((QPainterPathStroker *)handle)->setCurveThreshold(threshold);
}

C_EXPORT qreal QPainterPathStroker_curveThreshold(QPainterPathStrokerH handle)
{
	return (qreal) ((QPainterPathStroker *)handle)->curveThreshold();
}

C_EXPORT void QPainterPathStroker_setDashPattern(QPainterPathStrokerH handle, Qt::PenStyle AnonParam1)
{
	((QPainterPathStroker *)handle)->setDashPattern(AnonParam1);
}

C_EXPORT void QPainterPathStroker_setDashPattern2(QPainterPathStrokerH handle, PQRealArray dashPattern)
{
	QVector<qreal> t_dashPattern;
	copyQRealArrayToQVectorQReal(dashPattern, t_dashPattern);
	((QPainterPathStroker *)handle)->setDashPattern(t_dashPattern);
}

C_EXPORT void QPainterPathStroker_dashPattern(QPainterPathStrokerH handle, PQRealArray retval)
{
	QVector<qreal> t_retval;
	t_retval = ((QPainterPathStroker *)handle)->dashPattern();
	copyQVectorQRealToQRealArray(t_retval, retval);
}

C_EXPORT void QPainterPathStroker_setDashOffset(QPainterPathStrokerH handle, qreal offset)
{
	((QPainterPathStroker *)handle)->setDashOffset(offset);
}

C_EXPORT qreal QPainterPathStroker_dashOffset(QPainterPathStrokerH handle)
{
	return (qreal) ((QPainterPathStroker *)handle)->dashOffset();
}

C_EXPORT void QPainterPathStroker_createStroke(QPainterPathStrokerH handle, QPainterPathH retval, const QPainterPathH path)
{
	*(QPainterPath *)retval = ((QPainterPathStroker *)handle)->createStroke(*(const QPainterPath*)path);
}

