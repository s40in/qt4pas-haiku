//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT bool QPaintEngine_isActive(QPaintEngineH handle)
{
	return (bool) ((QPaintEngine *)handle)->isActive();
}

C_EXPORT void QPaintEngine_setActive(QPaintEngineH handle, bool newState)
{
	((QPaintEngine *)handle)->setActive(newState);
}

C_EXPORT bool QPaintEngine_begin(QPaintEngineH handle, QPaintDeviceH pdev)
{
	return (bool) ((QPaintEngine *)handle)->begin((QPaintDevice*)pdev);
}

C_EXPORT bool QPaintEngine_end(QPaintEngineH handle)
{
	return (bool) ((QPaintEngine *)handle)->end();
}

C_EXPORT void QPaintEngine_drawRects(QPaintEngineH handle, PRect rects, int rectCount)
{
	QRect t_rects;
	if ( rects )
		copyPRectToQRect(rects, t_rects);
	((QPaintEngine *)handle)->drawRects(rects ? &t_rects : NULL, rectCount);
}

C_EXPORT void QPaintEngine_drawRects2(QPaintEngineH handle, const QRectFH rects, int rectCount)
{
	((QPaintEngine *)handle)->drawRects((const QRectF*)rects, rectCount);
}

C_EXPORT void QPaintEngine_drawLines(QPaintEngineH handle, const QLineH lines, int lineCount)
{
	((QPaintEngine *)handle)->drawLines((const QLine*)lines, lineCount);
}

C_EXPORT void QPaintEngine_drawLines2(QPaintEngineH handle, const QLineFH lines, int lineCount)
{
	((QPaintEngine *)handle)->drawLines((const QLineF*)lines, lineCount);
}

C_EXPORT void QPaintEngine_drawEllipse(QPaintEngineH handle, const QRectFH r)
{
	((QPaintEngine *)handle)->drawEllipse(*(const QRectF*)r);
}

C_EXPORT void QPaintEngine_drawEllipse2(QPaintEngineH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	((QPaintEngine *)handle)->drawEllipse(t_r);
}

C_EXPORT void QPaintEngine_drawPath(QPaintEngineH handle, const QPainterPathH path)
{
	((QPaintEngine *)handle)->drawPath(*(const QPainterPath*)path);
}

C_EXPORT void QPaintEngine_drawPoints(QPaintEngineH handle, const QPointFH points, int pointCount)
{
	((QPaintEngine *)handle)->drawPoints((const QPointF*)points, pointCount);
}

C_EXPORT void QPaintEngine_drawPoints2(QPaintEngineH handle, const QPointH points, int pointCount)
{
	((QPaintEngine *)handle)->drawPoints((const QPoint*)points, pointCount);
}

C_EXPORT void QPaintEngine_drawPolygon(QPaintEngineH handle, const QPointFH points, int pointCount, QPaintEngine::PolygonDrawMode mode)
{
	((QPaintEngine *)handle)->drawPolygon((const QPointF*)points, pointCount, mode);
}

C_EXPORT void QPaintEngine_drawPolygon2(QPaintEngineH handle, const QPointH points, int pointCount, QPaintEngine::PolygonDrawMode mode)
{
	((QPaintEngine *)handle)->drawPolygon((const QPoint*)points, pointCount, mode);
}

C_EXPORT void QPaintEngine_drawPixmap(QPaintEngineH handle, const QRectFH r, const QPixmapH pm, const QRectFH sr)
{
	((QPaintEngine *)handle)->drawPixmap(*(const QRectF*)r, *(const QPixmap*)pm, *(const QRectF*)sr);
}

C_EXPORT void QPaintEngine_drawTiledPixmap(QPaintEngineH handle, const QRectFH r, const QPixmapH pixmap, const QPointFH s)
{
	((QPaintEngine *)handle)->drawTiledPixmap(*(const QRectF*)r, *(const QPixmap*)pixmap, *(const QPointF*)s);
}

C_EXPORT void QPaintEngine_drawImage(QPaintEngineH handle, const QRectFH r, const QImageH pm, const QRectFH sr, unsigned int flags)
{
	((QPaintEngine *)handle)->drawImage(*(const QRectF*)r, *(const QImage*)pm, *(const QRectF*)sr, (Qt::ImageConversionFlags)flags);
}

C_EXPORT void QPaintEngine_setPaintDevice(QPaintEngineH handle, QPaintDeviceH device)
{
	((QPaintEngine *)handle)->setPaintDevice((QPaintDevice*)device);
}

C_EXPORT QPaintDeviceH QPaintEngine_paintDevice(QPaintEngineH handle)
{
	return (QPaintDeviceH) ((QPaintEngine *)handle)->paintDevice();
}

C_EXPORT void QPaintEngine_setSystemClip(QPaintEngineH handle, const QRegionH baseClip)
{
	((QPaintEngine *)handle)->setSystemClip(*(const QRegion*)baseClip);
}

C_EXPORT void QPaintEngine_systemClip(QPaintEngineH handle, QRegionH retval)
{
	*(QRegion *)retval = ((QPaintEngine *)handle)->systemClip();
}

C_EXPORT void QPaintEngine_setSystemRect(QPaintEngineH handle, PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	((QPaintEngine *)handle)->setSystemRect(t_rect);
}

C_EXPORT void QPaintEngine_systemRect(QPaintEngineH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPaintEngine *)handle)->systemRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QPaintEngine_coordinateOffset(QPaintEngineH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QPaintEngine *)handle)->coordinateOffset();
}

C_EXPORT QPaintEngine::Type QPaintEngine_type(QPaintEngineH handle)
{
	return (QPaintEngine::Type) ((QPaintEngine *)handle)->type();
}

C_EXPORT void QPaintEngine_fix_neg_rect(QPaintEngineH handle, int* x, int* y, int* w, int* h)
{
	((QPaintEngine *)handle)->fix_neg_rect(x, y, w, h);
}

C_EXPORT bool QPaintEngine_testDirty(QPaintEngineH handle, unsigned int df)
{
	return (bool) ((QPaintEngine *)handle)->testDirty((QPaintEngine::DirtyFlags)df);
}

C_EXPORT void QPaintEngine_setDirty(QPaintEngineH handle, unsigned int df)
{
	((QPaintEngine *)handle)->setDirty((QPaintEngine::DirtyFlags)df);
}

C_EXPORT void QPaintEngine_clearDirty(QPaintEngineH handle, unsigned int df)
{
	((QPaintEngine *)handle)->clearDirty((QPaintEngine::DirtyFlags)df);
}

C_EXPORT bool QPaintEngine_hasFeature(QPaintEngineH handle, unsigned int feature)
{
	return (bool) ((QPaintEngine *)handle)->hasFeature((QPaintEngine::PaintEngineFeatures)feature);
}

C_EXPORT QPainterH QPaintEngine_painter(QPaintEngineH handle)
{
	return (QPainterH) ((QPaintEngine *)handle)->painter();
}

C_EXPORT void QPaintEngine_syncState(QPaintEngineH handle)
{
	((QPaintEngine *)handle)->syncState();
}

C_EXPORT bool QPaintEngine_isExtended(QPaintEngineH handle)
{
	return (bool) ((QPaintEngine *)handle)->isExtended();
}

#if defined MSWINDOWS
C_EXPORT HDC QPaintEngine_getDC(QPaintEngineH handle)
{
	return (HDC) ((QPaintEngine *)handle)->getDC();
}

C_EXPORT void QPaintEngine_releaseDC(QPaintEngineH handle, HDC hdc)
{
	((QPaintEngine *)handle)->releaseDC(hdc);
}

#endif
