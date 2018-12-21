//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSizeH QSize_create()
{
	return (QSizeH) new QSize();
}

C_EXPORT void QSize_destroy(QSizeH handle)
{
	delete (QSize *)handle;
}

C_EXPORT QSizeH QSize_create2(int w, int h)
{
	return (QSizeH) new QSize(w, h);
}

C_EXPORT bool QSize_isNull(QSizeH handle)
{
	return (bool) ((QSize *)handle)->isNull();
}

C_EXPORT bool QSize_isEmpty(QSizeH handle)
{
	return (bool) ((QSize *)handle)->isEmpty();
}

C_EXPORT bool QSize_isValid(QSizeH handle)
{
	return (bool) ((QSize *)handle)->isValid();
}

C_EXPORT int QSize_width(QSizeH handle)
{
	return (int) ((QSize *)handle)->width();
}

C_EXPORT int QSize_height(QSizeH handle)
{
	return (int) ((QSize *)handle)->height();
}

C_EXPORT void QSize_setWidth(QSizeH handle, int w)
{
	((QSize *)handle)->setWidth(w);
}

C_EXPORT void QSize_setHeight(QSizeH handle, int h)
{
	((QSize *)handle)->setHeight(h);
}

C_EXPORT void QSize_transpose(QSizeH handle)
{
	((QSize *)handle)->transpose();
}

C_EXPORT void QSize_scale(QSizeH handle, int w, int h, Qt::AspectRatioMode mode)
{
	((QSize *)handle)->scale(w, h, mode);
}

C_EXPORT void QSize_scale2(QSizeH handle, const QSizeH s, Qt::AspectRatioMode mode)
{
	((QSize *)handle)->scale(*(const QSize*)s, mode);
}

C_EXPORT void QSize_expandedTo(QSizeH handle, PSize retval, const QSizeH AnonParam1)
{
	*(QSize *)retval = ((QSize *)handle)->expandedTo(*(const QSize*)AnonParam1);
}

C_EXPORT void QSize_boundedTo(QSizeH handle, PSize retval, const QSizeH AnonParam1)
{
	*(QSize *)retval = ((QSize *)handle)->boundedTo(*(const QSize*)AnonParam1);
}

C_EXPORT int* QSize_rwidth(QSizeH handle)
{
	return (int*) &((QSize *)handle)->rwidth();
}

C_EXPORT int* QSize_rheight(QSizeH handle)
{
	return (int*) &((QSize *)handle)->rheight();
}

C_EXPORT QSizeFH QSizeF_create()
{
	return (QSizeFH) new QSizeF();
}

C_EXPORT void QSizeF_destroy(QSizeFH handle)
{
	delete (QSizeF *)handle;
}

C_EXPORT QSizeFH QSizeF_create2(const QSizeH sz)
{
	return (QSizeFH) new QSizeF(*(const QSize*)sz);
}

C_EXPORT QSizeFH QSizeF_create3(qreal w, qreal h)
{
	return (QSizeFH) new QSizeF(w, h);
}

C_EXPORT bool QSizeF_isNull(QSizeFH handle)
{
	return (bool) ((QSizeF *)handle)->isNull();
}

C_EXPORT bool QSizeF_isEmpty(QSizeFH handle)
{
	return (bool) ((QSizeF *)handle)->isEmpty();
}

C_EXPORT bool QSizeF_isValid(QSizeFH handle)
{
	return (bool) ((QSizeF *)handle)->isValid();
}

C_EXPORT qreal QSizeF_width(QSizeFH handle)
{
	return (qreal) ((QSizeF *)handle)->width();
}

C_EXPORT qreal QSizeF_height(QSizeFH handle)
{
	return (qreal) ((QSizeF *)handle)->height();
}

C_EXPORT void QSizeF_setWidth(QSizeFH handle, qreal w)
{
	((QSizeF *)handle)->setWidth(w);
}

C_EXPORT void QSizeF_setHeight(QSizeFH handle, qreal h)
{
	((QSizeF *)handle)->setHeight(h);
}

C_EXPORT void QSizeF_transpose(QSizeFH handle)
{
	((QSizeF *)handle)->transpose();
}

C_EXPORT void QSizeF_scale(QSizeFH handle, qreal w, qreal h, Qt::AspectRatioMode mode)
{
	((QSizeF *)handle)->scale(w, h, mode);
}

C_EXPORT void QSizeF_scale2(QSizeFH handle, const QSizeFH s, Qt::AspectRatioMode mode)
{
	((QSizeF *)handle)->scale(*(const QSizeF*)s, mode);
}

C_EXPORT void QSizeF_expandedTo(QSizeFH handle, QSizeFH retval, const QSizeFH AnonParam1)
{
	*(QSizeF *)retval = ((QSizeF *)handle)->expandedTo(*(const QSizeF*)AnonParam1);
}

C_EXPORT void QSizeF_boundedTo(QSizeFH handle, QSizeFH retval, const QSizeFH AnonParam1)
{
	*(QSizeF *)retval = ((QSizeF *)handle)->boundedTo(*(const QSizeF*)AnonParam1);
}

C_EXPORT qreal* QSizeF_rwidth(QSizeFH handle)
{
	return (qreal*) &((QSizeF *)handle)->rwidth();
}

C_EXPORT qreal* QSizeF_rheight(QSizeFH handle)
{
	return (qreal*) &((QSizeF *)handle)->rheight();
}

C_EXPORT void QSizeF_toSize(QSizeFH handle, PSize retval)
{
	*(QSize *)retval = ((QSizeF *)handle)->toSize();
}

