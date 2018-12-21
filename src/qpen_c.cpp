//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPenH QPen_create()
{
	return (QPenH) new QPen();
}

C_EXPORT void QPen_destroy(QPenH handle)
{
	delete (QPen *)handle;
}

C_EXPORT QPenH QPen_create2(Qt::PenStyle AnonParam1)
{
	return (QPenH) new QPen(AnonParam1);
}

C_EXPORT QPenH QPen_create3(const QColorH color)
{
	return (QPenH) new QPen(*(const QColor*)color);
}

C_EXPORT QPenH QPen_create4(const QBrushH brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j)
{
	return (QPenH) new QPen(*(const QBrush*)brush, width, s, c, j);
}

C_EXPORT QPenH QPen_create5(const QPenH pen)
{
	return (QPenH) new QPen(*(const QPen*)pen);
}

C_EXPORT Qt::PenStyle QPen_style(QPenH handle)
{
	return (Qt::PenStyle) ((QPen *)handle)->style();
}

C_EXPORT void QPen_setStyle(QPenH handle, Qt::PenStyle AnonParam1)
{
	((QPen *)handle)->setStyle(AnonParam1);
}

C_EXPORT void QPen_dashPattern(QPenH handle, PQRealArray retval)
{
	QVector<qreal> t_retval;
	t_retval = ((QPen *)handle)->dashPattern();
	copyQVectorQRealToQRealArray(t_retval, retval);
}

C_EXPORT void QPen_setDashPattern(QPenH handle, PQRealArray pattern)
{
	QVector<qreal> t_pattern;
	copyQRealArrayToQVectorQReal(pattern, t_pattern);
	((QPen *)handle)->setDashPattern(t_pattern);
}

C_EXPORT qreal QPen_dashOffset(QPenH handle)
{
	return (qreal) ((QPen *)handle)->dashOffset();
}

C_EXPORT void QPen_setDashOffset(QPenH handle, qreal doffset)
{
	((QPen *)handle)->setDashOffset(doffset);
}

C_EXPORT qreal QPen_miterLimit(QPenH handle)
{
	return (qreal) ((QPen *)handle)->miterLimit();
}

C_EXPORT void QPen_setMiterLimit(QPenH handle, qreal limit)
{
	((QPen *)handle)->setMiterLimit(limit);
}

C_EXPORT qreal QPen_widthF(QPenH handle)
{
	return (qreal) ((QPen *)handle)->widthF();
}

C_EXPORT void QPen_setWidthF(QPenH handle, qreal width)
{
	((QPen *)handle)->setWidthF(width);
}

C_EXPORT int QPen_width(QPenH handle)
{
	return (int) ((QPen *)handle)->width();
}

C_EXPORT void QPen_setWidth(QPenH handle, int width)
{
	((QPen *)handle)->setWidth(width);
}

C_EXPORT void QPen_color(QPenH handle, PQColor retval)
{
	*(QColor *)retval = ((QPen *)handle)->color();
}

C_EXPORT void QPen_setColor(QPenH handle, const QColorH color)
{
	((QPen *)handle)->setColor(*(const QColor*)color);
}

C_EXPORT void QPen_brush(QPenH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QPen *)handle)->brush();
}

C_EXPORT void QPen_setBrush(QPenH handle, const QBrushH brush)
{
	((QPen *)handle)->setBrush(*(const QBrush*)brush);
}

C_EXPORT bool QPen_isSolid(QPenH handle)
{
	return (bool) ((QPen *)handle)->isSolid();
}

C_EXPORT Qt::PenCapStyle QPen_capStyle(QPenH handle)
{
	return (Qt::PenCapStyle) ((QPen *)handle)->capStyle();
}

C_EXPORT void QPen_setCapStyle(QPenH handle, Qt::PenCapStyle pcs)
{
	((QPen *)handle)->setCapStyle(pcs);
}

C_EXPORT Qt::PenJoinStyle QPen_joinStyle(QPenH handle)
{
	return (Qt::PenJoinStyle) ((QPen *)handle)->joinStyle();
}

C_EXPORT void QPen_setJoinStyle(QPenH handle, Qt::PenJoinStyle pcs)
{
	((QPen *)handle)->setJoinStyle(pcs);
}

C_EXPORT bool QPen_isCosmetic(QPenH handle)
{
	return (bool) ((QPen *)handle)->isCosmetic();
}

C_EXPORT void QPen_setCosmetic(QPenH handle, bool cosmetic)
{
	((QPen *)handle)->setCosmetic(cosmetic);
}

C_EXPORT bool QPen_isDetached(QPenH handle)
{
	return (bool) ((QPen *)handle)->isDetached();
}

