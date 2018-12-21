//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QItemSelectionRangeH QItemSelectionRange_create()
{
	return (QItemSelectionRangeH) new QItemSelectionRange();
}

C_EXPORT void QItemSelectionRange_destroy(QItemSelectionRangeH handle)
{
	delete (QItemSelectionRange *)handle;
}

C_EXPORT QItemSelectionRangeH QItemSelectionRange_create2(const QItemSelectionRangeH other)
{
	return (QItemSelectionRangeH) new QItemSelectionRange(*(const QItemSelectionRange*)other);
}

C_EXPORT QItemSelectionRangeH QItemSelectionRange_create3(const QModelIndexH topLeft, const QModelIndexH bottomRight)
{
	return (QItemSelectionRangeH) new QItemSelectionRange(*(const QModelIndex*)topLeft, *(const QModelIndex*)bottomRight);
}

C_EXPORT QItemSelectionRangeH QItemSelectionRange_create4(const QModelIndexH index)
{
	return (QItemSelectionRangeH) new QItemSelectionRange(*(const QModelIndex*)index);
}

C_EXPORT int QItemSelectionRange_top(QItemSelectionRangeH handle)
{
	return (int) ((QItemSelectionRange *)handle)->top();
}

C_EXPORT int QItemSelectionRange_left(QItemSelectionRangeH handle)
{
	return (int) ((QItemSelectionRange *)handle)->left();
}

C_EXPORT int QItemSelectionRange_bottom(QItemSelectionRangeH handle)
{
	return (int) ((QItemSelectionRange *)handle)->bottom();
}

C_EXPORT int QItemSelectionRange_right(QItemSelectionRangeH handle)
{
	return (int) ((QItemSelectionRange *)handle)->right();
}

C_EXPORT int QItemSelectionRange_width(QItemSelectionRangeH handle)
{
	return (int) ((QItemSelectionRange *)handle)->width();
}

C_EXPORT int QItemSelectionRange_height(QItemSelectionRangeH handle)
{
	return (int) ((QItemSelectionRange *)handle)->height();
}

C_EXPORT void QItemSelectionRange_topLeft(QItemSelectionRangeH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QItemSelectionRange *)handle)->topLeft();
}

C_EXPORT void QItemSelectionRange_bottomRight(QItemSelectionRangeH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QItemSelectionRange *)handle)->bottomRight();
}

C_EXPORT void QItemSelectionRange_parent(QItemSelectionRangeH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QItemSelectionRange *)handle)->parent();
}

C_EXPORT const QAbstractItemModelH QItemSelectionRange_model(QItemSelectionRangeH handle)
{
	return (const QAbstractItemModelH) ((QItemSelectionRange *)handle)->model();
}

C_EXPORT bool QItemSelectionRange_contains(QItemSelectionRangeH handle, const QModelIndexH index)
{
	return (bool) ((QItemSelectionRange *)handle)->contains(*(const QModelIndex*)index);
}

C_EXPORT bool QItemSelectionRange_contains2(QItemSelectionRangeH handle, int row, int column, const QModelIndexH parentIndex)
{
	return (bool) ((QItemSelectionRange *)handle)->contains(row, column, *(const QModelIndex*)parentIndex);
}

C_EXPORT bool QItemSelectionRange_intersects(QItemSelectionRangeH handle, const QItemSelectionRangeH other)
{
	return (bool) ((QItemSelectionRange *)handle)->intersects(*(const QItemSelectionRange*)other);
}

C_EXPORT void QItemSelectionRange_intersect(QItemSelectionRangeH handle, QItemSelectionRangeH retval, const QItemSelectionRangeH other)
{
	*(QItemSelectionRange *)retval = ((QItemSelectionRange *)handle)->intersect(*(const QItemSelectionRange*)other);
}

C_EXPORT void QItemSelectionRange_intersected(QItemSelectionRangeH handle, QItemSelectionRangeH retval, const QItemSelectionRangeH other)
{
	*(QItemSelectionRange *)retval = ((QItemSelectionRange *)handle)->intersected(*(const QItemSelectionRange*)other);
}

C_EXPORT bool QItemSelectionRange_isValid(QItemSelectionRangeH handle)
{
	return (bool) ((QItemSelectionRange *)handle)->isValid();
}

