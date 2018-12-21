//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QDateH QDate_create()
{
	return (QDateH) new QDate();
}

C_EXPORT void QDate_destroy(QDateH handle)
{
	delete (QDate *)handle;
}

C_EXPORT QDateH QDate_create2(int y, int m, int d)
{
	return (QDateH) new QDate(y, m, d);
}

C_EXPORT bool QDate_isNull(QDateH handle)
{
	return (bool) ((QDate *)handle)->isNull();
}

C_EXPORT bool QDate_isValid(QDateH handle)
{
	return (bool) ((QDate *)handle)->isValid();
}

C_EXPORT int QDate_year(QDateH handle)
{
	return (int) ((QDate *)handle)->year();
}

C_EXPORT int QDate_month(QDateH handle)
{
	return (int) ((QDate *)handle)->month();
}

C_EXPORT int QDate_day(QDateH handle)
{
	return (int) ((QDate *)handle)->day();
}

C_EXPORT int QDate_dayOfWeek(QDateH handle)
{
	return (int) ((QDate *)handle)->dayOfWeek();
}

C_EXPORT int QDate_dayOfYear(QDateH handle)
{
	return (int) ((QDate *)handle)->dayOfYear();
}

C_EXPORT int QDate_daysInMonth(QDateH handle)
{
	return (int) ((QDate *)handle)->daysInMonth();
}

C_EXPORT int QDate_daysInYear(QDateH handle)
{
	return (int) ((QDate *)handle)->daysInYear();
}

C_EXPORT int QDate_weekNumber(QDateH handle, int* yearNum)
{
	return (int) ((QDate *)handle)->weekNumber(yearNum);
}

