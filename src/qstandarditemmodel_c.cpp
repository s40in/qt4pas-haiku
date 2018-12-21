//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QStandardItemH QStandardItem_create()
{
	return (QStandardItemH) new QStandardItem();
}

C_EXPORT void QStandardItem_destroy(QStandardItemH handle)
{
	delete (QStandardItem *)handle;
}

C_EXPORT QStandardItemH QStandardItem_create2(PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QStandardItemH) new QStandardItem(t_text);
}

C_EXPORT QStandardItemH QStandardItem_create3(const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QStandardItemH) new QStandardItem(*(const QIcon*)icon, t_text);
}

C_EXPORT QStandardItemH QStandardItem_create4(int rows, int columns)
{
	return (QStandardItemH) new QStandardItem(rows, columns);
}

C_EXPORT void QStandardItem_data(QStandardItemH handle, QVariantH retval, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QStandardItem *)handle)->data(role);
}

C_EXPORT void QStandardItem_setData(QStandardItemH handle, const QVariantH value, Qt::ItemDataRole role)
{
	((QStandardItem *)handle)->setData(*(const QVariant*)value, role);
}

C_EXPORT void QStandardItem_text(QStandardItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStandardItem *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStandardItem_setText(QStandardItemH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QStandardItem *)handle)->setText(t_text);
}

C_EXPORT void QStandardItem_icon(QStandardItemH handle, QIconH retval)
{
	*(QIcon *)retval = ((QStandardItem *)handle)->icon();
}

C_EXPORT void QStandardItem_setIcon(QStandardItemH handle, const QIconH icon)
{
	((QStandardItem *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QStandardItem_toolTip(QStandardItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStandardItem *)handle)->toolTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStandardItem_setToolTip(QStandardItemH handle, PWideString toolTip)
{
	QString t_toolTip;
	copyPWideStringToQString(toolTip, t_toolTip);
	((QStandardItem *)handle)->setToolTip(t_toolTip);
}

C_EXPORT void QStandardItem_statusTip(QStandardItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStandardItem *)handle)->statusTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStandardItem_setStatusTip(QStandardItemH handle, PWideString statusTip)
{
	QString t_statusTip;
	copyPWideStringToQString(statusTip, t_statusTip);
	((QStandardItem *)handle)->setStatusTip(t_statusTip);
}

C_EXPORT void QStandardItem_whatsThis(QStandardItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStandardItem *)handle)->whatsThis();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStandardItem_setWhatsThis(QStandardItemH handle, PWideString whatsThis)
{
	QString t_whatsThis;
	copyPWideStringToQString(whatsThis, t_whatsThis);
	((QStandardItem *)handle)->setWhatsThis(t_whatsThis);
}

C_EXPORT void QStandardItem_sizeHint(QStandardItemH handle, PSize retval)
{
	*(QSize *)retval = ((QStandardItem *)handle)->sizeHint();
}

C_EXPORT void QStandardItem_setSizeHint(QStandardItemH handle, const QSizeH sizeHint)
{
	((QStandardItem *)handle)->setSizeHint(*(const QSize*)sizeHint);
}

C_EXPORT void QStandardItem_font(QStandardItemH handle, QFontH retval)
{
	*(QFont *)retval = ((QStandardItem *)handle)->font();
}

C_EXPORT void QStandardItem_setFont(QStandardItemH handle, const QFontH font)
{
	((QStandardItem *)handle)->setFont(*(const QFont*)font);
}

C_EXPORT unsigned int QStandardItem_textAlignment(QStandardItemH handle)
{
	return (unsigned int) ((QStandardItem *)handle)->textAlignment();
}

C_EXPORT void QStandardItem_setTextAlignment(QStandardItemH handle, unsigned int textAlignment)
{
	((QStandardItem *)handle)->setTextAlignment((Qt::Alignment)textAlignment);
}

C_EXPORT void QStandardItem_background(QStandardItemH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QStandardItem *)handle)->background();
}

C_EXPORT void QStandardItem_setBackground(QStandardItemH handle, const QBrushH brush)
{
	((QStandardItem *)handle)->setBackground(*(const QBrush*)brush);
}

