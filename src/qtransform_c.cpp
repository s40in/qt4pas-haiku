//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTransformH QTransform_create()
{
	return (QTransformH) new QTransform();
}

C_EXPORT void QTransform_destroy(QTransformH handle)
{
	delete (QTransform *)handle;
}

C_EXPORT QTransformH QTransform_create2(qreal h11, qreal h12, qreal h13, qreal h21, qreal h22, qreal h23, qreal h31, qreal h32, qreal h33)
{
	return (QTransformH) new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}

C_EXPORT QTransformH QTransform_create3(qreal h11, qreal h12, qreal h21, qreal h22, qreal dx, qreal dy)
{
	return (QTransformH) new QTransform(h11, h12, h21, h22, dx, dy);
}

C_EXPORT QTransformH QTransform_create4(const QMatrixH mtx)
{
	return (QTransformH) new QTransform(*(const QMatrix*)mtx);
}

C_EXPORT bool QTransform_isAffine(QTransformH handle)
{
	return (bool) ((QTransform *)handle)->isAffine();
}

C_EXPORT bool QTransform_isIdentity(QTransformH handle)
{
	return (bool) ((QTransform *)handle)->isIdentity();
}

C_EXPORT bool QTransform_isInvertible(QTransformH handle)
{
	return (bool) ((QTransform *)handle)->isInvertible();
}

C_EXPORT bool QTransform_isScaling(QTransformH handle)
{
	return (bool) ((QTransform *)handle)->isScaling();
}

C_EXPORT bool QTransform_isRotating(QTransformH handle)
{
	return (bool) ((QTransform *)handle)->isRotating();
}

C_EXPORT bool QTransform_isTranslating(QTransformH handle)
{
	return (bool) ((QTransform *)handle)->isTranslating();
}

C_EXPORT QTransform::TransformationType QTransform_type(QTransformH handle)
{
	return (QTransform::TransformationType) ((QTransform *)handle)->type();
}

C_EXPORT qreal QTransform_determinant(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->determinant();
}

C_EXPORT qreal QTransform_det(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->det();
}

C_EXPORT qreal QTransform_m11(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m11();
}

C_EXPORT qreal QTransform_m12(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m12();
}

C_EXPORT qreal QTransform_m13(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m13();
}

C_EXPORT qreal QTransform_m21(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m21();
}

C_EXPORT qreal QTransform_m22(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m22();
}

C_EXPORT qreal QTransform_m23(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m23();
}

C_EXPORT qreal QTransform_m31(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m31();
}

C_EXPORT qreal QTransform_m32(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m32();
}

C_EXPORT qreal QTransform_m33(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->m33();
}

C_EXPORT qreal QTransform_dx(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->dx();
}

C_EXPORT qreal QTransform_dy(QTransformH handle)
{
	return (qreal) ((QTransform *)handle)->dy();
}

