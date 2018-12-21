//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QStackedWidgetH QStackedWidget_create(QWidgetH parent)
{
	return (QStackedWidgetH) new QStackedWidget((QWidget*)parent);
}

C_EXPORT void QStackedWidget_destroy(QStackedWidgetH handle)
{
	delete (QStackedWidget *)handle;
}

C_EXPORT int QStackedWidget_addWidget(QStackedWidgetH handle, QWidgetH w)
{
	return (int) ((QStackedWidget *)handle)->addWidget((QWidget*)w);
}

C_EXPORT int QStackedWidget_insertWidget(QStackedWidgetH handle, int index, QWidgetH w)
{
	return (int) ((QStackedWidget *)handle)->insertWidget(index, (QWidget*)w);
}

C_EXPORT void QStackedWidget_removeWidget(QStackedWidgetH handle, QWidgetH w)
{
	((QStackedWidget *)handle)->removeWidget((QWidget*)w);
}

C_EXPORT QWidgetH QStackedWidget_currentWidget(QStackedWidgetH handle)
{
	return (QWidgetH) ((QStackedWidget *)handle)->currentWidget();
}

C_EXPORT int QStackedWidget_currentIndex(QStackedWidgetH handle)
{
	return (int) ((QStackedWidget *)handle)->currentIndex();
}

C_EXPORT int QStackedWidget_indexOf(QStackedWidgetH handle, QWidgetH AnonParam1)
{
	return (int) ((QStackedWidget *)handle)->indexOf((QWidget*)AnonParam1);
}

C_EXPORT QWidgetH QStackedWidget_widget(QStackedWidgetH handle, int AnonParam1)
{
	return (QWidgetH) ((QStackedWidget *)handle)->widget(AnonParam1);
}

C_EXPORT int QStackedWidget_count(QStackedWidgetH handle)
{
	return (int) ((QStackedWidget *)handle)->count();
}

C_EXPORT void QStackedWidget_setCurrentIndex(QStackedWidgetH handle, int index)
{
	((QStackedWidget *)handle)->setCurrentIndex(index);
}

C_EXPORT void QStackedWidget_setCurrentWidget(QStackedWidgetH handle, QWidgetH w)
{
	((QStackedWidget *)handle)->setCurrentWidget((QWidget*)w);
}