C_EXPORT void QStandardItem_foreground(QStandardItemH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QStandardItem *)handle)->foreground();
}

C_EXPORT void QStandardItem_setForeground(QStandardItemH handle, const QBrushH brush)
{
	((QStandardItem *)handle)->setForeground(*(const QBrush*)brush);
}

C_EXPORT Qt::CheckState QStandardItem_checkState(QStandardItemH handle)
{
	return (Qt::CheckState) ((QStandardItem *)handle)->checkState();
}

C_EXPORT void QStandardItem_setCheckState(QStandardItemH handle, Qt::CheckState checkState)
{
	((QStandardItem *)handle)->setCheckState(checkState);
}

C_EXPORT void QStandardItem_accessibleText(QStandardItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStandardItem *)handle)->accessibleText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStandardItem_setAccessibleText(QStandardItemH handle, PWideString accessibleText)
{
	QString t_accessibleText;
	copyPWideStringToQString(accessibleText, t_accessibleText);
	((QStandardItem *)handle)->setAccessibleText(t_accessibleText);
}

C_EXPORT void QStandardItem_accessibleDescription(QStandardItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStandardItem *)handle)->accessibleDescription();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QStandardItem_setAccessibleDescription(QStandardItemH handle, PWideString accessibleDescription)
{
	QString t_accessibleDescription;
	copyPWideStringToQString(accessibleDescription, t_accessibleDescription);
	((QStandardItem *)handle)->setAccessibleDescription(t_accessibleDescription);
}

C_EXPORT unsigned int QStandardItem_flags(QStandardItemH handle)
{
	return (unsigned int) ((QStandardItem *)handle)->flags();
}

C_EXPORT void QStandardItem_setFlags(QStandardItemH handle, unsigned int flags)
{
	((QStandardItem *)handle)->setFlags((Qt::ItemFlags)flags);
}

C_EXPORT bool QStandardItem_isEnabled(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isEnabled();
}

C_EXPORT void QStandardItem_setEnabled(QStandardItemH handle, bool enabled)
{
	((QStandardItem *)handle)->setEnabled(enabled);
}

C_EXPORT bool QStandardItem_isEditable(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isEditable();
}

C_EXPORT void QStandardItem_setEditable(QStandardItemH handle, bool editable)
{
	((QStandardItem *)handle)->setEditable(editable);
}

C_EXPORT bool QStandardItem_isSelectable(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isSelectable();
}

C_EXPORT void QStandardItem_setSelectable(QStandardItemH handle, bool selectable)
{
	((QStandardItem *)handle)->setSelectable(selectable);
}

C_EXPORT bool QStandardItem_isCheckable(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isCheckable();
}

C_EXPORT void QStandardItem_setCheckable(QStandardItemH handle, bool checkable)
{
	((QStandardItem *)handle)->setCheckable(checkable);
}

C_EXPORT bool QStandardItem_isTristate(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isTristate();
}

C_EXPORT void QStandardItem_setTristate(QStandardItemH handle, bool tristate)
{
	((QStandardItem *)handle)->setTristate(tristate);
}

C_EXPORT bool QStandardItem_isDragEnabled(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isDragEnabled();
}

C_EXPORT void QStandardItem_setDragEnabled(QStandardItemH handle, bool dragEnabled)
{
	((QStandardItem *)handle)->setDragEnabled(dragEnabled);
}

C_EXPORT bool QStandardItem_isDropEnabled(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->isDropEnabled();
}

C_EXPORT void QStandardItem_setDropEnabled(QStandardItemH handle, bool dropEnabled)
{
	((QStandardItem *)handle)->setDropEnabled(dropEnabled);
}

C_EXPORT QStandardItemH QStandardItem_parent(QStandardItemH handle)
{
	return (QStandardItemH) ((QStandardItem *)handle)->parent();
}

C_EXPORT int QStandardItem_row(QStandardItemH handle)
{
	return (int) ((QStandardItem *)handle)->row();
}

C_EXPORT int QStandardItem_column(QStandardItemH handle)
{
	return (int) ((QStandardItem *)handle)->column();
}