C_EXPORT void QTransform_setMatrix(QTransformH handle, qreal m11, qreal m12, qreal m13, qreal m21, qreal m22, qreal m23, qreal m31, qreal m32, qreal m33)
{
	((QTransform *)handle)->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

C_EXPORT void QTransform_inverted(QTransformH handle, QTransformH retval, bool* invertible)
{
	*(QTransform *)retval = ((QTransform *)handle)->inverted(invertible);
}

C_EXPORT void QTransform_adjoint(QTransformH handle, QTransformH retval)
{
	*(QTransform *)retval = ((QTransform *)handle)->adjoint();
}

C_EXPORT void QTransform_transposed(QTransformH handle, QTransformH retval)
{
	*(QTransform *)retval = ((QTransform *)handle)->transposed();
}

C_EXPORT QTransformH QTransform_translate(QTransformH handle, qreal dx, qreal dy)
{
	return (QTransformH) &((QTransform *)handle)->translate(dx, dy);
}

C_EXPORT QTransformH QTransform_scale(QTransformH handle, qreal sx, qreal sy)
{
	return (QTransformH) &((QTransform *)handle)->scale(sx, sy);
}

C_EXPORT QTransformH QTransform_shear(QTransformH handle, qreal sh, qreal sv)
{
	return (QTransformH) &((QTransform *)handle)->shear(sh, sv);
}

C_EXPORT QTransformH QTransform_rotate(QTransformH handle, qreal a, Qt::Axis axis)
{
	return (QTransformH) &((QTransform *)handle)->rotate(a, axis);
}

C_EXPORT QTransformH QTransform_rotateRadians(QTransformH handle, qreal a, Qt::Axis axis)
{
	return (QTransformH) &((QTransform *)handle)->rotateRadians(a, axis);
}

C_EXPORT bool QTransform_squareToQuad(const QPolygonFH square, QTransformH result)
{
	return (bool) QTransform::squareToQuad(*(const QPolygonF*)square, *(QTransform*)result);
}

C_EXPORT bool QTransform_quadToSquare(const QPolygonFH quad, QTransformH result)
{
	return (bool) QTransform::quadToSquare(*(const QPolygonF*)quad, *(QTransform*)result);
}

C_EXPORT bool QTransform_quadToQuad(const QPolygonFH one, const QPolygonFH two, QTransformH result)
{
	return (bool) QTransform::quadToQuad(*(const QPolygonF*)one, *(const QPolygonF*)two, *(QTransform*)result);
}

C_EXPORT void QTransform_reset(QTransformH handle)
{
	((QTransform *)handle)->reset();
}

C_EXPORT void QTransform_map(QTransformH handle, PQtPoint retval, const QPointH p)
{
	*(QPoint *)retval = ((QTransform *)handle)->map(*(const QPoint*)p);
}

C_EXPORT void QTransform_map2(QTransformH handle, PQtPointF retval, const QPointFH p)
{
	*(QPointF *)retval = ((QTransform *)handle)->map(*(const QPointF*)p);
}

C_EXPORT void QTransform_map3(QTransformH handle, QLineH retval, const QLineH l)
{
	*(QLine *)retval = ((QTransform *)handle)->map(*(const QLine*)l);
}

C_EXPORT void QTransform_map4(QTransformH handle, QLineFH retval, const QLineFH l)
{
	*(QLineF *)retval = ((QTransform *)handle)->map(*(const QLineF*)l);
}

C_EXPORT void QTransform_map5(QTransformH handle, QPolygonFH retval, const QPolygonFH a)
{
	*(QPolygonF *)retval = ((QTransform *)handle)->map(*(const QPolygonF*)a);
}

C_EXPORT void QTransform_map6(QTransformH handle, QPolygonH retval, const QPolygonH a)
{
	*(QPolygon *)retval = ((QTransform *)handle)->map(*(const QPolygon*)a);
}

C_EXPORT void QTransform_map7(QTransformH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QTransform *)handle)->map(*(const QRegion*)r);
}

C_EXPORT void QTransform_map8(QTransformH handle, QPainterPathH retval, const QPainterPathH p)
{
	*(QPainterPath *)retval = ((QTransform *)handle)->map(*(const QPainterPath*)p);
}

C_EXPORT void QTransform_mapToPolygon(QTransformH handle, QPolygonH retval, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	*(QPolygon *)retval = ((QTransform *)handle)->mapToPolygon(t_r);
}

C_EXPORT void QTransform_mapRect(QTransformH handle, PRect retval, PRect AnonParam1)
{
	QRect t_retval;
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	t_retval = ((QTransform *)handle)->mapRect(t_AnonParam1);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QTransform_mapRect2(QTransformH handle, QRectFH retval, const QRectFH AnonParam1)
{
	*(QRectF *)retval = ((QTransform *)handle)->mapRect(*(const QRectF*)AnonParam1);
}

C_EXPORT void QTransform_map9(QTransformH handle, int x, int y, int* tx, int* ty)
{
	((QTransform *)handle)->map(x, y, tx, ty);
}

C_EXPORT void QTransform_map10(QTransformH handle, qreal x, qreal y, qreal* tx, qreal* ty)
{
	((QTransform *)handle)->map(x, y, tx, ty);
}

C_EXPORT const QMatrixH QTransform_toAffine(QTransformH handle)
{
	return (const QMatrixH) &((QTransform *)handle)->toAffine();
}

C_EXPORT void QTransform_fromTranslate(QTransformH retval, qreal dx, qreal dy)
{
	*(QTransform *)retval = QTransform::fromTranslate(dx, dy);
}

C_EXPORT void QTransform_fromScale(QTransformH retval, qreal dx, qreal dy)
{
	*(QTransform *)retval = QTransform::fromScale(dx, dy);
}

