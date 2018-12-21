//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QImageH QImage_create()
{
	return (QImageH) new QImage();
}

C_EXPORT void QImage_destroy(QImageH handle)
{
	delete (QImage *)handle;
}

C_EXPORT QImageH QImage_create2(const QSizeH size, QImage::Format format)
{
	return (QImageH) new QImage(*(const QSize*)size, format);
}

C_EXPORT QImageH QImage_create3(int width, int height, QImage::Format format)
{
	return (QImageH) new QImage(width, height, format);
}

C_EXPORT QImageH QImage_create4(uchar* data, int width, int height, QImage::Format format)
{
	return (QImageH) new QImage(data, width, height, format);
}

C_EXPORT QImageH QImage_create6(uchar* data, int width, int height, int bytesPerLine, QImage::Format format)
{
	return (QImageH) new QImage(data, width, height, bytesPerLine, format);
}

C_EXPORT QImageH QImage_create8(const char* const xpm)
{
	return (QImageH) new QImage(xpm);
}

C_EXPORT QImageH QImage_create9(PWideString fileName, const char* format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (QImageH) new QImage(t_fileName, format);
}

C_EXPORT QImageH QImage_create10(const char* fileName, const char* format)
{
	return (QImageH) new QImage(fileName, format);
}

C_EXPORT QImageH QImage_create11(const QImageH AnonParam1)
{
	return (QImageH) new QImage(*(const QImage*)AnonParam1);
}

C_EXPORT bool QImage_isNull(QImageH handle)
{
	return (bool) ((QImage *)handle)->isNull();
}

C_EXPORT int QImage_devType(QImageH handle)
{
	return (int) ((QImage *)handle)->devType();
}

C_EXPORT void QImage_detach(QImageH handle)
{
	((QImage *)handle)->detach();
}

C_EXPORT bool QImage_isDetached(QImageH handle)
{
	return (bool) ((QImage *)handle)->isDetached();
}

C_EXPORT void QImage_copy(QImageH handle, QImageH retval, PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	*(QImage *)retval = ((QImage *)handle)->copy(t_rect);
}

C_EXPORT void QImage_copy2(QImageH handle, QImageH retval, int x, int y, int w, int h)
{
	*(QImage *)retval = ((QImage *)handle)->copy(x, y, w, h);
}

C_EXPORT QImage::Format QImage_format(QImageH handle)
{
	return (QImage::Format) ((QImage *)handle)->format();
}

C_EXPORT void QImage_convertToFormat(QImageH handle, QImageH retval, QImage::Format f, unsigned int flags)
{
	*(QImage *)retval = ((QImage *)handle)->convertToFormat(f, (Qt::ImageConversionFlags)flags);
}

C_EXPORT int QImage_width(QImageH handle)
{
	return (int) ((QImage *)handle)->width();
}

C_EXPORT int QImage_height(QImageH handle)
{
	return (int) ((QImage *)handle)->height();
}

C_EXPORT void QImage_size(QImageH handle, PSize retval)
{
	*(QSize *)retval = ((QImage *)handle)->size();
}

C_EXPORT void QImage_rect(QImageH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QImage *)handle)->rect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT int QImage_depth(QImageH handle)
{
	return (int) ((QImage *)handle)->depth();
}

C_EXPORT int QImage_numColors(QImageH handle)
{
	return (int) ((QImage *)handle)->numColors();
}

C_EXPORT QRgb QImage_color(QImageH handle, int i)
{
	return (QRgb) ((QImage *)handle)->color(i);
}

C_EXPORT void QImage_setColor(QImageH handle, int i, QRgb c)
{
	((QImage *)handle)->setColor(i, c);
}

C_EXPORT void QImage_setNumColors(QImageH handle, int AnonParam1)
{
	((QImage *)handle)->setNumColors(AnonParam1);
}

C_EXPORT bool QImage_allGray(QImageH handle)
{
	return (bool) ((QImage *)handle)->allGray();
}

C_EXPORT bool QImage_isGrayscale(QImageH handle)
{
	return (bool) ((QImage *)handle)->isGrayscale();
}

C_EXPORT uchar* QImage_bits(QImageH handle)
{
	return (uchar*) ((QImage *)handle)->bits();
}

C_EXPORT int QImage_numBytes(QImageH handle)
{
	return (int) ((QImage *)handle)->numBytes();
}

C_EXPORT uchar* QImage_scanLine(QImageH handle, int AnonParam1)
{
	return (uchar*) ((QImage *)handle)->scanLine(AnonParam1);
}