C_EXPORT void QStandardItem_index(QStandardItemH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QStandardItem *)handle)->index();
}

C_EXPORT QStandardItemModelH QStandardItem_model(QStandardItemH handle)
{
	return (QStandardItemModelH) ((QStandardItem *)handle)->model();
}

C_EXPORT int QStandardItem_rowCount(QStandardItemH handle)
{
	return (int) ((QStandardItem *)handle)->rowCount();
}

C_EXPORT void QStandardItem_setRowCount(QStandardItemH handle, int rows)
{
	((QStandardItem *)handle)->setRowCount(rows);
}

C_EXPORT int QStandardItem_columnCount(QStandardItemH handle)
{
	return (int) ((QStandardItem *)handle)->columnCount();
}

C_EXPORT void QStandardItem_setColumnCount(QStandardItemH handle, int columns)
{
	((QStandardItem *)handle)->setColumnCount(columns);
}

C_EXPORT bool QStandardItem_hasChildren(QStandardItemH handle)
{
	return (bool) ((QStandardItem *)handle)->hasChildren();
}

C_EXPORT QStandardItemH QStandardItem_child(QStandardItemH handle, int row, int column)
{
	return (QStandardItemH) ((QStandardItem *)handle)->child(row, column);
}

C_EXPORT void QStandardItem_setChild(QStandardItemH handle, int row, int column, QStandardItemH item)
{
	((QStandardItem *)handle)->setChild(row, column, (QStandardItem*)item);
}

C_EXPORT void QStandardItem_setChild2(QStandardItemH handle, int row, QStandardItemH item)
{
	((QStandardItem *)handle)->setChild(row, (QStandardItem*)item);
}

C_EXPORT void QStandardItem_insertRow(QStandardItemH handle, int row, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItem *)handle)->insertRow(row, t_items);
}

C_EXPORT void QStandardItem_insertColumn(QStandardItemH handle, int column, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItem *)handle)->insertColumn(column, t_items);
}

C_EXPORT void QStandardItem_insertRows(QStandardItemH handle, int row, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItem *)handle)->insertRows(row, t_items);
}

C_EXPORT void QStandardItem_insertRows2(QStandardItemH handle, int row, int count)
{
	((QStandardItem *)handle)->insertRows(row, count);
}

C_EXPORT void QStandardItem_insertColumns(QStandardItemH handle, int column, int count)
{
	((QStandardItem *)handle)->insertColumns(column, count);
}

C_EXPORT void QStandardItem_removeRow(QStandardItemH handle, int row)
{
	((QStandardItem *)handle)->removeRow(row);
}

C_EXPORT void QStandardItem_removeColumn(QStandardItemH handle, int column)
{
	((QStandardItem *)handle)->removeColumn(column);
}

C_EXPORT void QStandardItem_removeRows(QStandardItemH handle, int row, int count)
{
	((QStandardItem *)handle)->removeRows(row, count);
}

C_EXPORT void QStandardItem_removeColumns(QStandardItemH handle, int column, int count)
{
	((QStandardItem *)handle)->removeColumns(column, count);
}

C_EXPORT void QStandardItem_appendRow(QStandardItemH handle, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItem *)handle)->appendRow(t_items);
}

C_EXPORT void QStandardItem_appendRows(QStandardItemH handle, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItem *)handle)->appendRows(t_items);
}

C_EXPORT void QStandardItem_appendColumn(QStandardItemH handle, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItem *)handle)->appendColumn(t_items);
}

C_EXPORT void QStandardItem_insertRow2(QStandardItemH handle, int row, QStandardItemH item)
{
	((QStandardItem *)handle)->insertRow(row, (QStandardItem*)item);
}

C_EXPORT void QStandardItem_appendRow2(QStandardItemH handle, QStandardItemH item)
{
	((QStandardItem *)handle)->appendRow((QStandardItem*)item);
}

C_EXPORT QStandardItemH QStandardItem_takeChild(QStandardItemH handle, int row, int column)
{
	return (QStandardItemH) ((QStandardItem *)handle)->takeChild(row, column);
}

