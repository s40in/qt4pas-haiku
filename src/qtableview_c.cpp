//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTableViewH QTableView_create(QWidgetH parent)
{
	return (QTableViewH) new QTableView((QWidget*)parent);
}

C_EXPORT void QTableView_destroy(QTableViewH handle)
{
	delete (QTableView *)handle;
}

C_EXPORT void QTableView_setModel(QTableViewH handle, QAbstractItemModelH model)
{
	((QTableView *)handle)->setModel((QAbstractItemModel*)model);
}

C_EXPORT void QTableView_setRootIndex(QTableViewH handle, const QModelIndexH index)
{
	((QTableView *)handle)->setRootIndex(*(const QModelIndex*)index);
}

C_EXPORT void QTableView_setSelectionModel(QTableViewH handle, QItemSelectionModelH selectionModel)
{
	((QTableView *)handle)->setSelectionModel((QItemSelectionModel*)selectionModel);
}

C_EXPORT QHeaderViewH QTableView_horizontalHeader(QTableViewH handle)
{
	return (QHeaderViewH) ((QTableView *)handle)->horizontalHeader();
}

C_EXPORT QHeaderViewH QTableView_verticalHeader(QTableViewH handle)
{
	return (QHeaderViewH) ((QTableView *)handle)->verticalHeader();
}

C_EXPORT void QTableView_setHorizontalHeader(QTableViewH handle, QHeaderViewH header)
{
	((QTableView *)handle)->setHorizontalHeader((QHeaderView*)header);
}

C_EXPORT void QTableView_setVerticalHeader(QTableViewH handle, QHeaderViewH header)
{
	((QTableView *)handle)->setVerticalHeader((QHeaderView*)header);
}

C_EXPORT int QTableView_rowViewportPosition(QTableViewH handle, int row)
{
	return (int) ((QTableView *)handle)->rowViewportPosition(row);
}

C_EXPORT int QTableView_rowAt(QTableViewH handle, int y)
{
	return (int) ((QTableView *)handle)->rowAt(y);
}

C_EXPORT void QTableView_setRowHeight(QTableViewH handle, int row, int height)
{
	((QTableView *)handle)->setRowHeight(row, height);
}

C_EXPORT int QTableView_rowHeight(QTableViewH handle, int row)
{
	return (int) ((QTableView *)handle)->rowHeight(row);
}

C_EXPORT int QTableView_columnViewportPosition(QTableViewH handle, int column)
{
	return (int) ((QTableView *)handle)->columnViewportPosition(column);
}

C_EXPORT int QTableView_columnAt(QTableViewH handle, int x)
{
	return (int) ((QTableView *)handle)->columnAt(x);
}

C_EXPORT void QTableView_setColumnWidth(QTableViewH handle, int column, int width)
{
	((QTableView *)handle)->setColumnWidth(column, width);
}

C_EXPORT int QTableView_columnWidth(QTableViewH handle, int column)
{
	return (int) ((QTableView *)handle)->columnWidth(column);
}

C_EXPORT bool QTableView_isRowHidden(QTableViewH handle, int row)
{
	return (bool) ((QTableView *)handle)->isRowHidden(row);
}

C_EXPORT void QTableView_setRowHidden(QTableViewH handle, int row, bool hide)
{
	((QTableView *)handle)->setRowHidden(row, hide);
}

C_EXPORT bool QTableView_isColumnHidden(QTableViewH handle, int column)
{
	return (bool) ((QTableView *)handle)->isColumnHidden(column);
}

C_EXPORT void QTableView_setColumnHidden(QTableViewH handle, int column, bool hide)
{
	((QTableView *)handle)->setColumnHidden(column, hide);
}

C_EXPORT void QTableView_setSortingEnabled(QTableViewH handle, bool enable)
{
	((QTableView *)handle)->setSortingEnabled(enable);
}

C_EXPORT bool QTableView_isSortingEnabled(QTableViewH handle)
{
	return (bool) ((QTableView *)handle)->isSortingEnabled();
}

C_EXPORT bool QTableView_showGrid(QTableViewH handle)
{
	return (bool) ((QTableView *)handle)->showGrid();
}

C_EXPORT Qt::PenStyle QTableView_gridStyle(QTableViewH handle)
{
	return (Qt::PenStyle) ((QTableView *)handle)->gridStyle();
}