C_EXPORT int QImage_bytesPerLine(QImageH handle)
{
	return (int) ((QImage *)handle)->bytesPerLine();
}

C_EXPORT bool QImage_valid(QImageH handle, int x, int y)
{
	return (bool) ((QImage *)handle)->valid(x, y);
}

C_EXPORT bool QImage_valid2(QImageH handle, const QPointH pt)
{
	return (bool) ((QImage *)handle)->valid(*(const QPoint*)pt);
}

C_EXPORT int QImage_pixelIndex(QImageH handle, int x, int y)
{
	return (int) ((QImage *)handle)->pixelIndex(x, y);
}

C_EXPORT int QImage_pixelIndex2(QImageH handle, const QPointH pt)
{
	return (int) ((QImage *)handle)->pixelIndex(*(const QPoint*)pt);
}

C_EXPORT QRgb QImage_pixel(QImageH handle, int x, int y)
{
	return (QRgb) ((QImage *)handle)->pixel(x, y);
}

C_EXPORT QRgb QImage_pixel2(QImageH handle, const QPointH pt)
{
	return (QRgb) ((QImage *)handle)->pixel(*(const QPoint*)pt);
}

C_EXPORT void QImage_setPixel(QImageH handle, int x, int y, uint index_or_rgb)
{
	((QImage *)handle)->setPixel(x, y, index_or_rgb);
}

C_EXPORT void QImage_setPixel2(QImageH handle, const QPointH pt, uint index_or_rgb)
{
	((QImage *)handle)->setPixel(*(const QPoint*)pt, index_or_rgb);
}

C_EXPORT void QImage_fill(QImageH handle, uint pixel)
{
	((QImage *)handle)->fill(pixel);
}

C_EXPORT bool QImage_hasAlphaChannel(QImageH handle)
{
	return (bool) ((QImage *)handle)->hasAlphaChannel();
}

C_EXPORT void QImage_setAlphaChannel(QImageH handle, const QImageH alphaChannel)
{
	((QImage *)handle)->setAlphaChannel(*(const QImage*)alphaChannel);
}

C_EXPORT void QImage_alphaChannel(QImageH handle, QImageH retval)
{
	*(QImage *)retval = ((QImage *)handle)->alphaChannel();
}

C_EXPORT void QImage_createAlphaMask(QImageH handle, QImageH retval, unsigned int flags)
{
	*(QImage *)retval = ((QImage *)handle)->createAlphaMask((Qt::ImageConversionFlags)flags);
}

C_EXPORT void QImage_createHeuristicMask(QImageH handle, QImageH retval, bool clipTight)
{
	*(QImage *)retval = ((QImage *)handle)->createHeuristicMask(clipTight);
}

C_EXPORT void QImage_createMaskFromColor(QImageH handle, QImageH retval, QRgb color, Qt::MaskMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->createMaskFromColor(color, mode);
}

C_EXPORT void QImage_scaled(QImageH handle, QImageH retval, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->scaled(w, h, aspectMode, mode);
}

C_EXPORT void QImage_scaled2(QImageH handle, QImageH retval, const QSizeH s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->scaled(*(const QSize*)s, aspectMode, mode);
}

C_EXPORT void QImage_scaledToWidth(QImageH handle, QImageH retval, int w, Qt::TransformationMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->scaledToWidth(w, mode);
}

C_EXPORT void QImage_scaledToHeight(QImageH handle, QImageH retval, int h, Qt::TransformationMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->scaledToHeight(h, mode);
}

C_EXPORT void QImage_transformed(QImageH handle, QImageH retval, const QMatrixH matrix, Qt::TransformationMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->transformed(*(const QMatrix*)matrix, mode);
}

C_EXPORT void QImage_trueMatrix(QMatrixH retval, const QMatrixH AnonParam1, int w, int h)
{
	*(QMatrix *)retval = QImage::trueMatrix(*(const QMatrix*)AnonParam1, w, h);
}

C_EXPORT void QImage_transformed2(QImageH handle, QImageH retval, const QTransformH matrix, Qt::TransformationMode mode)
{
	*(QImage *)retval = ((QImage *)handle)->transformed(*(const QTransform*)matrix, mode);
}

C_EXPORT void QImage_trueMatrix2(QTransformH retval, const QTransformH AnonParam1, int w, int h)
{
	*(QTransform *)retval = QImage::trueMatrix(*(const QTransform*)AnonParam1, w, h);
}

C_EXPORT void QImage_mirrored(QImageH handle, QImageH retval, bool horizontally, bool vertically)
{
	*(QImage *)retval = ((QImage *)handle)->mirrored(horizontally, vertically);
}