C_EXPORT void QStandardItem_takeRow(QStandardItemH handle, PPtrIntArray retval, int row)
{
	QList<QStandardItem*> t_retval;
	t_retval = ((QStandardItem *)handle)->takeRow(row);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QStandardItem_takeColumn(QStandardItemH handle, PPtrIntArray retval, int column)
{
	QList<QStandardItem*> t_retval;
	t_retval = ((QStandardItem *)handle)->takeColumn(column);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QStandardItem_sortChildren(QStandardItemH handle, int column, Qt::SortOrder order)
{
	((QStandardItem *)handle)->sortChildren(column, order);
}

C_EXPORT QStandardItemH QStandardItem_clone(QStandardItemH handle)
{
	return (QStandardItemH) ((QStandardItem *)handle)->clone();
}

C_EXPORT int QStandardItem_type(QStandardItemH handle)
{
	return (int) ((QStandardItem *)handle)->type();
}

C_EXPORT void QStandardItem_read(QStandardItemH handle, QDataStreamH in)
{
	((QStandardItem *)handle)->read(*(QDataStream*)in);
}

C_EXPORT void QStandardItem_write(QStandardItemH handle, QDataStreamH out)
{
	((QStandardItem *)handle)->write(*(QDataStream*)out);
}

C_EXPORT QStandardItemModelH QStandardItemModel_create(QObjectH parent)
{
	return (QStandardItemModelH) new QStandardItemModel((QObject*)parent);
}

C_EXPORT void QStandardItemModel_destroy(QStandardItemModelH handle)
{
	delete (QStandardItemModel *)handle;
}

C_EXPORT QStandardItemModelH QStandardItemModel_create2(int rows, int columns, QObjectH parent)
{
	return (QStandardItemModelH) new QStandardItemModel(rows, columns, (QObject*)parent);
}

C_EXPORT void QStandardItemModel_index(QStandardItemModelH handle, QModelIndexH retval, int row, int column, const QModelIndexH parent)
{
	*(QModelIndex *)retval = ((QStandardItemModel *)handle)->index(row, column, *(const QModelIndex*)parent);
}

C_EXPORT void QStandardItemModel_parent(QStandardItemModelH handle, QModelIndexH retval, const QModelIndexH child)
{
	*(QModelIndex *)retval = ((QStandardItemModel *)handle)->parent(*(const QModelIndex*)child);
}

C_EXPORT int QStandardItemModel_rowCount(QStandardItemModelH handle, const QModelIndexH parent)
{
	return (int) ((QStandardItemModel *)handle)->rowCount(*(const QModelIndex*)parent);
}

C_EXPORT int QStandardItemModel_columnCount(QStandardItemModelH handle, const QModelIndexH parent)
{
	return (int) ((QStandardItemModel *)handle)->columnCount(*(const QModelIndex*)parent);
}

C_EXPORT bool QStandardItemModel_hasChildren(QStandardItemModelH handle, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->hasChildren(*(const QModelIndex*)parent);
}

C_EXPORT void QStandardItemModel_data(QStandardItemModelH handle, QVariantH retval, const QModelIndexH index, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QStandardItemModel *)handle)->data(*(const QModelIndex*)index, role);
}

C_EXPORT bool QStandardItemModel_setData(QStandardItemModelH handle, const QModelIndexH index, const QVariantH value, Qt::ItemDataRole role)
{
	return (bool) ((QStandardItemModel *)handle)->setData(*(const QModelIndex*)index, *(const QVariant*)value, role);
}

C_EXPORT void QStandardItemModel_headerData(QStandardItemModelH handle, QVariantH retval, int section, Qt::Orientation orientation, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QStandardItemModel *)handle)->headerData(section, orientation, role);
}

C_EXPORT bool QStandardItemModel_setHeaderData(QStandardItemModelH handle, int section, Qt::Orientation orientation, const QVariantH value, Qt::ItemDataRole role)
{
	return (bool) ((QStandardItemModel *)handle)->setHeaderData(section, orientation, *(const QVariant*)value, role);
}

