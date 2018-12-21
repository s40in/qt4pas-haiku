//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QAbstractItemView_setModel(QAbstractItemViewH handle, QAbstractItemModelH model)
{
	((QAbstractItemView *)handle)->setModel((QAbstractItemModel*)model);
}

C_EXPORT QAbstractItemModelH QAbstractItemView_model(QAbstractItemViewH handle)
{
	return (QAbstractItemModelH) ((QAbstractItemView *)handle)->model();
}

C_EXPORT void QAbstractItemView_setSelectionModel(QAbstractItemViewH handle, QItemSelectionModelH selectionModel)
{
	((QAbstractItemView *)handle)->setSelectionModel((QItemSelectionModel*)selectionModel);
}

C_EXPORT QItemSelectionModelH QAbstractItemView_selectionModel(QAbstractItemViewH handle)
{
	return (QItemSelectionModelH) ((QAbstractItemView *)handle)->selectionModel();
}

C_EXPORT void QAbstractItemView_setItemDelegate(QAbstractItemViewH handle, QAbstractItemDelegateH delegate)
{
	((QAbstractItemView *)handle)->setItemDelegate((QAbstractItemDelegate*)delegate);
}

C_EXPORT QAbstractItemDelegateH QAbstractItemView_itemDelegate(QAbstractItemViewH handle)
{
	return (QAbstractItemDelegateH) ((QAbstractItemView *)handle)->itemDelegate();
}

C_EXPORT void QAbstractItemView_setSelectionMode(QAbstractItemViewH handle, QAbstractItemView::SelectionMode mode)
{
	((QAbstractItemView *)handle)->setSelectionMode(mode);
}

C_EXPORT QAbstractItemView::SelectionMode QAbstractItemView_selectionMode(QAbstractItemViewH handle)
{
	return (QAbstractItemView::SelectionMode) ((QAbstractItemView *)handle)->selectionMode();
}

C_EXPORT void QAbstractItemView_setSelectionBehavior(QAbstractItemViewH handle, QAbstractItemView::SelectionBehavior behavior)
{
	((QAbstractItemView *)handle)->setSelectionBehavior(behavior);
}

C_EXPORT QAbstractItemView::SelectionBehavior QAbstractItemView_selectionBehavior(QAbstractItemViewH handle)
{
	return (QAbstractItemView::SelectionBehavior) ((QAbstractItemView *)handle)->selectionBehavior();
}

C_EXPORT void QAbstractItemView_currentIndex(QAbstractItemViewH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QAbstractItemView *)handle)->currentIndex();
}

C_EXPORT void QAbstractItemView_rootIndex(QAbstractItemViewH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QAbstractItemView *)handle)->rootIndex();
}

C_EXPORT void QAbstractItemView_setEditTriggers(QAbstractItemViewH handle, unsigned int triggers)
{
	((QAbstractItemView *)handle)->setEditTriggers((QAbstractItemView::EditTriggers)triggers);
}

C_EXPORT unsigned int QAbstractItemView_editTriggers(QAbstractItemViewH handle)
{
	return (unsigned int) ((QAbstractItemView *)handle)->editTriggers();
}

C_EXPORT void QAbstractItemView_setVerticalScrollMode(QAbstractItemViewH handle, QAbstractItemView::ScrollMode mode)
{
	((QAbstractItemView *)handle)->setVerticalScrollMode(mode);
}

C_EXPORT QAbstractItemView::ScrollMode QAbstractItemView_verticalScrollMode(QAbstractItemViewH handle)
{
	return (QAbstractItemView::ScrollMode) ((QAbstractItemView *)handle)->verticalScrollMode();
}

C_EXPORT void QAbstractItemView_setHorizontalScrollMode(QAbstractItemViewH handle, QAbstractItemView::ScrollMode mode)
{
	((QAbstractItemView *)handle)->setHorizontalScrollMode(mode);
}

C_EXPORT QAbstractItemView::ScrollMode QAbstractItemView_horizontalScrollMode(QAbstractItemViewH handle)
{
	return (QAbstractItemView::ScrollMode) ((QAbstractItemView *)handle)->horizontalScrollMode();
}

C_EXPORT void QAbstractItemView_setAutoScroll(QAbstractItemViewH handle, bool enable)
{
	((QAbstractItemView *)handle)->setAutoScroll(enable);
}

C_EXPORT bool QAbstractItemView_hasAutoScroll(QAbstractItemViewH handle)
{
	return (bool) ((QAbstractItemView *)handle)->hasAutoScroll();
}

