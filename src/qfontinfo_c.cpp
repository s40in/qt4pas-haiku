//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFontInfoH QFontInfo_create(const QFontH AnonParam1)
{
	return (QFontInfoH) new QFontInfo(*(const QFont*)AnonParam1);
}

C_EXPORT void QFontInfo_destroy(QFontInfoH handle)
{
	delete (QFontInfo *)handle;
}

C_EXPORT QFontInfoH QFontInfo_create2(const QFontInfoH AnonParam1)
{
	return (QFontInfoH) new QFontInfo(*(const QFontInfo*)AnonParam1);
}

C_EXPORT void QFontInfo_family(QFontInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFontInfo *)handle)->family();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QFontInfo_pixelSize(QFontInfoH handle)
{
	return (int) ((QFontInfo *)handle)->pixelSize();
}

C_EXPORT int QFontInfo_pointSize(QFontInfoH handle)
{
	return (int) ((QFontInfo *)handle)->pointSize();
}

C_EXPORT qreal QFontInfo_pointSizeF(QFontInfoH handle)
{
	return (qreal) ((QFontInfo *)handle)->pointSizeF();
}

C_EXPORT bool QFontInfo_italic(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->italic();
}

C_EXPORT QFont::Style QFontInfo_style(QFontInfoH handle)
{
	return (QFont::Style) ((QFontInfo *)handle)->style();
}

C_EXPORT int QFontInfo_weight(QFontInfoH handle)
{
	return (int) ((QFontInfo *)handle)->weight();
}

C_EXPORT bool QFontInfo_bold(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->bold();
}

C_EXPORT bool QFontInfo_underline(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->underline();
}

C_EXPORT bool QFontInfo_overline(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->overline();
}

C_EXPORT bool QFontInfo_strikeOut(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->strikeOut();
}

C_EXPORT bool QFontInfo_fixedPitch(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->fixedPitch();
}

C_EXPORT QFont::StyleHint QFontInfo_styleHint(QFontInfoH handle)
{
	return (QFont::StyleHint) ((QFontInfo *)handle)->styleHint();
}

C_EXPORT bool QFontInfo_rawMode(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->rawMode();
}

C_EXPORT bool QFontInfo_exactMatch(QFontInfoH handle)
{
	return (bool) ((QFontInfo *)handle)->exactMatch();
}

