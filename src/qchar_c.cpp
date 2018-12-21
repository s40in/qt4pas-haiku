//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QCharH QChar_create()
{
	return (QCharH) new QChar();
}

C_EXPORT void QChar_destroy(QCharH handle)
{
	delete (QChar *)handle;
}

C_EXPORT QCharH QChar_create2(char c)
{
	return (QCharH) new QChar(c);
}

C_EXPORT QCharH QChar_create4(unsigned char c, unsigned char r)
{
	return (QCharH) new QChar((uchar)c, (uchar)r);
}

C_EXPORT QCharH QChar_create5(ushort rc)
{
	return (QCharH) new QChar(rc);
}

C_EXPORT QCharH QChar_create6(short rc)
{
	return (QCharH) new QChar(rc);
}

C_EXPORT QCharH QChar_create7(uint rc)
{
	return (QCharH) new QChar(rc);
}

C_EXPORT QCharH QChar_create8(int rc)
{
	return (QCharH) new QChar(rc);
}

C_EXPORT QCharH QChar_create9(QChar::SpecialCharacter sc)
{
	return (QCharH) new QChar(sc);
}

C_EXPORT QChar::Category QChar_category(QCharH handle)
{
	return (QChar::Category) ((QChar *)handle)->category();
}

C_EXPORT QChar::Direction QChar_direction(QCharH handle)
{
	return (QChar::Direction) ((QChar *)handle)->direction();
}

C_EXPORT QChar::Joining QChar_joining(QCharH handle)
{
	return (QChar::Joining) ((QChar *)handle)->joining();
}

C_EXPORT bool QChar_hasMirrored(QCharH handle)
{
	return (bool) ((QChar *)handle)->hasMirrored();
}

C_EXPORT unsigned char QChar_combiningClass(QCharH handle)
{
	return (unsigned char) ((QChar *)handle)->combiningClass();
}

C_EXPORT void QChar_mirroredChar(QCharH handle, PWideChar retval)
{
	*(QChar *)retval = ((QChar *)handle)->mirroredChar();
}

C_EXPORT void QChar_decomposition(QCharH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QChar *)handle)->decomposition();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QChar::Decomposition QChar_decompositionTag(QCharH handle)
{
	return (QChar::Decomposition) ((QChar *)handle)->decompositionTag();
}

C_EXPORT int QChar_digitValue(QCharH handle)
{
	return (int) ((QChar *)handle)->digitValue();
}

C_EXPORT void QChar_toLower(QCharH handle, PWideChar retval)
{
	*(QChar *)retval = ((QChar *)handle)->toLower();
}

C_EXPORT void QChar_toUpper(QCharH handle, PWideChar retval)
{
	*(QChar *)retval = ((QChar *)handle)->toUpper();
}

C_EXPORT void QChar_toTitleCase(QCharH handle, PWideChar retval)
{
	*(QChar *)retval = ((QChar *)handle)->toTitleCase();
}

C_EXPORT void QChar_toCaseFolded(QCharH handle, PWideChar retval)
{
	*(QChar *)retval = ((QChar *)handle)->toCaseFolded();
}

C_EXPORT QChar::UnicodeVersion QChar_unicodeVersion(QCharH handle)
{
	return (QChar::UnicodeVersion) ((QChar *)handle)->unicodeVersion();
}

C_EXPORT char QChar_toAscii(QCharH handle)
{
	return (char) ((QChar *)handle)->toAscii();
}

C_EXPORT char QChar_toLatin1(QCharH handle)
{
	return (char) ((QChar *)handle)->toLatin1();
}

C_EXPORT ushort QChar_unicode(QCharH handle)
{
	return (ushort) ((QChar *)handle)->unicode();
}

C_EXPORT void QChar_fromAscii(PWideChar retval, char c)
{
	*(QChar *)retval = QChar::fromAscii(c);
}

C_EXPORT void QChar_fromLatin1(PWideChar retval, char c)
{
	*(QChar *)retval = QChar::fromLatin1(c);
}

C_EXPORT bool QChar_isNull(QCharH handle)
{
	return (bool) ((QChar *)handle)->isNull();
}

C_EXPORT bool QChar_isPrint(QCharH handle)
{
	return (bool) ((QChar *)handle)->isPrint();
}

C_EXPORT bool QChar_isPunct(QCharH handle)
{
	return (bool) ((QChar *)handle)->isPunct();
}

C_EXPORT bool QChar_isSpace(QCharH handle)
{
	return (bool) ((QChar *)handle)->isSpace();
}

C_EXPORT bool QChar_isMark(QCharH handle)
{
	return (bool) ((QChar *)handle)->isMark();
}

C_EXPORT bool QChar_isLetter(QCharH handle)
{
	return (bool) ((QChar *)handle)->isLetter();
}

C_EXPORT bool QChar_isNumber(QCharH handle)
{
	return (bool) ((QChar *)handle)->isNumber();
}

C_EXPORT bool QChar_isLetterOrNumber(QCharH handle)
{
	return (bool) ((QChar *)handle)->isLetterOrNumber();
}

C_EXPORT bool QChar_isDigit(QCharH handle)
{
	return (bool) ((QChar *)handle)->isDigit();
}

C_EXPORT bool QChar_isSymbol(QCharH handle)
{
	return (bool) ((QChar *)handle)->isSymbol();
}

C_EXPORT bool QChar_isLower(QCharH handle)
{
	return (bool) ((QChar *)handle)->isLower();
}

C_EXPORT bool QChar_isUpper(QCharH handle)
{
	return (bool) ((QChar *)handle)->isUpper();
}

C_EXPORT bool QChar_isTitleCase(QCharH handle)
{
	return (bool) ((QChar *)handle)->isTitleCase();
}

C_EXPORT bool QChar_isHighSurrogate(QCharH handle)
{
	return (bool) ((QChar *)handle)->isHighSurrogate();
}

C_EXPORT bool QChar_isLowSurrogate(QCharH handle)
{
	return (bool) ((QChar *)handle)->isLowSurrogate();
}

C_EXPORT unsigned char QChar_cell(QCharH handle)
{
	return (unsigned char) ((QChar *)handle)->cell();
}

C_EXPORT unsigned char QChar_row(QCharH handle)
{
	return (unsigned char) ((QChar *)handle)->row();
}

C_EXPORT void QChar_setCell(QCharH handle, unsigned char cell)
{
	((QChar *)handle)->setCell((uchar)cell);
}

C_EXPORT void QChar_setRow(QCharH handle, unsigned char row)
{
	((QChar *)handle)->setRow((uchar)row);
}

C_EXPORT uint QChar_surrogateToUcs4(ushort high, ushort low)
{
	return (uint) QChar::surrogateToUcs4(high, low);
}

C_EXPORT uint QChar_surrogateToUcs42(PWideChar high, PWideChar low)
{
	return (uint) QChar::surrogateToUcs4(*(QChar *)high, *(QChar *)low);
}

C_EXPORT ushort QChar_highSurrogate(uint ucs4)
{
	return (ushort) QChar::highSurrogate(ucs4);
}

C_EXPORT ushort QChar_lowSurrogate(uint ucs4)
{
	return (ushort) QChar::lowSurrogate(ucs4);
}

