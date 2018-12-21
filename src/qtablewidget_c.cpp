//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTableWidgetSelectionRangeH QTableWidgetSelectionRange_create()
{
	return (QTableWidgetSelectionRangeH) new QTableWidgetSelectionRange();
}

C_EXPORT void QTableWidgetSelectionRange_destroy(QTableWidgetSelectionRangeH handle)
{
	delete (QTableWidgetSelectionRange *)handle;
}

C_EXPORT QTableWidgetSelectionRangeH QTableWidgetSelectionRange_create2(int top, int left, int bottom, int right)
{
	return (QTableWidgetSelectionRangeH) new QTableWidgetSelectionRange(top, left, bottom, right);
}

C_EXPORT QTableWidgetSelectionRangeH QTableWidgetSelectionRange_create3(const QTableWidgetSelectionRangeH other)
{
	return (QTableWidgetSelectionRangeH) new QTableWidgetSelectionRange(*(const QTableWidgetSelectionRange*)other);
}

C_EXPORT int QTableWidgetSelectionRange_topRow(QTableWidgetSelectionRangeH handle)
{
	return (int) ((QTableWidgetSelectionRange *)handle)->topRow();
}

C_EXPORT int QTableWidgetSelectionRange_bottomRow(QTableWidgetSelectionRangeH handle)
{
	return (int) ((QTableWidgetSelectionRange *)handle)->bottomRow();
}

C_EXPORT int QTableWidgetSelectionRange_leftColumn(QTableWidgetSelectionRangeH handle)
{
	return (int) ((QTableWidgetSelectionRange *)handle)->leftColumn();
}

C_EXPORT int QTableWidgetSelectionRange_rightColumn(QTableWidgetSelectionRangeH handle)
{
	return (int) ((QTableWidgetSelectionRange *)handle)->rightColumn();
}

C_EXPORT int QTableWidgetSelectionRange_rowCount(QTableWidgetSelectionRangeH handle)
{
	return (int) ((QTableWidgetSelectionRange *)handle)->rowCount();
}

C_EXPORT int QTableWidgetSelectionRange_columnCount(QTableWidgetSelectionRangeH handle)
{
	return (int) ((QTableWidgetSelectionRange *)handle)->columnCount();
}

C_EXPORT QTableWidgetItemH QTableWidgetItem_create(int type)
{
	return (QTableWidgetItemH) new QTableWidgetItem(type);
}

C_EXPORT void QTableWidgetItem_destroy(QTableWidgetItemH handle)
{
	delete (QTableWidgetItem *)handle;
}

C_EXPORT QTableWidgetItemH QTableWidgetItem_create2(PWideString text, int type)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QTableWidgetItemH) new QTableWidgetItem(t_text, type);
}

C_EXPORT QTableWidgetItemH QTableWidgetItem_create3(const QIconH icon, PWideString text, int type)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QTableWidgetItemH) new QTableWidgetItem(*(const QIcon*)icon, t_text, type);
}

C_EXPORT QTableWidgetItemH QTableWidgetItem_create4(const QTableWidgetItemH other)
{
	return (QTableWidgetItemH) new QTableWidgetItem(*(const QTableWidgetItem*)other);
}

C_EXPORT QTableWidgetItemH QTableWidgetItem_clone(QTableWidgetItemH handle)
{
	return (QTableWidgetItemH) ((QTableWidgetItem *)handle)->clone();
}

C_EXPORT QTableWidgetH QTableWidgetItem_tableWidget(QTableWidgetItemH handle)
{
	return (QTableWidgetH) ((QTableWidgetItem *)handle)->tableWidget();
}

C_EXPORT int QTableWidgetItem_row(QTableWidgetItemH handle)
{
	return (int) ((QTableWidgetItem *)handle)->row();
}

C_EXPORT int QTableWidgetItem_column(QTableWidgetItemH handle)
{
	return (int) ((QTableWidgetItem *)handle)->column();
}

C_EXPORT void QTableWidgetItem_setSelected(QTableWidgetItemH handle, bool select)
{
	((QTableWidgetItem *)handle)->setSelected(select);
}

