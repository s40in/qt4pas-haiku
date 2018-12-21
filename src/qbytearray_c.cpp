//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QByteArrayH QByteArray_create()
{
	return (QByteArrayH) new QByteArray();
}

C_EXPORT void QByteArray_destroy(QByteArrayH handle)
{
	delete (QByteArray *)handle;
}

C_EXPORT QByteArrayH QByteArray_create2(const char* AnonParam1)
{
	return (QByteArrayH) new QByteArray(AnonParam1);
}

C_EXPORT QByteArrayH QByteArray_create3(const char* AnonParam1, int size)
{
	return (QByteArrayH) new QByteArray(AnonParam1, size);
}

C_EXPORT QByteArrayH QByteArray_create4(int size, char c)
{
	return (QByteArrayH) new QByteArray(size, c);
}

C_EXPORT QByteArrayH QByteArray_create5(const QByteArrayH AnonParam1)
{
	return (QByteArrayH) new QByteArray(*(const QByteArray*)AnonParam1);
}

C_EXPORT int QByteArray_size(QByteArrayH handle)
{
	return (int) ((QByteArray *)handle)->size();
}

C_EXPORT bool QByteArray_isEmpty(QByteArrayH handle)
{
	return (bool) ((QByteArray *)handle)->isEmpty();
}

C_EXPORT void QByteArray_resize(QByteArrayH handle, int size)
{
	((QByteArray *)handle)->resize(size);
}

C_EXPORT QByteArrayH QByteArray_fill(QByteArrayH handle, char c, int size)
{
	return (QByteArrayH) &((QByteArray *)handle)->fill(c, size);
}

C_EXPORT int QByteArray_capacity(QByteArrayH handle)
{
	return (int) ((QByteArray *)handle)->capacity();
}

C_EXPORT void QByteArray_reserve(QByteArrayH handle, int size)
{
	((QByteArray *)handle)->reserve(size);
}

C_EXPORT void QByteArray_squeeze(QByteArrayH handle)
{
	((QByteArray *)handle)->squeeze();
}

C_EXPORT char* QByteArray_data(QByteArrayH handle)
{
	return (char*) ((QByteArray *)handle)->data();
}

C_EXPORT const char* QByteArray_constData(QByteArrayH handle)
{
	return (const char*) ((QByteArray *)handle)->constData();
}

C_EXPORT void QByteArray_detach(QByteArrayH handle)
{
	((QByteArray *)handle)->detach();
}

C_EXPORT bool QByteArray_isDetached(QByteArrayH handle)
{
	return (bool) ((QByteArray *)handle)->isDetached();
}

C_EXPORT void QByteArray_clear(QByteArrayH handle)
{
	((QByteArray *)handle)->clear();
}

C_EXPORT char QByteArray_at(QByteArrayH handle, int i)
{
	return (char) ((QByteArray *)handle)->at(i);
}

C_EXPORT int QByteArray_indexOf(QByteArrayH handle, char c, int from)
{
	return (int) ((QByteArray *)handle)->indexOf(c, from);
}

C_EXPORT int QByteArray_indexOf2(QByteArrayH handle, const char* c, int from)
{
	return (int) ((QByteArray *)handle)->indexOf(c, from);
}

C_EXPORT int QByteArray_indexOf3(QByteArrayH handle, const QByteArrayH a, int from)
{
	return (int) ((QByteArray *)handle)->indexOf(*(const QByteArray*)a, from);
}

C_EXPORT int QByteArray_lastIndexOf(QByteArrayH handle, char c, int from)
{
	return (int) ((QByteArray *)handle)->lastIndexOf(c, from);
}

C_EXPORT int QByteArray_lastIndexOf2(QByteArrayH handle, const char* c, int from)
{
	return (int) ((QByteArray *)handle)->lastIndexOf(c, from);
}

C_EXPORT int QByteArray_lastIndexOf3(QByteArrayH handle, const QByteArrayH a, int from)
{
	return (int) ((QByteArray *)handle)->lastIndexOf(*(const QByteArray*)a, from);
}

