//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QBrushH QBrush_create()
{
	return (QBrushH) new QBrush();
}

C_EXPORT void QBrush_destroy(QBrushH handle)
{
	delete (QBrush *)handle;
}

C_EXPORT QBrushH QBrush_create2(Qt::BrushStyle bs)
{
	return (QBrushH) new QBrush(bs);
}

C_EXPORT QBrushH QBrush_create3(const QColorH color, Qt::BrushStyle bs)
{
	return (QBrushH) new QBrush(*(const QColor*)color, bs);
}

C_EXPORT QBrushH QBrush_create4(Qt::GlobalColor color, Qt::BrushStyle bs)
{
	return (QBrushH) new QBrush(color, bs);
}

C_EXPORT QBrushH QBrush_create5(const QColorH color, const QPixmapH pixmap)
{
	return (QBrushH) new QBrush(*(const QColor*)color, *(const QPixmap*)pixmap);
}

C_EXPORT QBrushH QBrush_create6(Qt::GlobalColor color, const QPixmapH pixmap)
{
	return (QBrushH) new QBrush(color, *(const QPixmap*)pixmap);
}

C_EXPORT QBrushH QBrush_create7(const QPixmapH pixmap)
{
	return (QBrushH) new QBrush(*(const QPixmap*)pixmap);
}

C_EXPORT QBrushH QBrush_create8(const QImageH image)
{
	return (QBrushH) new QBrush(*(const QImage*)image);
}

C_EXPORT QBrushH QBrush_create9(const QBrushH brush)
{
	return (QBrushH) new QBrush(*(const QBrush*)brush);
}

C_EXPORT QBrushH QBrush_create10(const QGradientH gradient)
{
	return (QBrushH) new QBrush(*(const QGradient*)gradient);
}

C_EXPORT Qt::BrushStyle QBrush_style(QBrushH handle)
{
	return (Qt::BrushStyle) ((QBrush *)handle)->style();
}

C_EXPORT void QBrush_setStyle(QBrushH handle, Qt::BrushStyle AnonParam1)
{
	((QBrush *)handle)->setStyle(AnonParam1);
}

C_EXPORT const QMatrixH QBrush_matrix(QBrushH handle)
{
	return (const QMatrixH) &((QBrush *)handle)->matrix();
}

C_EXPORT void QBrush_setMatrix(QBrushH handle, const QMatrixH mat)
{
	((QBrush *)handle)->setMatrix(*(const QMatrix*)mat);
}

C_EXPORT void QBrush_transform(QBrushH handle, QTransformH retval)
{
	*(QTransform *)retval = ((QBrush *)handle)->transform();
}

C_EXPORT void QBrush_setTransform(QBrushH handle, const QTransformH AnonParam1)
{
	((QBrush *)handle)->setTransform(*(const QTransform*)AnonParam1);
}

C_EXPORT void QBrush_texture(QBrushH handle, QPixmapH retval)
{
	*(QPixmap *)retval = ((QBrush *)handle)->texture();
}

C_EXPORT void QBrush_setTexture(QBrushH handle, const QPixmapH pixmap)
{
	((QBrush *)handle)->setTexture(*(const QPixmap*)pixmap);
}

C_EXPORT void QBrush_textureImage(QBrushH handle, QImageH retval)
{
	*(QImage *)retval = ((QBrush *)handle)->textureImage();
}

C_EXPORT void QBrush_setTextureImage(QBrushH handle, const QImageH image)
{
	((QBrush *)handle)->setTextureImage(*(const QImage*)image);
}

C_EXPORT const QColorH QBrush_color(QBrushH handle)
{
	return (const QColorH) &((QBrush *)handle)->color();
}

C_EXPORT void QBrush_setColor(QBrushH handle, const QColorH color)
{
	((QBrush *)handle)->setColor(*(const QColor*)color);
}

C_EXPORT void QBrush_setColor2(QBrushH handle, Qt::GlobalColor color)
{
	((QBrush *)handle)->setColor(color);
}