C_EXPORT void QImage_rgbSwapped(QImageH handle, QImageH retval)
{
	*(QImage *)retval = ((QImage *)handle)->rgbSwapped();
}

C_EXPORT void QImage_invertPixels(QImageH handle, QImage::InvertMode AnonParam1)
{
	((QImage *)handle)->invertPixels(AnonParam1);
}

C_EXPORT bool QImage_load(QImageH handle, QIODeviceH device, const char* format)
{
	return (bool) ((QImage *)handle)->load((QIODevice*)device, format);
}

C_EXPORT bool QImage_load2(QImageH handle, PWideString fileName, const char* format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) ((QImage *)handle)->load(t_fileName, format);
}

C_EXPORT bool QImage_loadFromData(QImageH handle, const uchar* buf, int len, const char* format)
{
	return (bool) ((QImage *)handle)->loadFromData(buf, len, format);
}

C_EXPORT bool QImage_loadFromData2(QImageH handle, const QByteArrayH data, const char* aformat)
{
	return (bool) ((QImage *)handle)->loadFromData(*(const QByteArray*)data, aformat);
}

C_EXPORT bool QImage_save(QImageH handle, PWideString fileName, const char* format, int quality)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) ((QImage *)handle)->save(t_fileName, format, quality);
}

C_EXPORT bool QImage_save2(QImageH handle, QIODeviceH device, const char* format, int quality)
{
	return (bool) ((QImage *)handle)->save((QIODevice*)device, format, quality);
}

C_EXPORT void QImage_fromData(QImageH retval, const uchar* data, int size, const char* format)
{
	*(QImage *)retval = QImage::fromData(data, size, format);
}

C_EXPORT void QImage_fromData2(QImageH retval, const QByteArrayH data, const char* format)
{
	*(QImage *)retval = QImage::fromData(*(const QByteArray*)data, format);
}

C_EXPORT int QImage_serialNumber(QImageH handle)
{
	return (int) ((QImage *)handle)->serialNumber();
}

C_EXPORT qint64 QImage_cacheKey(QImageH handle)
{
	return (qint64) ((QImage *)handle)->cacheKey();
}

C_EXPORT QPaintEngineH QImage_paintEngine(QImageH handle)
{
	return (QPaintEngineH) ((QImage *)handle)->paintEngine();
}

C_EXPORT int QImage_dotsPerMeterX(QImageH handle)
{
	return (int) ((QImage *)handle)->dotsPerMeterX();
}

C_EXPORT int QImage_dotsPerMeterY(QImageH handle)
{
	return (int) ((QImage *)handle)->dotsPerMeterY();
}

C_EXPORT void QImage_setDotsPerMeterX(QImageH handle, int AnonParam1)
{
	((QImage *)handle)->setDotsPerMeterX(AnonParam1);
}

C_EXPORT void QImage_setDotsPerMeterY(QImageH handle, int AnonParam1)
{
	((QImage *)handle)->setDotsPerMeterY(AnonParam1);
}

C_EXPORT void QImage_offset(QImageH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QImage *)handle)->offset();
}

C_EXPORT void QImage_setOffset(QImageH handle, const QPointH AnonParam1)
{
	((QImage *)handle)->setOffset(*(const QPoint*)AnonParam1);
}

C_EXPORT void QImage_textKeys(QImageH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QImage *)handle)->textKeys();
}

C_EXPORT void QImage_text(QImageH handle, PWideString retval, PWideString key)
{
	QString t_retval;
	QString t_key;
	copyPWideStringToQString(key, t_key);
	t_retval = ((QImage *)handle)->text(t_key);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QImage_setText(QImageH handle, PWideString key, PWideString value)
{
	QString t_key;
	QString t_value;
	copyPWideStringToQString(key, t_key);
	copyPWideStringToQString(value, t_value);
	((QImage *)handle)->setText(t_key, t_value);
}

C_EXPORT void QImage_text2(QImageH handle, PWideString retval, const char* key, const char* lang)
{
	QString t_retval;
	t_retval = ((QImage *)handle)->text(key, lang);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QImage_textLanguages(QImageH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QImage *)handle)->textLanguages();
}

C_EXPORT void QImage_setText2(QImageH handle, const char* key, const char* lang, PWideString AnonParam3)
{
	QString t_AnonParam3;
	copyPWideStringToQString(AnonParam3, t_AnonParam3);
	((QImage *)handle)->setText(key, lang, t_AnonParam3);
}