C_EXPORT QBool QByteArray_contains(QByteArrayH handle, char c)
{
	return (QBool) ((QByteArray *)handle)->contains(c);
}

C_EXPORT QBool QByteArray_contains2(QByteArrayH handle, const char* a)
{
	return (QBool) ((QByteArray *)handle)->contains(a);
}

C_EXPORT QBool QByteArray_contains3(QByteArrayH handle, const QByteArrayH a)
{
	return (QBool) ((QByteArray *)handle)->contains(*(const QByteArray*)a);
}

C_EXPORT int QByteArray_count(QByteArrayH handle, char c)
{
	return (int) ((QByteArray *)handle)->count(c);
}

C_EXPORT int QByteArray_count2(QByteArrayH handle, const char* a)
{
	return (int) ((QByteArray *)handle)->count(a);
}

C_EXPORT int QByteArray_count3(QByteArrayH handle, const QByteArrayH a)
{
	return (int) ((QByteArray *)handle)->count(*(const QByteArray*)a);
}

C_EXPORT void QByteArray_left(QByteArrayH handle, QByteArrayH retval, int len)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->left(len);
}

C_EXPORT void QByteArray_right(QByteArrayH handle, QByteArrayH retval, int len)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->right(len);
}

C_EXPORT void QByteArray_mid(QByteArrayH handle, QByteArrayH retval, int index, int len)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->mid(index, len);
}

C_EXPORT bool QByteArray_startsWith(QByteArrayH handle, const QByteArrayH a)
{
	return (bool) ((QByteArray *)handle)->startsWith(*(const QByteArray*)a);
}

C_EXPORT bool QByteArray_startsWith2(QByteArrayH handle, char c)
{
	return (bool) ((QByteArray *)handle)->startsWith(c);
}

C_EXPORT bool QByteArray_startsWith3(QByteArrayH handle, const char* c)
{
	return (bool) ((QByteArray *)handle)->startsWith(c);
}

C_EXPORT bool QByteArray_endsWith(QByteArrayH handle, const QByteArrayH a)
{
	return (bool) ((QByteArray *)handle)->endsWith(*(const QByteArray*)a);
}

C_EXPORT bool QByteArray_endsWith2(QByteArrayH handle, char c)
{
	return (bool) ((QByteArray *)handle)->endsWith(c);
}

C_EXPORT bool QByteArray_endsWith3(QByteArrayH handle, const char* c)
{
	return (bool) ((QByteArray *)handle)->endsWith(c);
}

C_EXPORT void QByteArray_truncate(QByteArrayH handle, int pos)
{
	((QByteArray *)handle)->truncate(pos);
}

C_EXPORT void QByteArray_chop(QByteArrayH handle, int n)
{
	((QByteArray *)handle)->chop(n);
}

C_EXPORT void QByteArray_toLower(QByteArrayH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->toLower();
}

C_EXPORT void QByteArray_toUpper(QByteArrayH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->toUpper();
}

C_EXPORT void QByteArray_trimmed(QByteArrayH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->trimmed();
}

C_EXPORT void QByteArray_simplified(QByteArrayH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->simplified();
}

C_EXPORT void QByteArray_leftJustified(QByteArrayH handle, QByteArrayH retval, int width, char fill, bool truncate)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->leftJustified(width, fill, truncate);
}

C_EXPORT void QByteArray_rightJustified(QByteArrayH handle, QByteArrayH retval, int width, char fill, bool truncate)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->rightJustified(width, fill, truncate);
}

C_EXPORT QByteArrayH QByteArray_prepend(QByteArrayH handle, char c)
{
	return (QByteArrayH) &((QByteArray *)handle)->prepend(c);
}

C_EXPORT QByteArrayH QByteArray_prepend2(QByteArrayH handle, const char* s)
{
	return (QByteArrayH) &((QByteArray *)handle)->prepend(s);
}

