//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QListWidgetItemH QListWidgetItem_create(QListWidgetH view, int type)
{
	return (QListWidgetItemH) new QListWidgetItem((QListWidget*)view, type);
}

C_EXPORT void QListWidgetItem_destroy(QListWidgetItemH handle)
{
	delete (QListWidgetItem *)handle;
}

C_EXPORT QListWidgetItemH QListWidgetItem_create2(PWideString text, QListWidgetH view, int type)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QListWidgetItemH) new QListWidgetItem(t_text, (QListWidget*)view, type);
}

C_EXPORT QListWidgetItemH QListWidgetItem_create3(const QIconH icon, PWideString text, QListWidgetH view, int type)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QListWidgetItemH) new QListWidgetItem(*(const QIcon*)icon, t_text, (QListWidget*)view, type);
}

C_EXPORT QListWidgetItemH QListWidgetItem_create4(const QListWidgetItemH other)
{
	return (QListWidgetItemH) new QListWidgetItem(*(const QListWidgetItem*)other);
}

C_EXPORT QListWidgetItemH QListWidgetItem_clone(QListWidgetItemH handle)
{
	return (QListWidgetItemH) ((QListWidgetItem *)handle)->clone();
}

C_EXPORT QListWidgetH QListWidgetItem_listWidget(QListWidgetItemH handle)
{
	return (QListWidgetH) ((QListWidgetItem *)handle)->listWidget();
}

C_EXPORT void QListWidgetItem_setSelected(QListWidgetItemH handle, bool select)
{
	((QListWidgetItem *)handle)->setSelected(select);
}

C_EXPORT bool QListWidgetItem_isSelected(QListWidgetItemH handle)
{
	return (bool) ((QListWidgetItem *)handle)->isSelected();
}

C_EXPORT void QListWidgetItem_setHidden(QListWidgetItemH handle, bool hide)
{
	((QListWidgetItem *)handle)->setHidden(hide);
}

C_EXPORT bool QListWidgetItem_isHidden(QListWidgetItemH handle)
{
	return (bool) ((QListWidgetItem *)handle)->isHidden();
}

C_EXPORT unsigned int QListWidgetItem_flags(QListWidgetItemH handle)
{
	return (unsigned int) ((QListWidgetItem *)handle)->flags();
}

C_EXPORT void QListWidgetItem_setFlags(QListWidgetItemH handle, unsigned int flags)
{
	((QListWidgetItem *)handle)->setFlags((Qt::ItemFlags)flags);
}

C_EXPORT void QListWidgetItem_text(QListWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QListWidgetItem *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QListWidgetItem_setText(QListWidgetItemH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QListWidgetItem *)handle)->setText(t_text);
}

C_EXPORT void QListWidgetItem_icon(QListWidgetItemH handle, QIconH retval)
{
	*(QIcon *)retval = ((QListWidgetItem *)handle)->icon();
}

C_EXPORT void QListWidgetItem_setIcon(QListWidgetItemH handle, const QIconH icon)
{
	((QListWidgetItem *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QListWidgetItem_statusTip(QListWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QListWidgetItem *)handle)->statusTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QListWidgetItem_setStatusTip(QListWidgetItemH handle, PWideString statusTip)
{
	QString t_statusTip;
	copyPWideStringToQString(statusTip, t_statusTip);
	((QListWidgetItem *)handle)->setStatusTip(t_statusTip);
}

C_EXPORT void QListWidgetItem_toolTip(QListWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QListWidgetItem *)handle)->toolTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QListWidgetItem_setToolTip(QListWidgetItemH handle, PWideString toolTip)
{
	QString t_toolTip;
	copyPWideStringToQString(toolTip, t_toolTip);
	((QListWidgetItem *)handle)->setToolTip(t_toolTip);
}

C_EXPORT void QListWidgetItem_whatsThis(QListWidgetItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QListWidgetItem *)handle)->whatsThis();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QListWidgetItem_setWhatsThis(QListWidgetItemH handle, PWideString whatsThis)
{
	QString t_whatsThis;
	copyPWideStringToQString(whatsThis, t_whatsThis);
	((QListWidgetItem *)handle)->setWhatsThis(t_whatsThis);
}

