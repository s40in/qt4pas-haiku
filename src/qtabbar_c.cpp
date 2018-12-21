//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTabBarH QTabBar_create(QWidgetH parent)
{
	return (QTabBarH) new QTabBar((QWidget*)parent);
}

C_EXPORT void QTabBar_destroy(QTabBarH handle)
{
	delete (QTabBar *)handle;
}

C_EXPORT QTabBar::Shape QTabBar_shape(QTabBarH handle)
{
	return (QTabBar::Shape) ((QTabBar *)handle)->shape();
}

C_EXPORT void QTabBar_setShape(QTabBarH handle, QTabBar::Shape shape)
{
	((QTabBar *)handle)->setShape(shape);
}

C_EXPORT int QTabBar_addTab(QTabBarH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QTabBar *)handle)->addTab(t_text);
}

C_EXPORT int QTabBar_addTab2(QTabBarH handle, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QTabBar *)handle)->addTab(*(const QIcon*)icon, t_text);
}

C_EXPORT int QTabBar_insertTab(QTabBarH handle, int index, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QTabBar *)handle)->insertTab(index, t_text);
}

C_EXPORT int QTabBar_insertTab2(QTabBarH handle, int index, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QTabBar *)handle)->insertTab(index, *(const QIcon*)icon, t_text);
}

C_EXPORT void QTabBar_removeTab(QTabBarH handle, int index)
{
	((QTabBar *)handle)->removeTab(index);
}

C_EXPORT void QTabBar_moveTab(QTabBarH handle, int from, int to)
{
	((QTabBar *)handle)->moveTab(from, to);
}

C_EXPORT bool QTabBar_isTabEnabled(QTabBarH handle, int index)
{
	return (bool) ((QTabBar *)handle)->isTabEnabled(index);
}

C_EXPORT void QTabBar_setTabEnabled(QTabBarH handle, int index, bool AnonParam2)
{
	((QTabBar *)handle)->setTabEnabled(index, AnonParam2);
}

C_EXPORT void QTabBar_tabText(QTabBarH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QTabBar *)handle)->tabText(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTabBar_setTabText(QTabBarH handle, int index, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTabBar *)handle)->setTabText(index, t_text);
}

C_EXPORT void QTabBar_tabTextColor(QTabBarH handle, PQColor retval, int index)
{
	*(QColor *)retval = ((QTabBar *)handle)->tabTextColor(index);
}

C_EXPORT void QTabBar_setTabTextColor(QTabBarH handle, int index, const QColorH color)
{
	((QTabBar *)handle)->setTabTextColor(index, *(const QColor*)color);
}

C_EXPORT void QTabBar_tabIcon(QTabBarH handle, QIconH retval, int index)
{
	*(QIcon *)retval = ((QTabBar *)handle)->tabIcon(index);
}

C_EXPORT void QTabBar_setTabIcon(QTabBarH handle, int index, const QIconH icon)
{
	((QTabBar *)handle)->setTabIcon(index, *(const QIcon*)icon);
}

C_EXPORT Qt::TextElideMode QTabBar_elideMode(QTabBarH handle)
{
	return (Qt::TextElideMode) ((QTabBar *)handle)->elideMode();
}

C_EXPORT void QTabBar_setElideMode(QTabBarH handle, Qt::TextElideMode AnonParam1)
{
	((QTabBar *)handle)->setElideMode(AnonParam1);
}

C_EXPORT void QTabBar_setTabToolTip(QTabBarH handle, int index, PWideString tip)
{
	QString t_tip;
	copyPWideStringToQString(tip, t_tip);
	((QTabBar *)handle)->setTabToolTip(index, t_tip);
}

C_EXPORT void QTabBar_tabToolTip(QTabBarH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QTabBar *)handle)->tabToolTip(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTabBar_setTabWhatsThis(QTabBarH handle, int index, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTabBar *)handle)->setTabWhatsThis(index, t_text);
}