C_EXPORT bool QTableWidgetItem_isSelected(QTableWidgetItemH handle)
{
	return (bool) ((QTableWidgetItem *)handle)->isSelected();
}

C_EXPORT unsigned int QTableWidgetItem_flags(QTableWidgetItemH handle)
{
	return (unsigned int) ((QTableWidgetItem *)handle)->flags();
}

C_EXPORT void QTableWidgetItem_setFlags(QTableWidgetItemH handle, unsigned int flags)
{
	((QTableWidgetItem *)handle)->setFlags((Qt::ItemFlags)flags);
}

C_EXPORT void QTableWidgetItem_text(QTableWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTableWidgetItem *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTableWidgetItem_setText(QTableWidgetItemH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTableWidgetItem *)handle)->setText(t_text);
}

C_EXPORT void QTableWidgetItem_icon(QTableWidgetItemH handle, QIconH retval)
{
	*(QIcon *)retval = ((QTableWidgetItem *)handle)->icon();
}

C_EXPORT void QTableWidgetItem_setIcon(QTableWidgetItemH handle, const QIconH icon)
{
	((QTableWidgetItem *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QTableWidgetItem_statusTip(QTableWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTableWidgetItem *)handle)->statusTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTableWidgetItem_setStatusTip(QTableWidgetItemH handle, PWideString statusTip)
{
	QString t_statusTip;
	copyPWideStringToQString(statusTip, t_statusTip);
	((QTableWidgetItem *)handle)->setStatusTip(t_statusTip);
}

C_EXPORT void QTableWidgetItem_toolTip(QTableWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTableWidgetItem *)handle)->toolTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTableWidgetItem_setToolTip(QTableWidgetItemH handle, PWideString toolTip)
{
	QString t_toolTip;
	copyPWideStringToQString(toolTip, t_toolTip);
	((QTableWidgetItem *)handle)->setToolTip(t_toolTip);
}

C_EXPORT void QTableWidgetItem_whatsThis(QTableWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTableWidgetItem *)handle)->whatsThis();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTableWidgetItem_setWhatsThis(QTableWidgetItemH handle, PWideString whatsThis)
{
	QString t_whatsThis;
	copyPWideStringToQString(whatsThis, t_whatsThis);
	((QTableWidgetItem *)handle)->setWhatsThis(t_whatsThis);
}

C_EXPORT void QTableWidgetItem_font(QTableWidgetItemH handle, QFontH retval)
{
	*(QFont *)retval = ((QTableWidgetItem *)handle)->font();
}

C_EXPORT void QTableWidgetItem_setFont(QTableWidgetItemH handle, const QFontH font)
{
	((QTableWidgetItem *)handle)->setFont(*(const QFont*)font);
}

C_EXPORT int QTableWidgetItem_textAlignment(QTableWidgetItemH handle)
{
	return (int) ((QTableWidgetItem *)handle)->textAlignment();
}

C_EXPORT void QTableWidgetItem_setTextAlignment(QTableWidgetItemH handle, int alignment)
{
	((QTableWidgetItem *)handle)->setTextAlignment(alignment);
}

C_EXPORT void QTableWidgetItem_backgroundColor(QTableWidgetItemH handle, PQColor retval)
{
	*(QColor *)retval = ((QTableWidgetItem *)handle)->backgroundColor();
}

C_EXPORT void QTableWidgetItem_setBackgroundColor(QTableWidgetItemH handle, const QColorH color)
{
	((QTableWidgetItem *)handle)->setBackgroundColor(*(const QColor*)color);
}

C_EXPORT void QTableWidgetItem_background(QTableWidgetItemH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QTableWidgetItem *)handle)->background();
}

C_EXPORT void QTableWidgetItem_setBackground(QTableWidgetItemH handle, const QBrushH brush)
{
	((QTableWidgetItem *)handle)->setBackground(*(const QBrush*)brush);
}

C_EXPORT void QTableWidgetItem_textColor(QTableWidgetItemH handle, PQColor retval)
{
	*(QColor *)retval = ((QTableWidgetItem *)handle)->textColor();
}

C_EXPORT void QTableWidgetItem_setTextColor(QTableWidgetItemH handle, const QColorH color)
{
	((QTableWidgetItem *)handle)->setTextColor(*(const QColor*)color);
}