C_EXPORT bool QStandardItemModel_insertRows(QStandardItemModelH handle, int row, int count, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->insertRows(row, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QStandardItemModel_insertColumns(QStandardItemModelH handle, int column, int count, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->insertColumns(column, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QStandardItemModel_removeRows(QStandardItemModelH handle, int row, int count, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->removeRows(row, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QStandardItemModel_removeColumns(QStandardItemModelH handle, int column, int count, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->removeColumns(column, count, *(const QModelIndex*)parent);
}

C_EXPORT unsigned int QStandardItemModel_flags(QStandardItemModelH handle, const QModelIndexH index)
{
	return (unsigned int) ((QStandardItemModel *)handle)->flags(*(const QModelIndex*)index);
}

C_EXPORT unsigned int QStandardItemModel_supportedDropActions(QStandardItemModelH handle)
{
	return (unsigned int) ((QStandardItemModel *)handle)->supportedDropActions();
}

C_EXPORT void QStandardItemModel_clear(QStandardItemModelH handle)
{
	((QStandardItemModel *)handle)->clear();
}

C_EXPORT void QStandardItemModel_sort(QStandardItemModelH handle, int column, Qt::SortOrder order)
{
	((QStandardItemModel *)handle)->sort(column, order);
}

C_EXPORT QStandardItemH QStandardItemModel_itemFromIndex(QStandardItemModelH handle, const QModelIndexH index)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->itemFromIndex(*(const QModelIndex*)index);
}

C_EXPORT void QStandardItemModel_indexFromItem(QStandardItemModelH handle, QModelIndexH retval, const QStandardItemH item)
{
	*(QModelIndex *)retval = ((QStandardItemModel *)handle)->indexFromItem((const QStandardItem*)item);
}

C_EXPORT QStandardItemH QStandardItemModel_item(QStandardItemModelH handle, int row, int column)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->item(row, column);
}

C_EXPORT void QStandardItemModel_setItem(QStandardItemModelH handle, int row, int column, QStandardItemH item)
{
	((QStandardItemModel *)handle)->setItem(row, column, (QStandardItem*)item);
}

C_EXPORT void QStandardItemModel_setItem2(QStandardItemModelH handle, int row, QStandardItemH item)
{
	((QStandardItemModel *)handle)->setItem(row, (QStandardItem*)item);
}

C_EXPORT QStandardItemH QStandardItemModel_invisibleRootItem(QStandardItemModelH handle)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->invisibleRootItem();
}

C_EXPORT QStandardItemH QStandardItemModel_horizontalHeaderItem(QStandardItemModelH handle, int column)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->horizontalHeaderItem(column);
}

C_EXPORT void QStandardItemModel_setHorizontalHeaderItem(QStandardItemModelH handle, int column, QStandardItemH item)
{
	((QStandardItemModel *)handle)->setHorizontalHeaderItem(column, (QStandardItem*)item);
}

C_EXPORT QStandardItemH QStandardItemModel_verticalHeaderItem(QStandardItemModelH handle, int row)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->verticalHeaderItem(row);
}

C_EXPORT void QStandardItemModel_setVerticalHeaderItem(QStandardItemModelH handle, int row, QStandardItemH item)
{
	((QStandardItemModel *)handle)->setVerticalHeaderItem(row, (QStandardItem*)item);
}

C_EXPORT void QStandardItemModel_setHorizontalHeaderLabels(QStandardItemModelH handle, const QStringListH labels)
{
	((QStandardItemModel *)handle)->setHorizontalHeaderLabels(*(const QStringList*)labels);
}

C_EXPORT void QStandardItemModel_setVerticalHeaderLabels(QStandardItemModelH handle, const QStringListH labels)
{
	((QStandardItemModel *)handle)->setVerticalHeaderLabels(*(const QStringList*)labels);
}

C_EXPORT void QStandardItemModel_setRowCount(QStandardItemModelH handle, int rows)
{
	((QStandardItemModel *)handle)->setRowCount(rows);
}

C_EXPORT void QStandardItemModel_setColumnCount(QStandardItemModelH handle, int columns)
{
	((QStandardItemModel *)handle)->setColumnCount(columns);
}

C_EXPORT void QStandardItemModel_appendRow(QStandardItemModelH handle, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItemModel *)handle)->appendRow(t_items);
}