C_EXPORT void QAbstractItemView_setAutoScrollMargin(QAbstractItemViewH handle, int margin)
{
	((QAbstractItemView *)handle)->setAutoScrollMargin(margin);
}

C_EXPORT int QAbstractItemView_autoScrollMargin(QAbstractItemViewH handle)
{
	return (int) ((QAbstractItemView *)handle)->autoScrollMargin();
}

C_EXPORT void QAbstractItemView_setTabKeyNavigation(QAbstractItemViewH handle, bool enable)
{
	((QAbstractItemView *)handle)->setTabKeyNavigation(enable);
}

C_EXPORT bool QAbstractItemView_tabKeyNavigation(QAbstractItemViewH handle)
{
	return (bool) ((QAbstractItemView *)handle)->tabKeyNavigation();
}

C_EXPORT void QAbstractItemView_setDropIndicatorShown(QAbstractItemViewH handle, bool enable)
{
	((QAbstractItemView *)handle)->setDropIndicatorShown(enable);
}

C_EXPORT bool QAbstractItemView_showDropIndicator(QAbstractItemViewH handle)
{
	return (bool) ((QAbstractItemView *)handle)->showDropIndicator();
}

C_EXPORT void QAbstractItemView_setDragEnabled(QAbstractItemViewH handle, bool enable)
{
	((QAbstractItemView *)handle)->setDragEnabled(enable);
}

C_EXPORT bool QAbstractItemView_dragEnabled(QAbstractItemViewH handle)
{
	return (bool) ((QAbstractItemView *)handle)->dragEnabled();
}

C_EXPORT void QAbstractItemView_setDragDropOverwriteMode(QAbstractItemViewH handle, bool overwrite)
{
	((QAbstractItemView *)handle)->setDragDropOverwriteMode(overwrite);
}

C_EXPORT bool QAbstractItemView_dragDropOverwriteMode(QAbstractItemViewH handle)
{
	return (bool) ((QAbstractItemView *)handle)->dragDropOverwriteMode();
}

C_EXPORT void QAbstractItemView_setDragDropMode(QAbstractItemViewH handle, QAbstractItemView::DragDropMode behavior)
{
	((QAbstractItemView *)handle)->setDragDropMode(behavior);
}

C_EXPORT QAbstractItemView::DragDropMode QAbstractItemView_dragDropMode(QAbstractItemViewH handle)
{
	return (QAbstractItemView::DragDropMode) ((QAbstractItemView *)handle)->dragDropMode();
}

C_EXPORT void QAbstractItemView_setAlternatingRowColors(QAbstractItemViewH handle, bool enable)
{
	((QAbstractItemView *)handle)->setAlternatingRowColors(enable);
}

C_EXPORT bool QAbstractItemView_alternatingRowColors(QAbstractItemViewH handle)
{
	return (bool) ((QAbstractItemView *)handle)->alternatingRowColors();
}

C_EXPORT void QAbstractItemView_setIconSize(QAbstractItemViewH handle, const QSizeH size)
{
	((QAbstractItemView *)handle)->setIconSize(*(const QSize*)size);
}

C_EXPORT void QAbstractItemView_iconSize(QAbstractItemViewH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractItemView *)handle)->iconSize();
}

C_EXPORT void QAbstractItemView_setTextElideMode(QAbstractItemViewH handle, Qt::TextElideMode mode)
{
	((QAbstractItemView *)handle)->setTextElideMode(mode);
}

C_EXPORT Qt::TextElideMode QAbstractItemView_textElideMode(QAbstractItemViewH handle)
{
	return (Qt::TextElideMode) ((QAbstractItemView *)handle)->textElideMode();
}

C_EXPORT void QAbstractItemView_keyboardSearch(QAbstractItemViewH handle, PWideString search)
{
	QString t_search;
	copyPWideStringToQString(search, t_search);
	((QAbstractItemView *)handle)->keyboardSearch(t_search);
}