C_EXPORT void QListWidgetItem_font(QListWidgetItemH handle, QFontH retval)
{
	*(QFont *)retval = ((QListWidgetItem *)handle)->font();
}

C_EXPORT void QListWidgetItem_setFont(QListWidgetItemH handle, const QFontH font)
{
	((QListWidgetItem *)handle)->setFont(*(const QFont*)font);
}

C_EXPORT int QListWidgetItem_textAlignment(QListWidgetItemH handle)
{
	return (int) ((QListWidgetItem *)handle)->textAlignment();
}

C_EXPORT void QListWidgetItem_setTextAlignment(QListWidgetItemH handle, int alignment)
{
	((QListWidgetItem *)handle)->setTextAlignment(alignment);
}

C_EXPORT void QListWidgetItem_backgroundColor(QListWidgetItemH handle, PQColor retval)
{
	*(QColor *)retval = ((QListWidgetItem *)handle)->backgroundColor();
}

C_EXPORT void QListWidgetItem_setBackgroundColor(QListWidgetItemH handle, const QColorH color)
{
	((QListWidgetItem *)handle)->setBackgroundColor(*(const QColor*)color);
}

C_EXPORT void QListWidgetItem_background(QListWidgetItemH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QListWidgetItem *)handle)->background();
}

C_EXPORT void QListWidgetItem_setBackground(QListWidgetItemH handle, const QBrushH brush)
{
	((QListWidgetItem *)handle)->setBackground(*(const QBrush*)brush);
}

C_EXPORT void QListWidgetItem_textColor(QListWidgetItemH handle, PQColor retval)
{
	*(QColor *)retval = ((QListWidgetItem *)handle)->textColor();
}

C_EXPORT void QListWidgetItem_setTextColor(QListWidgetItemH handle, const QColorH color)
{
	((QListWidgetItem *)handle)->setTextColor(*(const QColor*)color);
}

C_EXPORT void QListWidgetItem_foreground(QListWidgetItemH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QListWidgetItem *)handle)->foreground();
}

C_EXPORT void QListWidgetItem_setForeground(QListWidgetItemH handle, const QBrushH brush)
{
	((QListWidgetItem *)handle)->setForeground(*(const QBrush*)brush);
}

C_EXPORT Qt::CheckState QListWidgetItem_checkState(QListWidgetItemH handle)
{
	return (Qt::CheckState) ((QListWidgetItem *)handle)->checkState();
}

C_EXPORT void QListWidgetItem_setCheckState(QListWidgetItemH handle, Qt::CheckState state)
{
	((QListWidgetItem *)handle)->setCheckState(state);
}

C_EXPORT void QListWidgetItem_sizeHint(QListWidgetItemH handle, PSize retval)
{
	*(QSize *)retval = ((QListWidgetItem *)handle)->sizeHint();
}

C_EXPORT void QListWidgetItem_setSizeHint(QListWidgetItemH handle, const QSizeH size)
{
	((QListWidgetItem *)handle)->setSizeHint(*(const QSize*)size);
}

C_EXPORT void QListWidgetItem_data(QListWidgetItemH handle, QVariantH retval, int role)
{
	*(QVariant *)retval = ((QListWidgetItem *)handle)->data(role);
}

C_EXPORT void QListWidgetItem_setData(QListWidgetItemH handle, int role, const QVariantH value)
{
	((QListWidgetItem *)handle)->setData(role, *(const QVariant*)value);
}

C_EXPORT void QListWidgetItem_read(QListWidgetItemH handle, QDataStreamH in)
{
	((QListWidgetItem *)handle)->read(*(QDataStream*)in);
}

C_EXPORT void QListWidgetItem_write(QListWidgetItemH handle, QDataStreamH out)
{
	((QListWidgetItem *)handle)->write(*(QDataStream*)out);
}

