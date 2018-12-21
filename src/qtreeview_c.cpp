//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTreeViewH QTreeView_create(QWidgetH parent)
{
	return (QTreeViewH) new QTreeView((QWidget*)parent);
}

C_EXPORT void QTreeView_destroy(QTreeViewH handle)
{
	delete (QTreeView *)handle;
}

C_EXPORT void QTreeView_setModel(QTreeViewH handle, QAbstractItemModelH model)
{
	((QTreeView *)handle)->setModel((QAbstractItemModel*)model);
}

C_EXPORT void QTreeView_setRootIndex(QTreeViewH handle, const QModelIndexH index)
{
	((QTreeView *)handle)->setRootIndex(*(const QModelIndex*)index);
}

C_EXPORT void QTreeView_setSelectionModel(QTreeViewH handle, QItemSelectionModelH selectionModel)
{
	((QTreeView *)handle)->setSelectionModel((QItemSelectionModel*)selectionModel);
}

C_EXPORT QHeaderViewH QTreeView_header(QTreeViewH handle)
{
	return (QHeaderViewH) ((QTreeView *)handle)->header();
}

C_EXPORT void QTreeView_setHeader(QTreeViewH handle, QHeaderViewH header)
{
	((QTreeView *)handle)->setHeader((QHeaderView*)header);
}

C_EXPORT int QTreeView_autoExpandDelay(QTreeViewH handle)
{
	return (int) ((QTreeView *)handle)->autoExpandDelay();
}

C_EXPORT void QTreeView_setAutoExpandDelay(QTreeViewH handle, int delay)
{
	((QTreeView *)handle)->setAutoExpandDelay(delay);
}

C_EXPORT int QTreeView_indentation(QTreeViewH handle)
{
	return (int) ((QTreeView *)handle)->indentation();
}

C_EXPORT void QTreeView_setIndentation(QTreeViewH handle, int i)
{
	((QTreeView *)handle)->setIndentation(i);
}

C_EXPORT bool QTreeView_rootIsDecorated(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->rootIsDecorated();
}

C_EXPORT void QTreeView_setRootIsDecorated(QTreeViewH handle, bool show)
{
	((QTreeView *)handle)->setRootIsDecorated(show);
}

C_EXPORT bool QTreeView_uniformRowHeights(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->uniformRowHeights();
}

C_EXPORT void QTreeView_setUniformRowHeights(QTreeViewH handle, bool uniform)
{
	((QTreeView *)handle)->setUniformRowHeights(uniform);
}

C_EXPORT bool QTreeView_itemsExpandable(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->itemsExpandable();
}

C_EXPORT void QTreeView_setItemsExpandable(QTreeViewH handle, bool enable)
{
	((QTreeView *)handle)->setItemsExpandable(enable);
}

C_EXPORT bool QTreeView_expandsOnDoubleClick(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->expandsOnDoubleClick();
}

C_EXPORT void QTreeView_setExpandsOnDoubleClick(QTreeViewH handle, bool enable)
{
	((QTreeView *)handle)->setExpandsOnDoubleClick(enable);
}

C_EXPORT int QTreeView_columnViewportPosition(QTreeViewH handle, int column)
{
	return (int) ((QTreeView *)handle)->columnViewportPosition(column);
}

C_EXPORT int QTreeView_columnWidth(QTreeViewH handle, int column)
{
	return (int) ((QTreeView *)handle)->columnWidth(column);
}

C_EXPORT void QTreeView_setColumnWidth(QTreeViewH handle, int column, int width)
{
	((QTreeView *)handle)->setColumnWidth(column, width);
}

C_EXPORT int QTreeView_columnAt(QTreeViewH handle, int x)
{
	return (int) ((QTreeView *)handle)->columnAt(x);
}

C_EXPORT bool QTreeView_isColumnHidden(QTreeViewH handle, int column)
{
	return (bool) ((QTreeView *)handle)->isColumnHidden(column);
}

C_EXPORT void QTreeView_setColumnHidden(QTreeViewH handle, int column, bool hide)
{
	((QTreeView *)handle)->setColumnHidden(column, hide);
}

C_EXPORT bool QTreeView_isHeaderHidden(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->isHeaderHidden();
}

C_EXPORT void QTreeView_setHeaderHidden(QTreeViewH handle, bool hide)
{
	((QTreeView *)handle)->setHeaderHidden(hide);
}

C_EXPORT bool QTreeView_isRowHidden(QTreeViewH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QTreeView *)handle)->isRowHidden(row, *(const QModelIndex*)parent);
}

C_EXPORT void QTreeView_setRowHidden(QTreeViewH handle, int row, const QModelIndexH parent, bool hide)
{
	((QTreeView *)handle)->setRowHidden(row, *(const QModelIndex*)parent, hide);
}

C_EXPORT bool QTreeView_isFirstColumnSpanned(QTreeViewH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QTreeView *)handle)->isFirstColumnSpanned(row, *(const QModelIndex*)parent);
}

C_EXPORT void QTreeView_setFirstColumnSpanned(QTreeViewH handle, int row, const QModelIndexH parent, bool span)
{
	((QTreeView *)handle)->setFirstColumnSpanned(row, *(const QModelIndex*)parent, span);
}