C_EXPORT void QTableWidgetItem_foreground(QTableWidgetItemH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QTableWidgetItem *)handle)->foreground();
}

C_EXPORT void QTableWidgetItem_setForeground(QTableWidgetItemH handle, const QBrushH brush)
{
	((QTableWidgetItem *)handle)->setForeground(*(const QBrush*)brush);
}

C_EXPORT Qt::CheckState QTableWidgetItem_checkState(QTableWidgetItemH handle)
{
	return (Qt::CheckState) ((QTableWidgetItem *)handle)->checkState();
}

C_EXPORT void QTableWidgetItem_setCheckState(QTableWidgetItemH handle, Qt::CheckState state)
{
	((QTableWidgetItem *)handle)->setCheckState(state);
}

C_EXPORT void QTableWidgetItem_sizeHint(QTableWidgetItemH handle, PSize retval)
{
	*(QSize *)retval = ((QTableWidgetItem *)handle)->sizeHint();
}

C_EXPORT void QTableWidgetItem_setSizeHint(QTableWidgetItemH handle, const QSizeH size)
{
	((QTableWidgetItem *)handle)->setSizeHint(*(const QSize*)size);
}

C_EXPORT void QTableWidgetItem_data(QTableWidgetItemH handle, QVariantH retval, int role)
{
	*(QVariant *)retval = ((QTableWidgetItem *)handle)->data(role);
}

C_EXPORT void QTableWidgetItem_setData(QTableWidgetItemH handle, int role, const QVariantH value)
{
	((QTableWidgetItem *)handle)->setData(role, *(const QVariant*)value);
}

C_EXPORT void QTableWidgetItem_read(QTableWidgetItemH handle, QDataStreamH in)
{
	((QTableWidgetItem *)handle)->read(*(QDataStream*)in);
}

C_EXPORT void QTableWidgetItem_write(QTableWidgetItemH handle, QDataStreamH out)
{
	((QTableWidgetItem *)handle)->write(*(QDataStream*)out);
}

C_EXPORT int QTableWidgetItem_type(QTableWidgetItemH handle)
{
	return (int) ((QTableWidgetItem *)handle)->type();
}

C_EXPORT QTableWidgetH QTableWidget_create(QWidgetH parent)
{
	return (QTableWidgetH) new QTableWidget((QWidget*)parent);
}

C_EXPORT void QTableWidget_destroy(QTableWidgetH handle)
{
	delete (QTableWidget *)handle;
}

C_EXPORT QTableWidgetH QTableWidget_create2(int rows, int columns, QWidgetH parent)
{
	return (QTableWidgetH) new QTableWidget(rows, columns, (QWidget*)parent);
}

C_EXPORT void QTableWidget_setRowCount(QTableWidgetH handle, int rows)
{
	((QTableWidget *)handle)->setRowCount(rows);
}

C_EXPORT int QTableWidget_rowCount(QTableWidgetH handle)
{
	return (int) ((QTableWidget *)handle)->rowCount();
}

C_EXPORT void QTableWidget_setColumnCount(QTableWidgetH handle, int columns)
{
	((QTableWidget *)handle)->setColumnCount(columns);
}

C_EXPORT int QTableWidget_columnCount(QTableWidgetH handle)
{
	return (int) ((QTableWidget *)handle)->columnCount();
}

C_EXPORT int QTableWidget_row(QTableWidgetH handle, const QTableWidgetItemH item)
{
	return (int) ((QTableWidget *)handle)->row((const QTableWidgetItem*)item);
}

C_EXPORT int QTableWidget_column(QTableWidgetH handle, const QTableWidgetItemH item)
{
	return (int) ((QTableWidget *)handle)->column((const QTableWidgetItem*)item);
}

C_EXPORT QTableWidgetItemH QTableWidget_item(QTableWidgetH handle, int row, int column)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->item(row, column);
}

C_EXPORT void QTableWidget_setItem(QTableWidgetH handle, int row, int column, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->setItem(row, column, (QTableWidgetItem*)item);
}

C_EXPORT QTableWidgetItemH QTableWidget_takeItem(QTableWidgetH handle, int row, int column)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->takeItem(row, column);
}

