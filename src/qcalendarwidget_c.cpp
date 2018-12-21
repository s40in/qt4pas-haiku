//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QCalendarWidgetH QCalendarWidget_create(QWidgetH parent)
{
	return (QCalendarWidgetH) new QCalendarWidget((QWidget*)parent);
}

C_EXPORT void QCalendarWidget_destroy(QCalendarWidgetH handle)
{
	delete (QCalendarWidget *)handle;
}

C_EXPORT void QCalendarWidget_sizeHint(QCalendarWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QCalendarWidget *)handle)->sizeHint();
}

C_EXPORT void QCalendarWidget_minimumSizeHint(QCalendarWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QCalendarWidget *)handle)->minimumSizeHint();
}

C_EXPORT void QCalendarWidget_selectedDate(QCalendarWidgetH handle, QDateH retval)
{
	*(QDate *)retval = ((QCalendarWidget *)handle)->selectedDate();
}

C_EXPORT int QCalendarWidget_yearShown(QCalendarWidgetH handle)
{
	return (int) ((QCalendarWidget *)handle)->yearShown();
}

C_EXPORT int QCalendarWidget_monthShown(QCalendarWidgetH handle)
{
	return (int) ((QCalendarWidget *)handle)->monthShown();
}

C_EXPORT void QCalendarWidget_minimumDate(QCalendarWidgetH handle, QDateH retval)
{
	*(QDate *)retval = ((QCalendarWidget *)handle)->minimumDate();
}

C_EXPORT void QCalendarWidget_setMinimumDate(QCalendarWidgetH handle, const QDateH date)
{
	((QCalendarWidget *)handle)->setMinimumDate(*(const QDate*)date);
}

C_EXPORT void QCalendarWidget_maximumDate(QCalendarWidgetH handle, QDateH retval)
{
	*(QDate *)retval = ((QCalendarWidget *)handle)->maximumDate();
}

C_EXPORT void QCalendarWidget_setMaximumDate(QCalendarWidgetH handle, const QDateH date)
{
	((QCalendarWidget *)handle)->setMaximumDate(*(const QDate*)date);
}

C_EXPORT Qt::DayOfWeek QCalendarWidget_firstDayOfWeek(QCalendarWidgetH handle)
{
	return (Qt::DayOfWeek) ((QCalendarWidget *)handle)->firstDayOfWeek();
}

C_EXPORT void QCalendarWidget_setFirstDayOfWeek(QCalendarWidgetH handle, Qt::DayOfWeek dayOfWeek)
{
	((QCalendarWidget *)handle)->setFirstDayOfWeek(dayOfWeek);
}

C_EXPORT bool QCalendarWidget_isHeaderVisible(QCalendarWidgetH handle)
{
	return (bool) ((QCalendarWidget *)handle)->isHeaderVisible();
}

C_EXPORT void QCalendarWidget_setHeaderVisible(QCalendarWidgetH handle, bool show)
{
	((QCalendarWidget *)handle)->setHeaderVisible(show);
}

C_EXPORT bool QCalendarWidget_isNavigationBarVisible(QCalendarWidgetH handle)
{
	return (bool) ((QCalendarWidget *)handle)->isNavigationBarVisible();
}

C_EXPORT bool QCalendarWidget_isGridVisible(QCalendarWidgetH handle)
{
	return (bool) ((QCalendarWidget *)handle)->isGridVisible();
}

C_EXPORT QCalendarWidget::SelectionMode QCalendarWidget_selectionMode(QCalendarWidgetH handle)
{
	return (QCalendarWidget::SelectionMode) ((QCalendarWidget *)handle)->selectionMode();
}

C_EXPORT void QCalendarWidget_setSelectionMode(QCalendarWidgetH handle, QCalendarWidget::SelectionMode mode)
{
	((QCalendarWidget *)handle)->setSelectionMode(mode);
}

C_EXPORT QCalendarWidget::HorizontalHeaderFormat QCalendarWidget_horizontalHeaderFormat(QCalendarWidgetH handle)
{
	return (QCalendarWidget::HorizontalHeaderFormat) ((QCalendarWidget *)handle)->horizontalHeaderFormat();
}

C_EXPORT void QCalendarWidget_setHorizontalHeaderFormat(QCalendarWidgetH handle, QCalendarWidget::HorizontalHeaderFormat format)
{
	((QCalendarWidget *)handle)->setHorizontalHeaderFormat(format);
}

C_EXPORT QCalendarWidget::VerticalHeaderFormat QCalendarWidget_verticalHeaderFormat(QCalendarWidgetH handle)
{
	return (QCalendarWidget::VerticalHeaderFormat) ((QCalendarWidget *)handle)->verticalHeaderFormat();
}