C_EXPORT QByteArrayH QByteArray_prepend3(QByteArrayH handle, const QByteArrayH a)
{
	return (QByteArrayH) &((QByteArray *)handle)->prepend(*(const QByteArray*)a);
}

C_EXPORT QByteArrayH QByteArray_append(QByteArrayH handle, char c)
{
	return (QByteArrayH) &((QByteArray *)handle)->append(c);
}

C_EXPORT QByteArrayH QByteArray_append2(QByteArrayH handle, const char* s)
{
	return (QByteArrayH) &((QByteArray *)handle)->append(s);
}

C_EXPORT QByteArrayH QByteArray_append3(QByteArrayH handle, const char* s, int len)
{
	return (QByteArrayH) &((QByteArray *)handle)->append(s, len);
}

C_EXPORT QByteArrayH QByteArray_append4(QByteArrayH handle, const QByteArrayH a)
{
	return (QByteArrayH) &((QByteArray *)handle)->append(*(const QByteArray*)a);
}

C_EXPORT QByteArrayH QByteArray_insert(QByteArrayH handle, int i, char c)
{
	return (QByteArrayH) &((QByteArray *)handle)->insert(i, c);
}

C_EXPORT QByteArrayH QByteArray_insert2(QByteArrayH handle, int i, const char* s)
{
	return (QByteArrayH) &((QByteArray *)handle)->insert(i, s);
}

C_EXPORT QByteArrayH QByteArray_insert3(QByteArrayH handle, int i, const QByteArrayH a)
{
	return (QByteArrayH) &((QByteArray *)handle)->insert(i, *(const QByteArray*)a);
}

C_EXPORT QByteArrayH QByteArray_remove(QByteArrayH handle, int index, int len)
{
	return (QByteArrayH) &((QByteArray *)handle)->remove(index, len);
}

C_EXPORT QByteArrayH QByteArray_replace(QByteArrayH handle, int index, int len, const char* s)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(index, len, s);
}

C_EXPORT QByteArrayH QByteArray_replace2(QByteArrayH handle, int index, int len, const QByteArrayH s)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(index, len, *(const QByteArray*)s);
}

C_EXPORT QByteArrayH QByteArray_replace3(QByteArrayH handle, char before, const char* after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(before, after);
}

C_EXPORT QByteArrayH QByteArray_replace4(QByteArrayH handle, char before, const QByteArrayH after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(before, *(const QByteArray*)after);
}

C_EXPORT QByteArrayH QByteArray_replace5(QByteArrayH handle, const char* before, const char* after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(before, after);
}

C_EXPORT QByteArrayH QByteArray_replace6(QByteArrayH handle, const char* before, int bsize, const char* after, int asize)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(before, bsize, after, asize);
}

C_EXPORT QByteArrayH QByteArray_replace7(QByteArrayH handle, const QByteArrayH before, const QByteArrayH after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(*(const QByteArray*)before, *(const QByteArray*)after);
}

C_EXPORT QByteArrayH QByteArray_replace8(QByteArrayH handle, const QByteArrayH before, const char* after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(*(const QByteArray*)before, after);
}

C_EXPORT QByteArrayH QByteArray_replace9(QByteArrayH handle, const char* before, const QByteArrayH after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(before, *(const QByteArray*)after);
}

C_EXPORT QByteArrayH QByteArray_replace10(QByteArrayH handle, char before, char after)
{
	return (QByteArrayH) &((QByteArray *)handle)->replace(before, after);
}

C_EXPORT void QByteArray_repeated(QByteArrayH handle, QByteArrayH retval, int times)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->repeated(times);
}

C_EXPORT QByteArrayH QByteArray_append5(QByteArrayH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (QByteArrayH) &((QByteArray *)handle)->append(t_s);
}

C_EXPORT QByteArrayH QByteArray_insert4(QByteArrayH handle, int i, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (QByteArrayH) &((QByteArray *)handle)->insert(i, t_s);
}

