//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QScrollAreaH QScrollArea_create(QWidgetH parent)
{
	return (QScrollAreaH) new QScrollArea((QWidget*)parent);
}

C_EXPORT void QScrollArea_destroy(QScrollAreaH handle)
{
	delete (QScrollArea *)handle;
}

C_EXPORT QWidgetH QScrollArea_widget(QScrollAreaH handle)
{
	return (QWidgetH) ((QScrollArea *)handle)->widget();
}

C_EXPORT void QScrollArea_setWidget(QScrollAreaH handle, QWidgetH widget)
{
	((QScrollArea *)handle)->setWidget((QWidget*)widget);
}

C_EXPORT QWidgetH QScrollArea_takeWidget(QScrollAreaH handle)
{
	return (QWidgetH) ((QScrollArea *)handle)->takeWidget();
}

C_EXPORT bool QScrollArea_widgetResizable(QScrollAreaH handle)
{
	return (bool) ((QScrollArea *)handle)->widgetResizable();
}

C_EXPORT void QScrollArea_setWidgetResizable(QScrollAreaH handle, bool resizable)
{
	((QScrollArea *)handle)->setWidgetResizable(resizable);
}

C_EXPORT void QScrollArea_sizeHint(QScrollAreaH handle, PSize retval)
{
	*(QSize *)retval = ((QScrollArea *)handle)->sizeHint();
}

C_EXPORT bool QScrollArea_focusNextPrevChild(QScrollAreaH handle, bool next)
{
	return (bool) ((QScrollArea *)handle)->focusNextPrevChild(next);
}

C_EXPORT unsigned int QScrollArea_alignment(QScrollAreaH handle)
{
	return (unsigned int) ((QScrollArea *)handle)->alignment();
}

C_EXPORT void QScrollArea_setAlignment(QScrollAreaH handle, unsigned int AnonParam1)
{
	((QScrollArea *)handle)->setAlignment((Qt::Alignment)AnonParam1);
}

C_EXPORT void QScrollArea_ensureVisible(QScrollAreaH handle, int x, int y, int xmargin, int ymargin)
{
	((QScrollArea *)handle)->ensureVisible(x, y, xmargin, ymargin);
}

C_EXPORT void QScrollArea_ensureWidgetVisible(QScrollAreaH handle, QWidgetH childWidget, int xmargin, int ymargin)
{
	((QScrollArea *)handle)->ensureWidgetVisible((QWidget*)childWidget, xmargin, ymargin);
}

