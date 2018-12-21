//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QBitmapH QBitmap_create()
{
	return (QBitmapH) new QBitmap();
}

C_EXPORT void QBitmap_destroy(QBitmapH handle)
{
	delete (QBitmap *)handle;
}

C_EXPORT QBitmapH QBitmap_create2(const QPixmapH AnonParam1)
{
	return (QBitmapH) new QBitmap(*(const QPixmap*)AnonParam1);
}

C_EXPORT QBitmapH QBitmap_create3(int w, int h)
{
	return (QBitmapH) new QBitmap(w, h);
}

C_EXPORT QBitmapH QBitmap_create4(const QSizeH AnonParam1)
{
	return (QBitmapH) new QBitmap(*(const QSize*)AnonParam1);
}

C_EXPORT QBitmapH QBitmap_create5(PWideString fileName, const char* format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (QBitmapH) new QBitmap(t_fileName, format);
}

C_EXPORT void QBitmap_clear(QBitmapH handle)
{
	((QBitmap *)handle)->clear();
}

C_EXPORT void QBitmap_fromImage(QBitmapH retval, const QImageH image, unsigned int flags)
{
	*(QBitmap *)retval = QBitmap::fromImage(*(const QImage*)image, (Qt::ImageConversionFlags)flags);
}

C_EXPORT void QBitmap_fromData(QBitmapH retval, const QSizeH size, const uchar* bits, QImage::Format monoFormat)
{
	*(QBitmap *)retval = QBitmap::fromData(*(const QSize*)size, bits, monoFormat);
}

C_EXPORT void QBitmap_transformed(QBitmapH handle, QBitmapH retval, const QMatrixH AnonParam1)
{
	*(QBitmap *)retval = ((QBitmap *)handle)->transformed(*(const QMatrix*)AnonParam1);
}

C_EXPORT void QBitmap_transformed2(QBitmapH handle, QBitmapH retval, const QTransformH matrix)
{
	*(QBitmap *)retval = ((QBitmap *)handle)->transformed(*(const QTransform*)matrix);
}

