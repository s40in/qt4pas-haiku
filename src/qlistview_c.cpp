//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QListViewH QListView_create(QWidgetH parent)
{
	return (QListViewH) new QListView((QWidget*)parent);
}

C_EXPORT void QListView_destroy(QListViewH handle)
{
	delete (QListView *)handle;
}

C_EXPORT void QListView_setMovement(QListViewH handle, QListView::Movement movement)
{
	((QListView *)handle)->setMovement(movement);
}

C_EXPORT QListView::Movement QListView_movement(QListViewH handle)
{
	return (QListView::Movement) ((QListView *)handle)->movement();
}

C_EXPORT void QListView_setFlow(QListViewH handle, QListView::Flow flow)
{
	((QListView *)handle)->setFlow(flow);
}

C_EXPORT QListView::Flow QListView_flow(QListViewH handle)
{
	return (QListView::Flow) ((QListView *)handle)->flow();
}

C_EXPORT void QListView_setWrapping(QListViewH handle, bool enable)
{
	((QListView *)handle)->setWrapping(enable);
}

C_EXPORT bool QListView_isWrapping(QListViewH handle)
{
	return (bool) ((QListView *)handle)->isWrapping();
}

C_EXPORT void QListView_setResizeMode(QListViewH handle, QListView::ResizeMode mode)
{
	((QListView *)handle)->setResizeMode(mode);
}

C_EXPORT QListView::ResizeMode QListView_resizeMode(QListViewH handle)
{
	return (QListView::ResizeMode) ((QListView *)handle)->resizeMode();
}

C_EXPORT void QListView_setLayoutMode(QListViewH handle, QListView::LayoutMode mode)
{
	((QListView *)handle)->setLayoutMode(mode);
}

C_EXPORT QListView::LayoutMode QListView_layoutMode(QListViewH handle)
{
	return (QListView::LayoutMode) ((QListView *)handle)->layoutMode();
}

C_EXPORT void QListView_setSpacing(QListViewH handle, int space)
{
	((QListView *)handle)->setSpacing(space);
}

C_EXPORT int QListView_spacing(QListViewH handle)
{
	return (int) ((QListView *)handle)->spacing();
}

C_EXPORT void QListView_setBatchSize(QListViewH handle, int batchSize)
{
	((QListView *)handle)->setBatchSize(batchSize);
}

C_EXPORT int QListView_batchSize(QListViewH handle)
{
	return (int) ((QListView *)handle)->batchSize();
}

C_EXPORT void QListView_setGridSize(QListViewH handle, const QSizeH size)
{
	((QListView *)handle)->setGridSize(*(const QSize*)size);
}

C_EXPORT void QListView_gridSize(QListViewH handle, PSize retval)
{
	*(QSize *)retval = ((QListView *)handle)->gridSize();
}

C_EXPORT void QListView_setViewMode(QListViewH handle, QListView::ViewMode mode)
{
	((QListView *)handle)->setViewMode(mode);
}

C_EXPORT QListView::ViewMode QListView_viewMode(QListViewH handle)
{
	return (QListView::ViewMode) ((QListView *)handle)->viewMode();
}

C_EXPORT void QListView_clearPropertyFlags(QListViewH handle)
{
	((QListView *)handle)->clearPropertyFlags();
}

C_EXPORT bool QListView_isRowHidden(QListViewH handle, int row)
{
	return (bool) ((QListView *)handle)->isRowHidden(row);
}

C_EXPORT void QListView_setRowHidden(QListViewH handle, int row, bool hide)
{
	((QListView *)handle)->setRowHidden(row, hide);
}

C_EXPORT void QListView_setModelColumn(QListViewH handle, int column)
{
	((QListView *)handle)->setModelColumn(column);
}

C_EXPORT int QListView_modelColumn(QListViewH handle)
{
	return (int) ((QListView *)handle)->modelColumn();
}

C_EXPORT void QListView_setUniformItemSizes(QListViewH handle, bool enable)
{
	((QListView *)handle)->setUniformItemSizes(enable);
}

C_EXPORT bool QListView_uniformItemSizes(QListViewH handle)
{
	return (bool) ((QListView *)handle)->uniformItemSizes();
}

C_EXPORT void QListView_setWordWrap(QListViewH handle, bool on)
{
	((QListView *)handle)->setWordWrap(on);
}

C_EXPORT bool QListView_wordWrap(QListViewH handle)
{
	return (bool) ((QListView *)handle)->wordWrap();
}

C_EXPORT void QListView_setSelectionRectVisible(QListViewH handle, bool show)
{
	((QListView *)handle)->setSelectionRectVisible(show);
}

C_EXPORT bool QListView_isSelectionRectVisible(QListViewH handle)
{
	return (bool) ((QListView *)handle)->isSelectionRectVisible();
}

C_EXPORT void QListView_visualRect(QListViewH handle, PRect retval, const QModelIndexH index)
{
	QRect t_retval;
	t_retval = ((QListView *)handle)->visualRect(*(const QModelIndex*)index);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QListView_scrollTo(QListViewH handle, const QModelIndexH index, QAbstractItemView::ScrollHint hint)
{
	((QListView *)handle)->scrollTo(*(const QModelIndex*)index, hint);
}

C_EXPORT void QListView_indexAt(QListViewH handle, QModelIndexH retval, const QPointH p)
{
	*(QModelIndex *)retval = ((QListView *)handle)->indexAt(*(const QPoint*)p);
}

C_EXPORT void QListView_doItemsLayout(QListViewH handle)
{
	((QListView *)handle)->doItemsLayout();
}

C_EXPORT void QListView_reset(QListViewH handle)
{
	((QListView *)handle)->reset();
}

C_EXPORT void QListView_setRootIndex(QListViewH handle, const QModelIndexH index)
{
	((QListView *)handle)->setRootIndex(*(const QModelIndex*)index);
}