C_EXPORT QByteArrayH QByteArray_replace11(QByteArrayH handle, PWideString before, const char* after)
{
	QString t_before;
	copyPWideStringToQString(before, t_before);
	return (QByteArrayH) &((QByteArray *)handle)->replace(t_before, after);
}

C_EXPORT QByteArrayH QByteArray_replace12(QByteArrayH handle, char c, PWideString after)
{
	QString t_after;
	copyPWideStringToQString(after, t_after);
	return (QByteArrayH) &((QByteArray *)handle)->replace(c, t_after);
}

C_EXPORT QByteArrayH QByteArray_replace13(QByteArrayH handle, PWideString before, const QByteArrayH after)
{
	QString t_before;
	copyPWideStringToQString(before, t_before);
	return (QByteArrayH) &((QByteArray *)handle)->replace(t_before, *(const QByteArray*)after);
}

C_EXPORT int QByteArray_indexOf4(QByteArrayH handle, PWideString s, int from)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QByteArray *)handle)->indexOf(t_s, from);
}

C_EXPORT int QByteArray_lastIndexOf4(QByteArrayH handle, PWideString s, int from)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QByteArray *)handle)->lastIndexOf(t_s, from);
}

C_EXPORT short QByteArray_toShort(QByteArrayH handle, bool* ok, int base)
{
	return (short) ((QByteArray *)handle)->toShort(ok, base);
}

C_EXPORT ushort QByteArray_toUShort(QByteArrayH handle, bool* ok, int base)
{
	return (ushort) ((QByteArray *)handle)->toUShort(ok, base);
}

C_EXPORT int QByteArray_toInt(QByteArrayH handle, bool* ok, int base)
{
	return (int) ((QByteArray *)handle)->toInt(ok, base);
}

C_EXPORT uint QByteArray_toUInt(QByteArrayH handle, bool* ok, int base)
{
	return (uint) ((QByteArray *)handle)->toUInt(ok, base);
}

C_EXPORT long QByteArray_toLong(QByteArrayH handle, bool* ok, int base)
{
	return (long) ((QByteArray *)handle)->toLong(ok, base);
}

C_EXPORT ulong QByteArray_toULong(QByteArrayH handle, bool* ok, int base)
{
	return (ulong) ((QByteArray *)handle)->toULong(ok, base);
}

C_EXPORT qlonglong QByteArray_toLongLong(QByteArrayH handle, bool* ok, int base)
{
	return (qlonglong) ((QByteArray *)handle)->toLongLong(ok, base);
}

C_EXPORT qulonglong QByteArray_toULongLong(QByteArrayH handle, bool* ok, int base)
{
	return (qulonglong) ((QByteArray *)handle)->toULongLong(ok, base);
}

C_EXPORT float QByteArray_toFloat(QByteArrayH handle, bool* ok)
{
	return (float) ((QByteArray *)handle)->toFloat(ok);
}

C_EXPORT double QByteArray_toDouble(QByteArrayH handle, bool* ok)
{
	return (double) ((QByteArray *)handle)->toDouble(ok);
}

C_EXPORT void QByteArray_toBase64(QByteArrayH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->toBase64();
}

C_EXPORT void QByteArray_toHex(QByteArrayH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->toHex();
}

C_EXPORT void QByteArray_toPercentEncoding(QByteArrayH handle, QByteArrayH retval, const QByteArrayH exclude, const QByteArrayH include, char percent)
{
	*(QByteArray *)retval = ((QByteArray *)handle)->toPercentEncoding(*(const QByteArray*)exclude, *(const QByteArray*)include, percent);
}

C_EXPORT QByteArrayH QByteArray_setNum(QByteArrayH handle, short AnonParam1, int base)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, base);
}

C_EXPORT QByteArrayH QByteArray_setNum2(QByteArrayH handle, ushort AnonParam1, int base)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, base);
}

C_EXPORT QByteArrayH QByteArray_setNum3(QByteArrayH handle, int AnonParam1, int base)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, base);
}

C_EXPORT QByteArrayH QByteArray_setNum4(QByteArrayH handle, uint AnonParam1, int base)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, base);
}

