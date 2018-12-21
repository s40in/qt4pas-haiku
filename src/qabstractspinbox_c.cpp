//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QAbstractSpinBoxH QAbstractSpinBox_create(QWidgetH parent)
{
	return (QAbstractSpinBoxH) new QAbstractSpinBox((QWidget*)parent);
}

C_EXPORT void QAbstractSpinBox_destroy(QAbstractSpinBoxH handle)
{
	delete (QAbstractSpinBox *)handle;
}

C_EXPORT QAbstractSpinBox::ButtonSymbols QAbstractSpinBox_buttonSymbols(QAbstractSpinBoxH handle)
{
	return (QAbstractSpinBox::ButtonSymbols) ((QAbstractSpinBox *)handle)->buttonSymbols();
}

C_EXPORT void QAbstractSpinBox_setButtonSymbols(QAbstractSpinBoxH handle, QAbstractSpinBox::ButtonSymbols bs)
{
	((QAbstractSpinBox *)handle)->setButtonSymbols(bs);
}

C_EXPORT void QAbstractSpinBox_setCorrectionMode(QAbstractSpinBoxH handle, QAbstractSpinBox::CorrectionMode cm)
{
	((QAbstractSpinBox *)handle)->setCorrectionMode(cm);
}

C_EXPORT QAbstractSpinBox::CorrectionMode QAbstractSpinBox_correctionMode(QAbstractSpinBoxH handle)
{
	return (QAbstractSpinBox::CorrectionMode) ((QAbstractSpinBox *)handle)->correctionMode();
}

C_EXPORT bool QAbstractSpinBox_hasAcceptableInput(QAbstractSpinBoxH handle)
{
	return (bool) ((QAbstractSpinBox *)handle)->hasAcceptableInput();
}

C_EXPORT void QAbstractSpinBox_text(QAbstractSpinBoxH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAbstractSpinBox *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAbstractSpinBox_specialValueText(QAbstractSpinBoxH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAbstractSpinBox *)handle)->specialValueText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAbstractSpinBox_setSpecialValueText(QAbstractSpinBoxH handle, PWideString txt)
{
	QString t_txt;
	copyPWideStringToQString(txt, t_txt);
	((QAbstractSpinBox *)handle)->setSpecialValueText(t_txt);
}

C_EXPORT bool QAbstractSpinBox_wrapping(QAbstractSpinBoxH handle)
{
	return (bool) ((QAbstractSpinBox *)handle)->wrapping();
}

C_EXPORT void QAbstractSpinBox_setWrapping(QAbstractSpinBoxH handle, bool w)
{
	((QAbstractSpinBox *)handle)->setWrapping(w);
}

C_EXPORT void QAbstractSpinBox_setReadOnly(QAbstractSpinBoxH handle, bool r)
{
	((QAbstractSpinBox *)handle)->setReadOnly(r);
}

C_EXPORT bool QAbstractSpinBox_isReadOnly(QAbstractSpinBoxH handle)
{
	return (bool) ((QAbstractSpinBox *)handle)->isReadOnly();
}

C_EXPORT void QAbstractSpinBox_setKeyboardTracking(QAbstractSpinBoxH handle, bool kt)
{
	((QAbstractSpinBox *)handle)->setKeyboardTracking(kt);
}

C_EXPORT bool QAbstractSpinBox_keyboardTracking(QAbstractSpinBoxH handle)
{
	return (bool) ((QAbstractSpinBox *)handle)->keyboardTracking();
}

C_EXPORT void QAbstractSpinBox_setAlignment(QAbstractSpinBoxH handle, unsigned int flag)
{
	((QAbstractSpinBox *)handle)->setAlignment((Qt::Alignment)flag);
}

C_EXPORT unsigned int QAbstractSpinBox_alignment(QAbstractSpinBoxH handle)
{
	return (unsigned int) ((QAbstractSpinBox *)handle)->alignment();
}

C_EXPORT void QAbstractSpinBox_setFrame(QAbstractSpinBoxH handle, bool AnonParam1)
{
	((QAbstractSpinBox *)handle)->setFrame(AnonParam1);
}

C_EXPORT bool QAbstractSpinBox_hasFrame(QAbstractSpinBoxH handle)
{
	return (bool) ((QAbstractSpinBox *)handle)->hasFrame();
}

C_EXPORT void QAbstractSpinBox_setAccelerated(QAbstractSpinBoxH handle, bool on)
{
	((QAbstractSpinBox *)handle)->setAccelerated(on);
}

C_EXPORT bool QAbstractSpinBox_isAccelerated(QAbstractSpinBoxH handle)
{
	return (bool) ((QAbstractSpinBox *)handle)->isAccelerated();
}

C_EXPORT void QAbstractSpinBox_sizeHint(QAbstractSpinBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractSpinBox *)handle)->sizeHint();
}

C_EXPORT void QAbstractSpinBox_minimumSizeHint(QAbstractSpinBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractSpinBox *)handle)->minimumSizeHint();
}

C_EXPORT void QAbstractSpinBox_interpretText(QAbstractSpinBoxH handle)
{
	((QAbstractSpinBox *)handle)->interpretText();
}

C_EXPORT bool QAbstractSpinBox_event(QAbstractSpinBoxH handle, QEventH event)
{
	return (bool) ((QAbstractSpinBox *)handle)->event((QEvent*)event);
}

C_EXPORT QValidator::State QAbstractSpinBox_validate(QAbstractSpinBoxH handle, PWideString input, int* pos)
{
	QString t_input;
	copyPWideStringToQString(input, t_input);
	QValidator::State t_retval;
	t_retval = (QValidator::State) ((QAbstractSpinBox *)handle)->validate(t_input, *(int*)pos);
	copyQStringToPWideString(t_input, input);
	return t_retval;
}

C_EXPORT void QAbstractSpinBox_fixup(QAbstractSpinBoxH handle, PWideString input)
{
	QString t_input;
	copyPWideStringToQString(input, t_input);
	((QAbstractSpinBox *)handle)->fixup(t_input);
	copyQStringToPWideString(t_input, input);
}

C_EXPORT void QAbstractSpinBox_stepBy(QAbstractSpinBoxH handle, int steps)
{
	((QAbstractSpinBox *)handle)->stepBy(steps);
}

C_EXPORT void QAbstractSpinBox_stepUp(QAbstractSpinBoxH handle)
{
	((QAbstractSpinBox *)handle)->stepUp();
}

C_EXPORT void QAbstractSpinBox_stepDown(QAbstractSpinBoxH handle)
{
	((QAbstractSpinBox *)handle)->stepDown();
}

C_EXPORT void QAbstractSpinBox_selectAll(QAbstractSpinBoxH handle)
{
	((QAbstractSpinBox *)handle)->selectAll();
}

C_EXPORT void QAbstractSpinBox_clear(QAbstractSpinBoxH handle)
{
	((QAbstractSpinBox *)handle)->clear();
}

