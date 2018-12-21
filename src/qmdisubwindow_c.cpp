//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMdiSubWindowH QMdiSubWindow_create(QWidgetH parent, unsigned int flags)
{
	return (QMdiSubWindowH) new QMdiSubWindow((QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QMdiSubWindow_destroy(QMdiSubWindowH handle)
{
	delete (QMdiSubWindow *)handle;
}

C_EXPORT void QMdiSubWindow_sizeHint(QMdiSubWindowH handle, PSize retval)
{
	*(QSize *)retval = ((QMdiSubWindow *)handle)->sizeHint();
}

C_EXPORT void QMdiSubWindow_minimumSizeHint(QMdiSubWindowH handle, PSize retval)
{
	*(QSize *)retval = ((QMdiSubWindow *)handle)->minimumSizeHint();
}

C_EXPORT void QMdiSubWindow_setWidget(QMdiSubWindowH handle, QWidgetH widget)
{
	((QMdiSubWindow *)handle)->setWidget((QWidget*)widget);
}

C_EXPORT QWidgetH QMdiSubWindow_widget(QMdiSubWindowH handle)
{
	return (QWidgetH) ((QMdiSubWindow *)handle)->widget();
}

C_EXPORT QWidgetH QMdiSubWindow_maximizedButtonsWidget(QMdiSubWindowH handle)
{
	return (QWidgetH) ((QMdiSubWindow *)handle)->maximizedButtonsWidget();
}

C_EXPORT QWidgetH QMdiSubWindow_maximizedSystemMenuIconWidget(QMdiSubWindowH handle)
{
	return (QWidgetH) ((QMdiSubWindow *)handle)->maximizedSystemMenuIconWidget();
}

C_EXPORT bool QMdiSubWindow_isShaded(QMdiSubWindowH handle)
{
	return (bool) ((QMdiSubWindow *)handle)->isShaded();
}

C_EXPORT void QMdiSubWindow_setOption(QMdiSubWindowH handle, QMdiSubWindow::SubWindowOption option, bool on)
{
	((QMdiSubWindow *)handle)->setOption(option, on);
}

C_EXPORT bool QMdiSubWindow_testOption(QMdiSubWindowH handle, QMdiSubWindow::SubWindowOption AnonParam1)
{
	return (bool) ((QMdiSubWindow *)handle)->testOption(AnonParam1);
}

C_EXPORT void QMdiSubWindow_setKeyboardSingleStep(QMdiSubWindowH handle, int step)
{
	((QMdiSubWindow *)handle)->setKeyboardSingleStep(step);
}

C_EXPORT int QMdiSubWindow_keyboardSingleStep(QMdiSubWindowH handle)
{
	return (int) ((QMdiSubWindow *)handle)->keyboardSingleStep();
}

C_EXPORT void QMdiSubWindow_setKeyboardPageStep(QMdiSubWindowH handle, int step)
{
	((QMdiSubWindow *)handle)->setKeyboardPageStep(step);
}

C_EXPORT int QMdiSubWindow_keyboardPageStep(QMdiSubWindowH handle)
{
	return (int) ((QMdiSubWindow *)handle)->keyboardPageStep();
}

C_EXPORT void QMdiSubWindow_setSystemMenu(QMdiSubWindowH handle, QMenuH systemMenu)
{
	((QMdiSubWindow *)handle)->setSystemMenu((QMenu*)systemMenu);
}

C_EXPORT QMenuH QMdiSubWindow_systemMenu(QMdiSubWindowH handle)
{
	return (QMenuH) ((QMdiSubWindow *)handle)->systemMenu();
}

C_EXPORT QMdiAreaH QMdiSubWindow_mdiArea(QMdiSubWindowH handle)
{
	return (QMdiAreaH) ((QMdiSubWindow *)handle)->mdiArea();
}

C_EXPORT void QMdiSubWindow_showSystemMenu(QMdiSubWindowH handle)
{
	((QMdiSubWindow *)handle)->showSystemMenu();
}

C_EXPORT void QMdiSubWindow_showShaded(QMdiSubWindowH handle)
{
	((QMdiSubWindow *)handle)->showShaded();
}

