//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFontH QFont_create()
{
	return (QFontH) new QFont();
}

C_EXPORT void QFont_destroy(QFontH handle)
{
	delete (QFont *)handle;
}

C_EXPORT QFontH QFont_create2(PWideString family, int pointSize, int weight, bool italic)
{
	QString t_family;
	copyPWideStringToQString(family, t_family);
	return (QFontH) new QFont(t_family, pointSize, weight, italic);
}

C_EXPORT QFontH QFont_create3(const QFontH AnonParam1, QPaintDeviceH pd)
{
	return (QFontH) new QFont(*(const QFont*)AnonParam1, (QPaintDevice*)pd);
}

C_EXPORT QFontH QFont_create4(const QFontH AnonParam1)
{
	return (QFontH) new QFont(*(const QFont*)AnonParam1);
}

C_EXPORT void QFont_family(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->family();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_setFamily(QFontH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QFont *)handle)->setFamily(t_AnonParam1);
}

C_EXPORT int QFont_pointSize(QFontH handle)
{
	return (int) ((QFont *)handle)->pointSize();
}

C_EXPORT void QFont_setPointSize(QFontH handle, int AnonParam1)
{
	((QFont *)handle)->setPointSize(AnonParam1);
}

C_EXPORT qreal QFont_pointSizeF(QFontH handle)
{
	return (qreal) ((QFont *)handle)->pointSizeF();
}

C_EXPORT void QFont_setPointSizeF(QFontH handle, qreal AnonParam1)
{
	((QFont *)handle)->setPointSizeF(AnonParam1);
}

C_EXPORT int QFont_pixelSize(QFontH handle)
{
	return (int) ((QFont *)handle)->pixelSize();
}

C_EXPORT void QFont_setPixelSize(QFontH handle, int AnonParam1)
{
	((QFont *)handle)->setPixelSize(AnonParam1);
}

C_EXPORT int QFont_weight(QFontH handle)
{
	return (int) ((QFont *)handle)->weight();
}

C_EXPORT void QFont_setWeight(QFontH handle, int AnonParam1)
{
	((QFont *)handle)->setWeight(AnonParam1);
}

C_EXPORT bool QFont_bold(QFontH handle)
{
	return (bool) ((QFont *)handle)->bold();
}

C_EXPORT void QFont_setBold(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setBold(AnonParam1);
}

C_EXPORT void QFont_setStyle(QFontH handle, QFont::Style style)
{
	((QFont *)handle)->setStyle(style);
}

C_EXPORT QFont::Style QFont_style(QFontH handle)
{
	return (QFont::Style) ((QFont *)handle)->style();
}

C_EXPORT bool QFont_italic(QFontH handle)
{
	return (bool) ((QFont *)handle)->italic();
}

C_EXPORT void QFont_setItalic(QFontH handle, bool b)
{
	((QFont *)handle)->setItalic(b);
}

C_EXPORT bool QFont_underline(QFontH handle)
{
	return (bool) ((QFont *)handle)->underline();
}

C_EXPORT void QFont_setUnderline(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setUnderline(AnonParam1);
}

C_EXPORT bool QFont_overline(QFontH handle)
{
	return (bool) ((QFont *)handle)->overline();
}

C_EXPORT void QFont_setOverline(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setOverline(AnonParam1);
}

C_EXPORT bool QFont_strikeOut(QFontH handle)
{
	return (bool) ((QFont *)handle)->strikeOut();
}

C_EXPORT void QFont_setStrikeOut(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setStrikeOut(AnonParam1);
}

C_EXPORT bool QFont_fixedPitch(QFontH handle)
{
	return (bool) ((QFont *)handle)->fixedPitch();
}

C_EXPORT void QFont_setFixedPitch(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setFixedPitch(AnonParam1);
}

C_EXPORT bool QFont_kerning(QFontH handle)
{
	return (bool) ((QFont *)handle)->kerning();
}

C_EXPORT void QFont_setKerning(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setKerning(AnonParam1);
}

C_EXPORT QFont::StyleHint QFont_styleHint(QFontH handle)
{
	return (QFont::StyleHint) ((QFont *)handle)->styleHint();
}

C_EXPORT QFont::StyleStrategy QFont_styleStrategy(QFontH handle)
{
	return (QFont::StyleStrategy) ((QFont *)handle)->styleStrategy();
}

C_EXPORT void QFont_setStyleHint(QFontH handle, QFont::StyleHint AnonParam1, QFont::StyleStrategy AnonParam2)
{
	((QFont *)handle)->setStyleHint(AnonParam1, AnonParam2);
}

C_EXPORT void QFont_setStyleStrategy(QFontH handle, QFont::StyleStrategy s)
{
	((QFont *)handle)->setStyleStrategy(s);
}

C_EXPORT int QFont_stretch(QFontH handle)
{
	return (int) ((QFont *)handle)->stretch();
}