C_EXPORT void QTabBar_tabWhatsThis(QTabBarH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QTabBar *)handle)->tabWhatsThis(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTabBar_setTabData(QTabBarH handle, int index, const QVariantH data)
{
	((QTabBar *)handle)->setTabData(index, *(const QVariant*)data);
}

C_EXPORT void QTabBar_tabData(QTabBarH handle, QVariantH retval, int index)
{
	*(QVariant *)retval = ((QTabBar *)handle)->tabData(index);
}

C_EXPORT void QTabBar_tabRect(QTabBarH handle, PRect retval, int index)
{
	QRect t_retval;
	t_retval = ((QTabBar *)handle)->tabRect(index);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT int QTabBar_tabAt(QTabBarH handle, const QPointH pos)
{
	return (int) ((QTabBar *)handle)->tabAt(*(const QPoint*)pos);
}

C_EXPORT int QTabBar_currentIndex(QTabBarH handle)
{
	return (int) ((QTabBar *)handle)->currentIndex();
}

C_EXPORT int QTabBar_count(QTabBarH handle)
{
	return (int) ((QTabBar *)handle)->count();
}

C_EXPORT void QTabBar_sizeHint(QTabBarH handle, PSize retval)
{
	*(QSize *)retval = ((QTabBar *)handle)->sizeHint();
}

C_EXPORT void QTabBar_minimumSizeHint(QTabBarH handle, PSize retval)
{
	*(QSize *)retval = ((QTabBar *)handle)->minimumSizeHint();
}

C_EXPORT void QTabBar_setDrawBase(QTabBarH handle, bool drawTheBase)
{
	((QTabBar *)handle)->setDrawBase(drawTheBase);
}

C_EXPORT bool QTabBar_drawBase(QTabBarH handle)
{
	return (bool) ((QTabBar *)handle)->drawBase();
}

C_EXPORT void QTabBar_iconSize(QTabBarH handle, PSize retval)
{
	*(QSize *)retval = ((QTabBar *)handle)->iconSize();
}

C_EXPORT void QTabBar_setIconSize(QTabBarH handle, const QSizeH size)
{
	((QTabBar *)handle)->setIconSize(*(const QSize*)size);
}

C_EXPORT bool QTabBar_usesScrollButtons(QTabBarH handle)
{
	return (bool) ((QTabBar *)handle)->usesScrollButtons();
}

C_EXPORT void QTabBar_setUsesScrollButtons(QTabBarH handle, bool useButtons)
{
	((QTabBar *)handle)->setUsesScrollButtons(useButtons);
}

C_EXPORT bool QTabBar_tabsClosable(QTabBarH handle)
{
	return (bool) ((QTabBar *)handle)->tabsClosable();
}

C_EXPORT void QTabBar_setTabsClosable(QTabBarH handle, bool closable)
{
	((QTabBar *)handle)->setTabsClosable(closable);
}

C_EXPORT void QTabBar_setTabButton(QTabBarH handle, int index, QTabBar::ButtonPosition position, QWidgetH widget)
{
	((QTabBar *)handle)->setTabButton(index, position, (QWidget*)widget);
}

C_EXPORT QWidgetH QTabBar_tabButton(QTabBarH handle, int index, QTabBar::ButtonPosition position)
{
	return (QWidgetH) ((QTabBar *)handle)->tabButton(index, position);
}

C_EXPORT QTabBar::SelectionBehavior QTabBar_selectionBehaviorOnRemove(QTabBarH handle)
{
	return (QTabBar::SelectionBehavior) ((QTabBar *)handle)->selectionBehaviorOnRemove();
}

C_EXPORT void QTabBar_setSelectionBehaviorOnRemove(QTabBarH handle, QTabBar::SelectionBehavior behavior)
{
	((QTabBar *)handle)->setSelectionBehaviorOnRemove(behavior);
}

C_EXPORT bool QTabBar_expanding(QTabBarH handle)
{
	return (bool) ((QTabBar *)handle)->expanding();
}

C_EXPORT void QTabBar_setExpanding(QTabBarH handle, bool enabled)
{
	((QTabBar *)handle)->setExpanding(enabled);
}

C_EXPORT bool QTabBar_isMovable(QTabBarH handle)
{
	return (bool) ((QTabBar *)handle)->isMovable();
}

C_EXPORT void QTabBar_setMovable(QTabBarH handle, bool movable)
{
	((QTabBar *)handle)->setMovable(movable);
}

C_EXPORT bool QTabBar_documentMode(QTabBarH handle)
{
	return (bool) ((QTabBar *)handle)->documentMode();
}

C_EXPORT void QTabBar_setDocumentMode(QTabBarH handle, bool set)
{
	((QTabBar *)handle)->setDocumentMode(set);
}

C_EXPORT void QTabBar_setCurrentIndex(QTabBarH handle, int index)
{
	((QTabBar *)handle)->setCurrentIndex(index);
}

