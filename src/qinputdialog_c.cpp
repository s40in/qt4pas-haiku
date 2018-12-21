//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QInputDialogH QInputDialog_create(QWidgetH parent, unsigned int flags)
{
	return (QInputDialogH) new QInputDialog((QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QInputDialog_destroy(QInputDialogH handle)
{
	delete (QInputDialog *)handle;
}

C_EXPORT void QInputDialog_setInputMode(QInputDialogH handle, QInputDialog::InputMode mode)
{
	((QInputDialog *)handle)->setInputMode(mode);
}

C_EXPORT QInputDialog::InputMode QInputDialog_inputMode(QInputDialogH handle)
{
	return (QInputDialog::InputMode) ((QInputDialog *)handle)->inputMode();
}

C_EXPORT void QInputDialog_setLabelText(QInputDialogH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QInputDialog *)handle)->setLabelText(t_text);
}

C_EXPORT void QInputDialog_labelText(QInputDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QInputDialog *)handle)->labelText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QInputDialog_setOption(QInputDialogH handle, QInputDialog::InputDialogOption option, bool on)
{
	((QInputDialog *)handle)->setOption(option, on);
}

C_EXPORT bool QInputDialog_testOption(QInputDialogH handle, QInputDialog::InputDialogOption option)
{
	return (bool) ((QInputDialog *)handle)->testOption(option);
}

C_EXPORT void QInputDialog_setOptions(QInputDialogH handle, unsigned int options)
{
	((QInputDialog *)handle)->setOptions((QInputDialog::InputDialogOptions)options);
}

C_EXPORT unsigned int QInputDialog_options(QInputDialogH handle)
{
	return (unsigned int) ((QInputDialog *)handle)->options();
}

C_EXPORT void QInputDialog_setTextValue(QInputDialogH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QInputDialog *)handle)->setTextValue(t_text);
}

C_EXPORT void QInputDialog_textValue(QInputDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QInputDialog *)handle)->textValue();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QInputDialog_setTextEchoMode(QInputDialogH handle, QLineEdit::EchoMode mode)
{
	((QInputDialog *)handle)->setTextEchoMode(mode);
}

C_EXPORT QLineEdit::EchoMode QInputDialog_textEchoMode(QInputDialogH handle)
{
	return (QLineEdit::EchoMode) ((QInputDialog *)handle)->textEchoMode();
}

C_EXPORT void QInputDialog_setComboBoxEditable(QInputDialogH handle, bool editable)
{
	((QInputDialog *)handle)->setComboBoxEditable(editable);
}

C_EXPORT bool QInputDialog_isComboBoxEditable(QInputDialogH handle)
{
	return (bool) ((QInputDialog *)handle)->isComboBoxEditable();
}

C_EXPORT void QInputDialog_setComboBoxItems(QInputDialogH handle, const QStringListH items)
{
	((QInputDialog *)handle)->setComboBoxItems(*(const QStringList*)items);
}

C_EXPORT void QInputDialog_comboBoxItems(QInputDialogH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QInputDialog *)handle)->comboBoxItems();
}

C_EXPORT void QInputDialog_setIntValue(QInputDialogH handle, int value)
{
	((QInputDialog *)handle)->setIntValue(value);
}

C_EXPORT int QInputDialog_intValue(QInputDialogH handle)
{
	return (int) ((QInputDialog *)handle)->intValue();
}

C_EXPORT void QInputDialog_setIntMinimum(QInputDialogH handle, int min)
{
	((QInputDialog *)handle)->setIntMinimum(min);
}

C_EXPORT int QInputDialog_intMinimum(QInputDialogH handle)
{
	return (int) ((QInputDialog *)handle)->intMinimum();
}

C_EXPORT void QInputDialog_setIntMaximum(QInputDialogH handle, int max)
{
	((QInputDialog *)handle)->setIntMaximum(max);
}

C_EXPORT int QInputDialog_intMaximum(QInputDialogH handle)
{
	return (int) ((QInputDialog *)handle)->intMaximum();
}

C_EXPORT void QInputDialog_setIntRange(QInputDialogH handle, int min, int max)
{
	((QInputDialog *)handle)->setIntRange(min, max);
}

C_EXPORT void QInputDialog_setIntStep(QInputDialogH handle, int step)
{
	((QInputDialog *)handle)->setIntStep(step);
}

C_EXPORT int QInputDialog_intStep(QInputDialogH handle)
{
	return (int) ((QInputDialog *)handle)->intStep();
}

C_EXPORT void QInputDialog_setDoubleValue(QInputDialogH handle, double value)
{
	((QInputDialog *)handle)->setDoubleValue(value);
}

C_EXPORT double QInputDialog_doubleValue(QInputDialogH handle)
{
	return (double) ((QInputDialog *)handle)->doubleValue();
}

