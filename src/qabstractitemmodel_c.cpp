//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QModelIndexH QModelIndex_create()
{
	return (QModelIndexH) new QModelIndex();
}

C_EXPORT void QModelIndex_destroy(QModelIndexH handle)
{
	delete (QModelIndex *)handle;
}

C_EXPORT QModelIndexH QModelIndex_create2(const QModelIndexH other)
{
	return (QModelIndexH) new QModelIndex(*(const QModelIndex*)other);
}

C_EXPORT int QModelIndex_row(QModelIndexH handle)
{
	return (int) ((QModelIndex *)handle)->row();
}

C_EXPORT int QModelIndex_column(QModelIndexH handle)
{
	return (int) ((QModelIndex *)handle)->column();
}

C_EXPORT void* QModelIndex_internalPointer(QModelIndexH handle)
{
	return (void*) ((QModelIndex *)handle)->internalPointer();
}

C_EXPORT qint64 QModelIndex_internalId(QModelIndexH handle)
{
	return (qint64) ((QModelIndex *)handle)->internalId();
}

C_EXPORT void QModelIndex_parent(QModelIndexH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QModelIndex *)handle)->parent();
}

C_EXPORT void QModelIndex_sibling(QModelIndexH handle, QModelIndexH retval, int row, int column)
{
	*(QModelIndex *)retval = ((QModelIndex *)handle)->sibling(row, column);
}

C_EXPORT void QModelIndex_child(QModelIndexH handle, QModelIndexH retval, int row, int column)
{
	*(QModelIndex *)retval = ((QModelIndex *)handle)->child(row, column);
}

C_EXPORT void QModelIndex_data(QModelIndexH handle, QVariantH retval, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QModelIndex *)handle)->data(role);
}

C_EXPORT unsigned int QModelIndex_flags(QModelIndexH handle)
{
	return (unsigned int) ((QModelIndex *)handle)->flags();
}

C_EXPORT const QAbstractItemModelH QModelIndex_model(QModelIndexH handle)
{
	return (const QAbstractItemModelH) ((QModelIndex *)handle)->model();
}

C_EXPORT bool QModelIndex_isValid(QModelIndexH handle)
{
	return (bool) ((QModelIndex *)handle)->isValid();
}

C_EXPORT QPersistentModelIndexH QPersistentModelIndex_create()
{
	return (QPersistentModelIndexH) new QPersistentModelIndex();
}

C_EXPORT void QPersistentModelIndex_destroy(QPersistentModelIndexH handle)
{
	delete (QPersistentModelIndex *)handle;
}

C_EXPORT QPersistentModelIndexH QPersistentModelIndex_create2(const QModelIndexH index)
{
	return (QPersistentModelIndexH) new QPersistentModelIndex(*(const QModelIndex*)index);
}

C_EXPORT QPersistentModelIndexH QPersistentModelIndex_create3(const QPersistentModelIndexH other)
{
	return (QPersistentModelIndexH) new QPersistentModelIndex(*(const QPersistentModelIndex*)other);
}

C_EXPORT int QPersistentModelIndex_row(QPersistentModelIndexH handle)
{
	return (int) ((QPersistentModelIndex *)handle)->row();
}

C_EXPORT int QPersistentModelIndex_column(QPersistentModelIndexH handle)
{
	return (int) ((QPersistentModelIndex *)handle)->column();
}

C_EXPORT void* QPersistentModelIndex_internalPointer(QPersistentModelIndexH handle)
{
	return (void*) ((QPersistentModelIndex *)handle)->internalPointer();
}

C_EXPORT qint64 QPersistentModelIndex_internalId(QPersistentModelIndexH handle)
{
	return (qint64) ((QPersistentModelIndex *)handle)->internalId();
}

C_EXPORT void QPersistentModelIndex_parent(QPersistentModelIndexH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QPersistentModelIndex *)handle)->parent();
}

C_EXPORT void QPersistentModelIndex_sibling(QPersistentModelIndexH handle, QModelIndexH retval, int row, int column)
{
	*(QModelIndex *)retval = ((QPersistentModelIndex *)handle)->sibling(row, column);
}

C_EXPORT void QPersistentModelIndex_child(QPersistentModelIndexH handle, QModelIndexH retval, int row, int column)
{
	*(QModelIndex *)retval = ((QPersistentModelIndex *)handle)->child(row, column);
}

