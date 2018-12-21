//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSplitterH QSplitter_create(QWidgetH parent)
{
	return (QSplitterH) new QSplitter((QWidget*)parent);
}

C_EXPORT void QSplitter_destroy(QSplitterH handle)
{
	delete (QSplitter *)handle;
}

C_EXPORT QSplitterH QSplitter_create2(Qt::Orientation AnonParam1, QWidgetH parent)
{
	return (QSplitterH) new QSplitter(AnonParam1, (QWidget*)parent);
}

C_EXPORT void QSplitter_addWidget(QSplitterH handle, QWidgetH widget)
{
	((QSplitter *)handle)->addWidget((QWidget*)widget);
}

C_EXPORT void QSplitter_insertWidget(QSplitterH handle, int index, QWidgetH widget)
{
	((QSplitter *)handle)->insertWidget(index, (QWidget*)widget);
}

C_EXPORT void QSplitter_setOrientation(QSplitterH handle, Qt::Orientation AnonParam1)
{
	((QSplitter *)handle)->setOrientation(AnonParam1);
}

C_EXPORT Qt::Orientation QSplitter_orientation(QSplitterH handle)
{
	return (Qt::Orientation) ((QSplitter *)handle)->orientation();
}

C_EXPORT void QSplitter_setChildrenCollapsible(QSplitterH handle, bool AnonParam1)
{
	((QSplitter *)handle)->setChildrenCollapsible(AnonParam1);
}

C_EXPORT bool QSplitter_childrenCollapsible(QSplitterH handle)
{
	return (bool) ((QSplitter *)handle)->childrenCollapsible();
}

C_EXPORT void QSplitter_setCollapsible(QSplitterH handle, int index, bool AnonParam2)
{
	((QSplitter *)handle)->setCollapsible(index, AnonParam2);
}

C_EXPORT bool QSplitter_isCollapsible(QSplitterH handle, int index)
{
	return (bool) ((QSplitter *)handle)->isCollapsible(index);
}

C_EXPORT void QSplitter_setOpaqueResize(QSplitterH handle, bool opaque)
{
	((QSplitter *)handle)->setOpaqueResize(opaque);
}

C_EXPORT bool QSplitter_opaqueResize(QSplitterH handle)
{
	return (bool) ((QSplitter *)handle)->opaqueResize();
}

C_EXPORT void QSplitter_refresh(QSplitterH handle)
{
	((QSplitter *)handle)->refresh();
}

C_EXPORT void QSplitter_sizeHint(QSplitterH handle, PSize retval)
{
	*(QSize *)retval = ((QSplitter *)handle)->sizeHint();
}

C_EXPORT void QSplitter_minimumSizeHint(QSplitterH handle, PSize retval)
{
	*(QSize *)retval = ((QSplitter *)handle)->minimumSizeHint();
}

C_EXPORT void QSplitter_sizes(QSplitterH handle, PPtrIntArray retval)
{
	QList<int> t_retval;
	t_retval = ((QSplitter *)handle)->sizes();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QSplitter_setSizes(QSplitterH handle, PPtrIntArray list)
{
	QList<int> t_list;
	copyPtrIntArrayToQListTemplate(list, t_list);
	((QSplitter *)handle)->setSizes(t_list);
}

C_EXPORT void QSplitter_saveState(QSplitterH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QSplitter *)handle)->saveState();
}

C_EXPORT bool QSplitter_restoreState(QSplitterH handle, const QByteArrayH state)
{
	return (bool) ((QSplitter *)handle)->restoreState(*(const QByteArray*)state);
}

C_EXPORT int QSplitter_handleWidth(QSplitterH handle)
{
	return (int) ((QSplitter *)handle)->handleWidth();
}

C_EXPORT void QSplitter_setHandleWidth(QSplitterH handle, int AnonParam1)
{
	((QSplitter *)handle)->setHandleWidth(AnonParam1);
}

C_EXPORT int QSplitter_indexOf(QSplitterH handle, QWidgetH w)
{
	return (int) ((QSplitter *)handle)->indexOf((QWidget*)w);
}

C_EXPORT QWidgetH QSplitter_widget(QSplitterH handle, int index)
{
	return (QWidgetH) ((QSplitter *)handle)->widget(index);
}

C_EXPORT int QSplitter_count(QSplitterH handle)
{
	return (int) ((QSplitter *)handle)->count();
}

C_EXPORT void QSplitter_getRange(QSplitterH handle, int index, int* AnonParam2, int* AnonParam3)
{
	((QSplitter *)handle)->getRange(index, AnonParam2, AnonParam3);
}

C_EXPORT QSplitterHandleH QSplitter_handle(QSplitterH handle, int index)
{
	return (QSplitterHandleH) ((QSplitter *)handle)->handle(index);
}

C_EXPORT void QSplitter_setStretchFactor(QSplitterH handle, int index, int stretch)
{
	((QSplitter *)handle)->setStretchFactor(index, stretch);
}

C_EXPORT QSplitterHandleH QSplitterHandle_create(Qt::Orientation o, QSplitterH parent)
{
	return (QSplitterHandleH) new QSplitterHandle(o, (QSplitter*)parent);
}

C_EXPORT void QSplitterHandle_destroy(QSplitterHandleH handle)
{
	delete (QSplitterHandle *)handle;
}

C_EXPORT void QSplitterHandle_setOrientation(QSplitterHandleH handle, Qt::Orientation o)
{
	((QSplitterHandle *)handle)->setOrientation(o);
}

C_EXPORT Qt::Orientation QSplitterHandle_orientation(QSplitterHandleH handle)
{
	return (Qt::Orientation) ((QSplitterHandle *)handle)->orientation();
}

C_EXPORT bool QSplitterHandle_opaqueResize(QSplitterHandleH handle)
{
	return (bool) ((QSplitterHandle *)handle)->opaqueResize();
}

C_EXPORT QSplitterH QSplitterHandle_splitter(QSplitterHandleH handle)
{
	return (QSplitterH) ((QSplitterHandle *)handle)->splitter();
}

C_EXPORT void QSplitterHandle_sizeHint(QSplitterHandleH handle, PSize retval)
{
	*(QSize *)retval = ((QSplitterHandle *)handle)->sizeHint();
}

