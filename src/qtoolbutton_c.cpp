//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QToolButtonH QToolButton_create(QWidgetH parent)
{
	return (QToolButtonH) new QToolButton((QWidget*)parent);
}

C_EXPORT void QToolButton_destroy(QToolButtonH handle)
{
	delete (QToolButton *)handle;
}

C_EXPORT void QToolButton_sizeHint(QToolButtonH handle, PSize retval)
{
	*(QSize *)retval = ((QToolButton *)handle)->sizeHint();
}

C_EXPORT void QToolButton_minimumSizeHint(QToolButtonH handle, PSize retval)
{
	*(QSize *)retval = ((QToolButton *)handle)->minimumSizeHint();
}

C_EXPORT Qt::ToolButtonStyle QToolButton_toolButtonStyle(QToolButtonH handle)
{
	return (Qt::ToolButtonStyle) ((QToolButton *)handle)->toolButtonStyle();
}

C_EXPORT Qt::ArrowType QToolButton_arrowType(QToolButtonH handle)
{
	return (Qt::ArrowType) ((QToolButton *)handle)->arrowType();
}

C_EXPORT void QToolButton_setArrowType(QToolButtonH handle, Qt::ArrowType type)
{
	((QToolButton *)handle)->setArrowType(type);
}

C_EXPORT void QToolButton_setMenu(QToolButtonH handle, QMenuH menu)
{
	((QToolButton *)handle)->setMenu((QMenu*)menu);
}

C_EXPORT QMenuH QToolButton_menu(QToolButtonH handle)
{
	return (QMenuH) ((QToolButton *)handle)->menu();
}

C_EXPORT void QToolButton_setPopupMode(QToolButtonH handle, QToolButton::ToolButtonPopupMode mode)
{
	((QToolButton *)handle)->setPopupMode(mode);
}

C_EXPORT QToolButton::ToolButtonPopupMode QToolButton_popupMode(QToolButtonH handle)
{
	return (QToolButton::ToolButtonPopupMode) ((QToolButton *)handle)->popupMode();
}

C_EXPORT QActionH QToolButton_defaultAction(QToolButtonH handle)
{
	return (QActionH) ((QToolButton *)handle)->defaultAction();
}

C_EXPORT void QToolButton_setAutoRaise(QToolButtonH handle, bool enable)
{
	((QToolButton *)handle)->setAutoRaise(enable);
}

C_EXPORT bool QToolButton_autoRaise(QToolButtonH handle)
{
	return (bool) ((QToolButton *)handle)->autoRaise();
}

C_EXPORT void QToolButton_showMenu(QToolButtonH handle)
{
	((QToolButton *)handle)->showMenu();
}

C_EXPORT void QToolButton_setToolButtonStyle(QToolButtonH handle, Qt::ToolButtonStyle style)
{
	((QToolButton *)handle)->setToolButtonStyle(style);
}

C_EXPORT void QToolButton_setDefaultAction(QToolButtonH handle, QActionH AnonParam1)
{
	((QToolButton *)handle)->setDefaultAction((QAction*)AnonParam1);
}

