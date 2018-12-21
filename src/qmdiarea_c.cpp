//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMdiAreaH QMdiArea_create(QWidgetH parent)
{
	return (QMdiAreaH) new QMdiArea((QWidget*)parent);
}

C_EXPORT void QMdiArea_destroy(QMdiAreaH handle)
{
	delete (QMdiArea *)handle;
}

C_EXPORT void QMdiArea_sizeHint(QMdiAreaH handle, PSize retval)
{
	*(QSize *)retval = ((QMdiArea *)handle)->sizeHint();
}

C_EXPORT void QMdiArea_minimumSizeHint(QMdiAreaH handle, PSize retval)
{
	*(QSize *)retval = ((QMdiArea *)handle)->minimumSizeHint();
}

C_EXPORT QMdiSubWindowH QMdiArea_currentSubWindow(QMdiAreaH handle)
{
	return (QMdiSubWindowH) ((QMdiArea *)handle)->currentSubWindow();
}

C_EXPORT QMdiSubWindowH QMdiArea_activeSubWindow(QMdiAreaH handle)
{
	return (QMdiSubWindowH) ((QMdiArea *)handle)->activeSubWindow();
}

C_EXPORT void QMdiArea_subWindowList(QMdiAreaH handle, PPtrIntArray retval, QMdiArea::WindowOrder order)
{
	QList<QMdiSubWindow*> t_retval;
	t_retval = ((QMdiArea *)handle)->subWindowList(order);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QMdiSubWindowH QMdiArea_addSubWindow(QMdiAreaH handle, QWidgetH widget, unsigned int flags)
{
	return (QMdiSubWindowH) ((QMdiArea *)handle)->addSubWindow((QWidget*)widget, (Qt::WindowFlags)flags);
}

C_EXPORT void QMdiArea_removeSubWindow(QMdiAreaH handle, QWidgetH widget)
{
	((QMdiArea *)handle)->removeSubWindow((QWidget*)widget);
}

C_EXPORT void QMdiArea_background(QMdiAreaH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QMdiArea *)handle)->background();
}

C_EXPORT void QMdiArea_setBackground(QMdiAreaH handle, const QBrushH background)
{
	((QMdiArea *)handle)->setBackground(*(const QBrush*)background);
}

C_EXPORT QMdiArea::WindowOrder QMdiArea_activationOrder(QMdiAreaH handle)
{
	return (QMdiArea::WindowOrder) ((QMdiArea *)handle)->activationOrder();
}

C_EXPORT void QMdiArea_setActivationOrder(QMdiAreaH handle, QMdiArea::WindowOrder order)
{
	((QMdiArea *)handle)->setActivationOrder(order);
}

C_EXPORT void QMdiArea_setOption(QMdiAreaH handle, QMdiArea::AreaOption option, bool on)
{
	((QMdiArea *)handle)->setOption(option, on);
}

C_EXPORT bool QMdiArea_testOption(QMdiAreaH handle, QMdiArea::AreaOption opton)
{
	return (bool) ((QMdiArea *)handle)->testOption(opton);
}

C_EXPORT void QMdiArea_setViewMode(QMdiAreaH handle, QMdiArea::ViewMode mode)
{
	((QMdiArea *)handle)->setViewMode(mode);
}

C_EXPORT QMdiArea::ViewMode QMdiArea_viewMode(QMdiAreaH handle)
{
	return (QMdiArea::ViewMode) ((QMdiArea *)handle)->viewMode();
}

C_EXPORT bool QMdiArea_documentMode(QMdiAreaH handle)
{
	return (bool) ((QMdiArea *)handle)->documentMode();
}

C_EXPORT void QMdiArea_setDocumentMode(QMdiAreaH handle, bool enabled)
{
	((QMdiArea *)handle)->setDocumentMode(enabled);
}

C_EXPORT void QMdiArea_setTabShape(QMdiAreaH handle, QTabWidget::TabShape shape)
{
	((QMdiArea *)handle)->setTabShape(shape);
}

C_EXPORT QTabWidget::TabShape QMdiArea_tabShape(QMdiAreaH handle)
{
	return (QTabWidget::TabShape) ((QMdiArea *)handle)->tabShape();
}

C_EXPORT void QMdiArea_setTabPosition(QMdiAreaH handle, QTabWidget::TabPosition position)
{
	((QMdiArea *)handle)->setTabPosition(position);
}

C_EXPORT QTabWidget::TabPosition QMdiArea_tabPosition(QMdiAreaH handle)
{
	return (QTabWidget::TabPosition) ((QMdiArea *)handle)->tabPosition();
}

C_EXPORT void QMdiArea_setActiveSubWindow(QMdiAreaH handle, QMdiSubWindowH window)
{
	((QMdiArea *)handle)->setActiveSubWindow((QMdiSubWindow*)window);
}

C_EXPORT void QMdiArea_tileSubWindows(QMdiAreaH handle)
{
	((QMdiArea *)handle)->tileSubWindows();
}

C_EXPORT void QMdiArea_cascadeSubWindows(QMdiAreaH handle)
{
	((QMdiArea *)handle)->cascadeSubWindows();
}

C_EXPORT void QMdiArea_closeActiveSubWindow(QMdiAreaH handle)
{
	((QMdiArea *)handle)->closeActiveSubWindow();
}

C_EXPORT void QMdiArea_closeAllSubWindows(QMdiAreaH handle)
{
	((QMdiArea *)handle)->closeAllSubWindows();
}

C_EXPORT void QMdiArea_activateNextSubWindow(QMdiAreaH handle)
{
	((QMdiArea *)handle)->activateNextSubWindow();
}

C_EXPORT void QMdiArea_activatePreviousSubWindow(QMdiAreaH handle)
{
	((QMdiArea *)handle)->activatePreviousSubWindow();
}