C_EXPORT void QAbstractItemView_visualRect(QAbstractItemViewH handle, PRect retval, const QModelIndexH index)
{
	QRect t_retval;
	t_retval = ((QAbstractItemView *)handle)->visualRect(*(const QModelIndex*)index);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QAbstractItemView_scrollTo(QAbstractItemViewH handle, const QModelIndexH index, QAbstractItemView::ScrollHint hint)
{
	((QAbstractItemView *)handle)->scrollTo(*(const QModelIndex*)index, hint);
}

C_EXPORT void QAbstractItemView_indexAt(QAbstractItemViewH handle, QModelIndexH retval, const QPointH point)
{
	*(QModelIndex *)retval = ((QAbstractItemView *)handle)->indexAt(*(const QPoint*)point);
}

C_EXPORT void QAbstractItemView_sizeHintForIndex(QAbstractItemViewH handle, PSize retval, const QModelIndexH index)
{
	*(QSize *)retval = ((QAbstractItemView *)handle)->sizeHintForIndex(*(const QModelIndex*)index);
}

C_EXPORT int QAbstractItemView_sizeHintForRow(QAbstractItemViewH handle, int row)
{
	return (int) ((QAbstractItemView *)handle)->sizeHintForRow(row);
}

C_EXPORT int QAbstractItemView_sizeHintForColumn(QAbstractItemViewH handle, int column)
{
	return (int) ((QAbstractItemView *)handle)->sizeHintForColumn(column);
}

C_EXPORT void QAbstractItemView_openPersistentEditor(QAbstractItemViewH handle, const QModelIndexH index)
{
	((QAbstractItemView *)handle)->openPersistentEditor(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_closePersistentEditor(QAbstractItemViewH handle, const QModelIndexH index)
{
	((QAbstractItemView *)handle)->closePersistentEditor(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_setIndexWidget(QAbstractItemViewH handle, const QModelIndexH index, QWidgetH widget)
{
	((QAbstractItemView *)handle)->setIndexWidget(*(const QModelIndex*)index, (QWidget*)widget);
}

C_EXPORT QWidgetH QAbstractItemView_indexWidget(QAbstractItemViewH handle, const QModelIndexH index)
{
	return (QWidgetH) ((QAbstractItemView *)handle)->indexWidget(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_setItemDelegateForRow(QAbstractItemViewH handle, int row, QAbstractItemDelegateH delegate)
{
	((QAbstractItemView *)handle)->setItemDelegateForRow(row, (QAbstractItemDelegate*)delegate);
}

C_EXPORT QAbstractItemDelegateH QAbstractItemView_itemDelegateForRow(QAbstractItemViewH handle, int row)
{
	return (QAbstractItemDelegateH) ((QAbstractItemView *)handle)->itemDelegateForRow(row);
}

C_EXPORT void QAbstractItemView_setItemDelegateForColumn(QAbstractItemViewH handle, int column, QAbstractItemDelegateH delegate)
{
	((QAbstractItemView *)handle)->setItemDelegateForColumn(column, (QAbstractItemDelegate*)delegate);
}

C_EXPORT QAbstractItemDelegateH QAbstractItemView_itemDelegateForColumn(QAbstractItemViewH handle, int column)
{
	return (QAbstractItemDelegateH) ((QAbstractItemView *)handle)->itemDelegateForColumn(column);
}

C_EXPORT QAbstractItemDelegateH QAbstractItemView_itemDelegate2(QAbstractItemViewH handle, const QModelIndexH index)
{
	return (QAbstractItemDelegateH) ((QAbstractItemView *)handle)->itemDelegate(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_inputMethodQuery(QAbstractItemViewH handle, QVariantH retval, Qt::InputMethodQuery query)
{
	*(QVariant *)retval = ((QAbstractItemView *)handle)->inputMethodQuery(query);
}

C_EXPORT void QAbstractItemView_reset(QAbstractItemViewH handle)
{
	((QAbstractItemView *)handle)->reset();
}

C_EXPORT void QAbstractItemView_setRootIndex(QAbstractItemViewH handle, const QModelIndexH index)
{
	((QAbstractItemView *)handle)->setRootIndex(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_doItemsLayout(QAbstractItemViewH handle)
{
	((QAbstractItemView *)handle)->doItemsLayout();
}

C_EXPORT void QAbstractItemView_selectAll(QAbstractItemViewH handle)
{
	((QAbstractItemView *)handle)->selectAll();
}

C_EXPORT void QAbstractItemView_edit(QAbstractItemViewH handle, const QModelIndexH index)
{
	((QAbstractItemView *)handle)->edit(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_clearSelection(QAbstractItemViewH handle)
{
	((QAbstractItemView *)handle)->clearSelection();
}

C_EXPORT void QAbstractItemView_setCurrentIndex(QAbstractItemViewH handle, const QModelIndexH index)
{
	((QAbstractItemView *)handle)->setCurrentIndex(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemView_scrollToTop(QAbstractItemViewH handle)
{
	((QAbstractItemView *)handle)->scrollToTop();
}

C_EXPORT void QAbstractItemView_scrollToBottom(QAbstractItemViewH handle)
{
	((QAbstractItemView *)handle)->scrollToBottom();
}

C_EXPORT void QAbstractItemView_update(QAbstractItemViewH handle, const QModelIndexH index)
{
	((QAbstractItemView *)handle)->update(*(const QModelIndex*)index);
}