C_EXPORT void QCalendarWidget_setVerticalHeaderFormat(QCalendarWidgetH handle, QCalendarWidget::VerticalHeaderFormat format)
{
	((QCalendarWidget *)handle)->setVerticalHeaderFormat(format);
}

C_EXPORT void QCalendarWidget_headerTextFormat(QCalendarWidgetH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QCalendarWidget *)handle)->headerTextFormat();
}

C_EXPORT void QCalendarWidget_setHeaderTextFormat(QCalendarWidgetH handle, const QTextCharFormatH format)
{
	((QCalendarWidget *)handle)->setHeaderTextFormat(*(const QTextCharFormat*)format);
}

C_EXPORT void QCalendarWidget_weekdayTextFormat(QCalendarWidgetH handle, QTextCharFormatH retval, Qt::DayOfWeek dayOfWeek)
{
	*(QTextCharFormat *)retval = ((QCalendarWidget *)handle)->weekdayTextFormat(dayOfWeek);
}

C_EXPORT void QCalendarWidget_setWeekdayTextFormat(QCalendarWidgetH handle, Qt::DayOfWeek dayOfWeek, const QTextCharFormatH format)
{
	((QCalendarWidget *)handle)->setWeekdayTextFormat(dayOfWeek, *(const QTextCharFormat*)format);
}

C_EXPORT void QCalendarWidget_dateTextFormat2(QCalendarWidgetH handle, QTextCharFormatH retval, const QDateH date)
{
	*(QTextCharFormat *)retval = ((QCalendarWidget *)handle)->dateTextFormat(*(const QDate*)date);
}

C_EXPORT void QCalendarWidget_setDateTextFormat(QCalendarWidgetH handle, const QDateH date, const QTextCharFormatH format)
{
	((QCalendarWidget *)handle)->setDateTextFormat(*(const QDate*)date, *(const QTextCharFormat*)format);
}

C_EXPORT bool QCalendarWidget_isDateEditEnabled(QCalendarWidgetH handle)
{
	return (bool) ((QCalendarWidget *)handle)->isDateEditEnabled();
}

C_EXPORT void QCalendarWidget_setDateEditEnabled(QCalendarWidgetH handle, bool enable)
{
	((QCalendarWidget *)handle)->setDateEditEnabled(enable);
}

C_EXPORT int QCalendarWidget_dateEditAcceptDelay(QCalendarWidgetH handle)
{
	return (int) ((QCalendarWidget *)handle)->dateEditAcceptDelay();
}

C_EXPORT void QCalendarWidget_setDateEditAcceptDelay(QCalendarWidgetH handle, int delay)
{
	((QCalendarWidget *)handle)->setDateEditAcceptDelay(delay);
}

C_EXPORT void QCalendarWidget_setSelectedDate(QCalendarWidgetH handle, const QDateH date)
{
	((QCalendarWidget *)handle)->setSelectedDate(*(const QDate*)date);
}

C_EXPORT void QCalendarWidget_setDateRange(QCalendarWidgetH handle, const QDateH min, const QDateH max)
{
	((QCalendarWidget *)handle)->setDateRange(*(const QDate*)min, *(const QDate*)max);
}

C_EXPORT void QCalendarWidget_setCurrentPage(QCalendarWidgetH handle, int year, int month)
{
	((QCalendarWidget *)handle)->setCurrentPage(year, month);
}

C_EXPORT void QCalendarWidget_setGridVisible(QCalendarWidgetH handle, bool show)
{
	((QCalendarWidget *)handle)->setGridVisible(show);
}

C_EXPORT void QCalendarWidget_setNavigationBarVisible(QCalendarWidgetH handle, bool visible)
{
	((QCalendarWidget *)handle)->setNavigationBarVisible(visible);
}

C_EXPORT void QCalendarWidget_showNextMonth(QCalendarWidgetH handle)
{
	((QCalendarWidget *)handle)->showNextMonth();
}

C_EXPORT void QCalendarWidget_showPreviousMonth(QCalendarWidgetH handle)
{
	((QCalendarWidget *)handle)->showPreviousMonth();
}

C_EXPORT void QCalendarWidget_showNextYear(QCalendarWidgetH handle)
{
	((QCalendarWidget *)handle)->showNextYear();
}

C_EXPORT void QCalendarWidget_showPreviousYear(QCalendarWidgetH handle)
{
	((QCalendarWidget *)handle)->showPreviousYear();
}

C_EXPORT void QCalendarWidget_showSelectedDate(QCalendarWidgetH handle)
{
	((QCalendarWidget *)handle)->showSelectedDate();
}

C_EXPORT void QCalendarWidget_showToday(QCalendarWidgetH handle)
{
	((QCalendarWidget *)handle)->showToday();
}

