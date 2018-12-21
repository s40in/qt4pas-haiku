//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMimeDataH QMimeData_create()
{
	return (QMimeDataH) new QMimeData();
}

C_EXPORT void QMimeData_destroy(QMimeDataH handle)
{
	delete (QMimeData *)handle;
}

C_EXPORT bool QMimeData_hasUrls(QMimeDataH handle)
{
	return (bool) ((QMimeData *)handle)->hasUrls();
}

C_EXPORT void QMimeData_text(QMimeDataH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QMimeData *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMimeData_setText(QMimeDataH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QMimeData *)handle)->setText(t_text);
}

C_EXPORT bool QMimeData_hasText(QMimeDataH handle)
{
	return (bool) ((QMimeData *)handle)->hasText();
}

C_EXPORT void QMimeData_html(QMimeDataH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QMimeData *)handle)->html();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMimeData_setHtml(QMimeDataH handle, PWideString html)
{
	QString t_html;
	copyPWideStringToQString(html, t_html);
	((QMimeData *)handle)->setHtml(t_html);
}

C_EXPORT bool QMimeData_hasHtml(QMimeDataH handle)
{
	return (bool) ((QMimeData *)handle)->hasHtml();
}

C_EXPORT void QMimeData_imageData(QMimeDataH handle, QVariantH retval)
{
	*(QVariant *)retval = ((QMimeData *)handle)->imageData();
}

C_EXPORT void QMimeData_setImageData(QMimeDataH handle, const QVariantH image)
{
	((QMimeData *)handle)->setImageData(*(const QVariant*)image);
}

C_EXPORT bool QMimeData_hasImage(QMimeDataH handle)
{
	return (bool) ((QMimeData *)handle)->hasImage();
}

C_EXPORT void QMimeData_colorData(QMimeDataH handle, QVariantH retval)
{
	*(QVariant *)retval = ((QMimeData *)handle)->colorData();
}

C_EXPORT void QMimeData_setColorData(QMimeDataH handle, const QVariantH color)
{
	((QMimeData *)handle)->setColorData(*(const QVariant*)color);
}

C_EXPORT bool QMimeData_hasColor(QMimeDataH handle)
{
	return (bool) ((QMimeData *)handle)->hasColor();
}

C_EXPORT void QMimeData_data(QMimeDataH handle, QByteArrayH retval, PWideString mimetype)
{
	QString t_mimetype;
	copyPWideStringToQString(mimetype, t_mimetype);
	*(QByteArray *)retval = ((QMimeData *)handle)->data(t_mimetype);
}

C_EXPORT void QMimeData_setData(QMimeDataH handle, PWideString mimetype, const QByteArrayH data)
{
	QString t_mimetype;
	copyPWideStringToQString(mimetype, t_mimetype);
	((QMimeData *)handle)->setData(t_mimetype, *(const QByteArray*)data);
}

C_EXPORT void QMimeData_removeFormat(QMimeDataH handle, PWideString mimetype)
{
	QString t_mimetype;
	copyPWideStringToQString(mimetype, t_mimetype);
	((QMimeData *)handle)->removeFormat(t_mimetype);
}

C_EXPORT bool QMimeData_hasFormat(QMimeDataH handle, PWideString mimetype)
{
	QString t_mimetype;
	copyPWideStringToQString(mimetype, t_mimetype);
	return (bool) ((QMimeData *)handle)->hasFormat(t_mimetype);
}

C_EXPORT void QMimeData_formats(QMimeDataH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QMimeData *)handle)->formats();
}

C_EXPORT void QMimeData_clear(QMimeDataH handle)
{
	((QMimeData *)handle)->clear();
}

