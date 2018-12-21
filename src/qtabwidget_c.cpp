//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTabWidgetH QTabWidget_create(QWidgetH parent)
{
	return (QTabWidgetH) new QTabWidget((QWidget*)parent);
}

C_EXPORT void QTabWidget_destroy(QTabWidgetH handle)
{
	delete (QTabWidget *)handle;
}

C_EXPORT int QTabWidget_addTab(QTabWidgetH handle, QWidgetH widget, PWideString AnonParam2)
{
	QString t_AnonParam2;
	copyPWideStringToQString(AnonParam2, t_AnonParam2);
	return (int) ((QTabWidget *)handle)->addTab((QWidget*)widget, t_AnonParam2);
}

C_EXPORT int QTabWidget_addTab2(QTabWidgetH handle, QWidgetH widget, const QIconH icon, PWideString label)
{
	QString t_label;
	copyPWideStringToQString(label, t_label);
	return (int) ((QTabWidget *)handle)->addTab((QWidget*)widget, *(const QIcon*)icon, t_label);
}

C_EXPORT int QTabWidget_insertTab(QTabWidgetH handle, int index, QWidgetH widget, PWideString AnonParam3)
{
	QString t_AnonParam3;
	copyPWideStringToQString(AnonParam3, t_AnonParam3);
	return (int) ((QTabWidget *)handle)->insertTab(index, (QWidget*)widget, t_AnonParam3);
}

C_EXPORT int QTabWidget_insertTab2(QTabWidgetH handle, int index, QWidgetH widget, const QIconH icon, PWideString label)
{
	QString t_label;
	copyPWideStringToQString(label, t_label);
	return (int) ((QTabWidget *)handle)->insertTab(index, (QWidget*)widget, *(const QIcon*)icon, t_label);
}

C_EXPORT void QTabWidget_removeTab(QTabWidgetH handle, int index)
{
	((QTabWidget *)handle)->removeTab(index);
}

C_EXPORT bool QTabWidget_isTabEnabled(QTabWidgetH handle, int index)
{
	return (bool) ((QTabWidget *)handle)->isTabEnabled(index);
}

C_EXPORT void QTabWidget_setTabEnabled(QTabWidgetH handle, int index, bool AnonParam2)
{
	((QTabWidget *)handle)->setTabEnabled(index, AnonParam2);
}

C_EXPORT void QTabWidget_tabText(QTabWidgetH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QTabWidget *)handle)->tabText(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTabWidget_setTabText(QTabWidgetH handle, int index, PWideString AnonParam2)
{
	QString t_AnonParam2;
	copyPWideStringToQString(AnonParam2, t_AnonParam2);
	((QTabWidget *)handle)->setTabText(index, t_AnonParam2);
}

C_EXPORT void QTabWidget_tabIcon(QTabWidgetH handle, QIconH retval, int index)
{
	*(QIcon *)retval = ((QTabWidget *)handle)->tabIcon(index);
}

C_EXPORT void QTabWidget_setTabIcon(QTabWidgetH handle, int index, const QIconH icon)
{
	((QTabWidget *)handle)->setTabIcon(index, *(const QIcon*)icon);
}

C_EXPORT void QTabWidget_setTabToolTip(QTabWidgetH handle, int index, PWideString tip)
{
	QString t_tip;
	copyPWideStringToQString(tip, t_tip);
	((QTabWidget *)handle)->setTabToolTip(index, t_tip);
}

C_EXPORT void QTabWidget_tabToolTip(QTabWidgetH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QTabWidget *)handle)->tabToolTip(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTabWidget_setTabWhatsThis(QTabWidgetH handle, int index, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTabWidget *)handle)->setTabWhatsThis(index, t_text);
}

