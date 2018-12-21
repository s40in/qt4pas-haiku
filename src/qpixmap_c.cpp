//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPixmapH QPixmap_create()
{
	return (QPixmapH) new QPixmap();
}

C_EXPORT void QPixmap_destroy(QPixmapH handle)
{
	delete (QPixmap *)handle;
}

C_EXPORT QPixmapH QPixmap_create2(int w, int h)
{
	return (QPixmapH) new QPixmap(w, h);
}

C_EXPORT QPixmapH QPixmap_create3(const QSizeH AnonParam1)
{
	return (QPixmapH) new QPixmap(*(const QSize*)AnonParam1);
}

C_EXPORT QPixmapH QPixmap_create4(PWideString fileName, const char* format, unsigned int flags)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (QPixmapH) new QPixmap(t_fileName, format, (Qt::ImageConversionFlags)flags);
}

C_EXPORT QPixmapH QPixmap_create5(const char* const xpm)
{
	return (QPixmapH) new QPixmap(xpm);
}

C_EXPORT QPixmapH QPixmap_create6(const QPixmapH AnonParam1)
{
	return (QPixmapH) new QPixmap(*(const QPixmap*)AnonParam1);
}

C_EXPORT bool QPixmap_isNull(QPixmapH handle)
{
	return (bool) ((QPixmap *)handle)->isNull();
}

C_EXPORT int QPixmap_devType(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->devType();
}

C_EXPORT int QPixmap_width(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->width();
}

C_EXPORT int QPixmap_height(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->height();
}

C_EXPORT void QPixmap_size(QPixmapH handle, PSize retval)
{
	*(QSize *)retval = ((QPixmap *)handle)->size();
}

C_EXPORT void QPixmap_rect(QPixmapH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPixmap *)handle)->rect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT int QPixmap_depth(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->depth();
}

C_EXPORT int QPixmap_defaultDepth()
{
	return (int) QPixmap::defaultDepth();
}

C_EXPORT void QPixmap_fill(QPixmapH handle, const QColorH fillColor)
{
	((QPixmap *)handle)->fill(*(const QColor*)fillColor);
}

C_EXPORT void QPixmap_fill2(QPixmapH handle, const QWidgetH widget, const QPointH ofs)
{
	((QPixmap *)handle)->fill((const QWidget*)widget, *(const QPoint*)ofs);
}

C_EXPORT void QPixmap_fill3(QPixmapH handle, const QWidgetH widget, int xofs, int yofs)
{
	((QPixmap *)handle)->fill((const QWidget*)widget, xofs, yofs);
}

C_EXPORT void QPixmap_mask(QPixmapH handle, QBitmapH retval)
{
	*(QBitmap *)retval = ((QPixmap *)handle)->mask();
}

C_EXPORT void QPixmap_setMask(QPixmapH handle, const QBitmapH AnonParam1)
{
	((QPixmap *)handle)->setMask(*(const QBitmap*)AnonParam1);
}

C_EXPORT void QPixmap_alphaChannel(QPixmapH handle, QPixmapH retval)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->alphaChannel();
}

C_EXPORT void QPixmap_setAlphaChannel(QPixmapH handle, const QPixmapH AnonParam1)
{
	((QPixmap *)handle)->setAlphaChannel(*(const QPixmap*)AnonParam1);
}

C_EXPORT bool QPixmap_hasAlpha(QPixmapH handle)
{
	return (bool) ((QPixmap *)handle)->hasAlpha();
}

C_EXPORT bool QPixmap_hasAlphaChannel(QPixmapH handle)
{
	return (bool) ((QPixmap *)handle)->hasAlphaChannel();
}

C_EXPORT void QPixmap_createHeuristicMask(QPixmapH handle, QBitmapH retval, bool clipTight)
{
	*(QBitmap *)retval = ((QPixmap *)handle)->createHeuristicMask(clipTight);
}

C_EXPORT void QPixmap_createMaskFromColor(QPixmapH handle, QBitmapH retval, const QColorH maskColor)
{
	*(QBitmap *)retval = ((QPixmap *)handle)->createMaskFromColor(*(const QColor*)maskColor);
}

C_EXPORT void QPixmap_createMaskFromColor2(QPixmapH handle, QBitmapH retval, const QColorH maskColor, Qt::MaskMode mode)
{
	*(QBitmap *)retval = ((QPixmap *)handle)->createMaskFromColor(*(const QColor*)maskColor, mode);
}

