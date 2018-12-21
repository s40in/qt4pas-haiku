//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QAbstractScrollAreaH QAbstractScrollArea_create(QWidgetH parent)
{
	return (QAbstractScrollAreaH) new QAbstractScrollArea((QWidget*)parent);
}

C_EXPORT void QAbstractScrollArea_destroy(QAbstractScrollAreaH handle)
{
	delete (QAbstractScrollArea *)handle;
}

C_EXPORT Qt::ScrollBarPolicy QAbstractScrollArea_verticalScrollBarPolicy(QAbstractScrollAreaH handle)
{
	return (Qt::ScrollBarPolicy) ((QAbstractScrollArea *)handle)->verticalScrollBarPolicy();
}

C_EXPORT void QAbstractScrollArea_setVerticalScrollBarPolicy(QAbstractScrollAreaH handle, Qt::ScrollBarPolicy AnonParam1)
{
	((QAbstractScrollArea *)handle)->setVerticalScrollBarPolicy(AnonParam1);
}

C_EXPORT QScrollBarH QAbstractScrollArea_verticalScrollBar(QAbstractScrollAreaH handle)
{
	return (QScrollBarH) ((QAbstractScrollArea *)handle)->verticalScrollBar();
}

C_EXPORT void QAbstractScrollArea_setVerticalScrollBar(QAbstractScrollAreaH handle, QScrollBarH scrollbar)
{
	((QAbstractScrollArea *)handle)->setVerticalScrollBar((QScrollBar*)scrollbar);
}

C_EXPORT Qt::ScrollBarPolicy QAbstractScrollArea_horizontalScrollBarPolicy(QAbstractScrollAreaH handle)
{
	return (Qt::ScrollBarPolicy) ((QAbstractScrollArea *)handle)->horizontalScrollBarPolicy();
}

C_EXPORT void QAbstractScrollArea_setHorizontalScrollBarPolicy(QAbstractScrollAreaH handle, Qt::ScrollBarPolicy AnonParam1)
{
	((QAbstractScrollArea *)handle)->setHorizontalScrollBarPolicy(AnonParam1);
}

C_EXPORT QScrollBarH QAbstractScrollArea_horizontalScrollBar(QAbstractScrollAreaH handle)
{
	return (QScrollBarH) ((QAbstractScrollArea *)handle)->horizontalScrollBar();
}

C_EXPORT void QAbstractScrollArea_setHorizontalScrollBar(QAbstractScrollAreaH handle, QScrollBarH scrollbar)
{
	((QAbstractScrollArea *)handle)->setHorizontalScrollBar((QScrollBar*)scrollbar);
}

C_EXPORT QWidgetH QAbstractScrollArea_cornerWidget(QAbstractScrollAreaH handle)
{
	return (QWidgetH) ((QAbstractScrollArea *)handle)->cornerWidget();
}

C_EXPORT void QAbstractScrollArea_setCornerWidget(QAbstractScrollAreaH handle, QWidgetH widget)
{
	((QAbstractScrollArea *)handle)->setCornerWidget((QWidget*)widget);
}

C_EXPORT void QAbstractScrollArea_addScrollBarWidget(QAbstractScrollAreaH handle, QWidgetH widget, unsigned int alignment)
{
	((QAbstractScrollArea *)handle)->addScrollBarWidget((QWidget*)widget, (Qt::Alignment)alignment);
}

C_EXPORT void QAbstractScrollArea_scrollBarWidgets(QAbstractScrollAreaH handle, PPtrIntArray retval, unsigned int alignment)
{
	QList<QWidget*> t_retval;
	t_retval = ((QAbstractScrollArea *)handle)->scrollBarWidgets((Qt::Alignment)alignment);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QWidgetH QAbstractScrollArea_viewport(QAbstractScrollAreaH handle)
{
	return (QWidgetH) ((QAbstractScrollArea *)handle)->viewport();
}

C_EXPORT void QAbstractScrollArea_setViewport(QAbstractScrollAreaH handle, QWidgetH widget)
{
	((QAbstractScrollArea *)handle)->setViewport((QWidget*)widget);
}

C_EXPORT void QAbstractScrollArea_maximumViewportSize(QAbstractScrollAreaH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractScrollArea *)handle)->maximumViewportSize();
}

C_EXPORT void QAbstractScrollArea_minimumSizeHint(QAbstractScrollAreaH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractScrollArea *)handle)->minimumSizeHint();
}

C_EXPORT void QAbstractScrollArea_sizeHint(QAbstractScrollAreaH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractScrollArea *)handle)->sizeHint();
}