C_EXPORT void QTabWidget_tabWhatsThis(QTabWidgetH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QTabWidget *)handle)->tabWhatsThis(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QTabWidget_currentIndex(QTabWidgetH handle)
{
	return (int) ((QTabWidget *)handle)->currentIndex();
}

C_EXPORT QWidgetH QTabWidget_currentWidget(QTabWidgetH handle)
{
	return (QWidgetH) ((QTabWidget *)handle)->currentWidget();
}

C_EXPORT QWidgetH QTabWidget_widget(QTabWidgetH handle, int index)
{
	return (QWidgetH) ((QTabWidget *)handle)->widget(index);
}

C_EXPORT int QTabWidget_indexOf(QTabWidgetH handle, QWidgetH widget)
{
	return (int) ((QTabWidget *)handle)->indexOf((QWidget*)widget);
}

C_EXPORT int QTabWidget_count(QTabWidgetH handle)
{
	return (int) ((QTabWidget *)handle)->count();
}

C_EXPORT QTabWidget::TabPosition QTabWidget_tabPosition(QTabWidgetH handle)
{
	return (QTabWidget::TabPosition) ((QTabWidget *)handle)->tabPosition();
}

C_EXPORT void QTabWidget_setTabPosition(QTabWidgetH handle, QTabWidget::TabPosition AnonParam1)
{
	((QTabWidget *)handle)->setTabPosition(AnonParam1);
}

C_EXPORT bool QTabWidget_tabsClosable(QTabWidgetH handle)
{
	return (bool) ((QTabWidget *)handle)->tabsClosable();
}

C_EXPORT void QTabWidget_setTabsClosable(QTabWidgetH handle, bool closeable)
{
	((QTabWidget *)handle)->setTabsClosable(closeable);
}

C_EXPORT bool QTabWidget_isMovable(QTabWidgetH handle)
{
	return (bool) ((QTabWidget *)handle)->isMovable();
}

C_EXPORT void QTabWidget_setMovable(QTabWidgetH handle, bool movable)
{
	((QTabWidget *)handle)->setMovable(movable);
}

C_EXPORT QTabWidget::TabShape QTabWidget_tabShape(QTabWidgetH handle)
{
	return (QTabWidget::TabShape) ((QTabWidget *)handle)->tabShape();
}

C_EXPORT void QTabWidget_setTabShape(QTabWidgetH handle, QTabWidget::TabShape s)
{
	((QTabWidget *)handle)->setTabShape(s);
}

C_EXPORT void QTabWidget_sizeHint(QTabWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QTabWidget *)handle)->sizeHint();
}

C_EXPORT void QTabWidget_minimumSizeHint(QTabWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QTabWidget *)handle)->minimumSizeHint();
}

C_EXPORT void QTabWidget_setCornerWidget(QTabWidgetH handle, QWidgetH w, Qt::Corner corner)
{
	((QTabWidget *)handle)->setCornerWidget((QWidget*)w, corner);
}

C_EXPORT QWidgetH QTabWidget_cornerWidget(QTabWidgetH handle, Qt::Corner corner)
{
	return (QWidgetH) ((QTabWidget *)handle)->cornerWidget(corner);
}

C_EXPORT Qt::TextElideMode QTabWidget_elideMode(QTabWidgetH handle)
{
	return (Qt::TextElideMode) ((QTabWidget *)handle)->elideMode();
}

C_EXPORT void QTabWidget_setElideMode(QTabWidgetH handle, Qt::TextElideMode AnonParam1)
{
	((QTabWidget *)handle)->setElideMode(AnonParam1);
}

C_EXPORT void QTabWidget_iconSize(QTabWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QTabWidget *)handle)->iconSize();
}

C_EXPORT void QTabWidget_setIconSize(QTabWidgetH handle, const QSizeH size)
{
	((QTabWidget *)handle)->setIconSize(*(const QSize*)size);
}

C_EXPORT bool QTabWidget_usesScrollButtons(QTabWidgetH handle)
{
	return (bool) ((QTabWidget *)handle)->usesScrollButtons();
}

C_EXPORT void QTabWidget_setUsesScrollButtons(QTabWidgetH handle, bool useButtons)
{
	((QTabWidget *)handle)->setUsesScrollButtons(useButtons);
}

C_EXPORT bool QTabWidget_documentMode(QTabWidgetH handle)
{
	return (bool) ((QTabWidget *)handle)->documentMode();
}

C_EXPORT void QTabWidget_setDocumentMode(QTabWidgetH handle, bool set)
{
	((QTabWidget *)handle)->setDocumentMode(set);
}

C_EXPORT void QTabWidget_clear(QTabWidgetH handle)
{
	((QTabWidget *)handle)->clear();
}

C_EXPORT void QTabWidget_setCurrentIndex(QTabWidgetH handle, int index)
{
	((QTabWidget *)handle)->setCurrentIndex(index);
}

C_EXPORT void QTabWidget_setCurrentWidget(QTabWidgetH handle, QWidgetH widget)
{
	((QTabWidget *)handle)->setCurrentWidget((QWidget*)widget);
}

