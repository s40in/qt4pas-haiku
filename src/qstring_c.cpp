//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QStringH QString_create()
{
	return (QStringH) new QString();
}

C_EXPORT void QString_destroy(QStringH handle)
{
	delete (QString *)handle;
}

C_EXPORT QStringH QString_create2(const QCharH unicode, int size)
{
	return (QStringH) new QString((const QChar*)unicode, size);
}

C_EXPORT QStringH QString_create3(PWideChar c)
{
	return (QStringH) new QString(*(QChar *)c);
}

C_EXPORT QStringH QString_create5(const QLatin1StringH latin1)
{
	return (QStringH) new QString(*(const QLatin1String*)latin1);
}

C_EXPORT QStringH QString_create6(PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	return (QStringH) new QString(t_AnonParam1);
}

C_EXPORT int QString_size(QStringH handle)
{
	return (int) ((QString *)handle)->size();
}

C_EXPORT int QString_count(QStringH handle)
{
	return (int) ((QString *)handle)->count();
}

C_EXPORT int QString_length(QStringH handle)
{
	return (int) ((QString *)handle)->length();
}

C_EXPORT bool QString_isEmpty(QStringH handle)
{
	return (bool) ((QString *)handle)->isEmpty();
}

C_EXPORT void QString_resize(QStringH handle, int size)
{
	((QString *)handle)->resize(size);
}