C_EXPORT void QTableView_setGridStyle(QTableViewH handle, Qt::PenStyle style)
{
	((QTableView *)handle)->setGridStyle(style);
}

C_EXPORT void QTableView_setWordWrap(QTableViewH handle, bool on)
{
	((QTableView *)handle)->setWordWrap(on);
}

C_EXPORT bool QTableView_wordWrap(QTableViewH handle)
{
	return (bool) ((QTableView *)handle)->wordWrap();
}

C_EXPORT void QTableView_setCornerButtonEnabled(QTableViewH handle, bool enable)
{
	((QTableView *)handle)->setCornerButtonEnabled(enable);
}

C_EXPORT bool QTableView_isCornerButtonEnabled(QTableViewH handle)
{
	return (bool) ((QTableView *)handle)->isCornerButtonEnabled();
}

C_EXPORT void QTableView_visualRect(QTableViewH handle, PRect retval, const QModelIndexH index)
{
	QRect t_retval;
	t_retval = ((QTableView *)handle)->visualRect(*(const QModelIndex*)index);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QTableView_scrollTo(QTableViewH handle, const QModelIndexH index, QAbstractItemView::ScrollHint hint)
{
	((QTableView *)handle)->scrollTo(*(const QModelIndex*)index, hint);
}

C_EXPORT void QTableView_indexAt(QTableViewH handle, QModelIndexH retval, const QPointH p)
{
	*(QModelIndex *)retval = ((QTableView *)handle)->indexAt(*(const QPoint*)p);
}

C_EXPORT void QTableView_setSpan(QTableViewH handle, int row, int column, int rowSpan, int columnSpan)
{
	((QTableView *)handle)->setSpan(row, column, rowSpan, columnSpan);
}

C_EXPORT int QTableView_rowSpan(QTableViewH handle, int row, int column)
{
	return (int) ((QTableView *)handle)->rowSpan(row, column);
}

C_EXPORT int QTableView_columnSpan(QTableViewH handle, int row, int column)
{
	return (int) ((QTableView *)handle)->columnSpan(row, column);
}

C_EXPORT void QTableView_clearSpans(QTableViewH handle)
{
	((QTableView *)handle)->clearSpans();
}

C_EXPORT void QTableView_sortByColumn(QTableViewH handle, int column, Qt::SortOrder order)
{
	((QTableView *)handle)->sortByColumn(column, order);
}

C_EXPORT void QTableView_selectRow(QTableViewH handle, int row)
{
	((QTableView *)handle)->selectRow(row);
}

C_EXPORT void QTableView_selectColumn(QTableViewH handle, int column)
{
	((QTableView *)handle)->selectColumn(column);
}

C_EXPORT void QTableView_hideRow(QTableViewH handle, int row)
{
	((QTableView *)handle)->hideRow(row);
}

C_EXPORT void QTableView_hideColumn(QTableViewH handle, int column)
{
	((QTableView *)handle)->hideColumn(column);
}

C_EXPORT void QTableView_showRow(QTableViewH handle, int row)
{
	((QTableView *)handle)->showRow(row);
}

C_EXPORT void QTableView_showColumn(QTableViewH handle, int column)
{
	((QTableView *)handle)->showColumn(column);
}

C_EXPORT void QTableView_resizeRowToContents(QTableViewH handle, int row)
{
	((QTableView *)handle)->resizeRowToContents(row);
}

C_EXPORT void QTableView_resizeRowsToContents(QTableViewH handle)
{
	((QTableView *)handle)->resizeRowsToContents();
}

C_EXPORT void QTableView_resizeColumnToContents(QTableViewH handle, int column)
{
	((QTableView *)handle)->resizeColumnToContents(column);
}

C_EXPORT void QTableView_resizeColumnsToContents(QTableViewH handle)
{
	((QTableView *)handle)->resizeColumnsToContents();
}

C_EXPORT void QTableView_sortByColumn2(QTableViewH handle, int column)
{
	((QTableView *)handle)->sortByColumn(column);
}

C_EXPORT void QTableView_setShowGrid(QTableViewH handle, bool show)
{
	((QTableView *)handle)->setShowGrid(show);
}

