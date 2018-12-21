//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QIconH QIcon_create()
{
	return (QIconH) new QIcon();
}

C_EXPORT void QIcon_destroy(QIconH handle)
{
	delete (QIcon *)handle;
}

C_EXPORT QIconH QIcon_create2(const QPixmapH pixmap)
{
	return (QIconH) new QIcon(*(const QPixmap*)pixmap);
}

C_EXPORT QIconH QIcon_create3(const QIconH other)
{
	return (QIconH) new QIcon(*(const QIcon*)other);
}

C_EXPORT QIconH QIcon_create4(PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (QIconH) new QIcon(t_fileName);
}

C_EXPORT QIconH QIcon_create5(QIconEngineH engine)
{
	return (QIconH) new QIcon((QIconEngine*)engine);
}

C_EXPORT QIconH QIcon_create6(QIconEngineV2H engine)
{
	return (QIconH) new QIcon((QIconEngineV2*)engine);
}

C_EXPORT void QIcon_pixmap(QIconH handle, QPixmapH retval, const QSizeH size, QIcon::Mode mode, QIcon::State state)
{
	*(QPixmap *)retval = ((QIcon *)handle)->pixmap(*(const QSize*)size, mode, state);
}

C_EXPORT void QIcon_pixmap2(QIconH handle, QPixmapH retval, int w, int h, QIcon::Mode mode, QIcon::State state)
{
	*(QPixmap *)retval = ((QIcon *)handle)->pixmap(w, h, mode, state);
}

C_EXPORT void QIcon_pixmap3(QIconH handle, QPixmapH retval, int extent, QIcon::Mode mode, QIcon::State state)
{
	*(QPixmap *)retval = ((QIcon *)handle)->pixmap(extent, mode, state);
}

C_EXPORT void QIcon_actualSize(QIconH handle, PSize retval, const QSizeH size, QIcon::Mode mode, QIcon::State state)
{
	*(QSize *)retval = ((QIcon *)handle)->actualSize(*(const QSize*)size, mode, state);
}

C_EXPORT void QIcon_paint(QIconH handle, QPainterH painter, PRect rect, unsigned int alignment, QIcon::Mode mode, QIcon::State state)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	((QIcon *)handle)->paint((QPainter*)painter, t_rect, (Qt::Alignment)alignment, mode, state);
}

C_EXPORT void QIcon_paint2(QIconH handle, QPainterH painter, int x, int y, int w, int h, unsigned int alignment, QIcon::Mode mode, QIcon::State state)
{
	((QIcon *)handle)->paint((QPainter*)painter, x, y, w, h, (Qt::Alignment)alignment, mode, state);
}

C_EXPORT bool QIcon_isNull(QIconH handle)
{
	return (bool) ((QIcon *)handle)->isNull();
}

C_EXPORT bool QIcon_isDetached(QIconH handle)
{
	return (bool) ((QIcon *)handle)->isDetached();
}

C_EXPORT void QIcon_detach(QIconH handle)
{
	((QIcon *)handle)->detach();
}

C_EXPORT int QIcon_serialNumber(QIconH handle)
{
	return (int) ((QIcon *)handle)->serialNumber();
}

C_EXPORT qint64 QIcon_cacheKey(QIconH handle)
{
	return (qint64) ((QIcon *)handle)->cacheKey();
}

C_EXPORT void QIcon_addPixmap(QIconH handle, const QPixmapH pixmap, QIcon::Mode mode, QIcon::State state)
{
	((QIcon *)handle)->addPixmap(*(const QPixmap*)pixmap, mode, state);
}

C_EXPORT void QIcon_addFile(QIconH handle, PWideString fileName, const QSizeH size, QIcon::Mode mode, QIcon::State state)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QIcon *)handle)->addFile(t_fileName, *(const QSize*)size, mode, state);
}

