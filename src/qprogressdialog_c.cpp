//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QProgressDialogH QProgressDialog_create(QWidgetH parent, unsigned int flags)
{
	return (QProgressDialogH) new QProgressDialog((QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QProgressDialog_destroy(QProgressDialogH handle)
{
	delete (QProgressDialog *)handle;
}

C_EXPORT QProgressDialogH QProgressDialog_create2(PWideString labelText, PWideString cancelButtonText, int minimum, int maximum, QWidgetH parent, unsigned int flags)
{
	QString t_labelText;
	QString t_cancelButtonText;
	copyPWideStringToQString(labelText, t_labelText);
	copyPWideStringToQString(cancelButtonText, t_cancelButtonText);
	return (QProgressDialogH) new QProgressDialog(t_labelText, t_cancelButtonText, minimum, maximum, (QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QProgressDialog_setLabel(QProgressDialogH handle, QLabelH label)
{
	((QProgressDialog *)handle)->setLabel((QLabel*)label);
}

C_EXPORT void QProgressDialog_setCancelButton(QProgressDialogH handle, QPushButtonH button)
{
	((QProgressDialog *)handle)->setCancelButton((QPushButton*)button);
}

C_EXPORT void QProgressDialog_setBar(QProgressDialogH handle, QProgressBarH bar)
{
	((QProgressDialog *)handle)->setBar((QProgressBar*)bar);
}

C_EXPORT bool QProgressDialog_wasCanceled(QProgressDialogH handle)
{
	return (bool) ((QProgressDialog *)handle)->wasCanceled();
}

C_EXPORT int QProgressDialog_minimum(QProgressDialogH handle)
{
	return (int) ((QProgressDialog *)handle)->minimum();
}

C_EXPORT int QProgressDialog_maximum(QProgressDialogH handle)
{
	return (int) ((QProgressDialog *)handle)->maximum();
}

C_EXPORT int QProgressDialog_value(QProgressDialogH handle)
{
	return (int) ((QProgressDialog *)handle)->value();
}

C_EXPORT void QProgressDialog_sizeHint(QProgressDialogH handle, PSize retval)
{
	*(QSize *)retval = ((QProgressDialog *)handle)->sizeHint();
}

C_EXPORT void QProgressDialog_labelText(QProgressDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QProgressDialog *)handle)->labelText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QProgressDialog_minimumDuration(QProgressDialogH handle)
{
	return (int) ((QProgressDialog *)handle)->minimumDuration();
}

C_EXPORT void QProgressDialog_setAutoReset(QProgressDialogH handle, bool reset)
{
	((QProgressDialog *)handle)->setAutoReset(reset);
}

C_EXPORT bool QProgressDialog_autoReset(QProgressDialogH handle)
{
	return (bool) ((QProgressDialog *)handle)->autoReset();
}

C_EXPORT void QProgressDialog_setAutoClose(QProgressDialogH handle, bool close)
{
	((QProgressDialog *)handle)->setAutoClose(close);
}

C_EXPORT bool QProgressDialog_autoClose(QProgressDialogH handle)
{
	return (bool) ((QProgressDialog *)handle)->autoClose();
}

C_EXPORT void QProgressDialog_open(QProgressDialogH handle, QObjectH receiver, const char* member)
{
	((QProgressDialog *)handle)->open((QObject*)receiver, member);
}

C_EXPORT void QProgressDialog_cancel(QProgressDialogH handle)
{
	((QProgressDialog *)handle)->cancel();
}

C_EXPORT void QProgressDialog_reset(QProgressDialogH handle)
{
	((QProgressDialog *)handle)->reset();
}

C_EXPORT void QProgressDialog_setMaximum(QProgressDialogH handle, int maximum)
{
	((QProgressDialog *)handle)->setMaximum(maximum);
}

C_EXPORT void QProgressDialog_setMinimum(QProgressDialogH handle, int minimum)
{
	((QProgressDialog *)handle)->setMinimum(minimum);
}

C_EXPORT void QProgressDialog_setRange(QProgressDialogH handle, int minimum, int maximum)
{
	((QProgressDialog *)handle)->setRange(minimum, maximum);
}

C_EXPORT void QProgressDialog_setValue(QProgressDialogH handle, int progress)
{
	((QProgressDialog *)handle)->setValue(progress);
}

C_EXPORT void QProgressDialog_setLabelText(QProgressDialogH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QProgressDialog *)handle)->setLabelText(t_text);
}

C_EXPORT void QProgressDialog_setCancelButtonText(QProgressDialogH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QProgressDialog *)handle)->setCancelButtonText(t_text);
}

C_EXPORT void QProgressDialog_setMinimumDuration(QProgressDialogH handle, int ms)
{
	((QProgressDialog *)handle)->setMinimumDuration(ms);
}