C_EXPORT const QGradientH QBrush_gradient(QBrushH handle)
{
	return (const QGradientH) ((QBrush *)handle)->gradient();
}

C_EXPORT bool QBrush_isOpaque(QBrushH handle)
{
	return (bool) ((QBrush *)handle)->isOpaque();
}

C_EXPORT bool QBrush_isDetached(QBrushH handle)
{
	return (bool) ((QBrush *)handle)->isDetached();
}

C_EXPORT QGradientH QGradient_create()
{
	return (QGradientH) new QGradient();
}

C_EXPORT void QGradient_destroy(QGradientH handle)
{
	delete (QGradient *)handle;
}

C_EXPORT QGradient::Type QGradient_type(QGradientH handle)
{
	return (QGradient::Type) ((QGradient *)handle)->type();
}

C_EXPORT void QGradient_setSpread(QGradientH handle, QGradient::Spread spread)
{
	((QGradient *)handle)->setSpread(spread);
}

C_EXPORT QGradient::Spread QGradient_spread(QGradientH handle)
{
	return (QGradient::Spread) ((QGradient *)handle)->spread();
}

C_EXPORT void QGradient_setColorAt(QGradientH handle, qreal pos, const QColorH color)
{
	((QGradient *)handle)->setColorAt(pos, *(const QColor*)color);
}

C_EXPORT QGradient::CoordinateMode QGradient_coordinateMode(QGradientH handle)
{
	return (QGradient::CoordinateMode) ((QGradient *)handle)->coordinateMode();
}

C_EXPORT void QGradient_setCoordinateMode(QGradientH handle, QGradient::CoordinateMode mode)
{
	((QGradient *)handle)->setCoordinateMode(mode);
}

C_EXPORT QGradient::InterpolationMode QGradient_interpolationMode(QGradientH handle)
{
	return (QGradient::InterpolationMode) ((QGradient *)handle)->interpolationMode();
}

C_EXPORT void QGradient_setInterpolationMode(QGradientH handle, QGradient::InterpolationMode mode)
{
	((QGradient *)handle)->setInterpolationMode(mode);
}

C_EXPORT QLinearGradientH QLinearGradient_create()
{
	return (QLinearGradientH) new QLinearGradient();
}

C_EXPORT void QLinearGradient_destroy(QLinearGradientH handle)
{
	delete (QLinearGradient *)handle;
}

C_EXPORT QLinearGradientH QLinearGradient_create2(const QPointFH start, const QPointFH finalStop)
{
	return (QLinearGradientH) new QLinearGradient(*(const QPointF*)start, *(const QPointF*)finalStop);
}

C_EXPORT QLinearGradientH QLinearGradient_create3(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop)
{
	return (QLinearGradientH) new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}

C_EXPORT void QLinearGradient_start(QLinearGradientH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QLinearGradient *)handle)->start();
}

C_EXPORT void QLinearGradient_setStart(QLinearGradientH handle, const QPointFH start)
{
	((QLinearGradient *)handle)->setStart(*(const QPointF*)start);
}

C_EXPORT void QLinearGradient_setStart2(QLinearGradientH handle, qreal x, qreal y)
{
	((QLinearGradient *)handle)->setStart(x, y);
}

C_EXPORT void QLinearGradient_finalStop(QLinearGradientH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QLinearGradient *)handle)->finalStop();
}

C_EXPORT void QLinearGradient_setFinalStop(QLinearGradientH handle, const QPointFH stop)
{
	((QLinearGradient *)handle)->setFinalStop(*(const QPointF*)stop);
}

C_EXPORT void QLinearGradient_setFinalStop2(QLinearGradientH handle, qreal x, qreal y)
{
	((QLinearGradient *)handle)->setFinalStop(x, y);
}

C_EXPORT QRadialGradientH QRadialGradient_create()
{
	return (QRadialGradientH) new QRadialGradient();
}

