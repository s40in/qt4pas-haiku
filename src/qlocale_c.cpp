//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSystemLocaleH QSystemLocale_create()
{
	return (QSystemLocaleH) new QSystemLocale();
}

C_EXPORT void QSystemLocale_destroy(QSystemLocaleH handle)
{
	delete (QSystemLocale *)handle;
}

C_EXPORT void QSystemLocale_fallbackLocale(QSystemLocaleH handle, QLocaleH retval)
{
	*(QLocale *)retval = ((QSystemLocale *)handle)->fallbackLocale();
}

C_EXPORT QLocaleH QLocale_create()
{
	return (QLocaleH) new QLocale();
}

C_EXPORT void QLocale_destroy(QLocaleH handle)
{
	delete (QLocale *)handle;
}

C_EXPORT QLocaleH QLocale_create2(PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	return (QLocaleH) new QLocale(t_name);
}

C_EXPORT QLocaleH QLocale_create3(QLocale::Language language, QLocale::Country country)
{
	return (QLocaleH) new QLocale(language, country);
}

C_EXPORT QLocaleH QLocale_create4(const QLocaleH other)
{
	return (QLocaleH) new QLocale(*(const QLocale*)other);
}

C_EXPORT QLocale::Language QLocale_language(QLocaleH handle)
{
	return (QLocale::Language) ((QLocale *)handle)->language();
}

C_EXPORT QLocale::Country QLocale_country(QLocaleH handle)
{
	return (QLocale::Country) ((QLocale *)handle)->country();
}

C_EXPORT void QLocale_name(QLocaleH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->name();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT short QLocale_toShort(QLocaleH handle, PWideString s, bool* ok, int base)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (short) ((QLocale *)handle)->toShort(t_s, ok, base);
}

C_EXPORT ushort QLocale_toUShort(QLocaleH handle, PWideString s, bool* ok, int base)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (ushort) ((QLocale *)handle)->toUShort(t_s, ok, base);
}

C_EXPORT int QLocale_toInt(QLocaleH handle, PWideString s, bool* ok, int base)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (int) ((QLocale *)handle)->toInt(t_s, ok, base);
}

C_EXPORT uint QLocale_toUInt(QLocaleH handle, PWideString s, bool* ok, int base)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (uint) ((QLocale *)handle)->toUInt(t_s, ok, base);
}

C_EXPORT qlonglong QLocale_toLongLong(QLocaleH handle, PWideString s, bool* ok, int base)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (qlonglong) ((QLocale *)handle)->toLongLong(t_s, ok, base);
}

C_EXPORT qlonglong QLocale_toULongLong(QLocaleH handle, PWideString s, bool* ok, int base)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (qlonglong) ((QLocale *)handle)->toULongLong(t_s, ok, base);
}

C_EXPORT float QLocale_toFloat(QLocaleH handle, PWideString s, bool* ok)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (float) ((QLocale *)handle)->toFloat(t_s, ok);
}

C_EXPORT double QLocale_toDouble(QLocaleH handle, PWideString s, bool* ok)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	return (double) ((QLocale *)handle)->toDouble(t_s, ok);
}