C_EXPORT void QInputDialog_setDoubleMinimum(QInputDialogH handle, double min)
{
	((QInputDialog *)handle)->setDoubleMinimum(min);
}

C_EXPORT double QInputDialog_doubleMinimum(QInputDialogH handle)
{
	return (double) ((QInputDialog *)handle)->doubleMinimum();
}

C_EXPORT void QInputDialog_setDoubleMaximum(QInputDialogH handle, double max)
{
	((QInputDialog *)handle)->setDoubleMaximum(max);
}

C_EXPORT double QInputDialog_doubleMaximum(QInputDialogH handle)
{
	return (double) ((QInputDialog *)handle)->doubleMaximum();
}

C_EXPORT void QInputDialog_setDoubleRange(QInputDialogH handle, double min, double max)
{
	((QInputDialog *)handle)->setDoubleRange(min, max);
}

C_EXPORT void QInputDialog_setDoubleDecimals(QInputDialogH handle, int decimals)
{
	((QInputDialog *)handle)->setDoubleDecimals(decimals);
}

C_EXPORT int QInputDialog_doubleDecimals(QInputDialogH handle)
{
	return (int) ((QInputDialog *)handle)->doubleDecimals();
}

C_EXPORT void QInputDialog_setOkButtonText(QInputDialogH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QInputDialog *)handle)->setOkButtonText(t_text);
}

C_EXPORT void QInputDialog_okButtonText(QInputDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QInputDialog *)handle)->okButtonText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QInputDialog_setCancelButtonText(QInputDialogH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QInputDialog *)handle)->setCancelButtonText(t_text);
}

C_EXPORT void QInputDialog_cancelButtonText(QInputDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QInputDialog *)handle)->cancelButtonText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QInputDialog_open(QInputDialogH handle, QObjectH receiver, const char* member)
{
	((QInputDialog *)handle)->open((QObject*)receiver, member);
}

C_EXPORT void QInputDialog_minimumSizeHint(QInputDialogH handle, PSize retval)
{
	*(QSize *)retval = ((QInputDialog *)handle)->minimumSizeHint();
}

C_EXPORT void QInputDialog_sizeHint(QInputDialogH handle, PSize retval)
{
	*(QSize *)retval = ((QInputDialog *)handle)->sizeHint();
}

C_EXPORT void QInputDialog_setVisible(QInputDialogH handle, bool visible)
{
	((QInputDialog *)handle)->setVisible(visible);
}

C_EXPORT void QInputDialog_getText(PWideString retval, QWidgetH parent, PWideString title, PWideString label, QLineEdit::EchoMode echo, PWideString text, bool* ok, unsigned int flags)
{
	QString t_retval;
	QString t_title;
	QString t_label;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(label, t_label);
	copyPWideStringToQString(text, t_text);
	t_retval = QInputDialog::getText((QWidget*)parent, t_title, t_label, echo, t_text, ok, (Qt::WindowFlags)flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QInputDialog_getInt(QWidgetH parent, PWideString title, PWideString label, int value, int minValue, int maxValue, int step, bool* ok, unsigned int flags)
{
	QString t_title;
	QString t_label;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(label, t_label);
	return (int) QInputDialog::getInt((QWidget*)parent, t_title, t_label, value, minValue, maxValue, step, ok, (Qt::WindowFlags)flags);
}

C_EXPORT double QInputDialog_getDouble(QWidgetH parent, PWideString title, PWideString label, double value, double minValue, double maxValue, int decimals, bool* ok, unsigned int flags)
{
	QString t_title;
	QString t_label;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(label, t_label);
	return (double) QInputDialog::getDouble((QWidget*)parent, t_title, t_label, value, minValue, maxValue, decimals, ok, (Qt::WindowFlags)flags);
}

C_EXPORT void QInputDialog_getItem(PWideString retval, QWidgetH parent, PWideString title, PWideString label, const QStringListH items, int current, bool editable, bool* ok, unsigned int flags)
{
	QString t_retval;
	QString t_title;
	QString t_label;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(label, t_label);
	t_retval = QInputDialog::getItem((QWidget*)parent, t_title, t_label, *(const QStringList*)items, current, editable, ok, (Qt::WindowFlags)flags);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QInputDialog_getInteger(QWidgetH parent, PWideString title, PWideString label, int value, int minValue, int maxValue, int step, bool* ok, unsigned int flags)
{
	QString t_title;
	QString t_label;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(label, t_label);
	return (int) QInputDialog::getInteger((QWidget*)parent, t_title, t_label, value, minValue, maxValue, step, ok, (Qt::WindowFlags)flags);
}

C_EXPORT void QInputDialog_done(QInputDialogH handle, int result)
{
	((QInputDialog *)handle)->done(result);
}