C_EXPORT void QRadialGradient_destroy(QRadialGradientH handle)
{
	delete (QRadialGradient *)handle;
}

C_EXPORT QRadialGradientH QRadialGradient_create2(const QPointFH center, qreal radius, const QPointFH focalPoint)
{
	return (QRadialGradientH) new QRadialGradient(*(const QPointF*)center, radius, *(const QPointF*)focalPoint);
}

C_EXPORT QRadialGradientH QRadialGradient_create3(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy)
{
	return (QRadialGradientH) new QRadialGradient(cx, cy, radius, fx, fy);
}

C_EXPORT QRadialGradientH QRadialGradient_create4(const QPointFH center, qreal radius)
{
	return (QRadialGradientH) new QRadialGradient(*(const QPointF*)center, radius);
}

C_EXPORT QRadialGradientH QRadialGradient_create5(qreal cx, qreal cy, qreal radius)
{
	return (QRadialGradientH) new QRadialGradient(cx, cy, radius);
}

C_EXPORT void QRadialGradient_center(QRadialGradientH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRadialGradient *)handle)->center();
}

C_EXPORT void QRadialGradient_setCenter(QRadialGradientH handle, const QPointFH center)
{
	((QRadialGradient *)handle)->setCenter(*(const QPointF*)center);
}

C_EXPORT void QRadialGradient_setCenter2(QRadialGradientH handle, qreal x, qreal y)
{
	((QRadialGradient *)handle)->setCenter(x, y);
}

C_EXPORT void QRadialGradient_focalPoint(QRadialGradientH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRadialGradient *)handle)->focalPoint();
}

C_EXPORT void QRadialGradient_setFocalPoint(QRadialGradientH handle, const QPointFH focalPoint)
{
	((QRadialGradient *)handle)->setFocalPoint(*(const QPointF*)focalPoint);
}

C_EXPORT void QRadialGradient_setFocalPoint2(QRadialGradientH handle, qreal x, qreal y)
{
	((QRadialGradient *)handle)->setFocalPoint(x, y);
}

C_EXPORT qreal QRadialGradient_radius(QRadialGradientH handle)
{
	return (qreal) ((QRadialGradient *)handle)->radius();
}

C_EXPORT void QRadialGradient_setRadius(QRadialGradientH handle, qreal radius)
{
	((QRadialGradient *)handle)->setRadius(radius);
}

C_EXPORT QConicalGradientH QConicalGradient_create()
{
	return (QConicalGradientH) new QConicalGradient();
}

C_EXPORT void QConicalGradient_destroy(QConicalGradientH handle)
{
	delete (QConicalGradient *)handle;
}

C_EXPORT QConicalGradientH QConicalGradient_create2(const QPointFH center, qreal startAngle)
{
	return (QConicalGradientH) new QConicalGradient(*(const QPointF*)center, startAngle);
}

C_EXPORT QConicalGradientH QConicalGradient_create3(qreal cx, qreal cy, qreal startAngle)
{
	return (QConicalGradientH) new QConicalGradient(cx, cy, startAngle);
}

C_EXPORT void QConicalGradient_center(QConicalGradientH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QConicalGradient *)handle)->center();
}

C_EXPORT void QConicalGradient_setCenter(QConicalGradientH handle, const QPointFH center)
{
	((QConicalGradient *)handle)->setCenter(*(const QPointF*)center);
}

C_EXPORT void QConicalGradient_setCenter2(QConicalGradientH handle, qreal x, qreal y)
{
	((QConicalGradient *)handle)->setCenter(x, y);
}

C_EXPORT qreal QConicalGradient_angle(QConicalGradientH handle)
{
	return (qreal) ((QConicalGradient *)handle)->angle();
}

C_EXPORT void QConicalGradient_setAngle(QConicalGradientH handle, qreal angle)
{
	((QConicalGradient *)handle)->setAngle(angle);
}

