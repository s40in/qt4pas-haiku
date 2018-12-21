//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QLabelH QLabel_create(QWidgetH parent, unsigned int f)
{
	return (QLabelH) new QLabel((QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QLabel_destroy(QLabelH handle)
{
	delete (QLabel *)handle;
}

C_EXPORT QLabelH QLabel_create2(PWideString text, QWidgetH parent, unsigned int f)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QLabelH) new QLabel(t_text, (QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QLabel_text(QLabelH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLabel *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT const QPixmapH QLabel_pixmap(QLabelH handle)
{
	return (const QPixmapH) ((QLabel *)handle)->pixmap();
}

C_EXPORT const QPictureH QLabel_picture(QLabelH handle)
{
	return (const QPictureH) ((QLabel *)handle)->picture();
}

C_EXPORT QMovieH QLabel_movie(QLabelH handle)
{
	return (QMovieH) ((QLabel *)handle)->movie();
}

C_EXPORT Qt::TextFormat QLabel_textFormat(QLabelH handle)
{
	return (Qt::TextFormat) ((QLabel *)handle)->textFormat();
}

C_EXPORT void QLabel_setTextFormat(QLabelH handle, Qt::TextFormat AnonParam1)
{
	((QLabel *)handle)->setTextFormat(AnonParam1);
}

C_EXPORT unsigned int QLabel_alignment(QLabelH handle)
{
	return (unsigned int) ((QLabel *)handle)->alignment();
}

C_EXPORT void QLabel_setAlignment(QLabelH handle, unsigned int AnonParam1)
{
	((QLabel *)handle)->setAlignment((Qt::Alignment)AnonParam1);
}

C_EXPORT void QLabel_setWordWrap(QLabelH handle, bool on)
{
	((QLabel *)handle)->setWordWrap(on);
}

C_EXPORT bool QLabel_wordWrap(QLabelH handle)
{
	return (bool) ((QLabel *)handle)->wordWrap();
}

C_EXPORT int QLabel_indent(QLabelH handle)
{
	return (int) ((QLabel *)handle)->indent();
}

C_EXPORT void QLabel_setIndent(QLabelH handle, int AnonParam1)
{
	((QLabel *)handle)->setIndent(AnonParam1);
}

C_EXPORT int QLabel_margin(QLabelH handle)
{
	return (int) ((QLabel *)handle)->margin();
}

C_EXPORT void QLabel_setMargin(QLabelH handle, int AnonParam1)
{
	((QLabel *)handle)->setMargin(AnonParam1);
}

C_EXPORT bool QLabel_hasScaledContents(QLabelH handle)
{
	return (bool) ((QLabel *)handle)->hasScaledContents();
}

C_EXPORT void QLabel_setScaledContents(QLabelH handle, bool AnonParam1)
{
	((QLabel *)handle)->setScaledContents(AnonParam1);
}

C_EXPORT void QLabel_sizeHint(QLabelH handle, PSize retval)
{
	*(QSize *)retval = ((QLabel *)handle)->sizeHint();
}

C_EXPORT void QLabel_minimumSizeHint(QLabelH handle, PSize retval)
{
	*(QSize *)retval = ((QLabel *)handle)->minimumSizeHint();
}

C_EXPORT void QLabel_setBuddy(QLabelH handle, QWidgetH AnonParam1)
{
	((QLabel *)handle)->setBuddy((QWidget*)AnonParam1);
}

C_EXPORT QWidgetH QLabel_buddy(QLabelH handle)
{
	return (QWidgetH) ((QLabel *)handle)->buddy();
}

C_EXPORT int QLabel_heightForWidth(QLabelH handle, int AnonParam1)
{
	return (int) ((QLabel *)handle)->heightForWidth(AnonParam1);
}

C_EXPORT bool QLabel_openExternalLinks(QLabelH handle)
{
	return (bool) ((QLabel *)handle)->openExternalLinks();
}

C_EXPORT void QLabel_setOpenExternalLinks(QLabelH handle, bool open)
{
	((QLabel *)handle)->setOpenExternalLinks(open);
}

C_EXPORT void QLabel_setTextInteractionFlags(QLabelH handle, unsigned int flags)
{
	((QLabel *)handle)->setTextInteractionFlags((Qt::TextInteractionFlags)flags);
}

C_EXPORT unsigned int QLabel_textInteractionFlags(QLabelH handle)
{
	return (unsigned int) ((QLabel *)handle)->textInteractionFlags();
}

C_EXPORT void QLabel_setText(QLabelH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QLabel *)handle)->setText(t_AnonParam1);
}

C_EXPORT void QLabel_setPixmap(QLabelH handle, const QPixmapH AnonParam1)
{
	((QLabel *)handle)->setPixmap(*(const QPixmap*)AnonParam1);
}

C_EXPORT void QLabel_setPicture(QLabelH handle, const QPictureH AnonParam1)
{
	((QLabel *)handle)->setPicture(*(const QPicture*)AnonParam1);
}

C_EXPORT void QLabel_setMovie(QLabelH handle, QMovieH movie)
{
	((QLabel *)handle)->setMovie((QMovie*)movie);
}

C_EXPORT void QLabel_setNum(QLabelH handle, int AnonParam1)
{
	((QLabel *)handle)->setNum(AnonParam1);
}

C_EXPORT void QLabel_setNum2(QLabelH handle, double AnonParam1)
{
	((QLabel *)handle)->setNum(AnonParam1);
}

C_EXPORT void QLabel_clear(QLabelH handle)
{
	((QLabel *)handle)->clear();
}