C_EXPORT void QLocale_toString(QLocaleH handle, PWideString retval, qlonglong i)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString2(QLocaleH handle, PWideString retval, qulonglong i)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString3(QLocaleH handle, PWideString retval, short i)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString4(QLocaleH handle, PWideString retval, ushort i)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString5(QLocaleH handle, PWideString retval, int i)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString6(QLocaleH handle, PWideString retval, uint i)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString7(QLocaleH handle, PWideString retval, double i, char f, int prec)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i, f, prec);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString8(QLocaleH handle, PWideString retval, float i, char f, int prec)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(i, f, prec);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString9(QLocaleH handle, PWideString retval, const QDateH date, PWideString formatStr)
{
	QString t_retval;
	QString t_formatStr;
	copyPWideStringToQString(formatStr, t_formatStr);
	t_retval = ((QLocale *)handle)->toString(*(const QDate*)date, t_formatStr);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString10(QLocaleH handle, PWideString retval, const QDateH date, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(*(const QDate*)date, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString11(QLocaleH handle, PWideString retval, const QTimeH time, PWideString formatStr)
{
	QString t_retval;
	QString t_formatStr;
	copyPWideStringToQString(formatStr, t_formatStr);
	t_retval = ((QLocale *)handle)->toString(*(const QTime*)time, t_formatStr);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString12(QLocaleH handle, PWideString retval, const QTimeH time, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(*(const QTime*)time, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString13(QLocaleH handle, PWideString retval, const QDateTimeH dateTime, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->toString(*(const QDateTime*)dateTime, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toString14(QLocaleH handle, PWideString retval, const QDateTimeH dateTime, PWideString format)
{
	QString t_retval;
	QString t_format;
	copyPWideStringToQString(format, t_format);
	t_retval = ((QLocale *)handle)->toString(*(const QDateTime*)dateTime, t_format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_dateFormat(QLocaleH handle, PWideString retval, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->dateFormat(format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_timeFormat(QLocaleH handle, PWideString retval, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->timeFormat(format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_dateTimeFormat(QLocaleH handle, PWideString retval, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->dateTimeFormat(format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_toDate(QLocaleH handle, QDateH retval, PWideString string, QLocale::FormatType AnonParam2)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	*(QDate *)retval = ((QLocale *)handle)->toDate(t_string, AnonParam2);
}

C_EXPORT void QLocale_toTime(QLocaleH handle, QTimeH retval, PWideString string, QLocale::FormatType AnonParam2)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	*(QTime *)retval = ((QLocale *)handle)->toTime(t_string, AnonParam2);
}

C_EXPORT void QLocale_toDateTime(QLocaleH handle, QDateTimeH retval, PWideString string, QLocale::FormatType format)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	*(QDateTime *)retval = ((QLocale *)handle)->toDateTime(t_string, format);
}

C_EXPORT void QLocale_toDate2(QLocaleH handle, QDateH retval, PWideString string, PWideString format)
{
	QString t_string;
	QString t_format;
	copyPWideStringToQString(string, t_string);
	copyPWideStringToQString(format, t_format);
	*(QDate *)retval = ((QLocale *)handle)->toDate(t_string, t_format);
}

C_EXPORT void QLocale_toTime2(QLocaleH handle, QTimeH retval, PWideString string, PWideString format)
{
	QString t_string;
	QString t_format;
	copyPWideStringToQString(string, t_string);
	copyPWideStringToQString(format, t_format);
	*(QTime *)retval = ((QLocale *)handle)->toTime(t_string, t_format);
}

C_EXPORT void QLocale_toDateTime2(QLocaleH handle, QDateTimeH retval, PWideString string, PWideString format)
{
	QString t_string;
	QString t_format;
	copyPWideStringToQString(string, t_string);
	copyPWideStringToQString(format, t_format);
	*(QDateTime *)retval = ((QLocale *)handle)->toDateTime(t_string, t_format);
}

C_EXPORT void QLocale_decimalPoint(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->decimalPoint();
}

C_EXPORT void QLocale_groupSeparator(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->groupSeparator();
}

C_EXPORT void QLocale_percent(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->percent();
}

C_EXPORT void QLocale_zeroDigit(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->zeroDigit();
}

C_EXPORT void QLocale_negativeSign(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->negativeSign();
}

C_EXPORT void QLocale_positiveSign(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->positiveSign();
}

C_EXPORT void QLocale_exponential(QLocaleH handle, PWideChar retval)
{
	*(QChar *)retval = ((QLocale *)handle)->exponential();
}

C_EXPORT void QLocale_monthName(QLocaleH handle, PWideString retval, int AnonParam1, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->monthName(AnonParam1, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_standaloneMonthName(QLocaleH handle, PWideString retval, int AnonParam1, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->standaloneMonthName(AnonParam1, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_dayName(QLocaleH handle, PWideString retval, int AnonParam1, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->dayName(AnonParam1, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_standaloneDayName(QLocaleH handle, PWideString retval, int AnonParam1, QLocale::FormatType format)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->standaloneDayName(AnonParam1, format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_amText(QLocaleH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->amText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_pmText(QLocaleH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLocale *)handle)->pmText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QLocale::MeasurementSystem QLocale_measurementSystem(QLocaleH handle)
{
	return (QLocale::MeasurementSystem) ((QLocale *)handle)->measurementSystem();
}

C_EXPORT void QLocale_languageToString(PWideString retval, QLocale::Language language)
{
	QString t_retval;
	t_retval = QLocale::languageToString(language);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_countryToString(PWideString retval, QLocale::Country country)
{
	QString t_retval;
	t_retval = QLocale::countryToString(country);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLocale_setDefault(const QLocaleH locale)
{
	QLocale::setDefault(*(const QLocale*)locale);
}

C_EXPORT void QLocale_c(QLocaleH retval)
{
	*(QLocale *)retval = QLocale::c();
}

C_EXPORT void QLocale_system(QLocaleH retval)
{
	*(QLocale *)retval = QLocale::system();
}

C_EXPORT void QLocale_setNumberOptions(QLocaleH handle, unsigned int options)
{
	((QLocale *)handle)->setNumberOptions((QLocale::NumberOptions)options);
}

C_EXPORT unsigned int QLocale_numberOptions(QLocaleH handle)
{
	return (unsigned int) ((QLocale *)handle)->numberOptions();
}

