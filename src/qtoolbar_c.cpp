//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QToolBarH QToolBar_create(PWideString title, QWidgetH parent)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QToolBarH) new QToolBar(t_title, (QWidget*)parent);
}

C_EXPORT void QToolBar_destroy(QToolBarH handle)
{
	delete (QToolBar *)handle;
}

C_EXPORT QToolBarH QToolBar_create2(QWidgetH parent)
{
	return (QToolBarH) new QToolBar((QWidget*)parent);
}

C_EXPORT void QToolBar_setMovable(QToolBarH handle, bool movable)
{
	((QToolBar *)handle)->setMovable(movable);
}

C_EXPORT bool QToolBar_isMovable(QToolBarH handle)
{
	return (bool) ((QToolBar *)handle)->isMovable();
}

C_EXPORT void QToolBar_setAllowedAreas(QToolBarH handle, unsigned int areas)
{
	((QToolBar *)handle)->setAllowedAreas((Qt::ToolBarAreas)areas);
}

C_EXPORT unsigned int QToolBar_allowedAreas(QToolBarH handle)
{
	return (unsigned int) ((QToolBar *)handle)->allowedAreas();
}

C_EXPORT bool QToolBar_isAreaAllowed(QToolBarH handle, Qt::ToolBarArea area)
{
	return (bool) ((QToolBar *)handle)->isAreaAllowed(area);
}

C_EXPORT void QToolBar_setOrientation(QToolBarH handle, Qt::Orientation orientation)
{
	((QToolBar *)handle)->setOrientation(orientation);
}

C_EXPORT Qt::Orientation QToolBar_orientation(QToolBarH handle)
{
	return (Qt::Orientation) ((QToolBar *)handle)->orientation();
}

C_EXPORT void QToolBar_clear(QToolBarH handle)
{
	((QToolBar *)handle)->clear();
}

C_EXPORT QActionH QToolBar_addAction(QToolBarH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QToolBar *)handle)->addAction(t_text);
}

C_EXPORT QActionH QToolBar_addAction2(QToolBarH handle, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QToolBar *)handle)->addAction(*(const QIcon*)icon, t_text);
}

C_EXPORT QActionH QToolBar_addAction3(QToolBarH handle, PWideString text, const QObjectH receiver, const char* member)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QToolBar *)handle)->addAction(t_text, (const QObject*)receiver, member);
}

C_EXPORT QActionH QToolBar_addAction4(QToolBarH handle, const QIconH icon, PWideString text, const QObjectH receiver, const char* member)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QToolBar *)handle)->addAction(*(const QIcon*)icon, t_text, (const QObject*)receiver, member);
}

C_EXPORT QActionH QToolBar_addSeparator(QToolBarH handle)
{
	return (QActionH) ((QToolBar *)handle)->addSeparator();
}

C_EXPORT QActionH QToolBar_insertSeparator(QToolBarH handle, QActionH before)
{
	return (QActionH) ((QToolBar *)handle)->insertSeparator((QAction*)before);
}

C_EXPORT QActionH QToolBar_addWidget(QToolBarH handle, QWidgetH widget)
{
	return (QActionH) ((QToolBar *)handle)->addWidget((QWidget*)widget);
}

C_EXPORT QActionH QToolBar_insertWidget(QToolBarH handle, QActionH before, QWidgetH widget)
{
	return (QActionH) ((QToolBar *)handle)->insertWidget((QAction*)before, (QWidget*)widget);
}

C_EXPORT void QToolBar_actionGeometry(QToolBarH handle, PRect retval, QActionH action)
{
	QRect t_retval;
	t_retval = ((QToolBar *)handle)->actionGeometry((QAction*)action);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT QActionH QToolBar_actionAt(QToolBarH handle, const QPointH p)
{
	return (QActionH) ((QToolBar *)handle)->actionAt(*(const QPoint*)p);
}

C_EXPORT QActionH QToolBar_actionAt2(QToolBarH handle, int x, int y)
{
	return (QActionH) ((QToolBar *)handle)->actionAt(x, y);
}

C_EXPORT QActionH QToolBar_toggleViewAction(QToolBarH handle)
{
	return (QActionH) ((QToolBar *)handle)->toggleViewAction();
}

C_EXPORT void QToolBar_iconSize(QToolBarH handle, PSize retval)
{
	*(QSize *)retval = ((QToolBar *)handle)->iconSize();
}

C_EXPORT Qt::ToolButtonStyle QToolBar_toolButtonStyle(QToolBarH handle)
{
	return (Qt::ToolButtonStyle) ((QToolBar *)handle)->toolButtonStyle();
}

C_EXPORT QWidgetH QToolBar_widgetForAction(QToolBarH handle, QActionH action)
{
	return (QWidgetH) ((QToolBar *)handle)->widgetForAction((QAction*)action);
}

C_EXPORT bool QToolBar_isFloatable(QToolBarH handle)
{
	return (bool) ((QToolBar *)handle)->isFloatable();
}

C_EXPORT void QToolBar_setFloatable(QToolBarH handle, bool floatable)
{
	((QToolBar *)handle)->setFloatable(floatable);
}

C_EXPORT bool QToolBar_isFloating(QToolBarH handle)
{
	return (bool) ((QToolBar *)handle)->isFloating();
}

C_EXPORT void QToolBar_setIconSize(QToolBarH handle, const QSizeH iconSize)
{
	((QToolBar *)handle)->setIconSize(*(const QSize*)iconSize);
}

C_EXPORT void QToolBar_setToolButtonStyle(QToolBarH handle, Qt::ToolButtonStyle toolButtonStyle)
{
	((QToolBar *)handle)->setToolButtonStyle(toolButtonStyle);
}