C_EXPORT void QFont_setStretch(QFontH handle, int AnonParam1)
{
	((QFont *)handle)->setStretch(AnonParam1);
}

C_EXPORT qreal QFont_letterSpacing(QFontH handle)
{
	return (qreal) ((QFont *)handle)->letterSpacing();
}

C_EXPORT QFont::SpacingType QFont_letterSpacingType(QFontH handle)
{
	return (QFont::SpacingType) ((QFont *)handle)->letterSpacingType();
}

C_EXPORT void QFont_setLetterSpacing(QFontH handle, QFont::SpacingType type, qreal spacing)
{
	((QFont *)handle)->setLetterSpacing(type, spacing);
}

C_EXPORT qreal QFont_wordSpacing(QFontH handle)
{
	return (qreal) ((QFont *)handle)->wordSpacing();
}

C_EXPORT void QFont_setWordSpacing(QFontH handle, qreal spacing)
{
	((QFont *)handle)->setWordSpacing(spacing);
}

C_EXPORT void QFont_setCapitalization(QFontH handle, QFont::Capitalization AnonParam1)
{
	((QFont *)handle)->setCapitalization(AnonParam1);
}

C_EXPORT QFont::Capitalization QFont_capitalization(QFontH handle)
{
	return (QFont::Capitalization) ((QFont *)handle)->capitalization();
}

C_EXPORT bool QFont_rawMode(QFontH handle)
{
	return (bool) ((QFont *)handle)->rawMode();
}

C_EXPORT void QFont_setRawMode(QFontH handle, bool AnonParam1)
{
	((QFont *)handle)->setRawMode(AnonParam1);
}

C_EXPORT bool QFont_exactMatch(QFontH handle)
{
	return (bool) ((QFont *)handle)->exactMatch();
}

C_EXPORT bool QFont_isCopyOf(QFontH handle, const QFontH AnonParam1)
{
	return (bool) ((QFont *)handle)->isCopyOf(*(const QFont*)AnonParam1);
}

#if defined BINUX || DARWIN || QTOPIA
C_EXPORT Qt::HANDLE QFont_handle(QFontH handle)
{
	return (Qt::HANDLE) ((QFont *)handle)->handle();
}

#endif
C_EXPORT void QFont_setRawName(QFontH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QFont *)handle)->setRawName(t_AnonParam1);
}

C_EXPORT void QFont_rawName(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->rawName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_key(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->key();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_toString(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->toString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QFont_fromString(QFontH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	return (bool) ((QFont *)handle)->fromString(t_AnonParam1);
}

C_EXPORT void QFont_substitute(PWideString retval, PWideString AnonParam1)
{
	QString t_retval;
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	t_retval = QFont::substitute(t_AnonParam1);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_substitutes(QStringListH retval, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	*(QStringList *)retval = QFont::substitutes(t_AnonParam1);
}

C_EXPORT void QFont_substitutions(QStringListH retval)
{
	*(QStringList *)retval = QFont::substitutions();
}

C_EXPORT void QFont_insertSubstitution(PWideString AnonParam1, PWideString AnonParam2)
{
	QString t_AnonParam1;
	QString t_AnonParam2;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	copyPWideStringToQString(AnonParam2, t_AnonParam2);
	QFont::insertSubstitution(t_AnonParam1, t_AnonParam2);
}

C_EXPORT void QFont_insertSubstitutions(PWideString AnonParam1, const QStringListH AnonParam2)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QFont::insertSubstitutions(t_AnonParam1, *(const QStringList*)AnonParam2);
}

C_EXPORT void QFont_removeSubstitution(PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QFont::removeSubstitution(t_AnonParam1);
}

C_EXPORT void QFont_initialize()
{
	QFont::initialize();
}

C_EXPORT void QFont_cleanup()
{
	QFont::cleanup();
}

#if defined BINUX || MSWINDOWS || DARWIN
C_EXPORT void QFont_cacheStatistics()
{
	QFont::cacheStatistics();
}

#endif
C_EXPORT void QFont_defaultFamily(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->defaultFamily();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_lastResortFamily(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->lastResortFamily();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_lastResortFont(QFontH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFont *)handle)->lastResortFont();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFont_resolve(QFontH handle, QFontH retval, const QFontH AnonParam1)
{
	*(QFont *)retval = ((QFont *)handle)->resolve(*(const QFont*)AnonParam1);
}

C_EXPORT uint QFont_resolve2(QFontH handle)
{
	return (uint) ((QFont *)handle)->resolve();
}

C_EXPORT void QFont_resolve3(QFontH handle, uint mask)
{
	((QFont *)handle)->resolve(mask);
}

#if defined MSWINDOWS
C_EXPORT HFONT QFont_handle2(QFontH handle)
{
	return (HFONT) ((QFont *)handle)->handle();
}

#endif
#if defined DARWIN
C_EXPORT quint32 QFont_macFontID(QFontH handle)
{
	return (quint32) ((QFont *)handle)->macFontID();
}

#endif