C_EXPORT void QPixmap_grabWindow(QPixmapH retval, unsigned int AnonParam1, int x, int y, int w, int h)
{
	*(QPixmap *)retval = QPixmap::grabWindow((WId)AnonParam1, x, y, w, h);
}

C_EXPORT void QPixmap_grabWidget(QPixmapH retval, QWidgetH widget, PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	*(QPixmap *)retval = QPixmap::grabWidget((QWidget*)widget, t_rect);
}

C_EXPORT void QPixmap_grabWidget2(QPixmapH retval, QWidgetH widget, int x, int y, int w, int h)
{
	*(QPixmap *)retval = QPixmap::grabWidget((QWidget*)widget, x, y, w, h);
}

C_EXPORT void QPixmap_scaled(QPixmapH handle, QPixmapH retval, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->scaled(w, h, aspectMode, mode);
}

C_EXPORT void QPixmap_scaled2(QPixmapH handle, QPixmapH retval, const QSizeH s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->scaled(*(const QSize*)s, aspectMode, mode);
}

C_EXPORT void QPixmap_scaledToWidth(QPixmapH handle, QPixmapH retval, int w, Qt::TransformationMode mode)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->scaledToWidth(w, mode);
}

C_EXPORT void QPixmap_scaledToHeight(QPixmapH handle, QPixmapH retval, int h, Qt::TransformationMode mode)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->scaledToHeight(h, mode);
}

C_EXPORT void QPixmap_transformed(QPixmapH handle, QPixmapH retval, const QMatrixH AnonParam1, Qt::TransformationMode mode)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->transformed(*(const QMatrix*)AnonParam1, mode);
}

C_EXPORT void QPixmap_trueMatrix(QMatrixH retval, const QMatrixH m, int w, int h)
{
	*(QMatrix *)retval = QPixmap::trueMatrix(*(const QMatrix*)m, w, h);
}

C_EXPORT void QPixmap_transformed2(QPixmapH handle, QPixmapH retval, const QTransformH AnonParam1, Qt::TransformationMode mode)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->transformed(*(const QTransform*)AnonParam1, mode);
}

C_EXPORT void QPixmap_trueMatrix2(QTransformH retval, const QTransformH m, int w, int h)
{
	*(QTransform *)retval = QPixmap::trueMatrix(*(const QTransform*)m, w, h);
}

C_EXPORT void QPixmap_toImage(QPixmapH handle, QImageH retval)
{
	*(QImage *)retval = ((QPixmap *)handle)->toImage();
}

C_EXPORT void QPixmap_fromImage(QPixmapH retval, const QImageH image, unsigned int flags)
{
	*(QPixmap *)retval = QPixmap::fromImage(*(const QImage*)image, (Qt::ImageConversionFlags)flags);
}

C_EXPORT bool QPixmap_load(QPixmapH handle, PWideString fileName, const char* format, unsigned int flags)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) ((QPixmap *)handle)->load(t_fileName, format, (Qt::ImageConversionFlags)flags);
}

C_EXPORT bool QPixmap_loadFromData(QPixmapH handle, const uchar* buf, uint len, const char* format, unsigned int flags)
{
	return (bool) ((QPixmap *)handle)->loadFromData(buf, len, format, (Qt::ImageConversionFlags)flags);
}

C_EXPORT bool QPixmap_loadFromData2(QPixmapH handle, const QByteArrayH data, const char* format, unsigned int flags)
{
	return (bool) ((QPixmap *)handle)->loadFromData(*(const QByteArray*)data, format, (Qt::ImageConversionFlags)flags);
}

C_EXPORT bool QPixmap_save(QPixmapH handle, PWideString fileName, const char* format, int quality)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) ((QPixmap *)handle)->save(t_fileName, format, quality);
}

C_EXPORT bool QPixmap_save2(QPixmapH handle, QIODeviceH device, const char* format, int quality)
{
	return (bool) ((QPixmap *)handle)->save((QIODevice*)device, format, quality);
}

C_EXPORT void QPixmap_copy(QPixmapH handle, QPixmapH retval, int x, int y, int width, int height)
{
	*(QPixmap *)retval = ((QPixmap *)handle)->copy(x, y, width, height);
}