C_EXPORT void QDate_shortMonthName(PWideString retval, int month)
{
	QString t_retval;
	t_retval = QDate::shortMonthName(month);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_shortMonthName2(PWideString retval, int month, QDate::MonthNameType type)
{
	QString t_retval;
	t_retval = QDate::shortMonthName(month, type);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_shortDayName(PWideString retval, int weekday)
{
	QString t_retval;
	t_retval = QDate::shortDayName(weekday);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_shortDayName2(PWideString retval, int weekday, QDate::MonthNameType type)
{
	QString t_retval;
	t_retval = QDate::shortDayName(weekday, type);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_longMonthName(PWideString retval, int month)
{
	QString t_retval;
	t_retval = QDate::longMonthName(month);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_longMonthName2(PWideString retval, int month, QDate::MonthNameType type)
{
	QString t_retval;
	t_retval = QDate::longMonthName(month, type);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_longDayName(PWideString retval, int weekday)
{
	QString t_retval;
	t_retval = QDate::longDayName(weekday);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_longDayName2(PWideString retval, int weekday, QDate::MonthNameType type)
{
	QString t_retval;
	t_retval = QDate::longDayName(weekday, type);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_toString(QDateH handle, PWideString retval, Qt::DateFormat f)
{
	QString t_retval;
	t_retval = ((QDate *)handle)->toString(f);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDate_toString2(QDateH handle, PWideString retval, PWideString format)
{
	QString t_retval;
	QString t_format;
	copyPWideStringToQString(format, t_format);
	t_retval = ((QDate *)handle)->toString(t_format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QDate_setYMD(QDateH handle, int y, int m, int d)
{
	return (bool) ((QDate *)handle)->setYMD(y, m, d);
}

C_EXPORT bool QDate_setDate(QDateH handle, int year, int month, int day)
{
	return (bool) ((QDate *)handle)->setDate(year, month, day);
}

C_EXPORT void QDate_getDate(QDateH handle, int* year, int* month, int* day)
{
	((QDate *)handle)->getDate(year, month, day);
}

C_EXPORT void QDate_addDays(QDateH handle, QDateH retval, int days)
{
	*(QDate *)retval = ((QDate *)handle)->addDays(days);
}

C_EXPORT void QDate_addMonths(QDateH handle, QDateH retval, int months)
{
	*(QDate *)retval = ((QDate *)handle)->addMonths(months);
}

C_EXPORT void QDate_addYears(QDateH handle, QDateH retval, int years)
{
	*(QDate *)retval = ((QDate *)handle)->addYears(years);
}

C_EXPORT int QDate_daysTo(QDateH handle, const QDateH AnonParam1)
{
	return (int) ((QDate *)handle)->daysTo(*(const QDate*)AnonParam1);
}

C_EXPORT void QDate_currentDate(QDateH retval)
{
	*(QDate *)retval = QDate::currentDate();
}

C_EXPORT void QDate_fromString(QDateH retval, PWideString s, Qt::DateFormat f)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	*(QDate *)retval = QDate::fromString(t_s, f);
}

C_EXPORT void QDate_fromString2(QDateH retval, PWideString s, PWideString format)
{
	QString t_s;
	QString t_format;
	copyPWideStringToQString(s, t_s);
	copyPWideStringToQString(format, t_format);
	*(QDate *)retval = QDate::fromString(t_s, t_format);
}

C_EXPORT bool QDate_isValid2(int y, int m, int d)
{
	return (bool) QDate::isValid(y, m, d);
}

C_EXPORT bool QDate_isLeapYear(int year)
{
	return (bool) QDate::isLeapYear(year);
}

C_EXPORT uint QDate_gregorianToJulian(int y, int m, int d)
{
	return (uint) QDate::gregorianToJulian(y, m, d);
}

C_EXPORT void QDate_julianToGregorian(uint jd, int* y, int* m, int* d)
{
	QDate::julianToGregorian(jd, *(int*)y, *(int*)m, *(int*)d);
}

C_EXPORT void QDate_fromJulianDay(QDateH retval, int jd)
{
	*(QDate *)retval = QDate::fromJulianDay(jd);
}

C_EXPORT int QDate_toJulianDay(QDateH handle)
{
	return (int) ((QDate *)handle)->toJulianDay();
}

C_EXPORT QTimeH QTime_create()
{
	return (QTimeH) new QTime();
}

C_EXPORT void QTime_destroy(QTimeH handle)
{
	delete (QTime *)handle;
}

C_EXPORT QTimeH QTime_create2(int h, int m, int s, int ms)
{
	return (QTimeH) new QTime(h, m, s, ms);
}

C_EXPORT bool QTime_isNull(QTimeH handle)
{
	return (bool) ((QTime *)handle)->isNull();
}

C_EXPORT bool QTime_isValid(QTimeH handle)
{
	return (bool) ((QTime *)handle)->isValid();
}

C_EXPORT int QTime_hour(QTimeH handle)
{
	return (int) ((QTime *)handle)->hour();
}

C_EXPORT int QTime_minute(QTimeH handle)
{
	return (int) ((QTime *)handle)->minute();
}

C_EXPORT int QTime_second(QTimeH handle)
{
	return (int) ((QTime *)handle)->second();
}

C_EXPORT int QTime_msec(QTimeH handle)
{
	return (int) ((QTime *)handle)->msec();
}

C_EXPORT void QTime_toString(QTimeH handle, PWideString retval, Qt::DateFormat f)
{
	QString t_retval;
	t_retval = ((QTime *)handle)->toString(f);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTime_toString2(QTimeH handle, PWideString retval, PWideString format)
{
	QString t_retval;
	QString t_format;
	copyPWideStringToQString(format, t_format);
	t_retval = ((QTime *)handle)->toString(t_format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QTime_setHMS(QTimeH handle, int h, int m, int s, int ms)
{
	return (bool) ((QTime *)handle)->setHMS(h, m, s, ms);
}

C_EXPORT void QTime_addSecs(QTimeH handle, QTimeH retval, int secs)
{
	*(QTime *)retval = ((QTime *)handle)->addSecs(secs);
}

C_EXPORT int QTime_secsTo(QTimeH handle, const QTimeH AnonParam1)
{
	return (int) ((QTime *)handle)->secsTo(*(const QTime*)AnonParam1);
}

C_EXPORT void QTime_addMSecs(QTimeH handle, QTimeH retval, int ms)
{
	*(QTime *)retval = ((QTime *)handle)->addMSecs(ms);
}

C_EXPORT int QTime_msecsTo(QTimeH handle, const QTimeH AnonParam1)
{
	return (int) ((QTime *)handle)->msecsTo(*(const QTime*)AnonParam1);
}

C_EXPORT void QTime_currentTime(QTimeH retval)
{
	*(QTime *)retval = QTime::currentTime();
}

C_EXPORT void QTime_fromString(QTimeH retval, PWideString s, Qt::DateFormat f)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	*(QTime *)retval = QTime::fromString(t_s, f);
}

C_EXPORT void QTime_fromString2(QTimeH retval, PWideString s, PWideString format)
{
	QString t_s;
	QString t_format;
	copyPWideStringToQString(s, t_s);
	copyPWideStringToQString(format, t_format);
	*(QTime *)retval = QTime::fromString(t_s, t_format);
}

C_EXPORT bool QTime_isValid2(int h, int m, int s, int ms)
{
	return (bool) QTime::isValid(h, m, s, ms);
}

C_EXPORT void QTime_start(QTimeH handle)
{
	((QTime *)handle)->start();
}

C_EXPORT int QTime_restart(QTimeH handle)
{
	return (int) ((QTime *)handle)->restart();
}

C_EXPORT int QTime_elapsed(QTimeH handle)
{
	return (int) ((QTime *)handle)->elapsed();
}

C_EXPORT QDateTimeH QDateTime_create()
{
	return (QDateTimeH) new QDateTime();
}

C_EXPORT void QDateTime_destroy(QDateTimeH handle)
{
	delete (QDateTime *)handle;
}

C_EXPORT QDateTimeH QDateTime_create2(const QDateH AnonParam1)
{
	return (QDateTimeH) new QDateTime(*(const QDate*)AnonParam1);
}

C_EXPORT QDateTimeH QDateTime_create3(const QDateH AnonParam1, const QTimeH AnonParam2, Qt::TimeSpec spec)
{
	return (QDateTimeH) new QDateTime(*(const QDate*)AnonParam1, *(const QTime*)AnonParam2, spec);
}

C_EXPORT QDateTimeH QDateTime_create4(const QDateTimeH other)
{
	return (QDateTimeH) new QDateTime(*(const QDateTime*)other);
}

C_EXPORT bool QDateTime_isNull(QDateTimeH handle)
{
	return (bool) ((QDateTime *)handle)->isNull();
}

C_EXPORT bool QDateTime_isValid(QDateTimeH handle)
{
	return (bool) ((QDateTime *)handle)->isValid();
}

C_EXPORT void QDateTime_date(QDateTimeH handle, QDateH retval)
{
	*(QDate *)retval = ((QDateTime *)handle)->date();
}

C_EXPORT void QDateTime_time(QDateTimeH handle, QTimeH retval)
{
	*(QTime *)retval = ((QDateTime *)handle)->time();
}

C_EXPORT Qt::TimeSpec QDateTime_timeSpec(QDateTimeH handle)
{
	return (Qt::TimeSpec) ((QDateTime *)handle)->timeSpec();
}

C_EXPORT uint QDateTime_toTime_t(QDateTimeH handle)
{
	return (uint) ((QDateTime *)handle)->toTime_t();
}

C_EXPORT void QDateTime_setDate(QDateTimeH handle, const QDateH date)
{
	((QDateTime *)handle)->setDate(*(const QDate*)date);
}

C_EXPORT void QDateTime_setTime(QDateTimeH handle, const QTimeH time)
{
	((QDateTime *)handle)->setTime(*(const QTime*)time);
}

C_EXPORT void QDateTime_setTimeSpec(QDateTimeH handle, Qt::TimeSpec spec)
{
	((QDateTime *)handle)->setTimeSpec(spec);
}

C_EXPORT void QDateTime_setTime_t(QDateTimeH handle, uint secsSince1Jan1970UTC)
{
	((QDateTime *)handle)->setTime_t(secsSince1Jan1970UTC);
}

C_EXPORT void QDateTime_toString(QDateTimeH handle, PWideString retval, Qt::DateFormat f)
{
	QString t_retval;
	t_retval = ((QDateTime *)handle)->toString(f);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDateTime_toString2(QDateTimeH handle, PWideString retval, PWideString format)
{
	QString t_retval;
	QString t_format;
	copyPWideStringToQString(format, t_format);
	t_retval = ((QDateTime *)handle)->toString(t_format);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QDateTime_addDays(QDateTimeH handle, QDateTimeH retval, int days)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->addDays(days);
}

C_EXPORT void QDateTime_addMonths(QDateTimeH handle, QDateTimeH retval, int months)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->addMonths(months);
}

C_EXPORT void QDateTime_addYears(QDateTimeH handle, QDateTimeH retval, int years)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->addYears(years);
}

C_EXPORT void QDateTime_addSecs(QDateTimeH handle, QDateTimeH retval, int secs)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->addSecs(secs);
}

C_EXPORT void QDateTime_addMSecs(QDateTimeH handle, QDateTimeH retval, qint64 msecs)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->addMSecs(msecs);
}

C_EXPORT void QDateTime_toTimeSpec(QDateTimeH handle, QDateTimeH retval, Qt::TimeSpec spec)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->toTimeSpec(spec);
}

C_EXPORT void QDateTime_toLocalTime(QDateTimeH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->toLocalTime();
}

C_EXPORT void QDateTime_toUTC(QDateTimeH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QDateTime *)handle)->toUTC();
}

C_EXPORT int QDateTime_daysTo(QDateTimeH handle, const QDateTimeH AnonParam1)
{
	return (int) ((QDateTime *)handle)->daysTo(*(const QDateTime*)AnonParam1);
}

C_EXPORT int QDateTime_secsTo(QDateTimeH handle, const QDateTimeH AnonParam1)
{
	return (int) ((QDateTime *)handle)->secsTo(*(const QDateTime*)AnonParam1);
}

C_EXPORT void QDateTime_setUtcOffset(QDateTimeH handle, int seconds)
{
	((QDateTime *)handle)->setUtcOffset(seconds);
}

C_EXPORT int QDateTime_utcOffset(QDateTimeH handle)
{
	return (int) ((QDateTime *)handle)->utcOffset();
}

C_EXPORT void QDateTime_currentDateTime(QDateTimeH retval)
{
	*(QDateTime *)retval = QDateTime::currentDateTime();
}

C_EXPORT void QDateTime_fromString(QDateTimeH retval, PWideString s, Qt::DateFormat f)
{
	QString t_s;
	copyPWideStringToQString(s, t_s);
	*(QDateTime *)retval = QDateTime::fromString(t_s, f);
}

C_EXPORT void QDateTime_fromString2(QDateTimeH retval, PWideString s, PWideString format)
{
	QString t_s;
	QString t_format;
	copyPWideStringToQString(s, t_s);
	copyPWideStringToQString(format, t_format);
	*(QDateTime *)retval = QDateTime::fromString(t_s, t_format);
}

C_EXPORT void QDateTime_fromTime_t(QDateTimeH retval, uint secsSince1Jan1970UTC)
{
	*(QDateTime *)retval = QDateTime::fromTime_t(secsSince1Jan1970UTC);
}