C_EXPORT QByteArrayH QByteArray_setNum5(QByteArrayH handle, qlonglong AnonParam1, int base)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, base);
}

C_EXPORT QByteArrayH QByteArray_setNum6(QByteArrayH handle, qulonglong AnonParam1, int base)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, base);
}

C_EXPORT QByteArrayH QByteArray_setNum7(QByteArrayH handle, float AnonParam1, char f, int prec)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, f, prec);
}

C_EXPORT QByteArrayH QByteArray_setNum8(QByteArrayH handle, double AnonParam1, char f, int prec)
{
	return (QByteArrayH) &((QByteArray *)handle)->setNum(AnonParam1, f, prec);
}

C_EXPORT void QByteArray_number(QByteArrayH retval, int AnonParam1, int base)
{
	*(QByteArray *)retval = QByteArray::number(AnonParam1, base);
}

C_EXPORT void QByteArray_number2(QByteArrayH retval, uint AnonParam1, int base)
{
	*(QByteArray *)retval = QByteArray::number(AnonParam1, base);
}

C_EXPORT void QByteArray_number3(QByteArrayH retval, qlonglong AnonParam1, int base)
{
	*(QByteArray *)retval = QByteArray::number(AnonParam1, base);
}

C_EXPORT void QByteArray_number4(QByteArrayH retval, qulonglong AnonParam1, int base)
{
	*(QByteArray *)retval = QByteArray::number(AnonParam1, base);
}

C_EXPORT void QByteArray_number5(QByteArrayH retval, double AnonParam1, char f, int prec)
{
	*(QByteArray *)retval = QByteArray::number(AnonParam1, f, prec);
}

C_EXPORT void QByteArray_fromRawData(QByteArrayH retval, const char* AnonParam1, int size)
{
	*(QByteArray *)retval = QByteArray::fromRawData(AnonParam1, size);
}

C_EXPORT void QByteArray_fromBase64(QByteArrayH retval, const QByteArrayH base64)
{
	*(QByteArray *)retval = QByteArray::fromBase64(*(const QByteArray*)base64);
}

C_EXPORT void QByteArray_fromHex(QByteArrayH retval, const QByteArrayH hexEncoded)
{
	*(QByteArray *)retval = QByteArray::fromHex(*(const QByteArray*)hexEncoded);
}

C_EXPORT void QByteArray_fromPercentEncoding(QByteArrayH retval, const QByteArrayH pctEncoded, char percent)
{
	*(QByteArray *)retval = QByteArray::fromPercentEncoding(*(const QByteArray*)pctEncoded, percent);
}

C_EXPORT void QByteArray_push_back(QByteArrayH handle, char c)
{
	((QByteArray *)handle)->push_back(c);
}

C_EXPORT void QByteArray_push_back2(QByteArrayH handle, const char* c)
{
	((QByteArray *)handle)->push_back(c);
}

C_EXPORT void QByteArray_push_back3(QByteArrayH handle, const QByteArrayH a)
{
	((QByteArray *)handle)->push_back(*(const QByteArray*)a);
}

C_EXPORT void QByteArray_push_front(QByteArrayH handle, char c)
{
	((QByteArray *)handle)->push_front(c);
}

C_EXPORT void QByteArray_push_front2(QByteArrayH handle, const char* c)
{
	((QByteArray *)handle)->push_front(c);
}

C_EXPORT void QByteArray_push_front3(QByteArrayH handle, const QByteArrayH a)
{
	((QByteArray *)handle)->push_front(*(const QByteArray*)a);
}

C_EXPORT int QByteArray_count4(QByteArrayH handle)
{
	return (int) ((QByteArray *)handle)->count();
}

C_EXPORT int QByteArray_length(QByteArrayH handle)
{
	return (int) ((QByteArray *)handle)->length();
}

C_EXPORT bool QByteArray_isNull(QByteArrayH handle)
{
	return (bool) ((QByteArray *)handle)->isNull();
}

