//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QValidator_setLocale(QValidatorH handle, const QLocaleH locale)
{
	((QValidator *)handle)->setLocale(*(const QLocale*)locale);
}

C_EXPORT void QValidator_locale(QValidatorH handle, QLocaleH retval)
{
	*(QLocale *)retval = ((QValidator *)handle)->locale();
}

C_EXPORT QValidator::State QValidator_validate(QValidatorH handle, PWideString AnonParam1, int* AnonParam2)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QValidator::State t_retval;
	t_retval = (QValidator::State) ((QValidator *)handle)->validate(t_AnonParam1, *(int*)AnonParam2);
	copyQStringToPWideString(t_AnonParam1, AnonParam1);
	return t_retval;
}

C_EXPORT void QValidator_fixup(QValidatorH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QValidator *)handle)->fixup(t_AnonParam1);
	copyQStringToPWideString(t_AnonParam1, AnonParam1);
}

C_EXPORT QIntValidatorH QIntValidator_create(QObjectH parent)
{
	return (QIntValidatorH) new QIntValidator((QObject*)parent);
}

C_EXPORT void QIntValidator_destroy(QIntValidatorH handle)
{
	delete (QIntValidator *)handle;
}

C_EXPORT QIntValidatorH QIntValidator_create2(int bottom, int top, QObjectH parent)
{
	return (QIntValidatorH) new QIntValidator(bottom, top, (QObject*)parent);
}

C_EXPORT QValidator::State QIntValidator_validate(QIntValidatorH handle, PWideString AnonParam1, int* AnonParam2)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QValidator::State t_retval;
	t_retval = (QValidator::State) ((QIntValidator *)handle)->validate(t_AnonParam1, *(int*)AnonParam2);
	copyQStringToPWideString(t_AnonParam1, AnonParam1);
	return t_retval;
}

C_EXPORT void QIntValidator_setBottom(QIntValidatorH handle, int AnonParam1)
{
	((QIntValidator *)handle)->setBottom(AnonParam1);
}

C_EXPORT void QIntValidator_setTop(QIntValidatorH handle, int AnonParam1)
{
	((QIntValidator *)handle)->setTop(AnonParam1);
}

C_EXPORT void QIntValidator_setRange(QIntValidatorH handle, int bottom, int top)
{
	((QIntValidator *)handle)->setRange(bottom, top);
}

C_EXPORT int QIntValidator_bottom(QIntValidatorH handle)
{
	return (int) ((QIntValidator *)handle)->bottom();
}

C_EXPORT int QIntValidator_top(QIntValidatorH handle)
{
	return (int) ((QIntValidator *)handle)->top();
}

C_EXPORT QDoubleValidatorH QDoubleValidator_create(QObjectH parent)
{
	return (QDoubleValidatorH) new QDoubleValidator((QObject*)parent);
}

C_EXPORT void QDoubleValidator_destroy(QDoubleValidatorH handle)
{
	delete (QDoubleValidator *)handle;
}

C_EXPORT QDoubleValidatorH QDoubleValidator_create2(double bottom, double top, int decimals, QObjectH parent)
{
	return (QDoubleValidatorH) new QDoubleValidator(bottom, top, decimals, (QObject*)parent);
}

C_EXPORT QValidator::State QDoubleValidator_validate(QDoubleValidatorH handle, PWideString AnonParam1, int* AnonParam2)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QValidator::State t_retval;
	t_retval = (QValidator::State) ((QDoubleValidator *)handle)->validate(t_AnonParam1, *(int*)AnonParam2);
	copyQStringToPWideString(t_AnonParam1, AnonParam1);
	return t_retval;
}

C_EXPORT void QDoubleValidator_setRange(QDoubleValidatorH handle, double bottom, double top, int decimals)
{
	((QDoubleValidator *)handle)->setRange(bottom, top, decimals);
}

C_EXPORT void QDoubleValidator_setBottom(QDoubleValidatorH handle, double AnonParam1)
{
	((QDoubleValidator *)handle)->setBottom(AnonParam1);
}

C_EXPORT void QDoubleValidator_setTop(QDoubleValidatorH handle, double AnonParam1)
{
	((QDoubleValidator *)handle)->setTop(AnonParam1);
}

C_EXPORT void QDoubleValidator_setDecimals(QDoubleValidatorH handle, int AnonParam1)
{
	((QDoubleValidator *)handle)->setDecimals(AnonParam1);
}

C_EXPORT void QDoubleValidator_setNotation(QDoubleValidatorH handle, QDoubleValidator::Notation AnonParam1)
{
	((QDoubleValidator *)handle)->setNotation(AnonParam1);
}

C_EXPORT double QDoubleValidator_bottom(QDoubleValidatorH handle)
{
	return (double) ((QDoubleValidator *)handle)->bottom();
}

C_EXPORT double QDoubleValidator_top(QDoubleValidatorH handle)
{
	return (double) ((QDoubleValidator *)handle)->top();
}

C_EXPORT int QDoubleValidator_decimals(QDoubleValidatorH handle)
{
	return (int) ((QDoubleValidator *)handle)->decimals();
}

C_EXPORT QDoubleValidator::Notation QDoubleValidator_notation(QDoubleValidatorH handle)
{
	return (QDoubleValidator::Notation) ((QDoubleValidator *)handle)->notation();
}

C_EXPORT QRegExpValidatorH QRegExpValidator_create(QObjectH parent)
{
	return (QRegExpValidatorH) new QRegExpValidator((QObject*)parent);
}

C_EXPORT void QRegExpValidator_destroy(QRegExpValidatorH handle)
{
	delete (QRegExpValidator *)handle;
}

C_EXPORT QRegExpValidatorH QRegExpValidator_create2(const QRegExpH rx, QObjectH parent)
{
	return (QRegExpValidatorH) new QRegExpValidator(*(const QRegExp*)rx, (QObject*)parent);
}

C_EXPORT QValidator::State QRegExpValidator_validate(QRegExpValidatorH handle, PWideString input, int* pos)
{
	QString t_input;
	copyPWideStringToQString(input, t_input);
	QValidator::State t_retval;
	t_retval = (QValidator::State) ((QRegExpValidator *)handle)->validate(t_input, *(int*)pos);
	copyQStringToPWideString(t_input, input);
	return t_retval;
}

C_EXPORT void QRegExpValidator_setRegExp(QRegExpValidatorH handle, const QRegExpH rx)
{
	((QRegExpValidator *)handle)->setRegExp(*(const QRegExp*)rx);
}

C_EXPORT const QRegExpH QRegExpValidator_regExp(QRegExpValidatorH handle)
{
	return (const QRegExpH) &((QRegExpValidator *)handle)->regExp();
}