C_EXPORT bool QTreeView_isExpanded(QTreeViewH handle, const QModelIndexH index)
{
	return (bool) ((QTreeView *)handle)->isExpanded(*(const QModelIndex*)index);
}

C_EXPORT void QTreeView_setExpanded(QTreeViewH handle, const QModelIndexH index, bool expand)
{
	((QTreeView *)handle)->setExpanded(*(const QModelIndex*)index, expand);
}

C_EXPORT void QTreeView_setSortingEnabled(QTreeViewH handle, bool enable)
{
	((QTreeView *)handle)->setSortingEnabled(enable);
}

C_EXPORT bool QTreeView_isSortingEnabled(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->isSortingEnabled();
}

C_EXPORT void QTreeView_setAnimated(QTreeViewH handle, bool enable)
{
	((QTreeView *)handle)->setAnimated(enable);
}

C_EXPORT bool QTreeView_isAnimated(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->isAnimated();
}

C_EXPORT void QTreeView_setAllColumnsShowFocus(QTreeViewH handle, bool enable)
{
	((QTreeView *)handle)->setAllColumnsShowFocus(enable);
}

C_EXPORT bool QTreeView_allColumnsShowFocus(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->allColumnsShowFocus();
}

C_EXPORT void QTreeView_setWordWrap(QTreeViewH handle, bool on)
{
	((QTreeView *)handle)->setWordWrap(on);
}

C_EXPORT bool QTreeView_wordWrap(QTreeViewH handle)
{
	return (bool) ((QTreeView *)handle)->wordWrap();
}

C_EXPORT void QTreeView_keyboardSearch(QTreeViewH handle, PWideString search)
{
	QString t_search;
	copyPWideStringToQString(search, t_search);
	((QTreeView *)handle)->keyboardSearch(t_search);
}

C_EXPORT void QTreeView_visualRect(QTreeViewH handle, PRect retval, const QModelIndexH index)
{
	QRect t_retval;
	t_retval = ((QTreeView *)handle)->visualRect(*(const QModelIndex*)index);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QTreeView_scrollTo(QTreeViewH handle, const QModelIndexH index, QAbstractItemView::ScrollHint hint)
{
	((QTreeView *)handle)->scrollTo(*(const QModelIndex*)index, hint);
}

C_EXPORT void QTreeView_indexAt(QTreeViewH handle, QModelIndexH retval, const QPointH p)
{
	*(QModelIndex *)retval = ((QTreeView *)handle)->indexAt(*(const QPoint*)p);
}

C_EXPORT void QTreeView_indexAbove(QTreeViewH handle, QModelIndexH retval, const QModelIndexH index)
{
	*(QModelIndex *)retval = ((QTreeView *)handle)->indexAbove(*(const QModelIndex*)index);
}

C_EXPORT void QTreeView_indexBelow(QTreeViewH handle, QModelIndexH retval, const QModelIndexH index)
{
	*(QModelIndex *)retval = ((QTreeView *)handle)->indexBelow(*(const QModelIndex*)index);
}

C_EXPORT void QTreeView_doItemsLayout(QTreeViewH handle)
{
	((QTreeView *)handle)->doItemsLayout();
}

C_EXPORT void QTreeView_reset(QTreeViewH handle)
{
	((QTreeView *)handle)->reset();
}

C_EXPORT void QTreeView_sortByColumn(QTreeViewH handle, int column, Qt::SortOrder order)
{
	((QTreeView *)handle)->sortByColumn(column, order);
}

C_EXPORT void QTreeView_dataChanged(QTreeViewH handle, const QModelIndexH topLeft, const QModelIndexH bottomRight)
{
	((QTreeView *)handle)->dataChanged(*(const QModelIndex*)topLeft, *(const QModelIndex*)bottomRight);
}

C_EXPORT void QTreeView_hideColumn(QTreeViewH handle, int column)
{
	((QTreeView *)handle)->hideColumn(column);
}

C_EXPORT void QTreeView_showColumn(QTreeViewH handle, int column)
{
	((QTreeView *)handle)->showColumn(column);
}

C_EXPORT void QTreeView_expand(QTreeViewH handle, const QModelIndexH index)
{
	((QTreeView *)handle)->expand(*(const QModelIndex*)index);
}

C_EXPORT void QTreeView_collapse(QTreeViewH handle, const QModelIndexH index)
{
	((QTreeView *)handle)->collapse(*(const QModelIndex*)index);
}

C_EXPORT void QTreeView_resizeColumnToContents(QTreeViewH handle, int column)
{
	((QTreeView *)handle)->resizeColumnToContents(column);
}

C_EXPORT void QTreeView_sortByColumn2(QTreeViewH handle, int column)
{
	((QTreeView *)handle)->sortByColumn(column);
}

C_EXPORT void QTreeView_selectAll(QTreeViewH handle)
{
	((QTreeView *)handle)->selectAll();
}

C_EXPORT void QTreeView_expandAll(QTreeViewH handle)
{
	((QTreeView *)handle)->expandAll();
}

C_EXPORT void QTreeView_collapseAll(QTreeViewH handle)
{
	((QTreeView *)handle)->collapseAll();
}

C_EXPORT void QTreeView_expandToDepth(QTreeViewH handle, int depth)
{
	((QTreeView *)handle)->expandToDepth(depth);
}