C_EXPORT QTableWidgetItemH QTableWidget_verticalHeaderItem(QTableWidgetH handle, int row)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->verticalHeaderItem(row);
}

C_EXPORT void QTableWidget_setVerticalHeaderItem(QTableWidgetH handle, int row, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->setVerticalHeaderItem(row, (QTableWidgetItem*)item);
}

C_EXPORT QTableWidgetItemH QTableWidget_takeVerticalHeaderItem(QTableWidgetH handle, int row)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->takeVerticalHeaderItem(row);
}

C_EXPORT QTableWidgetItemH QTableWidget_horizontalHeaderItem(QTableWidgetH handle, int column)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->horizontalHeaderItem(column);
}

C_EXPORT void QTableWidget_setHorizontalHeaderItem(QTableWidgetH handle, int column, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->setHorizontalHeaderItem(column, (QTableWidgetItem*)item);
}

C_EXPORT QTableWidgetItemH QTableWidget_takeHorizontalHeaderItem(QTableWidgetH handle, int column)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->takeHorizontalHeaderItem(column);
}

C_EXPORT void QTableWidget_setVerticalHeaderLabels(QTableWidgetH handle, const QStringListH labels)
{
	((QTableWidget *)handle)->setVerticalHeaderLabels(*(const QStringList*)labels);
}

C_EXPORT void QTableWidget_setHorizontalHeaderLabels(QTableWidgetH handle, const QStringListH labels)
{
	((QTableWidget *)handle)->setHorizontalHeaderLabels(*(const QStringList*)labels);
}

C_EXPORT int QTableWidget_currentRow(QTableWidgetH handle)
{
	return (int) ((QTableWidget *)handle)->currentRow();
}

C_EXPORT int QTableWidget_currentColumn(QTableWidgetH handle)
{
	return (int) ((QTableWidget *)handle)->currentColumn();
}

C_EXPORT QTableWidgetItemH QTableWidget_currentItem(QTableWidgetH handle)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->currentItem();
}

C_EXPORT void QTableWidget_setCurrentItem(QTableWidgetH handle, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->setCurrentItem((QTableWidgetItem*)item);
}

