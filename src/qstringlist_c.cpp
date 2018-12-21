//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QStringListH QStringList_create()
{
	return (QStringListH) new QStringList();
}

C_EXPORT void QStringList_destroy(QStringListH handle)
{
	delete (QStringList *)handle;
}

C_EXPORT QStringListH QStringList_create2(PWideString i)
{
	QString t_i;
	copyPWideStringToQString(i, t_i);
	return (QStringListH) new QStringList(t_i);
}

C_EXPORT QStringListH QStringList_create3(const QStringListH l)
{
	return (QStringListH) new QStringList(*(const QStringList*)l);
}

C_EXPORT void QStringList_sort(QStringListH handle)
{
	((QStringList *)handle)->sort();
}

C_EXPORT int QStringList_removeDuplicates(QStringListH handle)
{
	return (int) ((QStringList *)handle)->removeDuplicates();
}

C_EXPORT void QStringList_join(QStringListH handle, PWideString retval, PWideString sep)
{
	QString t_retval;
	QString t_sep;
	copyPWideStringToQString(sep, t_sep);
	t_retval = ((QStringList *)handle)->join(t_sep);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStringList_filter(QStringListH handle, QStringListH retval, PWideString str, Qt::CaseSensitivity cs)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	*(QStringList *)retval = ((QStringList *)handle)->filter(t_str, cs);
}

C_EXPORT QBool QStringList_contains(QStringListH handle, PWideString str, Qt::CaseSensitivity cs)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	return (QBool) ((QStringList *)handle)->contains(t_str, cs);
}

C_EXPORT QStringListH QStringList_replaceInStrings(QStringListH handle, PWideString before, PWideString after, Qt::CaseSensitivity cs)
{
	QString t_before;
	QString t_after;
	copyPWideStringToQString(before, t_before);
	copyPWideStringToQString(after, t_after);
	return (QStringListH) &((QStringList *)handle)->replaceInStrings(t_before, t_after, cs);
}

C_EXPORT void QStringList_filter2(QStringListH handle, QStringListH retval, const QRegExpH rx)
{
	*(QStringList *)retval = ((QStringList *)handle)->filter(*(const QRegExp*)rx);
}

C_EXPORT QStringListH QStringList_replaceInStrings2(QStringListH handle, const QRegExpH rx, PWideString after)
{
	QString t_after;
	copyPWideStringToQString(after, t_after);
	return (QStringListH) &((QStringList *)handle)->replaceInStrings(*(const QRegExp*)rx, t_after);
}

C_EXPORT int QStringList_indexOf(QStringListH handle, const QRegExpH rx, int from)
{
	return (int) ((QStringList *)handle)->indexOf(*(const QRegExp*)rx, from);
}

C_EXPORT int QStringList_lastIndexOf(QStringListH handle, const QRegExpH rx, int from)
{
	return (int) ((QStringList *)handle)->lastIndexOf(*(const QRegExp*)rx, from);
}

C_EXPORT int QStringList_size(QStringListH handle)
{
	return (int) ((QStringList *)handle)->size();
}

C_EXPORT bool QStringList_isEmpty(QStringListH handle)
{
	return (bool) ((QStringList *)handle)->isEmpty();
}

C_EXPORT void QStringList_clear(QStringListH handle)
{
	((QStringList *)handle)->clear();
}

C_EXPORT void QStringList_at(QStringListH handle, PWideString retval, int i)
{
	QString t_retval;
	t_retval = ((QStringList *)handle)->at(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStringList_append(QStringListH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	((QStringList *)handle)->append(t_s);
}

C_EXPORT void QStringList_prepend(QStringListH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	((QStringList *)handle)->prepend(t_s);
}

C_EXPORT void QStringList_insert(QStringListH handle, int i, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	((QStringList *)handle)->insert(i, t_s);
}

C_EXPORT void QStringList_replace(QStringListH handle, int i, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	((QStringList *)handle)->replace(i, t_s);
}

C_EXPORT void QStringList_removeAt(QStringListH handle, int i)
{
	((QStringList *)handle)->removeAt(i);
}

C_EXPORT int QStringList_removeAll(QStringListH handle, PWideString s)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QStringList *)handle)->removeAll(t_s);
}

C_EXPORT void QStringList_takeAt(QStringListH handle, PWideString retval, int i)
{
	QString t_retval;
	t_retval = ((QStringList *)handle)->takeAt(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStringList_takeFirst(QStringListH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStringList *)handle)->takeFirst();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStringList_takeLast(QStringListH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStringList *)handle)->takeLast();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStringList_move(QStringListH handle, int from, int to)
{
	((QStringList *)handle)->move(from, to);
}

C_EXPORT void QStringList_swap(QStringListH handle, int i, int j)
{
	((QStringList *)handle)->swap(i, j);
}