C_EXPORT void QPersistentModelIndex_data(QPersistentModelIndexH handle, QVariantH retval, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QPersistentModelIndex *)handle)->data(role);
}

C_EXPORT unsigned int QPersistentModelIndex_flags(QPersistentModelIndexH handle)
{
	return (unsigned int) ((QPersistentModelIndex *)handle)->flags();
}

C_EXPORT const QAbstractItemModelH QPersistentModelIndex_model(QPersistentModelIndexH handle)
{
	return (const QAbstractItemModelH) ((QPersistentModelIndex *)handle)->model();
}

C_EXPORT bool QPersistentModelIndex_isValid(QPersistentModelIndexH handle)
{
	return (bool) ((QPersistentModelIndex *)handle)->isValid();
}

C_EXPORT bool QAbstractItemModel_hasIndex(QAbstractItemModelH handle, int row, int column, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->hasIndex(row, column, *(const QModelIndex*)parent);
}

C_EXPORT void QAbstractItemModel_index(QAbstractItemModelH handle, QModelIndexH retval, int row, int column, const QModelIndexH parent)
{
	*(QModelIndex *)retval = ((QAbstractItemModel *)handle)->index(row, column, *(const QModelIndex*)parent);
}

C_EXPORT void QAbstractItemModel_parent(QAbstractItemModelH handle, QModelIndexH retval, const QModelIndexH child)
{
	*(QModelIndex *)retval = ((QAbstractItemModel *)handle)->parent(*(const QModelIndex*)child);
}

C_EXPORT void QAbstractItemModel_sibling(QAbstractItemModelH handle, QModelIndexH retval, int row, int column, const QModelIndexH idx)
{
	*(QModelIndex *)retval = ((QAbstractItemModel *)handle)->sibling(row, column, *(const QModelIndex*)idx);
}

C_EXPORT int QAbstractItemModel_rowCount(QAbstractItemModelH handle, const QModelIndexH parent)
{
	return (int) ((QAbstractItemModel *)handle)->rowCount(*(const QModelIndex*)parent);
}

C_EXPORT int QAbstractItemModel_columnCount(QAbstractItemModelH handle, const QModelIndexH parent)
{
	return (int) ((QAbstractItemModel *)handle)->columnCount(*(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_hasChildren(QAbstractItemModelH handle, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->hasChildren(*(const QModelIndex*)parent);
}

C_EXPORT void QAbstractItemModel_data(QAbstractItemModelH handle, QVariantH retval, const QModelIndexH index, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QAbstractItemModel *)handle)->data(*(const QModelIndex*)index, role);
}

C_EXPORT bool QAbstractItemModel_setData(QAbstractItemModelH handle, const QModelIndexH index, const QVariantH value, Qt::ItemDataRole role)
{
	return (bool) ((QAbstractItemModel *)handle)->setData(*(const QModelIndex*)index, *(const QVariant*)value, role);
}

C_EXPORT void QAbstractItemModel_headerData(QAbstractItemModelH handle, QVariantH retval, int section, Qt::Orientation orientation, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QAbstractItemModel *)handle)->headerData(section, orientation, role);
}

C_EXPORT bool QAbstractItemModel_setHeaderData(QAbstractItemModelH handle, int section, Qt::Orientation orientation, const QVariantH value, Qt::ItemDataRole role)
{
	return (bool) ((QAbstractItemModel *)handle)->setHeaderData(section, orientation, *(const QVariant*)value, role);
}

C_EXPORT void QAbstractItemModel_mimeTypes(QAbstractItemModelH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QAbstractItemModel *)handle)->mimeTypes();
}

C_EXPORT bool QAbstractItemModel_dropMimeData(QAbstractItemModelH handle, const QMimeDataH data, Qt::DropAction action, int row, int column, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->dropMimeData((const QMimeData*)data, action, row, column, *(const QModelIndex*)parent);
}

C_EXPORT unsigned int QAbstractItemModel_supportedDropActions(QAbstractItemModelH handle)
{
	return (unsigned int) ((QAbstractItemModel *)handle)->supportedDropActions();
}

C_EXPORT unsigned int QAbstractItemModel_supportedDragActions(QAbstractItemModelH handle)
{
	return (unsigned int) ((QAbstractItemModel *)handle)->supportedDragActions();
}