C_EXPORT void QPixmap_copy2(QPixmapH handle, QPixmapH retval, PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	*(QPixmap *)retval = ((QPixmap *)handle)->copy(t_rect);
}

C_EXPORT int QPixmap_serialNumber(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->serialNumber();
}

C_EXPORT qint64 QPixmap_cacheKey(QPixmapH handle)
{
	return (qint64) ((QPixmap *)handle)->cacheKey();
}

C_EXPORT bool QPixmap_isDetached(QPixmapH handle)
{
	return (bool) ((QPixmap *)handle)->isDetached();
}

C_EXPORT void QPixmap_detach(QPixmapH handle)
{
	((QPixmap *)handle)->detach();
}

C_EXPORT bool QPixmap_isQBitmap(QPixmapH handle)
{
	return (bool) ((QPixmap *)handle)->isQBitmap();
}

#if defined BINUX
C_EXPORT void QPixmap_fromX11Pixmap(QPixmapH retval, Qt::HANDLE pixmap, QPixmap::ShareMode mode)
{
	*(QPixmap *)retval = QPixmap::fromX11Pixmap(pixmap, mode);
}

C_EXPORT int QPixmap_x11SetDefaultScreen(int screen)
{
	return (int) QPixmap::x11SetDefaultScreen(screen);
}

C_EXPORT void QPixmap_x11SetScreen(QPixmapH handle, int screen)
{
	((QPixmap *)handle)->x11SetScreen(screen);
}

C_EXPORT const QX11InfoH QPixmap_x11Info(QPixmapH handle)
{
	return (const QX11InfoH) &((QPixmap *)handle)->x11Info();
}

C_EXPORT Qt::HANDLE QPixmap_x11PictureHandle(QPixmapH handle)
{
	return (Qt::HANDLE) ((QPixmap *)handle)->x11PictureHandle();
}

#endif
#if defined BINUX || QTOPIA
C_EXPORT Qt::HANDLE QPixmap_handle(QPixmapH handle)
{
	return (Qt::HANDLE) ((QPixmap *)handle)->handle();
}

#endif
C_EXPORT QPaintEngineH QPixmap_paintEngine(QPixmapH handle)
{
	return (QPaintEngineH) ((QPixmap *)handle)->paintEngine();
}

#if defined MSWINDOWS
C_EXPORT HBITMAP QPixmap_toWinHBITMAP(QPixmapH handle, QPixmap::HBitmapFormat format)
{
	return (HBITMAP) ((QPixmap *)handle)->toWinHBITMAP(format);
}

C_EXPORT void QPixmap_fromWinHBITMAP(QPixmapH retval, HBITMAP hbitmap, QPixmap::HBitmapFormat format)
{
	*(QPixmap *)retval = QPixmap::fromWinHBITMAP(hbitmap, format);
}

#endif
#if defined DARWIN
C_EXPORT CGImageRef QPixmap_toMacCGImageRef(QPixmapH handle)
{
	return (CGImageRef) ((QPixmap *)handle)->toMacCGImageRef();
}

C_EXPORT void QPixmap_fromMacCGImageRef(QPixmapH retval, CGImageRef image)
{
	*(QPixmap *)retval = QPixmap::fromMacCGImageRef(image);
}

C_EXPORT Qt::HANDLE QPixmap_macQDHandle(QPixmapH handle)
{
	return (Qt::HANDLE) ((QPixmap *)handle)->macQDHandle();
}

C_EXPORT Qt::HANDLE QPixmap_macQDAlphaHandle(QPixmapH handle)
{
	return (Qt::HANDLE) ((QPixmap *)handle)->macQDAlphaHandle();
}

C_EXPORT Qt::HANDLE QPixmap_macCGHandle(QPixmapH handle)
{
	return (Qt::HANDLE) ((QPixmap *)handle)->macCGHandle();
}

#endif
#if defined QTOPIA
C_EXPORT const uchar* QPixmap_qwsBits(QPixmapH handle)
{
	return (const uchar*) ((QPixmap *)handle)->qwsBits();
}

C_EXPORT int QPixmap_qwsBytesPerLine(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->qwsBytesPerLine();
}

C_EXPORT QRgb * QPixmap_clut(QPixmapH handle)
{
	return (QRgb *) ((QPixmap *)handle)->clut();
}

C_EXPORT int QPixmap_numCols(QPixmapH handle)
{
	return (int) ((QPixmap *)handle)->numCols();
}

#endif
