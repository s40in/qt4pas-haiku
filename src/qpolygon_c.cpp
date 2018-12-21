//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPolygonH QPolygon_create()
{
	return (QPolygonH) new QPolygon();
}

C_EXPORT void QPolygon_destroy(QPolygonH handle)
{
	delete (QPolygon *)handle;
}

C_EXPORT QPolygonH QPolygon_create2(int size)
{
	return (QPolygonH) new QPolygon(size);
}

C_EXPORT QPolygonH QPolygon_create3(const QPolygonH a)
{
	return (QPolygonH) new QPolygon(*(const QPolygon*)a);
}

C_EXPORT QPolygonH QPolygon_create4(PRect r, bool closed)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	return (QPolygonH) new QPolygon(t_r, closed);
}

C_EXPORT QPolygonH QPolygon_create5(int nPoints, const int* points)
{
	return (QPolygonH) new QPolygon(nPoints, points);
}

C_EXPORT void QPolygon_translate(QPolygonH handle, int dx, int dy)
{
	((QPolygon *)handle)->translate(dx, dy);
}

C_EXPORT void QPolygon_translate2(QPolygonH handle, const QPointH offset)
{
	((QPolygon *)handle)->translate(*(const QPoint*)offset);
}

C_EXPORT void QPolygon_boundingRect(QPolygonH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPolygon *)handle)->boundingRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QPolygon_point(QPolygonH handle, int i, int* x, int* y)
{
	((QPolygon *)handle)->point(i, x, y);
}

C_EXPORT void QPolygon_point2(QPolygonH handle, PQtPoint retval, int i)
{
	*(QPoint *)retval = ((QPolygon *)handle)->point(i);
}

C_EXPORT void QPolygon_setPoint(QPolygonH handle, int index, int x, int y)
{
	((QPolygon *)handle)->setPoint(index, x, y);
}

C_EXPORT void QPolygon_setPoint2(QPolygonH handle, int index, const QPointH p)
{
	((QPolygon *)handle)->setPoint(index, *(const QPoint*)p);
}

C_EXPORT void QPolygon_setPoints(QPolygonH handle, int nPoints, const int* points)
{
	((QPolygon *)handle)->setPoints(nPoints, points);
}

C_EXPORT void QPolygon_putPoints(QPolygonH handle, int index, int nPoints, const int* points)
{
	((QPolygon *)handle)->putPoints(index, nPoints, points);
}

C_EXPORT void QPolygon_putPoints3(QPolygonH handle, int index, int nPoints, const QPolygonH from, int fromIndex)
{
	((QPolygon *)handle)->putPoints(index, nPoints, *(const QPolygon*)from, fromIndex);
}

C_EXPORT bool QPolygon_containsPoint(QPolygonH handle, const QPointH pt, Qt::FillRule fillRule)
{
	return (bool) ((QPolygon *)handle)->containsPoint(*(const QPoint*)pt, fillRule);
}

C_EXPORT void QPolygon_united(QPolygonH handle, QPolygonH retval, const QPolygonH r)
{
	*(QPolygon *)retval = ((QPolygon *)handle)->united(*(const QPolygon*)r);
}

C_EXPORT void QPolygon_intersected(QPolygonH handle, QPolygonH retval, const QPolygonH r)
{
	*(QPolygon *)retval = ((QPolygon *)handle)->intersected(*(const QPolygon*)r);
}

C_EXPORT void QPolygon_subtracted(QPolygonH handle, QPolygonH retval, const QPolygonH r)
{
	*(QPolygon *)retval = ((QPolygon *)handle)->subtracted(*(const QPolygon*)r);
}

C_EXPORT QPolygonFH QPolygonF_create()
{
	return (QPolygonFH) new QPolygonF();
}

C_EXPORT void QPolygonF_destroy(QPolygonFH handle)
{
	delete (QPolygonF *)handle;
}

C_EXPORT QPolygonFH QPolygonF_create2(int size)
{
	return (QPolygonFH) new QPolygonF(size);
}

C_EXPORT QPolygonFH QPolygonF_create3(const QPolygonFH a)
{
	return (QPolygonFH) new QPolygonF(*(const QPolygonF*)a);
}

C_EXPORT QPolygonFH QPolygonF_create4(const QRectFH r)
{
	return (QPolygonFH) new QPolygonF(*(const QRectF*)r);
}

C_EXPORT QPolygonFH QPolygonF_create5(const QPolygonH a)
{
	return (QPolygonFH) new QPolygonF(*(const QPolygon*)a);
}

C_EXPORT void QPolygonF_translate(QPolygonFH handle, qreal dx, qreal dy)
{
	((QPolygonF *)handle)->translate(dx, dy);
}

C_EXPORT void QPolygonF_translate2(QPolygonFH handle, const QPointFH offset)
{
	((QPolygonF *)handle)->translate(*(const QPointF*)offset);
}

C_EXPORT void QPolygonF_toPolygon(QPolygonFH handle, QPolygonH retval)
{
	*(QPolygon *)retval = ((QPolygonF *)handle)->toPolygon();
}

C_EXPORT bool QPolygonF_isClosed(QPolygonFH handle)
{
	return (bool) ((QPolygonF *)handle)->isClosed();
}

C_EXPORT void QPolygonF_boundingRect(QPolygonFH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QPolygonF *)handle)->boundingRect();
}

C_EXPORT bool QPolygonF_containsPoint(QPolygonFH handle, const QPointFH pt, Qt::FillRule fillRule)
{
	return (bool) ((QPolygonF *)handle)->containsPoint(*(const QPointF*)pt, fillRule);
}

C_EXPORT void QPolygonF_united(QPolygonFH handle, QPolygonFH retval, const QPolygonFH r)
{
	*(QPolygonF *)retval = ((QPolygonF *)handle)->united(*(const QPolygonF*)r);
}

C_EXPORT void QPolygonF_intersected(QPolygonFH handle, QPolygonFH retval, const QPolygonFH r)
{
	*(QPolygonF *)retval = ((QPolygonF *)handle)->intersected(*(const QPolygonF*)r);
}

C_EXPORT void QPolygonF_subtracted(QPolygonFH handle, QPolygonFH retval, const QPolygonFH r)
{
	*(QPolygonF *)retval = ((QPolygonF *)handle)->subtracted(*(const QPolygonF*)r);
}

