//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QKeySequenceH QKeySequence_create()
{
	return (QKeySequenceH) new QKeySequence();
}

C_EXPORT void QKeySequence_destroy(QKeySequenceH handle)
{
	delete (QKeySequence *)handle;
}

C_EXPORT QKeySequenceH QKeySequence_create2(PWideString key)
{
	QString t_key;
	copyPWideStringToQString(key, t_key);
	return (QKeySequenceH) new QKeySequence(t_key);
}

C_EXPORT QKeySequenceH QKeySequence_create3(int k1, int k2, int k3, int k4)
{
	return (QKeySequenceH) new QKeySequence(k1, k2, k3, k4);
}

C_EXPORT QKeySequenceH QKeySequence_create4(const QKeySequenceH ks)
{
	return (QKeySequenceH) new QKeySequence(*(const QKeySequence*)ks);
}

C_EXPORT QKeySequenceH QKeySequence_create5(QKeySequence::StandardKey key)
{
	return (QKeySequenceH) new QKeySequence(key);
}

C_EXPORT uint QKeySequence_count(QKeySequenceH handle)
{
	return (uint) ((QKeySequence *)handle)->count();
}

C_EXPORT bool QKeySequence_isEmpty(QKeySequenceH handle)
{
	return (bool) ((QKeySequence *)handle)->isEmpty();
}

C_EXPORT void QKeySequence_toString(QKeySequenceH handle, PWideString retval, QKeySequence::SequenceFormat format)
{
	QString t_retval;
	t_retval = ((QKeySequence *)handle)->toString(format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QKeySequence_fromString(QKeySequenceH retval, PWideString str, QKeySequence::SequenceFormat format)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	*(QKeySequence *)retval = QKeySequence::fromString(t_str, format);
}

C_EXPORT QKeySequence::SequenceMatch QKeySequence_matches(QKeySequenceH handle, const QKeySequenceH seq)
{
	return (QKeySequence::SequenceMatch) ((QKeySequence *)handle)->matches(*(const QKeySequence*)seq);
}

C_EXPORT void QKeySequence_mnemonic(QKeySequenceH retval, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	*(QKeySequence *)retval = QKeySequence::mnemonic(t_text);
}

C_EXPORT bool QKeySequence_isDetached(QKeySequenceH handle)
{
	return (bool) ((QKeySequence *)handle)->isDetached();
}