C_EXPORT void QStandardItemModel_appendColumn(QStandardItemModelH handle, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItemModel *)handle)->appendColumn(t_items);
}

C_EXPORT void QStandardItemModel_appendRow2(QStandardItemModelH handle, QStandardItemH item)
{
	((QStandardItemModel *)handle)->appendRow((QStandardItem*)item);
}

C_EXPORT void QStandardItemModel_insertRow(QStandardItemModelH handle, int row, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItemModel *)handle)->insertRow(row, t_items);
}

C_EXPORT void QStandardItemModel_insertColumn(QStandardItemModelH handle, int column, PPtrIntArray items)
{
	QList<QStandardItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	((QStandardItemModel *)handle)->insertColumn(column, t_items);
}

C_EXPORT void QStandardItemModel_insertRow2(QStandardItemModelH handle, int row, QStandardItemH item)
{
	((QStandardItemModel *)handle)->insertRow(row, (QStandardItem*)item);
}

C_EXPORT bool QStandardItemModel_insertRow3(QStandardItemModelH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->insertRow(row, *(const QModelIndex*)parent);
}

C_EXPORT bool QStandardItemModel_insertColumn2(QStandardItemModelH handle, int column, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->insertColumn(column, *(const QModelIndex*)parent);
}

C_EXPORT QStandardItemH QStandardItemModel_takeItem(QStandardItemModelH handle, int row, int column)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->takeItem(row, column);
}

C_EXPORT void QStandardItemModel_takeRow(QStandardItemModelH handle, PPtrIntArray retval, int row)
{
	QList<QStandardItem*> t_retval;
	t_retval = ((QStandardItemModel *)handle)->takeRow(row);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QStandardItemModel_takeColumn(QStandardItemModelH handle, PPtrIntArray retval, int column)
{
	QList<QStandardItem*> t_retval;
	t_retval = ((QStandardItemModel *)handle)->takeColumn(column);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QStandardItemH QStandardItemModel_takeHorizontalHeaderItem(QStandardItemModelH handle, int column)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->takeHorizontalHeaderItem(column);
}

C_EXPORT QStandardItemH QStandardItemModel_takeVerticalHeaderItem(QStandardItemModelH handle, int row)
{
	return (QStandardItemH) ((QStandardItemModel *)handle)->takeVerticalHeaderItem(row);
}

C_EXPORT const QStandardItemH QStandardItemModel_itemPrototype(QStandardItemModelH handle)
{
	return (const QStandardItemH) ((QStandardItemModel *)handle)->itemPrototype();
}

C_EXPORT void QStandardItemModel_setItemPrototype(QStandardItemModelH handle, const QStandardItemH item)
{
	((QStandardItemModel *)handle)->setItemPrototype((const QStandardItem*)item);
}

C_EXPORT void QStandardItemModel_findItems(QStandardItemModelH handle, PPtrIntArray retval, PWideString text, unsigned int flags, int column)
{
	QList<QStandardItem*> t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QStandardItemModel *)handle)->findItems(t_text, (Qt::MatchFlags)flags, column);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT int QStandardItemModel_sortRole(QStandardItemModelH handle)
{
	return (int) ((QStandardItemModel *)handle)->sortRole();
}

C_EXPORT void QStandardItemModel_setSortRole(QStandardItemModelH handle, int role)
{
	((QStandardItemModel *)handle)->setSortRole(role);
}

C_EXPORT void QStandardItemModel_mimeTypes(QStandardItemModelH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QStandardItemModel *)handle)->mimeTypes();
}

C_EXPORT bool QStandardItemModel_dropMimeData(QStandardItemModelH handle, const QMimeDataH data, Qt::DropAction action, int row, int column, const QModelIndexH parent)
{
	return (bool) ((QStandardItemModel *)handle)->dropMimeData((const QMimeData*)data, action, row, column, *(const QModelIndex*)parent);
}

