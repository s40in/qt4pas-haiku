//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QImageIOHandler_setDevice(QImageIOHandlerH handle, QIODeviceH device)
{
	((QImageIOHandler *)handle)->setDevice((QIODevice*)device);
}

C_EXPORT QIODeviceH QImageIOHandler_device(QImageIOHandlerH handle)
{
	return (QIODeviceH) ((QImageIOHandler *)handle)->device();
}

C_EXPORT void QImageIOHandler_setFormat(QImageIOHandlerH handle, const QByteArrayH format)
{
	((QImageIOHandler *)handle)->setFormat(*(const QByteArray*)format);
}

C_EXPORT void QImageIOHandler_format(QImageIOHandlerH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QImageIOHandler *)handle)->format();
}

C_EXPORT void QImageIOHandler_name(QImageIOHandlerH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QImageIOHandler *)handle)->name();
}

C_EXPORT bool QImageIOHandler_canRead(QImageIOHandlerH handle)
{
	return (bool) ((QImageIOHandler *)handle)->canRead();
}

C_EXPORT bool QImageIOHandler_read(QImageIOHandlerH handle, QImageH image)
{
	return (bool) ((QImageIOHandler *)handle)->read((QImage*)image);
}

C_EXPORT bool QImageIOHandler_write(QImageIOHandlerH handle, const QImageH image)
{
	return (bool) ((QImageIOHandler *)handle)->write(*(const QImage*)image);
}

C_EXPORT void QImageIOHandler_option(QImageIOHandlerH handle, QVariantH retval, QImageIOHandler::ImageOption option)
{
	*(QVariant *)retval = ((QImageIOHandler *)handle)->option(option);
}

C_EXPORT void QImageIOHandler_setOption(QImageIOHandlerH handle, QImageIOHandler::ImageOption option, const QVariantH value)
{
	((QImageIOHandler *)handle)->setOption(option, *(const QVariant*)value);
}

C_EXPORT bool QImageIOHandler_supportsOption(QImageIOHandlerH handle, QImageIOHandler::ImageOption option)
{
	return (bool) ((QImageIOHandler *)handle)->supportsOption(option);
}

C_EXPORT bool QImageIOHandler_jumpToNextImage(QImageIOHandlerH handle)
{
	return (bool) ((QImageIOHandler *)handle)->jumpToNextImage();
}

C_EXPORT bool QImageIOHandler_jumpToImage(QImageIOHandlerH handle, int imageNumber)
{
	return (bool) ((QImageIOHandler *)handle)->jumpToImage(imageNumber);
}

C_EXPORT int QImageIOHandler_loopCount(QImageIOHandlerH handle)
{
	return (int) ((QImageIOHandler *)handle)->loopCount();
}

C_EXPORT int QImageIOHandler_imageCount(QImageIOHandlerH handle)
{
	return (int) ((QImageIOHandler *)handle)->imageCount();
}

C_EXPORT int QImageIOHandler_nextImageDelay(QImageIOHandlerH handle)
{
	return (int) ((QImageIOHandler *)handle)->nextImageDelay();
}

C_EXPORT int QImageIOHandler_currentImageNumber(QImageIOHandlerH handle)
{
	return (int) ((QImageIOHandler *)handle)->currentImageNumber();
}

C_EXPORT void QImageIOHandler_currentImageRect(QImageIOHandlerH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QImageIOHandler *)handle)->currentImageRect();
	copyQRectToPRect(t_retval, retval);
}