C_EXPORT int QListWidgetItem_type(QListWidgetItemH handle)
{
	return (int) ((QListWidgetItem *)handle)->type();
}

C_EXPORT QListWidgetH QListWidget_create(QWidgetH parent)
{
	return (QListWidgetH) new QListWidget((QWidget*)parent);
}

C_EXPORT void QListWidget_destroy(QListWidgetH handle)
{
	delete (QListWidget *)handle;
}

C_EXPORT QListWidgetItemH QListWidget_item(QListWidgetH handle, int row)
{
	return (QListWidgetItemH) ((QListWidget *)handle)->item(row);
}

C_EXPORT int QListWidget_row(QListWidgetH handle, const QListWidgetItemH item)
{
	return (int) ((QListWidget *)handle)->row((const QListWidgetItem*)item);
}

C_EXPORT void QListWidget_insertItem(QListWidgetH handle, int row, QListWidgetItemH item)
{
	((QListWidget *)handle)->insertItem(row, (QListWidgetItem*)item);
}

C_EXPORT void QListWidget_insertItem2(QListWidgetH handle, int row, PWideString label)
{
	QString t_label;
	copyPWideStringToQString(label, t_label);
	((QListWidget *)handle)->insertItem(row, t_label);
}

C_EXPORT void QListWidget_insertItems(QListWidgetH handle, int row, const QStringListH labels)
{
	((QListWidget *)handle)->insertItems(row, *(const QStringList*)labels);
}

C_EXPORT void QListWidget_addItem(QListWidgetH handle, PWideString label)
{
	QString t_label;
	copyPWideStringToQString(label, t_label);
	((QListWidget *)handle)->addItem(t_label);
}

C_EXPORT void QListWidget_addItem2(QListWidgetH handle, QListWidgetItemH item)
{
	((QListWidget *)handle)->addItem((QListWidgetItem*)item);
}

C_EXPORT void QListWidget_addItems(QListWidgetH handle, const QStringListH labels)
{
	((QListWidget *)handle)->addItems(*(const QStringList*)labels);
}

C_EXPORT QListWidgetItemH QListWidget_takeItem(QListWidgetH handle, int row)
{
	return (QListWidgetItemH) ((QListWidget *)handle)->takeItem(row);
}

C_EXPORT int QListWidget_count(QListWidgetH handle)
{
	return (int) ((QListWidget *)handle)->count();
}

C_EXPORT QListWidgetItemH QListWidget_currentItem(QListWidgetH handle)
{
	return (QListWidgetItemH) ((QListWidget *)handle)->currentItem();
}

C_EXPORT void QListWidget_setCurrentItem(QListWidgetH handle, QListWidgetItemH item)
{
	((QListWidget *)handle)->setCurrentItem((QListWidgetItem*)item);
}

