//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create(int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem(type);
}

C_EXPORT void QTreeWidgetItem_destroy(QTreeWidgetItemH handle)
{
	delete (QTreeWidgetItem *)handle;
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create2(const QStringListH strings, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem(*(const QStringList*)strings, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create3(QTreeWidgetH view, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem((QTreeWidget*)view, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create4(QTreeWidgetH view, const QStringListH strings, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem((QTreeWidget*)view, *(const QStringList*)strings, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create5(QTreeWidgetH view, QTreeWidgetItemH after, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem((QTreeWidget*)view, (QTreeWidgetItem*)after, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create6(QTreeWidgetItemH parent, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem((QTreeWidgetItem*)parent, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create7(QTreeWidgetItemH parent, const QStringListH strings, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem((QTreeWidgetItem*)parent, *(const QStringList*)strings, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create8(QTreeWidgetItemH parent, QTreeWidgetItemH after, int type)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem((QTreeWidgetItem*)parent, (QTreeWidgetItem*)after, type);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_create9(const QTreeWidgetItemH other)
{
	return (QTreeWidgetItemH) new QTreeWidgetItem(*(const QTreeWidgetItem*)other);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_clone(QTreeWidgetItemH handle)
{
	return (QTreeWidgetItemH) ((QTreeWidgetItem *)handle)->clone();
}

C_EXPORT QTreeWidgetH QTreeWidgetItem_treeWidget(QTreeWidgetItemH handle)
{
	return (QTreeWidgetH) ((QTreeWidgetItem *)handle)->treeWidget();
}

C_EXPORT void QTreeWidgetItem_setSelected(QTreeWidgetItemH handle, bool select)
{
	((QTreeWidgetItem *)handle)->setSelected(select);
}

C_EXPORT bool QTreeWidgetItem_isSelected(QTreeWidgetItemH handle)
{
	return (bool) ((QTreeWidgetItem *)handle)->isSelected();
}

C_EXPORT void QTreeWidgetItem_setHidden(QTreeWidgetItemH handle, bool hide)
{
	((QTreeWidgetItem *)handle)->setHidden(hide);
}

C_EXPORT bool QTreeWidgetItem_isHidden(QTreeWidgetItemH handle)
{
	return (bool) ((QTreeWidgetItem *)handle)->isHidden();
}

C_EXPORT void QTreeWidgetItem_setExpanded(QTreeWidgetItemH handle, bool expand)
{
	((QTreeWidgetItem *)handle)->setExpanded(expand);
}

C_EXPORT bool QTreeWidgetItem_isExpanded(QTreeWidgetItemH handle)
{
	return (bool) ((QTreeWidgetItem *)handle)->isExpanded();
}

C_EXPORT void QTreeWidgetItem_setFirstColumnSpanned(QTreeWidgetItemH handle, bool span)
{
	((QTreeWidgetItem *)handle)->setFirstColumnSpanned(span);
}

C_EXPORT bool QTreeWidgetItem_isFirstColumnSpanned(QTreeWidgetItemH handle)
{
	return (bool) ((QTreeWidgetItem *)handle)->isFirstColumnSpanned();
}

C_EXPORT void QTreeWidgetItem_setDisabled(QTreeWidgetItemH handle, bool disabled)
{
	((QTreeWidgetItem *)handle)->setDisabled(disabled);
}

C_EXPORT bool QTreeWidgetItem_isDisabled(QTreeWidgetItemH handle)
{
	return (bool) ((QTreeWidgetItem *)handle)->isDisabled();
}

C_EXPORT void QTreeWidgetItem_setChildIndicatorPolicy(QTreeWidgetItemH handle, QTreeWidgetItem::ChildIndicatorPolicy policy)
{
	((QTreeWidgetItem *)handle)->setChildIndicatorPolicy(policy);
}

C_EXPORT QTreeWidgetItem::ChildIndicatorPolicy QTreeWidgetItem_childIndicatorPolicy(QTreeWidgetItemH handle)
{
	return (QTreeWidgetItem::ChildIndicatorPolicy) ((QTreeWidgetItem *)handle)->childIndicatorPolicy();
}

C_EXPORT unsigned int QTreeWidgetItem_flags(QTreeWidgetItemH handle)
{
	return (unsigned int) ((QTreeWidgetItem *)handle)->flags();
}

C_EXPORT void QTreeWidgetItem_setFlags(QTreeWidgetItemH handle, unsigned int flags)
{
	((QTreeWidgetItem *)handle)->setFlags((Qt::ItemFlags)flags);
}

C_EXPORT void QTreeWidgetItem_text(QTreeWidgetItemH handle, PWideString retval, int column)
{
	QString t_retval;
	t_retval = ((QTreeWidgetItem *)handle)->text(column);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTreeWidgetItem_setText(QTreeWidgetItemH handle, int column, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTreeWidgetItem *)handle)->setText(column, t_text);
}

C_EXPORT void QTreeWidgetItem_icon(QTreeWidgetItemH handle, QIconH retval, int column)
{
	*(QIcon *)retval = ((QTreeWidgetItem *)handle)->icon(column);
}

C_EXPORT void QTreeWidgetItem_setIcon(QTreeWidgetItemH handle, int column, const QIconH icon)
{
	((QTreeWidgetItem *)handle)->setIcon(column, *(const QIcon*)icon);
}

C_EXPORT void QTreeWidgetItem_statusTip(QTreeWidgetItemH handle, PWideString retval, int column)
{
	QString t_retval;
	t_retval = ((QTreeWidgetItem *)handle)->statusTip(column);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTreeWidgetItem_setStatusTip(QTreeWidgetItemH handle, int column, PWideString statusTip)
{
	QString t_statusTip;
	copyPWideStringToQString(statusTip, t_statusTip);
	((QTreeWidgetItem *)handle)->setStatusTip(column, t_statusTip);
}

C_EXPORT void QTreeWidgetItem_toolTip(QTreeWidgetItemH handle, PWideString retval, int column)
{
	QString t_retval;
	t_retval = ((QTreeWidgetItem *)handle)->toolTip(column);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTreeWidgetItem_setToolTip(QTreeWidgetItemH handle, int column, PWideString toolTip)
{
	QString t_toolTip;
	copyPWideStringToQString(toolTip, t_toolTip);
	((QTreeWidgetItem *)handle)->setToolTip(column, t_toolTip);
}

C_EXPORT void QTreeWidgetItem_whatsThis(QTreeWidgetItemH handle, PWideString retval, int column)
{
	QString t_retval;
	t_retval = ((QTreeWidgetItem *)handle)->whatsThis(column);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTreeWidgetItem_setWhatsThis(QTreeWidgetItemH handle, int column, PWideString whatsThis)
{
	QString t_whatsThis;
	copyPWideStringToQString(whatsThis, t_whatsThis);
	((QTreeWidgetItem *)handle)->setWhatsThis(column, t_whatsThis);
}

C_EXPORT void QTreeWidgetItem_font(QTreeWidgetItemH handle, QFontH retval, int column)
{
	*(QFont *)retval = ((QTreeWidgetItem *)handle)->font(column);
}

C_EXPORT void QTreeWidgetItem_setFont(QTreeWidgetItemH handle, int column, const QFontH font)
{
	((QTreeWidgetItem *)handle)->setFont(column, *(const QFont*)font);
}

C_EXPORT int QTreeWidgetItem_textAlignment(QTreeWidgetItemH handle, int column)
{
	return (int) ((QTreeWidgetItem *)handle)->textAlignment(column);
}

C_EXPORT void QTreeWidgetItem_setTextAlignment(QTreeWidgetItemH handle, int column, int alignment)
{
	((QTreeWidgetItem *)handle)->setTextAlignment(column, alignment);
}

C_EXPORT void QTreeWidgetItem_backgroundColor(QTreeWidgetItemH handle, PQColor retval, int column)
{
	*(QColor *)retval = ((QTreeWidgetItem *)handle)->backgroundColor(column);
}

C_EXPORT void QTreeWidgetItem_setBackgroundColor(QTreeWidgetItemH handle, int column, const QColorH color)
{
	((QTreeWidgetItem *)handle)->setBackgroundColor(column, *(const QColor*)color);
}

C_EXPORT void QTreeWidgetItem_background(QTreeWidgetItemH handle, QBrushH retval, int column)
{
	*(QBrush *)retval = ((QTreeWidgetItem *)handle)->background(column);
}

C_EXPORT void QTreeWidgetItem_setBackground(QTreeWidgetItemH handle, int column, const QBrushH brush)
{
	((QTreeWidgetItem *)handle)->setBackground(column, *(const QBrush*)brush);
}

C_EXPORT void QTreeWidgetItem_textColor(QTreeWidgetItemH handle, PQColor retval, int column)
{
	*(QColor *)retval = ((QTreeWidgetItem *)handle)->textColor(column);
}

C_EXPORT void QTreeWidgetItem_setTextColor(QTreeWidgetItemH handle, int column, const QColorH color)
{
	((QTreeWidgetItem *)handle)->setTextColor(column, *(const QColor*)color);
}

C_EXPORT void QTreeWidgetItem_foreground(QTreeWidgetItemH handle, QBrushH retval, int column)
{
	*(QBrush *)retval = ((QTreeWidgetItem *)handle)->foreground(column);
}

C_EXPORT void QTreeWidgetItem_setForeground(QTreeWidgetItemH handle, int column, const QBrushH brush)
{
	((QTreeWidgetItem *)handle)->setForeground(column, *(const QBrush*)brush);
}

C_EXPORT Qt::CheckState QTreeWidgetItem_checkState(QTreeWidgetItemH handle, int column)
{
	return (Qt::CheckState) ((QTreeWidgetItem *)handle)->checkState(column);
}

C_EXPORT void QTreeWidgetItem_setCheckState(QTreeWidgetItemH handle, int column, Qt::CheckState state)
{
	((QTreeWidgetItem *)handle)->setCheckState(column, state);
}

C_EXPORT void QTreeWidgetItem_sizeHint(QTreeWidgetItemH handle, PSize retval, int column)
{
	*(QSize *)retval = ((QTreeWidgetItem *)handle)->sizeHint(column);
}

C_EXPORT void QTreeWidgetItem_setSizeHint(QTreeWidgetItemH handle, int column, const QSizeH size)
{
	((QTreeWidgetItem *)handle)->setSizeHint(column, *(const QSize*)size);
}

C_EXPORT void QTreeWidgetItem_data(QTreeWidgetItemH handle, QVariantH retval, int column, int role)
{
	*(QVariant *)retval = ((QTreeWidgetItem *)handle)->data(column, role);
}

C_EXPORT void QTreeWidgetItem_setData(QTreeWidgetItemH handle, int column, int role, const QVariantH value)
{
	((QTreeWidgetItem *)handle)->setData(column, role, *(const QVariant*)value);
}

C_EXPORT void QTreeWidgetItem_read(QTreeWidgetItemH handle, QDataStreamH in)
{
	((QTreeWidgetItem *)handle)->read(*(QDataStream*)in);
}

C_EXPORT void QTreeWidgetItem_write(QTreeWidgetItemH handle, QDataStreamH out)
{
	((QTreeWidgetItem *)handle)->write(*(QDataStream*)out);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_parent(QTreeWidgetItemH handle)
{
	return (QTreeWidgetItemH) ((QTreeWidgetItem *)handle)->parent();
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_child(QTreeWidgetItemH handle, int index)
{
	return (QTreeWidgetItemH) ((QTreeWidgetItem *)handle)->child(index);
}

C_EXPORT int QTreeWidgetItem_childCount(QTreeWidgetItemH handle)
{
	return (int) ((QTreeWidgetItem *)handle)->childCount();
}

C_EXPORT int QTreeWidgetItem_columnCount(QTreeWidgetItemH handle)
{
	return (int) ((QTreeWidgetItem *)handle)->columnCount();
}

C_EXPORT int QTreeWidgetItem_indexOfChild(QTreeWidgetItemH handle, QTreeWidgetItemH child)
{
	return (int) ((QTreeWidgetItem *)handle)->indexOfChild((QTreeWidgetItem*)child);
}

C_EXPORT void QTreeWidgetItem_addChild(QTreeWidgetItemH handle, QTreeWidgetItemH child)
{
	((QTreeWidgetItem *)handle)->addChild((QTreeWidgetItem*)child);
}

C_EXPORT void QTreeWidgetItem_insertChild(QTreeWidgetItemH handle, int index, QTreeWidgetItemH child)
{
	((QTreeWidgetItem *)handle)->insertChild(index, (QTreeWidgetItem*)child);
}

C_EXPORT void QTreeWidgetItem_removeChild(QTreeWidgetItemH handle, QTreeWidgetItemH child)
{
	((QTreeWidgetItem *)handle)->removeChild((QTreeWidgetItem*)child);
}

C_EXPORT QTreeWidgetItemH QTreeWidgetItem_takeChild(QTreeWidgetItemH handle, int index)
{
	return (QTreeWidgetItemH) ((QTreeWidgetItem *)handle)->takeChild(index);
}

C_EXPORT void QTreeWidgetItem_addChildren(QTreeWidgetItemH handle, PPtrIntArray children)
{
	QList<QTreeWidgetItem*> t_children;
	copyPtrIntArrayToQListTemplate(children, t_children);
	((QTreeWidgetItem *)handle)->addChildren(t_children);
}

C_EXPORT void QTreeWidgetItem_insertChildren(QTreeWidgetItemH handle, int index, PPtrIntArray children)
{
	QList<QTreeWidgetItem*> t_children;
	copyPtrIntArrayToQListTemplate(children, t_children);
	((QTreeWidgetItem *)handle)->insertChildren(index, t_children);
}

C_EXPORT void QTreeWidgetItem_takeChildren(QTreeWidgetItemH handle, PPtrIntArray retval)
{
	QList<QTreeWidgetItem*> t_retval;
	t_retval = ((QTreeWidgetItem *)handle)->takeChildren();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT int QTreeWidgetItem_type(QTreeWidgetItemH handle)
{
	return (int) ((QTreeWidgetItem *)handle)->type();
}

C_EXPORT void QTreeWidgetItem_sortChildren(QTreeWidgetItemH handle, int column, Qt::SortOrder order)
{
	((QTreeWidgetItem *)handle)->sortChildren(column, order);
}

C_EXPORT QTreeWidgetH QTreeWidget_create(QWidgetH parent)
{
	return (QTreeWidgetH) new QTreeWidget((QWidget*)parent);
}

C_EXPORT void QTreeWidget_destroy(QTreeWidgetH handle)
{
	delete (QTreeWidget *)handle;
}

C_EXPORT int QTreeWidget_columnCount(QTreeWidgetH handle)
{
	return (int) ((QTreeWidget *)handle)->columnCount();
}

C_EXPORT void QTreeWidget_setColumnCount(QTreeWidgetH handle, int columns)
{
	((QTreeWidget *)handle)->setColumnCount(columns);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_invisibleRootItem(QTreeWidgetH handle)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->invisibleRootItem();
}

C_EXPORT QTreeWidgetItemH QTreeWidget_topLevelItem(QTreeWidgetH handle, int index)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->topLevelItem(index);
}

C_EXPORT int QTreeWidget_topLevelItemCount(QTreeWidgetH handle)
{
	return (int) ((QTreeWidget *)handle)->topLevelItemCount();
}

C_EXPORT void QTreeWidget_insertTopLevelItem(QTreeWidgetH handle, int index, QTreeWidgetItemH item)
{
	((QTreeWidget *)handle)->insertTopLevelItem(index, (QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_addTopLevelItem(QTreeWidgetH handle, QTreeWidgetItemH item)
{
	((QTreeWidget *)handle)->addTopLevelItem((QTreeWidgetItem*)item);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_takeTopLevelItem(QTreeWidgetH handle, int index)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->takeTopLevelItem(index);
}

C_EXPORT int QTreeWidget_indexOfTopLevelItem(QTreeWidgetH handle, QTreeWidgetItemH item)
{
	return (int) ((QTreeWidget *)handle)->indexOfTopLevelItem((QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_insertTopLevelItems(QTreeWidgetH handle, int index, PPtrIntArray items)
{
	QList<QTreeWidgetItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QTreeWidget *)handle)->insertTopLevelItems(index, t_items);
}

C_EXPORT void QTreeWidget_addTopLevelItems(QTreeWidgetH handle, PPtrIntArray items)
{
	QList<QTreeWidgetItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QTreeWidget *)handle)->addTopLevelItems(t_items);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_headerItem(QTreeWidgetH handle)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->headerItem();
}

C_EXPORT void QTreeWidget_setHeaderItem(QTreeWidgetH handle, QTreeWidgetItemH item)
{
	((QTreeWidget *)handle)->setHeaderItem((QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setHeaderLabels(QTreeWidgetH handle, const QStringListH labels)
{
	((QTreeWidget *)handle)->setHeaderLabels(*(const QStringList*)labels);
}

C_EXPORT void QTreeWidget_setHeaderLabel(QTreeWidgetH handle, PWideString label)
{
	QString t_label;
	copyPWideStringToQString(label, t_label);
	((QTreeWidget *)handle)->setHeaderLabel(t_label);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_currentItem(QTreeWidgetH handle)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->currentItem();
}

C_EXPORT int QTreeWidget_currentColumn(QTreeWidgetH handle)
{
	return (int) ((QTreeWidget *)handle)->currentColumn();
}

C_EXPORT void QTreeWidget_setCurrentItem(QTreeWidgetH handle, QTreeWidgetItemH item)
{
	((QTreeWidget *)handle)->setCurrentItem((QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setCurrentItem2(QTreeWidgetH handle, QTreeWidgetItemH item, int column)
{
	((QTreeWidget *)handle)->setCurrentItem((QTreeWidgetItem*)item, column);
}

C_EXPORT void QTreeWidget_setCurrentItem3(QTreeWidgetH handle, QTreeWidgetItemH item, int column, unsigned int command)
{
	((QTreeWidget *)handle)->setCurrentItem((QTreeWidgetItem*)item, column, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_itemAt(QTreeWidgetH handle, const QPointH p)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->itemAt(*(const QPoint*)p);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_itemAt2(QTreeWidgetH handle, int x, int y)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->itemAt(x, y);
}

C_EXPORT void QTreeWidget_visualItemRect(QTreeWidgetH handle, PRect retval, const QTreeWidgetItemH item)
{
	QRect t_retval;
	t_retval = ((QTreeWidget *)handle)->visualItemRect((const QTreeWidgetItem*)item);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT int QTreeWidget_sortColumn(QTreeWidgetH handle)
{
	return (int) ((QTreeWidget *)handle)->sortColumn();
}

C_EXPORT void QTreeWidget_sortItems(QTreeWidgetH handle, int column, Qt::SortOrder order)
{
	((QTreeWidget *)handle)->sortItems(column, order);
}

C_EXPORT void QTreeWidget_setSortingEnabled(QTreeWidgetH handle, bool enable)
{
	((QTreeWidget *)handle)->setSortingEnabled(enable);
}

C_EXPORT bool QTreeWidget_isSortingEnabled(QTreeWidgetH handle)
{
	return (bool) ((QTreeWidget *)handle)->isSortingEnabled();
}

C_EXPORT void QTreeWidget_editItem(QTreeWidgetH handle, QTreeWidgetItemH item, int column)
{
	((QTreeWidget *)handle)->editItem((QTreeWidgetItem*)item, column);
}

C_EXPORT void QTreeWidget_openPersistentEditor(QTreeWidgetH handle, QTreeWidgetItemH item, int column)
{
	((QTreeWidget *)handle)->openPersistentEditor((QTreeWidgetItem*)item, column);
}

C_EXPORT void QTreeWidget_closePersistentEditor(QTreeWidgetH handle, QTreeWidgetItemH item, int column)
{
	((QTreeWidget *)handle)->closePersistentEditor((QTreeWidgetItem*)item, column);
}

C_EXPORT QWidgetH QTreeWidget_itemWidget(QTreeWidgetH handle, QTreeWidgetItemH item, int column)
{
	return (QWidgetH) ((QTreeWidget *)handle)->itemWidget((QTreeWidgetItem*)item, column);
}

C_EXPORT void QTreeWidget_setItemWidget(QTreeWidgetH handle, QTreeWidgetItemH item, int column, QWidgetH widget)
{
	((QTreeWidget *)handle)->setItemWidget((QTreeWidgetItem*)item, column, (QWidget*)widget);
}

C_EXPORT void QTreeWidget_removeItemWidget(QTreeWidgetH handle, QTreeWidgetItemH item, int column)
{
	((QTreeWidget *)handle)->removeItemWidget((QTreeWidgetItem*)item, column);
}

C_EXPORT bool QTreeWidget_isItemSelected(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	return (bool) ((QTreeWidget *)handle)->isItemSelected((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setItemSelected(QTreeWidgetH handle, const QTreeWidgetItemH item, bool select)
{
	((QTreeWidget *)handle)->setItemSelected((const QTreeWidgetItem*)item, select);
}

C_EXPORT void QTreeWidget_selectedItems(QTreeWidgetH handle, PPtrIntArray retval)
{
	QList<QTreeWidgetItem*> t_retval;
	t_retval = ((QTreeWidget *)handle)->selectedItems();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QTreeWidget_findItems(QTreeWidgetH handle, PPtrIntArray retval, PWideString text, unsigned int flags, int column)
{
	QList<QTreeWidgetItem*> t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QTreeWidget *)handle)->findItems(t_text, (Qt::MatchFlags)flags, column);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT bool QTreeWidget_isItemHidden(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	return (bool) ((QTreeWidget *)handle)->isItemHidden((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setItemHidden(QTreeWidgetH handle, const QTreeWidgetItemH item, bool hide)
{
	((QTreeWidget *)handle)->setItemHidden((const QTreeWidgetItem*)item, hide);
}

C_EXPORT bool QTreeWidget_isItemExpanded(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	return (bool) ((QTreeWidget *)handle)->isItemExpanded((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setItemExpanded(QTreeWidgetH handle, const QTreeWidgetItemH item, bool expand)
{
	((QTreeWidget *)handle)->setItemExpanded((const QTreeWidgetItem*)item, expand);
}

C_EXPORT bool QTreeWidget_isFirstItemColumnSpanned(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	return (bool) ((QTreeWidget *)handle)->isFirstItemColumnSpanned((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setFirstItemColumnSpanned(QTreeWidgetH handle, const QTreeWidgetItemH item, bool span)
{
	((QTreeWidget *)handle)->setFirstItemColumnSpanned((const QTreeWidgetItem*)item, span);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_itemAbove(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->itemAbove((const QTreeWidgetItem*)item);
}

C_EXPORT QTreeWidgetItemH QTreeWidget_itemBelow(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	return (QTreeWidgetItemH) ((QTreeWidget *)handle)->itemBelow((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_setSelectionModel(QTreeWidgetH handle, QItemSelectionModelH selectionModel)
{
	((QTreeWidget *)handle)->setSelectionModel((QItemSelectionModel*)selectionModel);
}

C_EXPORT void QTreeWidget_scrollToItem(QTreeWidgetH handle, const QTreeWidgetItemH item, QAbstractItemView::ScrollHint hint)
{
	((QTreeWidget *)handle)->scrollToItem((const QTreeWidgetItem*)item, hint);
}

C_EXPORT void QTreeWidget_expandItem(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	((QTreeWidget *)handle)->expandItem((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_collapseItem(QTreeWidgetH handle, const QTreeWidgetItemH item)
{
	((QTreeWidget *)handle)->collapseItem((const QTreeWidgetItem*)item);
}

C_EXPORT void QTreeWidget_clear(QTreeWidgetH handle)
{
	((QTreeWidget *)handle)->clear();
}

