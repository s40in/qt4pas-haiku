//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPictureH QPicture_create(int formatVersion)
{
	return (QPictureH) new QPicture(formatVersion);
}

C_EXPORT void QPicture_destroy(QPictureH handle)
{
	delete (QPicture *)handle;
}

C_EXPORT QPictureH QPicture_create2(const QPictureH AnonParam1)
{
	return (QPictureH) new QPicture(*(const QPicture*)AnonParam1);
}

C_EXPORT bool QPicture_isNull(QPictureH handle)
{
	return (bool) ((QPicture *)handle)->isNull();
}

C_EXPORT int QPicture_devType(QPictureH handle)
{
	return (int) ((QPicture *)handle)->devType();
}

C_EXPORT uint QPicture_size(QPictureH handle)
{
	return (uint) ((QPicture *)handle)->size();
}

C_EXPORT const char* QPicture_data(QPictureH handle)
{
	return (const char*) ((QPicture *)handle)->data();
}

C_EXPORT void QPicture_setData(QPictureH handle, const char* data, uint size)
{
	((QPicture *)handle)->setData(data, size);
}

C_EXPORT bool QPicture_play(QPictureH handle, QPainterH p)
{
	return (bool) ((QPicture *)handle)->play((QPainter*)p);
}

C_EXPORT bool QPicture_load(QPictureH handle, QIODeviceH dev, const char* format)
{
	return (bool) ((QPicture *)handle)->load((QIODevice*)dev, format);
}

C_EXPORT bool QPicture_load2(QPictureH handle, PWideString fileName, const char* format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) ((QPicture *)handle)->load(t_fileName, format);
}

C_EXPORT bool QPicture_save(QPictureH handle, QIODeviceH dev, const char* format)
{
	return (bool) ((QPicture *)handle)->save((QIODevice*)dev, format);
}

C_EXPORT bool QPicture_save2(QPictureH handle, PWideString fileName, const char* format)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) ((QPicture *)handle)->save(t_fileName, format);
}

C_EXPORT void QPicture_boundingRect(QPictureH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPicture *)handle)->boundingRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QPicture_setBoundingRect(QPictureH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	((QPicture *)handle)->setBoundingRect(t_r);
}

C_EXPORT void QPicture_detach(QPictureH handle)
{
	((QPicture *)handle)->detach();
}

C_EXPORT bool QPicture_isDetached(QPictureH handle)
{
	return (bool) ((QPicture *)handle)->isDetached();
}

C_EXPORT const char* QPicture_pictureFormat(PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (const char*) QPicture::pictureFormat(t_fileName);
}

C_EXPORT void QPicture_inputFormatList(QStringListH retval)
{
	*(QStringList *)retval = QPicture::inputFormatList();
}

C_EXPORT void QPicture_outputFormatList(QStringListH retval)
{
	*(QStringList *)retval = QPicture::outputFormatList();
}

C_EXPORT QPaintEngineH QPicture_paintEngine(QPictureH handle)
{
	return (QPaintEngineH) ((QPicture *)handle)->paintEngine();
}