C_EXPORT void QTableWidget_setCurrentItem2(QTableWidgetH handle, QTableWidgetItemH item, unsigned int command)
{
	((QTableWidget *)handle)->setCurrentItem((QTableWidgetItem*)item, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT void QTableWidget_setCurrentCell(QTableWidgetH handle, int row, int column)
{
	((QTableWidget *)handle)->setCurrentCell(row, column);
}

C_EXPORT void QTableWidget_setCurrentCell2(QTableWidgetH handle, int row, int column, unsigned int command)
{
	((QTableWidget *)handle)->setCurrentCell(row, column, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT void QTableWidget_sortItems(QTableWidgetH handle, int column, Qt::SortOrder order)
{
	((QTableWidget *)handle)->sortItems(column, order);
}

C_EXPORT void QTableWidget_setSortingEnabled(QTableWidgetH handle, bool enable)
{
	((QTableWidget *)handle)->setSortingEnabled(enable);
}

C_EXPORT bool QTableWidget_isSortingEnabled(QTableWidgetH handle)
{
	return (bool) ((QTableWidget *)handle)->isSortingEnabled();
}

C_EXPORT void QTableWidget_editItem(QTableWidgetH handle, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->editItem((QTableWidgetItem*)item);
}

C_EXPORT void QTableWidget_openPersistentEditor(QTableWidgetH handle, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->openPersistentEditor((QTableWidgetItem*)item);
}

C_EXPORT void QTableWidget_closePersistentEditor(QTableWidgetH handle, QTableWidgetItemH item)
{
	((QTableWidget *)handle)->closePersistentEditor((QTableWidgetItem*)item);
}

C_EXPORT QWidgetH QTableWidget_cellWidget(QTableWidgetH handle, int row, int column)
{
	return (QWidgetH) ((QTableWidget *)handle)->cellWidget(row, column);
}

C_EXPORT void QTableWidget_setCellWidget(QTableWidgetH handle, int row, int column, QWidgetH widget)
{
	((QTableWidget *)handle)->setCellWidget(row, column, (QWidget*)widget);
}

C_EXPORT void QTableWidget_removeCellWidget(QTableWidgetH handle, int row, int column)
{
	((QTableWidget *)handle)->removeCellWidget(row, column);
}

C_EXPORT bool QTableWidget_isItemSelected(QTableWidgetH handle, const QTableWidgetItemH item)
{
	return (bool) ((QTableWidget *)handle)->isItemSelected((const QTableWidgetItem*)item);
}

C_EXPORT void QTableWidget_setItemSelected(QTableWidgetH handle, const QTableWidgetItemH item, bool select)
{
	((QTableWidget *)handle)->setItemSelected((const QTableWidgetItem*)item, select);
}

C_EXPORT void QTableWidget_setRangeSelected(QTableWidgetH handle, const QTableWidgetSelectionRangeH range, bool select)
{
	((QTableWidget *)handle)->setRangeSelected(*(const QTableWidgetSelectionRange*)range, select);
}

C_EXPORT void QTableWidget_selectedItems(QTableWidgetH handle, PPtrIntArray retval)
{
	QList<QTableWidgetItem*> t_retval;
	t_retval = ((QTableWidget *)handle)->selectedItems();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QTableWidget_findItems(QTableWidgetH handle, PPtrIntArray retval, PWideString text, unsigned int flags)
{
	QList<QTableWidgetItem*> t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QTableWidget *)handle)->findItems(t_text, (Qt::MatchFlags)flags);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT int QTableWidget_visualRow(QTableWidgetH handle, int logicalRow)
{
	return (int) ((QTableWidget *)handle)->visualRow(logicalRow);
}

C_EXPORT int QTableWidget_visualColumn(QTableWidgetH handle, int logicalColumn)
{
	return (int) ((QTableWidget *)handle)->visualColumn(logicalColumn);
}

C_EXPORT QTableWidgetItemH QTableWidget_itemAt(QTableWidgetH handle, const QPointH p)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->itemAt(*(const QPoint*)p);
}

C_EXPORT QTableWidgetItemH QTableWidget_itemAt2(QTableWidgetH handle, int x, int y)
{
	return (QTableWidgetItemH) ((QTableWidget *)handle)->itemAt(x, y);
}

C_EXPORT void QTableWidget_visualItemRect(QTableWidgetH handle, PRect retval, const QTableWidgetItemH item)
{
	QRect t_retval;
	t_retval = ((QTableWidget *)handle)->visualItemRect((const QTableWidgetItem*)item);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT const QTableWidgetItemH QTableWidget_itemPrototype(QTableWidgetH handle)
{
	return (const QTableWidgetItemH) ((QTableWidget *)handle)->itemPrototype();
}

C_EXPORT void QTableWidget_setItemPrototype(QTableWidgetH handle, const QTableWidgetItemH item)
{
	((QTableWidget *)handle)->setItemPrototype((const QTableWidgetItem*)item);
}

C_EXPORT void QTableWidget_scrollToItem(QTableWidgetH handle, const QTableWidgetItemH item, QAbstractItemView::ScrollHint hint)
{
	((QTableWidget *)handle)->scrollToItem((const QTableWidgetItem*)item, hint);
}

C_EXPORT void QTableWidget_insertRow(QTableWidgetH handle, int row)
{
	((QTableWidget *)handle)->insertRow(row);
}

C_EXPORT void QTableWidget_insertColumn(QTableWidgetH handle, int column)
{
	((QTableWidget *)handle)->insertColumn(column);
}

C_EXPORT void QTableWidget_removeRow(QTableWidgetH handle, int row)
{
	((QTableWidget *)handle)->removeRow(row);
}

C_EXPORT void QTableWidget_removeColumn(QTableWidgetH handle, int column)
{
	((QTableWidget *)handle)->removeColumn(column);
}

C_EXPORT void QTableWidget_clear(QTableWidgetH handle)
{
	((QTableWidget *)handle)->clear();
}

C_EXPORT void QTableWidget_clearContents(QTableWidgetH handle)
{
	((QTableWidget *)handle)->clearContents();
}

