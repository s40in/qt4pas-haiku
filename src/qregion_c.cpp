//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QRegionH QRegion_create()
{
	return (QRegionH) new QRegion();
}

C_EXPORT void QRegion_destroy(QRegionH handle)
{
	delete (QRegion *)handle;
}

C_EXPORT QRegionH QRegion_create2(int x, int y, int w, int h, QRegion::RegionType t)
{
	return (QRegionH) new QRegion(x, y, w, h, t);
}

C_EXPORT QRegionH QRegion_create3(PRect r, QRegion::RegionType t)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	return (QRegionH) new QRegion(t_r, t);
}

C_EXPORT QRegionH QRegion_create4(const QPolygonH pa, Qt::FillRule fillRule)
{
	return (QRegionH) new QRegion(*(const QPolygon*)pa, fillRule);
}

C_EXPORT QRegionH QRegion_create5(const QRegionH region)
{
	return (QRegionH) new QRegion(*(const QRegion*)region);
}

C_EXPORT QRegionH QRegion_create6(const QBitmapH bitmap)
{
	return (QRegionH) new QRegion(*(const QBitmap*)bitmap);
}

C_EXPORT bool QRegion_isEmpty(QRegionH handle)
{
	return (bool) ((QRegion *)handle)->isEmpty();
}

C_EXPORT bool QRegion_contains(QRegionH handle, const QPointH p)
{
	return (bool) ((QRegion *)handle)->contains(*(const QPoint*)p);
}

C_EXPORT bool QRegion_contains2(QRegionH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	return (bool) ((QRegion *)handle)->contains(t_r);
}

C_EXPORT void QRegion_translate(QRegionH handle, int dx, int dy)
{
	((QRegion *)handle)->translate(dx, dy);
}

C_EXPORT void QRegion_translate2(QRegionH handle, const QPointH p)
{
	((QRegion *)handle)->translate(*(const QPoint*)p);
}

C_EXPORT void QRegion_translated(QRegionH handle, QRegionH retval, int dx, int dy)
{
	*(QRegion *)retval = ((QRegion *)handle)->translated(dx, dy);
}

C_EXPORT void QRegion_translated2(QRegionH handle, QRegionH retval, const QPointH p)
{
	*(QRegion *)retval = ((QRegion *)handle)->translated(*(const QPoint*)p);
}

C_EXPORT void QRegion_unite(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->unite(*(const QRegion*)r);
}

C_EXPORT void QRegion_unite2(QRegionH handle, QRegionH retval, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	*(QRegion *)retval = ((QRegion *)handle)->unite(t_r);
}

C_EXPORT void QRegion_intersect(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->intersect(*(const QRegion*)r);
}

C_EXPORT void QRegion_intersect2(QRegionH handle, QRegionH retval, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	*(QRegion *)retval = ((QRegion *)handle)->intersect(t_r);
}

C_EXPORT void QRegion_subtract(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->subtract(*(const QRegion*)r);
}

C_EXPORT void QRegion_eor(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->eor(*(const QRegion*)r);
}

C_EXPORT void QRegion_united(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->united(*(const QRegion*)r);
}

C_EXPORT void QRegion_united2(QRegionH handle, QRegionH retval, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	*(QRegion *)retval = ((QRegion *)handle)->united(t_r);
}

C_EXPORT void QRegion_intersected(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->intersected(*(const QRegion*)r);
}

C_EXPORT void QRegion_intersected2(QRegionH handle, QRegionH retval, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	*(QRegion *)retval = ((QRegion *)handle)->intersected(t_r);
}

C_EXPORT void QRegion_subtracted(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->subtracted(*(const QRegion*)r);
}

C_EXPORT void QRegion_xored(QRegionH handle, QRegionH retval, const QRegionH r)
{
	*(QRegion *)retval = ((QRegion *)handle)->xored(*(const QRegion*)r);
}

C_EXPORT bool QRegion_intersects(QRegionH handle, const QRegionH r)
{
	return (bool) ((QRegion *)handle)->intersects(*(const QRegion*)r);
}

C_EXPORT bool QRegion_intersects2(QRegionH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	return (bool) ((QRegion *)handle)->intersects(t_r);
}

C_EXPORT void QRegion_boundingRect(QRegionH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QRegion *)handle)->boundingRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRegion_setRects(QRegionH handle, PRect rect, int num)
{
	QRect t_rect;
	if ( rect )
		copyPRectToQRect(rect, t_rect);
	((QRegion *)handle)->setRects(rect ? &t_rect : NULL, num);
}

C_EXPORT int QRegion_numRects(QRegionH handle)
{
	return (int) ((QRegion *)handle)->numRects();
}

#if defined BINUX
C_EXPORT Region QRegion_handle(QRegionH handle)
{
	return (Region) ((QRegion *)handle)->handle();
}

#endif
#if defined MSWINDOWS
C_EXPORT HRGN QRegion_handle2(QRegionH handle)
{
	return (HRGN) ((QRegion *)handle)->handle();
}

#endif
#if defined DARWIN
C_EXPORT RgnHandle QRegion_handle3(QRegionH handle)
{
	return (RgnHandle) ((QRegion *)handle)->handle();
}

C_EXPORT RgnHandle QRegion_handle4(QRegionH handle, bool AnonParam1)
{
	return (RgnHandle) ((QRegion *)handle)->handle(AnonParam1);
}

C_EXPORT void * QRegion_toHIMutableShape(QRegionH handle)
{
	return (void *) ((QRegion *)handle)->toHIMutableShape();
}

C_EXPORT void QRegion_fromHIShapeRef(QRegionH retval, const void * shape)
{
	*(QRegion *)retval = QRegion::fromHIShapeRef((HIShapeRef)shape);
}

#endif
#if defined QTOPIA
C_EXPORT void* QRegion_handle5(QRegionH handle)
{
	return (void*) ((QRegion *)handle)->handle();
}

#endif
