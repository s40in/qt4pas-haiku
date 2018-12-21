//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QClipboard_clear(QClipboardH handle, QClipboard::Mode mode)
{
	((QClipboard *)handle)->clear(mode);
}

C_EXPORT bool QClipboard_supportsSelection(QClipboardH handle)
{
	return (bool) ((QClipboard *)handle)->supportsSelection();
}

C_EXPORT bool QClipboard_supportsFindBuffer(QClipboardH handle)
{
	return (bool) ((QClipboard *)handle)->supportsFindBuffer();
}

C_EXPORT bool QClipboard_ownsSelection(QClipboardH handle)
{
	return (bool) ((QClipboard *)handle)->ownsSelection();
}

C_EXPORT bool QClipboard_ownsClipboard(QClipboardH handle)
{
	return (bool) ((QClipboard *)handle)->ownsClipboard();
}

C_EXPORT bool QClipboard_ownsFindBuffer(QClipboardH handle)
{
	return (bool) ((QClipboard *)handle)->ownsFindBuffer();
}

C_EXPORT void QClipboard_text(QClipboardH handle, PWideString retval, QClipboard::Mode mode)
{
	QString t_retval;
	t_retval = ((QClipboard *)handle)->text(mode);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QClipboard_text2(QClipboardH handle, PWideString retval, PWideString subtype, QClipboard::Mode mode)
{
	QString t_retval;
	QString t_subtype;
	copyPWideStringToQString(subtype, t_subtype);
	t_retval = ((QClipboard *)handle)->text(t_subtype, mode);
	copyQStringToPWideString(t_retval, retval);
	copyQStringToPWideString(t_subtype, subtype);
}

C_EXPORT void QClipboard_setText(QClipboardH handle, PWideString AnonParam1, QClipboard::Mode mode)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QClipboard *)handle)->setText(t_AnonParam1, mode);
}

C_EXPORT const QMimeDataH QClipboard_mimeData(QClipboardH handle, QClipboard::Mode mode)
{
	return (const QMimeDataH) ((QClipboard *)handle)->mimeData(mode);
}

C_EXPORT void QClipboard_setMimeData(QClipboardH handle, QMimeDataH data, QClipboard::Mode mode)
{
	((QClipboard *)handle)->setMimeData((QMimeData*)data, mode);
}

C_EXPORT void QClipboard_image(QClipboardH handle, QImageH retval, QClipboard::Mode mode)
{
	*(QImage *)retval = ((QClipboard *)handle)->image(mode);
}

C_EXPORT void QClipboard_pixmap(QClipboardH handle, QPixmapH retval, QClipboard::Mode mode)
{
	*(QPixmap *)retval = ((QClipboard *)handle)->pixmap(mode);
}

C_EXPORT void QClipboard_setImage(QClipboardH handle, const QImageH AnonParam1, QClipboard::Mode mode)
{
	((QClipboard *)handle)->setImage(*(const QImage*)AnonParam1, mode);
}

C_EXPORT void QClipboard_setPixmap(QClipboardH handle, const QPixmapH AnonParam1, QClipboard::Mode mode)
{
	((QClipboard *)handle)->setPixmap(*(const QPixmap*)AnonParam1, mode);
}