C_EXPORT void QString_fill(QStringH handle, PWideString retval, PWideChar c, int size)
{
	QString t_retval;
	t_retval = ((QString *)handle)->fill(*(QChar *)c, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_truncate(QStringH handle, int pos)
{
	((QString *)handle)->truncate(pos);
}

C_EXPORT void QString_chop(QStringH handle, int n)
{
	((QString *)handle)->chop(n);
}

C_EXPORT int QString_capacity(QStringH handle)
{
	return (int) ((QString *)handle)->capacity();
}

C_EXPORT void QString_reserve(QStringH handle, int size)
{
	((QString *)handle)->reserve(size);
}

C_EXPORT void QString_squeeze(QStringH handle)
{
	((QString *)handle)->squeeze();
}

C_EXPORT const QCharH QString_unicode(QStringH handle)
{
	return (const QCharH) ((QString *)handle)->unicode();
}

C_EXPORT QCharH QString_data(QStringH handle)
{
	return (QCharH) ((QString *)handle)->data();
}

C_EXPORT const QCharH QString_constData(QStringH handle)
{
	return (const QCharH) ((QString *)handle)->constData();
}

C_EXPORT void QString_detach(QStringH handle)
{
	((QString *)handle)->detach();
}

C_EXPORT bool QString_isDetached(QStringH handle)
{
	return (bool) ((QString *)handle)->isDetached();
}

C_EXPORT void QString_clear(QStringH handle)
{
	((QString *)handle)->clear();
}

C_EXPORT void QString_at(QStringH handle, PWideChar retval, int i)
{
	*(QChar *)retval = ((QString *)handle)->at(i);
}

C_EXPORT void QString_arg(QStringH handle, PWideString retval, qlonglong a, int fieldwidth, int base, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldwidth, base, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg2(QStringH handle, PWideString retval, qulonglong a, int fieldwidth, int base, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldwidth, base, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg4(QStringH handle, PWideString retval, ulong a, int fieldwidth, int base, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldwidth, base, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg7(QStringH handle, PWideString retval, short a, int fieldWidth, int base, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldWidth, base, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg8(QStringH handle, PWideString retval, ushort a, int fieldWidth, int base, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldWidth, base, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg9(QStringH handle, PWideString retval, double a, int fieldWidth, char fmt, int prec, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldWidth, fmt, prec, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg10(QStringH handle, PWideString retval, char a, int fieldWidth, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(a, fieldWidth, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg11(QStringH handle, PWideString retval, PWideChar a, int fieldWidth, const QCharH fillChar)
{
	QString t_retval;
	t_retval = ((QString *)handle)->arg(*(QChar *)a, fieldWidth, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg12(QStringH handle, PWideString retval, PWideString a, int fieldWidth, const QCharH fillChar)
{
	QString t_retval;
	QString t_a;
	copyPWideStringToQString(a, t_a);
	t_retval = ((QString *)handle)->arg(t_a, fieldWidth, *(const QChar*)fillChar);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg13(QStringH handle, PWideString retval, PWideString a1, PWideString a2)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg14(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg15(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3, PWideString a4)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	QString t_a4;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	copyPWideStringToQString(a4, t_a4);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3, t_a4);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg16(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3, PWideString a4, PWideString a5)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	QString t_a4;
	QString t_a5;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	copyPWideStringToQString(a4, t_a4);
	copyPWideStringToQString(a5, t_a5);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3, t_a4, t_a5);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg17(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3, PWideString a4, PWideString a5, PWideString a6)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	QString t_a4;
	QString t_a5;
	QString t_a6;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	copyPWideStringToQString(a4, t_a4);
	copyPWideStringToQString(a5, t_a5);
	copyPWideStringToQString(a6, t_a6);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3, t_a4, t_a5, t_a6);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg18(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3, PWideString a4, PWideString a5, PWideString a6, PWideString a7)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	QString t_a4;
	QString t_a5;
	QString t_a6;
	QString t_a7;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	copyPWideStringToQString(a4, t_a4);
	copyPWideStringToQString(a5, t_a5);
	copyPWideStringToQString(a6, t_a6);
	copyPWideStringToQString(a7, t_a7);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3, t_a4, t_a5, t_a6, t_a7);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg19(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3, PWideString a4, PWideString a5, PWideString a6, PWideString a7, PWideString a8)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	QString t_a4;
	QString t_a5;
	QString t_a6;
	QString t_a7;
	QString t_a8;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	copyPWideStringToQString(a4, t_a4);
	copyPWideStringToQString(a5, t_a5);
	copyPWideStringToQString(a6, t_a6);
	copyPWideStringToQString(a7, t_a7);
	copyPWideStringToQString(a8, t_a8);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3, t_a4, t_a5, t_a6, t_a7, t_a8);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_arg20(QStringH handle, PWideString retval, PWideString a1, PWideString a2, PWideString a3, PWideString a4, PWideString a5, PWideString a6, PWideString a7, PWideString a8, PWideString a9)
{
	QString t_retval;
	QString t_a1;
	QString t_a2;
	QString t_a3;
	QString t_a4;
	QString t_a5;
	QString t_a6;
	QString t_a7;
	QString t_a8;
	QString t_a9;
	copyPWideStringToQString(a1, t_a1);
	copyPWideStringToQString(a2, t_a2);
	copyPWideStringToQString(a3, t_a3);
	copyPWideStringToQString(a4, t_a4);
	copyPWideStringToQString(a5, t_a5);
	copyPWideStringToQString(a6, t_a6);
	copyPWideStringToQString(a7, t_a7);
	copyPWideStringToQString(a8, t_a8);
	copyPWideStringToQString(a9, t_a9);
	t_retval = ((QString *)handle)->arg(t_a1, t_a2, t_a3, t_a4, t_a5, t_a6, t_a7, t_a8, t_a9);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QString_indexOf(QStringH handle, PWideChar c, int from, Qt::CaseSensitivity cs)
{
	return (int) ((QString *)handle)->indexOf(*(QChar *)c, from, cs);
}

C_EXPORT int QString_indexOf2(QStringH handle, PWideString s, int from, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QString *)handle)->indexOf(t_s, from, cs);
}

C_EXPORT int QString_indexOf3(QStringH handle, const QLatin1StringH s, int from, Qt::CaseSensitivity cs)
{
	return (int) ((QString *)handle)->indexOf(*(const QLatin1String*)s, from, cs);
}

C_EXPORT int QString_lastIndexOf(QStringH handle, PWideChar c, int from, Qt::CaseSensitivity cs)
{
	return (int) ((QString *)handle)->lastIndexOf(*(QChar *)c, from, cs);
}

C_EXPORT int QString_lastIndexOf2(QStringH handle, PWideString s, int from, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QString *)handle)->lastIndexOf(t_s, from, cs);
}

C_EXPORT int QString_lastIndexOf3(QStringH handle, const QLatin1StringH s, int from, Qt::CaseSensitivity cs)
{
	return (int) ((QString *)handle)->lastIndexOf(*(const QLatin1String*)s, from, cs);
}

C_EXPORT QBool QString_contains(QStringH handle, PWideChar c, Qt::CaseSensitivity cs)
{
	return (QBool) ((QString *)handle)->contains(*(QChar *)c, cs);
}

C_EXPORT QBool QString_contains2(QStringH handle, PWideString s, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (QBool) ((QString *)handle)->contains(t_s, cs);
}

C_EXPORT int QString_count2(QStringH handle, PWideChar c, Qt::CaseSensitivity cs)
{
	return (int) ((QString *)handle)->count(*(QChar *)c, cs);
}

C_EXPORT int QString_count3(QStringH handle, PWideString s, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QString *)handle)->count(t_s, cs);
}

C_EXPORT int QString_indexOf4(QStringH handle, const QRegExpH AnonParam1, int from)
{
	return (int) ((QString *)handle)->indexOf(*(const QRegExp*)AnonParam1, from);
}

C_EXPORT int QString_lastIndexOf4(QStringH handle, const QRegExpH AnonParam1, int from)
{
	return (int) ((QString *)handle)->lastIndexOf(*(const QRegExp*)AnonParam1, from);
}

C_EXPORT QBool QString_contains3(QStringH handle, const QRegExpH rx)
{
	return (QBool) ((QString *)handle)->contains(*(const QRegExp*)rx);
}

C_EXPORT int QString_count4(QStringH handle, const QRegExpH AnonParam1)
{
	return (int) ((QString *)handle)->count(*(const QRegExp*)AnonParam1);
}

C_EXPORT void QString_section(QStringH handle, PWideString retval, PWideChar sep, int start, int end, unsigned int flags)
{
	QString t_retval;
	t_retval = ((QString *)handle)->section(*(QChar *)sep, start, end, (QString::SectionFlags)flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_section2(QStringH handle, PWideString retval, PWideString in_sep, int start, int end, unsigned int flags)
{
	QString t_retval;
	QString t_in_sep;
	copyPWideStringToQString(in_sep, t_in_sep);
	t_retval = ((QString *)handle)->section(t_in_sep, start, end, (QString::SectionFlags)flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_section3(QStringH handle, PWideString retval, const QRegExpH reg, int start, int end, unsigned int flags)
{
	QString t_retval;
	t_retval = ((QString *)handle)->section(*(const QRegExp*)reg, start, end, (QString::SectionFlags)flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_left(QStringH handle, PWideString retval, int n)
{
	QString t_retval;
	t_retval = ((QString *)handle)->left(n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_right(QStringH handle, PWideString retval, int n)
{
	QString t_retval;
	t_retval = ((QString *)handle)->right(n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_mid(QStringH handle, PWideString retval, int position, int n)
{
	QString t_retval;
	t_retval = ((QString *)handle)->mid(position, n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QString_startsWith(QStringH handle, PWideString s, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (bool) ((QString *)handle)->startsWith(t_s, cs);
}

C_EXPORT bool QString_startsWith2(QStringH handle, const QLatin1StringH s, Qt::CaseSensitivity cs)
{
	return (bool) ((QString *)handle)->startsWith(*(const QLatin1String*)s, cs);
}

C_EXPORT bool QString_startsWith3(QStringH handle, const QCharH c, Qt::CaseSensitivity cs)
{
	return (bool) ((QString *)handle)->startsWith(*(const QChar*)c, cs);
}

C_EXPORT bool QString_endsWith(QStringH handle, PWideString s, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (bool) ((QString *)handle)->endsWith(t_s, cs);
}

C_EXPORT bool QString_endsWith2(QStringH handle, const QLatin1StringH s, Qt::CaseSensitivity cs)
{
	return (bool) ((QString *)handle)->endsWith(*(const QLatin1String*)s, cs);
}

C_EXPORT bool QString_endsWith3(QStringH handle, const QCharH c, Qt::CaseSensitivity cs)
{
	return (bool) ((QString *)handle)->endsWith(*(const QChar*)c, cs);
}

C_EXPORT void QString_leftJustified(QStringH handle, PWideString retval, int width, PWideChar fill, bool trunc)
{
	QString t_retval;
	t_retval = ((QString *)handle)->leftJustified(width, *(QChar *)fill, trunc);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_rightJustified(QStringH handle, PWideString retval, int width, PWideChar fill, bool trunc)
{
	QString t_retval;
	t_retval = ((QString *)handle)->rightJustified(width, *(QChar *)fill, trunc);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_toLower(QStringH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QString *)handle)->toLower();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_toUpper(QStringH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QString *)handle)->toUpper();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_toCaseFolded(QStringH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QString *)handle)->toCaseFolded();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_trimmed(QStringH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QString *)handle)->trimmed();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_simplified(QStringH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QString *)handle)->simplified();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_insert(QStringH handle, PWideString retval, int i, PWideChar c)
{
	QString t_retval;
	t_retval = ((QString *)handle)->insert(i, *(QChar *)c);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_insert2(QStringH handle, PWideString retval, int i, const QCharH uc, int len)
{
	QString t_retval;
	t_retval = ((QString *)handle)->insert(i, (const QChar*)uc, len);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_insert3(QStringH handle, PWideString retval, int i, PWideString s)
{
	QString t_retval;
	QString t_s;
	copyPWideStringToQString(s, t_s);
	t_retval = ((QString *)handle)->insert(i, t_s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_insert4(QStringH handle, PWideString retval, int i, const QLatin1StringH s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->insert(i, *(const QLatin1String*)s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_append(QStringH handle, PWideString retval, PWideChar c)
{
	QString t_retval;
	t_retval = ((QString *)handle)->append(*(QChar *)c);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_append2(QStringH handle, PWideString retval, PWideString s)
{
	QString t_retval;
	QString t_s;
	copyPWideStringToQString(s, t_s);
	t_retval = ((QString *)handle)->append(t_s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_append3(QStringH handle, PWideString retval, const QLatin1StringH s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->append(*(const QLatin1String*)s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_prepend(QStringH handle, PWideString retval, PWideChar c)
{
	QString t_retval;
	t_retval = ((QString *)handle)->prepend(*(QChar *)c);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_prepend2(QStringH handle, PWideString retval, PWideString s)
{
	QString t_retval;
	QString t_s;
	copyPWideStringToQString(s, t_s);
	t_retval = ((QString *)handle)->prepend(t_s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_prepend3(QStringH handle, PWideString retval, const QLatin1StringH s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->prepend(*(const QLatin1String*)s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_remove(QStringH handle, PWideString retval, int i, int len)
{
	QString t_retval;
	t_retval = ((QString *)handle)->remove(i, len);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_remove2(QStringH handle, PWideString retval, PWideChar c, Qt::CaseSensitivity cs)
{
	QString t_retval;
	t_retval = ((QString *)handle)->remove(*(QChar *)c, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_remove3(QStringH handle, PWideString retval, PWideString s, Qt::CaseSensitivity cs)
{
	QString t_retval;
	QString t_s;
	copyPWideStringToQString(s, t_s);
	t_retval = ((QString *)handle)->remove(t_s, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace(QStringH handle, PWideString retval, int i, int len, PWideChar after)
{
	QString t_retval;
	t_retval = ((QString *)handle)->replace(i, len, *(QChar *)after);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace2(QStringH handle, PWideString retval, int i, int len, const QCharH s, int slen)
{
	QString t_retval;
	t_retval = ((QString *)handle)->replace(i, len, (const QChar*)s, slen);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace3(QStringH handle, PWideString retval, int i, int len, PWideString after)
{
	QString t_retval;
	QString t_after;
	copyPWideStringToQString(after, t_after);
	t_retval = ((QString *)handle)->replace(i, len, t_after);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace4(QStringH handle, PWideString retval, PWideChar before, PWideChar after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	t_retval = ((QString *)handle)->replace(*(QChar *)before, *(QChar *)after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace5(QStringH handle, PWideString retval, const QCharH before, int blen, const QCharH after, int alen, Qt::CaseSensitivity cs)
{
	QString t_retval;
	t_retval = ((QString *)handle)->replace((const QChar*)before, blen, (const QChar*)after, alen, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace6(QStringH handle, PWideString retval, const QLatin1StringH before, const QLatin1StringH after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	t_retval = ((QString *)handle)->replace(*(const QLatin1String*)before, *(const QLatin1String*)after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace7(QStringH handle, PWideString retval, const QLatin1StringH before, PWideString after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	QString t_after;
	copyPWideStringToQString(after, t_after);
	t_retval = ((QString *)handle)->replace(*(const QLatin1String*)before, t_after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace8(QStringH handle, PWideString retval, PWideString before, const QLatin1StringH after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	QString t_before;
	copyPWideStringToQString(before, t_before);
	t_retval = ((QString *)handle)->replace(t_before, *(const QLatin1String*)after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace9(QStringH handle, PWideString retval, PWideString before, PWideString after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	QString t_before;
	QString t_after;
	copyPWideStringToQString(before, t_before);
	copyPWideStringToQString(after, t_after);
	t_retval = ((QString *)handle)->replace(t_before, t_after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace10(QStringH handle, PWideString retval, PWideChar c, PWideString after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	QString t_after;
	copyPWideStringToQString(after, t_after);
	t_retval = ((QString *)handle)->replace(*(QChar *)c, t_after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace11(QStringH handle, PWideString retval, PWideChar c, const QLatin1StringH after, Qt::CaseSensitivity cs)
{
	QString t_retval;
	t_retval = ((QString *)handle)->replace(*(QChar *)c, *(const QLatin1String*)after, cs);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_replace12(QStringH handle, PWideString retval, const QRegExpH rx, PWideString after)
{
	QString t_retval;
	QString t_after;
	copyPWideStringToQString(after, t_after);
	t_retval = ((QString *)handle)->replace(*(const QRegExp*)rx, t_after);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_remove4(QStringH handle, PWideString retval, const QRegExpH rx)
{
	QString t_retval;
	t_retval = ((QString *)handle)->remove(*(const QRegExp*)rx);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_split(QStringH handle, QStringListH retval, PWideString sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs)
{
	QString t_sep;
	copyPWideStringToQString(sep, t_sep);
	*(QStringList *)retval = ((QString *)handle)->split(t_sep, behavior, cs);
}

C_EXPORT void QString_split2(QStringH handle, QStringListH retval, const QCharH sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs)
{
	*(QStringList *)retval = ((QString *)handle)->split(*(const QChar*)sep, behavior, cs);
}

C_EXPORT void QString_split3(QStringH handle, QStringListH retval, const QRegExpH sep, QString::SplitBehavior behavior)
{
	*(QStringList *)retval = ((QString *)handle)->split(*(const QRegExp*)sep, behavior);
}

C_EXPORT void QString_normalized(QStringH handle, PWideString retval, QString::NormalizationForm mode)
{
	QString t_retval;
	t_retval = ((QString *)handle)->normalized(mode);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_normalized2(QStringH handle, PWideString retval, QString::NormalizationForm mode, QChar::UnicodeVersion version)
{
	QString t_retval;
	t_retval = ((QString *)handle)->normalized(mode, version);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_repeated(QStringH handle, PWideString retval, int times)
{
	QString t_retval;
	t_retval = ((QString *)handle)->repeated(times);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT const ushort* QString_utf16(QStringH handle)
{
	return (const ushort*) ((QString *)handle)->utf16();
}

C_EXPORT void QString_toAscii(QStringH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QString *)handle)->toAscii();
}

C_EXPORT void QString_toLatin1(QStringH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QString *)handle)->toLatin1();
}

C_EXPORT void QString_toUtf8(QStringH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QString *)handle)->toUtf8();
}

C_EXPORT void QString_toLocal8Bit(QStringH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QString *)handle)->toLocal8Bit();
}

C_EXPORT void QString_fromAscii(PWideString retval, const char* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromAscii(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_fromLatin1(PWideString retval, const char* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromLatin1(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_fromUtf8(PWideString retval, const char* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromUtf8(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_fromLocal8Bit(PWideString retval, const char* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromLocal8Bit(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_fromUtf16(PWideString retval, const ushort* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromUtf16(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_fromUcs4(PWideString retval, const uint* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromUcs4(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_fromRawData(PWideString retval, const QCharH AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromRawData((const QChar*)AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QString_toWCharArray(QStringH handle, wchar_t* array)
{
	return (int) ((QString *)handle)->toWCharArray(array);
}

C_EXPORT void QString_fromWCharArray(PWideString retval, const wchar_t* AnonParam1, int size)
{
	QString t_retval;
	t_retval = QString::fromWCharArray(AnonParam1, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setUnicode(QStringH handle, PWideString retval, const QCharH unicode, int size)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setUnicode((const QChar*)unicode, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setUtf16(QStringH handle, PWideString retval, const ushort* utf16, int size)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setUtf16(utf16, size);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QString_compare(QStringH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QString *)handle)->compare(t_s);
}

C_EXPORT int QString_compare2(QStringH handle, PWideString s, Qt::CaseSensitivity cs)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QString *)handle)->compare(t_s, cs);
}

C_EXPORT int QString_compare3(QStringH handle, const QLatin1StringH other, Qt::CaseSensitivity cs)
{
	return (int) ((QString *)handle)->compare(*(const QLatin1String*)other, cs);
}

C_EXPORT int QString_compare4(PWideString s1, PWideString s2)
{
	QString t_s1;
	QString t_s2;
	copyPWideStringToQString(s1, t_s1);
	copyPWideStringToQString(s2, t_s2);
	return (int) QString::compare(t_s1, t_s2);
}

C_EXPORT int QString_compare5(PWideString s1, PWideString s2, Qt::CaseSensitivity cs)
{
	QString t_s1;
	QString t_s2;
	copyPWideStringToQString(s1, t_s1);
	copyPWideStringToQString(s2, t_s2);
	return (int) QString::compare(t_s1, t_s2, cs);
}

C_EXPORT int QString_compare6(PWideString s1, const QLatin1StringH s2, Qt::CaseSensitivity cs)
{
	QString t_s1;
	copyPWideStringToQString(s1, t_s1);
	return (int) QString::compare(t_s1, *(const QLatin1String*)s2, cs);
}

C_EXPORT int QString_compare7(const QLatin1StringH s1, PWideString s2, Qt::CaseSensitivity cs)
{
	QString t_s2;
	copyPWideStringToQString(s2, t_s2);
	return (int) QString::compare(*(const QLatin1String*)s1, t_s2, cs);
}

C_EXPORT int QString_localeAwareCompare(QStringH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QString *)handle)->localeAwareCompare(t_s);
}

C_EXPORT int QString_localeAwareCompare2(PWideString s1, PWideString s2)
{
	QString t_s1;
	QString t_s2;
	copyPWideStringToQString(s1, t_s1);
	copyPWideStringToQString(s2, t_s2);
	return (int) QString::localeAwareCompare(t_s1, t_s2);
}

C_EXPORT short QString_toShort(QStringH handle, bool* ok, int base)
{
	return (short) ((QString *)handle)->toShort(ok, base);
}

C_EXPORT ushort QString_toUShort(QStringH handle, bool* ok, int base)
{
	return (ushort) ((QString *)handle)->toUShort(ok, base);
}

C_EXPORT int QString_toInt(QStringH handle, bool* ok, int base)
{
	return (int) ((QString *)handle)->toInt(ok, base);
}

C_EXPORT uint QString_toUInt(QStringH handle, bool* ok, int base)
{
	return (uint) ((QString *)handle)->toUInt(ok, base);
}

C_EXPORT long QString_toLong(QStringH handle, bool* ok, int base)
{
	return (long) ((QString *)handle)->toLong(ok, base);
}

C_EXPORT ulong QString_toULong(QStringH handle, bool* ok, int base)
{
	return (ulong) ((QString *)handle)->toULong(ok, base);
}

C_EXPORT qlonglong QString_toLongLong(QStringH handle, bool* ok, int base)
{
	return (qlonglong) ((QString *)handle)->toLongLong(ok, base);
}

C_EXPORT qulonglong QString_toULongLong(QStringH handle, bool* ok, int base)
{
	return (qulonglong) ((QString *)handle)->toULongLong(ok, base);
}

C_EXPORT float QString_toFloat(QStringH handle, bool* ok)
{
	return (float) ((QString *)handle)->toFloat(ok);
}

C_EXPORT double QString_toDouble(QStringH handle, bool* ok)
{
	return (double) ((QString *)handle)->toDouble(ok);
}

C_EXPORT void QString_setNum(QStringH handle, PWideString retval, short AnonParam1, int base)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum2(QStringH handle, PWideString retval, ushort AnonParam1, int base)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum3(QStringH handle, PWideString retval, int AnonParam1, int base)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum4(QStringH handle, PWideString retval, uint AnonParam1, int base)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum7(QStringH handle, PWideString retval, qlonglong AnonParam1, int base)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum8(QStringH handle, PWideString retval, qulonglong AnonParam1, int base)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum9(QStringH handle, PWideString retval, float AnonParam1, char f, int prec)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, f, prec);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_setNum10(QStringH handle, PWideString retval, double AnonParam1, char f, int prec)
{
	QString t_retval;
	t_retval = ((QString *)handle)->setNum(AnonParam1, f, prec);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_number(PWideString retval, int AnonParam1, int base)
{
	QString t_retval;
	t_retval = QString::number(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_number2(PWideString retval, uint AnonParam1, int base)
{
	QString t_retval;
	t_retval = QString::number(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_number5(PWideString retval, qlonglong AnonParam1, int base)
{
	QString t_retval;
	t_retval = QString::number(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_number6(PWideString retval, qulonglong AnonParam1, int base)
{
	QString t_retval;
	t_retval = QString::number(AnonParam1, base);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_number7(PWideString retval, double AnonParam1, char f, int prec)
{
	QString t_retval;
	t_retval = QString::number(AnonParam1, f, prec);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QStringH QString_create7(const char* ch)
{
	return (QStringH) new QString(ch);
}

C_EXPORT QStringH QString_create8(const QByteArrayH a)
{
	return (QStringH) new QString(*(const QByteArray*)a);
}

C_EXPORT void QString_prepend4(QStringH handle, PWideString retval, const char* s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->prepend(s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_prepend5(QStringH handle, PWideString retval, const QByteArrayH s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->prepend(*(const QByteArray*)s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_append4(QStringH handle, PWideString retval, const char* s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->append(s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_append5(QStringH handle, PWideString retval, const QByteArrayH s)
{
	QString t_retval;
	t_retval = ((QString *)handle)->append(*(const QByteArray*)s);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QString_push_back(QStringH handle, PWideChar c)
{
	((QString *)handle)->push_back(*(QChar *)c);
}

C_EXPORT void QString_push_back2(QStringH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	((QString *)handle)->push_back(t_s);
}

C_EXPORT void QString_push_front(QStringH handle, PWideChar c)
{
	((QString *)handle)->push_front(*(QChar *)c);
}

C_EXPORT void QString_push_front2(QStringH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	((QString *)handle)->push_front(t_s);
}

C_EXPORT bool QString_isNull(QStringH handle)
{
	return (bool) ((QString *)handle)->isNull();
}

C_EXPORT bool QString_isSimpleText(QStringH handle)
{
	return (bool) ((QString *)handle)->isSimpleText();
}

C_EXPORT bool QString_isRightToLeft(QStringH handle)
{
	return (bool) ((QString *)handle)->isRightToLeft();
}

C_EXPORT QLatin1StringH QLatin1String_create(const char* s)
{
	return (QLatin1StringH) new QLatin1String(s);
}

C_EXPORT void QLatin1String_destroy(QLatin1StringH handle)
{
	delete (QLatin1String *)handle;
}

C_EXPORT const char* QLatin1String_latin1(QLatin1StringH handle)
{
	return (const char*) ((QLatin1String *)handle)->latin1();
}

