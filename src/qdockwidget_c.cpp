//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QDockWidgetH QDockWidget_create(PWideString title, QWidgetH parent, unsigned int flags)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QDockWidgetH) new QDockWidget(t_title, (QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QDockWidget_destroy(QDockWidgetH handle)
{
	delete (QDockWidget *)handle;
}

C_EXPORT QDockWidgetH QDockWidget_create2(QWidgetH parent, unsigned int flags)
{
	return (QDockWidgetH) new QDockWidget((QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT QWidgetH QDockWidget_widget(QDockWidgetH handle)
{
	return (QWidgetH) ((QDockWidget *)handle)->widget();
}

C_EXPORT void QDockWidget_setWidget(QDockWidgetH handle, QWidgetH widget)
{
	((QDockWidget *)handle)->setWidget((QWidget*)widget);
}

C_EXPORT void QDockWidget_setFeatures(QDockWidgetH handle, unsigned int features)
{
	((QDockWidget *)handle)->setFeatures((QDockWidget::DockWidgetFeatures)features);
}

C_EXPORT unsigned int QDockWidget_features(QDockWidgetH handle)
{
	return (unsigned int) ((QDockWidget *)handle)->features();
}

C_EXPORT void QDockWidget_setFloating(QDockWidgetH handle, bool floating)
{
	((QDockWidget *)handle)->setFloating(floating);
}

C_EXPORT bool QDockWidget_isFloating(QDockWidgetH handle)
{
	return (bool) ((QDockWidget *)handle)->isFloating();
}

C_EXPORT void QDockWidget_setAllowedAreas(QDockWidgetH handle, unsigned int areas)
{
	((QDockWidget *)handle)->setAllowedAreas((Qt::DockWidgetAreas)areas);
}

C_EXPORT unsigned int QDockWidget_allowedAreas(QDockWidgetH handle)
{
	return (unsigned int) ((QDockWidget *)handle)->allowedAreas();
}

C_EXPORT void QDockWidget_setTitleBarWidget(QDockWidgetH handle, QWidgetH widget)
{
	((QDockWidget *)handle)->setTitleBarWidget((QWidget*)widget);
}

C_EXPORT QWidgetH QDockWidget_titleBarWidget(QDockWidgetH handle)
{
	return (QWidgetH) ((QDockWidget *)handle)->titleBarWidget();
}

C_EXPORT bool QDockWidget_isAreaAllowed(QDockWidgetH handle, Qt::DockWidgetArea area)
{
	return (bool) ((QDockWidget *)handle)->isAreaAllowed(area);
}

C_EXPORT QActionH QDockWidget_toggleViewAction(QDockWidgetH handle)
{
	return (QActionH) ((QDockWidget *)handle)->toggleViewAction();
}