C_EXPORT void QAbstractItemModel_setSupportedDragActions(QAbstractItemModelH handle, unsigned int AnonParam1)
{
	((QAbstractItemModel *)handle)->setSupportedDragActions((Qt::DropActions)AnonParam1);
}

C_EXPORT bool QAbstractItemModel_insertRows(QAbstractItemModelH handle, int row, int count, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->insertRows(row, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_insertColumns(QAbstractItemModelH handle, int column, int count, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->insertColumns(column, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_removeRows(QAbstractItemModelH handle, int row, int count, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->removeRows(row, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_removeColumns(QAbstractItemModelH handle, int column, int count, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->removeColumns(column, count, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_insertRow(QAbstractItemModelH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->insertRow(row, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_insertColumn(QAbstractItemModelH handle, int column, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->insertColumn(column, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_removeRow(QAbstractItemModelH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->removeRow(row, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_removeColumn(QAbstractItemModelH handle, int column, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->removeColumn(column, *(const QModelIndex*)parent);
}

C_EXPORT void QAbstractItemModel_fetchMore(QAbstractItemModelH handle, const QModelIndexH parent)
{
	((QAbstractItemModel *)handle)->fetchMore(*(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractItemModel_canFetchMore(QAbstractItemModelH handle, const QModelIndexH parent)
{
	return (bool) ((QAbstractItemModel *)handle)->canFetchMore(*(const QModelIndex*)parent);
}

C_EXPORT unsigned int QAbstractItemModel_flags(QAbstractItemModelH handle, const QModelIndexH index)
{
	return (unsigned int) ((QAbstractItemModel *)handle)->flags(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemModel_sort(QAbstractItemModelH handle, int column, Qt::SortOrder order)
{
	((QAbstractItemModel *)handle)->sort(column, order);
}

C_EXPORT void QAbstractItemModel_buddy(QAbstractItemModelH handle, QModelIndexH retval, const QModelIndexH index)
{
	*(QModelIndex *)retval = ((QAbstractItemModel *)handle)->buddy(*(const QModelIndex*)index);
}

C_EXPORT void QAbstractItemModel_match(QAbstractItemModelH handle, PPtrIntArray retval, const QModelIndexH start, int role, const QVariantH value, int hits, unsigned int flags)
{
	QList<QModelIndex> t_retval;
	t_retval = ((QAbstractItemModel *)handle)->match(*(const QModelIndex*)start, role, *(const QVariant*)value, hits, (Qt::MatchFlags)flags);
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QAbstractItemModel_span(QAbstractItemModelH handle, PSize retval, const QModelIndexH index)
{
	*(QSize *)retval = ((QAbstractItemModel *)handle)->span(*(const QModelIndex*)index);
}

C_EXPORT bool QAbstractItemModel_submit(QAbstractItemModelH handle)
{
	return (bool) ((QAbstractItemModel *)handle)->submit();
}

C_EXPORT void QAbstractItemModel_revert(QAbstractItemModelH handle)
{
	((QAbstractItemModel *)handle)->revert();
}

C_EXPORT void QAbstractTableModel_index(QAbstractTableModelH handle, QModelIndexH retval, int row, int column, const QModelIndexH parent)
{
	*(QModelIndex *)retval = ((QAbstractTableModel *)handle)->index(row, column, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractTableModel_dropMimeData(QAbstractTableModelH handle, const QMimeDataH data, Qt::DropAction action, int row, int column, const QModelIndexH parent)
{
	return (bool) ((QAbstractTableModel *)handle)->dropMimeData((const QMimeData*)data, action, row, column, *(const QModelIndex*)parent);
}

C_EXPORT void QAbstractListModel_index(QAbstractListModelH handle, QModelIndexH retval, int row, int column, const QModelIndexH parent)
{
	*(QModelIndex *)retval = ((QAbstractListModel *)handle)->index(row, column, *(const QModelIndex*)parent);
}

C_EXPORT bool QAbstractListModel_dropMimeData(QAbstractListModelH handle, const QMimeDataH data, Qt::DropAction action, int row, int column, const QModelIndexH parent)
{
	return (bool) ((QAbstractListModel *)handle)->dropMimeData((const QMimeData*)data, action, row, column, *(const QModelIndex*)parent);
}