C_EXPORT void QListWidget_setCurrentItem2(QListWidgetH handle, QListWidgetItemH item, unsigned int command)
{
	((QListWidget *)handle)->setCurrentItem((QListWidgetItem*)item, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT int QListWidget_currentRow(QListWidgetH handle)
{
	return (int) ((QListWidget *)handle)->currentRow();
}

C_EXPORT void QListWidget_setCurrentRow(QListWidgetH handle, int row)
{
	((QListWidget *)handle)->setCurrentRow(row);
}

C_EXPORT void QListWidget_setCurrentRow2(QListWidgetH handle, int row, unsigned int command)
{
	((QListWidget *)handle)->setCurrentRow(row, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT QListWidgetItemH QListWidget_itemAt(QListWidgetH handle, const QPointH p)
{
	return (QListWidgetItemH) ((QListWidget *)handle)->itemAt(*(const QPoint*)p);
}

C_EXPORT QListWidgetItemH QListWidget_itemAt2(QListWidgetH handle, int x, int y)
{
	return (QListWidgetItemH) ((QListWidget *)handle)->itemAt(x, y);
}

C_EXPORT void QListWidget_visualItemRect(QListWidgetH handle, PRect retval, const QListWidgetItemH item)
{
	QRect t_retval;
	t_retval = ((QListWidget *)handle)->visualItemRect((const QListWidgetItem*)item);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QListWidget_sortItems(QListWidgetH handle, Qt::SortOrder order)
{
	((QListWidget *)handle)->sortItems(order);
}

C_EXPORT void QListWidget_setSortingEnabled(QListWidgetH handle, bool enable)
{
	((QListWidget *)handle)->setSortingEnabled(enable);
}

C_EXPORT bool QListWidget_isSortingEnabled(QListWidgetH handle)
{
	return (bool) ((QListWidget *)handle)->isSortingEnabled();
}

C_EXPORT void QListWidget_editItem(QListWidgetH handle, QListWidgetItemH item)
{
	((QListWidget *)handle)->editItem((QListWidgetItem*)item);
}

C_EXPORT void QListWidget_openPersistentEditor(QListWidgetH handle, QListWidgetItemH item)
{
	((QListWidget *)handle)->openPersistentEditor((QListWidgetItem*)item);
}

C_EXPORT void QListWidget_closePersistentEditor(QListWidgetH handle, QListWidgetItemH item)
{
	((QListWidget *)handle)->closePersistentEditor((QListWidgetItem*)item);
}

C_EXPORT QWidgetH QListWidget_itemWidget(QListWidgetH handle, QListWidgetItemH item)
{
	return (QWidgetH) ((QListWidget *)handle)->itemWidget((QListWidgetItem*)item);
}

C_EXPORT void QListWidget_setItemWidget(QListWidgetH handle, QListWidgetItemH item, QWidgetH widget)
{
	((QListWidget *)handle)->setItemWidget((QListWidgetItem*)item, (QWidget*)widget);
}

C_EXPORT void QListWidget_removeItemWidget(QListWidgetH handle, QListWidgetItemH item)
{
	((QListWidget *)handle)->removeItemWidget((QListWidgetItem*)item);
}

C_EXPORT bool QListWidget_isItemSelected(QListWidgetH handle, const QListWidgetItemH item)
{
	return (bool) ((QListWidget *)handle)->isItemSelected((const QListWidgetItem*)item);
}

C_EXPORT void QListWidget_setItemSelected(QListWidgetH handle, const QListWidgetItemH item, bool select)
{
	((QListWidget *)handle)->setItemSelected((const QListWidgetItem*)item, select);
}

C_EXPORT void QListWidget_selectedItems(QListWidgetH handle, PPtrIntArray retval)
{
	QList<QListWidgetItem*> t_retval;
	t_retval = ((QListWidget *)handle)->selectedItems();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QListWidget_findItems(QListWidgetH handle, PPtrIntArray retval, PWideString text, unsigned int flags)
{
	QList<QListWidgetItem*> t_retval;
	QString t_text;
	copyPWideStringToQString(text, t_text);
	t_retval = ((QListWidget *)handle)->findItems(t_text, (Qt::MatchFlags)flags);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT bool QListWidget_isItemHidden(QListWidgetH handle, const QListWidgetItemH item)
{
	return (bool) ((QListWidget *)handle)->isItemHidden((const QListWidgetItem*)item);
}

C_EXPORT void QListWidget_setItemHidden(QListWidgetH handle, const QListWidgetItemH item, bool hide)
{
	((QListWidget *)handle)->setItemHidden((const QListWidgetItem*)item, hide);
}

C_EXPORT void QListWidget_dropEvent(QListWidgetH handle, QDropEventH event)
{
	((QListWidget *)handle)->dropEvent((QDropEvent*)event);
}

C_EXPORT void QListWidget_scrollToItem(QListWidgetH handle, const QListWidgetItemH item, QAbstractItemView::ScrollHint hint)
{
	((QListWidget *)handle)->scrollToItem((const QListWidgetItem*)item, hint);
}

C_EXPORT void QListWidget_clear(QListWidgetH handle)
{
	((QListWidget *)handle)->clear();
}

