//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QImageWriterH QImageWriter_create()
{
	return (QImageWriterH) new QImageWriter();
}

C_EXPORT void QImageWriter_destroy(QImageWriterH handle)
{
	delete (QImageWriter *)handle;
}

C_EXPORT QImageWriterH QImageWriter_create2(QIODeviceH device, const QByteArrayH format)
{
	return (QImageWriterH) new QImageWriter((QIODevice*)device, *(const QByteArray*)format);
}

C_EXPORT QImageWriterH QImageWriter_create3(PWideString fileName, const QByteArrayH format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (QImageWriterH) new QImageWriter(t_fileName, *(const QByteArray*)format);
}

C_EXPORT void QImageWriter_setFormat(QImageWriterH handle, const QByteArrayH format)
{
	((QImageWriter *)handle)->setFormat(*(const QByteArray*)format);
}

C_EXPORT void QImageWriter_format(QImageWriterH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QImageWriter *)handle)->format();
}

C_EXPORT void QImageWriter_setDevice(QImageWriterH handle, QIODeviceH device)
{
	((QImageWriter *)handle)->setDevice((QIODevice*)device);
}

C_EXPORT QIODeviceH QImageWriter_device(QImageWriterH handle)
{
	return (QIODeviceH) ((QImageWriter *)handle)->device();
}

C_EXPORT void QImageWriter_setFileName(QImageWriterH handle, PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QImageWriter *)handle)->setFileName(t_fileName);
}

C_EXPORT void QImageWriter_fileName(QImageWriterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QImageWriter *)handle)->fileName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QImageWriter_setQuality(QImageWriterH handle, int quality)
{
	((QImageWriter *)handle)->setQuality(quality);
}

C_EXPORT int QImageWriter_quality(QImageWriterH handle)
{
	return (int) ((QImageWriter *)handle)->quality();
}

C_EXPORT void QImageWriter_setCompression(QImageWriterH handle, int compression)
{
	((QImageWriter *)handle)->setCompression(compression);
}

C_EXPORT int QImageWriter_compression(QImageWriterH handle)
{
	return (int) ((QImageWriter *)handle)->compression();
}

C_EXPORT void QImageWriter_setGamma(QImageWriterH handle, float gamma)
{
	((QImageWriter *)handle)->setGamma(gamma);
}

C_EXPORT float QImageWriter_gamma(QImageWriterH handle)
{
	return (float) ((QImageWriter *)handle)->gamma();
}

C_EXPORT void QImageWriter_setDescription(QImageWriterH handle, PWideString description)
{
	QString t_description;
	copyPWideStringToQString(description, t_description);
	((QImageWriter *)handle)->setDescription(t_description);
}

C_EXPORT void QImageWriter_description(QImageWriterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QImageWriter *)handle)->description();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QImageWriter_setText(QImageWriterH handle, PWideString key, PWideString text)
{
	QString t_key;
	QString t_text;
	copyPWideStringToQString(key, t_key);
	copyPWideStringToQString(text, t_text);
	((QImageWriter *)handle)->setText(t_key, t_text);
}

C_EXPORT bool QImageWriter_canWrite(QImageWriterH handle)
{
	return (bool) ((QImageWriter *)handle)->canWrite();
}

C_EXPORT bool QImageWriter_write(QImageWriterH handle, const QImageH image)
{
	return (bool) ((QImageWriter *)handle)->write(*(const QImage*)image);
}

C_EXPORT QImageWriter::ImageWriterError QImageWriter_error(QImageWriterH handle)
{
	return (QImageWriter::ImageWriterError) ((QImageWriter *)handle)->error();
}

C_EXPORT void QImageWriter_errorString(QImageWriterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QImageWriter *)handle)->errorString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QImageWriter_supportsOption(QImageWriterH handle, QImageIOHandler::ImageOption option)
{
	return (bool) ((QImageWriter *)handle)->supportsOption(option);
}