C_EXPORT void QItemSelectionRange_indexes(QItemSelectionRangeH handle, PPtrIntArray retval)
{
	QList<QModelIndex> t_retval;
	t_retval = ((QItemSelectionRange *)handle)->indexes();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT QItemSelectionModelH QItemSelectionModel_create(QAbstractItemModelH model)
{
	return (QItemSelectionModelH) new QItemSelectionModel((QAbstractItemModel*)model);
}

C_EXPORT void QItemSelectionModel_destroy(QItemSelectionModelH handle)
{
	delete (QItemSelectionModel *)handle;
}

C_EXPORT QItemSelectionModelH QItemSelectionModel_create2(QAbstractItemModelH model, QObjectH parent)
{
	return (QItemSelectionModelH) new QItemSelectionModel((QAbstractItemModel*)model, (QObject*)parent);
}

C_EXPORT void QItemSelectionModel_currentIndex(QItemSelectionModelH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QItemSelectionModel *)handle)->currentIndex();
}

C_EXPORT bool QItemSelectionModel_isSelected(QItemSelectionModelH handle, const QModelIndexH index)
{
	return (bool) ((QItemSelectionModel *)handle)->isSelected(*(const QModelIndex*)index);
}

C_EXPORT bool QItemSelectionModel_isRowSelected(QItemSelectionModelH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QItemSelectionModel *)handle)->isRowSelected(row, *(const QModelIndex*)parent);
}

C_EXPORT bool QItemSelectionModel_isColumnSelected(QItemSelectionModelH handle, int column, const QModelIndexH parent)
{
	return (bool) ((QItemSelectionModel *)handle)->isColumnSelected(column, *(const QModelIndex*)parent);
}

C_EXPORT bool QItemSelectionModel_rowIntersectsSelection(QItemSelectionModelH handle, int row, const QModelIndexH parent)
{
	return (bool) ((QItemSelectionModel *)handle)->rowIntersectsSelection(row, *(const QModelIndex*)parent);
}

C_EXPORT bool QItemSelectionModel_columnIntersectsSelection(QItemSelectionModelH handle, int column, const QModelIndexH parent)
{
	return (bool) ((QItemSelectionModel *)handle)->columnIntersectsSelection(column, *(const QModelIndex*)parent);
}

C_EXPORT bool QItemSelectionModel_hasSelection(QItemSelectionModelH handle)
{
	return (bool) ((QItemSelectionModel *)handle)->hasSelection();
}

C_EXPORT void QItemSelectionModel_selectedIndexes(QItemSelectionModelH handle, PPtrIntArray retval)
{
	QList<QModelIndex> t_retval;
	t_retval = ((QItemSelectionModel *)handle)->selectedIndexes();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QItemSelectionModel_selectedRows(QItemSelectionModelH handle, PPtrIntArray retval, int column)
{
	QList<QModelIndex> t_retval;
	t_retval = ((QItemSelectionModel *)handle)->selectedRows(column);
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QItemSelectionModel_selectedColumns(QItemSelectionModelH handle, PPtrIntArray retval, int row)
{
	QList<QModelIndex> t_retval;
	t_retval = ((QItemSelectionModel *)handle)->selectedColumns(row);
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT const QAbstractItemModelH QItemSelectionModel_model(QItemSelectionModelH handle)
{
	return (const QAbstractItemModelH) ((QItemSelectionModel *)handle)->model();
}

C_EXPORT void QItemSelectionModel_setCurrentIndex(QItemSelectionModelH handle, const QModelIndexH index, unsigned int command)
{
	((QItemSelectionModel *)handle)->setCurrentIndex(*(const QModelIndex*)index, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT void QItemSelectionModel_select(QItemSelectionModelH handle, const QModelIndexH index, unsigned int command)
{
	((QItemSelectionModel *)handle)->select(*(const QModelIndex*)index, (QItemSelectionModel::SelectionFlags)command);
}

C_EXPORT void QItemSelectionModel_clear(QItemSelectionModelH handle)
{
	((QItemSelectionModel *)handle)->clear();
}

C_EXPORT void QItemSelectionModel_reset(QItemSelectionModelH handle)
{
	((QItemSelectionModel *)handle)->reset();
}

C_EXPORT void QItemSelectionModel_clearSelection(QItemSelectionModelH handle)
{
	((QItemSelectionModel *)handle)->clearSelection();
}

