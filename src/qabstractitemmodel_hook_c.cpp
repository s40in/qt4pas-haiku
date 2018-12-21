//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractitemmodel_hook.h"

C_EXPORT QModelIndex_hookH QModelIndex_hook_create(QObjectH handle)
{
	return (QModelIndex_hookH) new QModelIndex_hook((QObject*)handle);
}

C_EXPORT void QModelIndex_hook_destroy(QModelIndex_hookH handle)
{
	delete (QModelIndex_hook *)handle;
}

C_EXPORT QPersistentModelIndex_hookH QPersistentModelIndex_hook_create(QObjectH handle)
{
	return (QPersistentModelIndex_hookH) new QPersistentModelIndex_hook((QObject*)handle);
}

C_EXPORT void QPersistentModelIndex_hook_destroy(QPersistentModelIndex_hookH handle)
{
	delete (QPersistentModelIndex_hook *)handle;
}

C_EXPORT QAbstractItemModel_hookH QAbstractItemModel_hook_create(QObjectH handle)
{
	return (QAbstractItemModel_hookH) new QAbstractItemModel_hook((QObject*)handle);
}

C_EXPORT void QAbstractItemModel_hook_destroy(QAbstractItemModel_hookH handle)
{
	delete (QAbstractItemModel_hook *)handle;
}

C_EXPORT void QAbstractItemModel_hook_hook_dataChanged(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_dataChanged(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_headerDataChanged(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_headerDataChanged(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_layoutChanged(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_layoutChanged(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_layoutAboutToBeChanged(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_layoutAboutToBeChanged(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_rowsAboutToBeInserted(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_rowsAboutToBeInserted(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_rowsInserted(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_rowsInserted(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_rowsAboutToBeRemoved(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_rowsAboutToBeRemoved(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_rowsRemoved(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_rowsRemoved(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_columnsAboutToBeInserted(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_columnsAboutToBeInserted(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_columnsInserted(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_columnsInserted(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_columnsAboutToBeRemoved(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_columnsAboutToBeRemoved(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_columnsRemoved(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_columnsRemoved(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_modelAboutToBeReset(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_modelAboutToBeReset(hook);
}

C_EXPORT void QAbstractItemModel_hook_hook_modelReset(QAbstractItemModel_hookH handle, QHookH hook)
{
	((QAbstractItemModel_hook *)handle)->hook_modelReset(hook);
}

C_EXPORT QAbstractTableModel_hookH QAbstractTableModel_hook_create(QObjectH handle)
{
	return (QAbstractTableModel_hookH) new QAbstractTableModel_hook((QObject*)handle);
}

C_EXPORT void QAbstractTableModel_hook_destroy(QAbstractTableModel_hookH handle)
{
	delete (QAbstractTableModel_hook *)handle;
}

C_EXPORT QAbstractListModel_hookH QAbstractListModel_hook_create(QObjectH handle)
{
	return (QAbstractListModel_hookH) new QAbstractListModel_hook((QObject*)handle);
}

C_EXPORT void QAbstractListModel_hook_destroy(QAbstractListModel_hookH handle)
{
	delete (QAbstractListModel_hook *)handle;
}

