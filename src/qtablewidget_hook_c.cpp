//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtablewidget_hook.h"

C_EXPORT QTableWidgetSelectionRange_hookH QTableWidgetSelectionRange_hook_create(QObjectH handle)
{
	return (QTableWidgetSelectionRange_hookH) new QTableWidgetSelectionRange_hook((QObject*)handle);
}

C_EXPORT void QTableWidgetSelectionRange_hook_destroy(QTableWidgetSelectionRange_hookH handle)
{
	delete (QTableWidgetSelectionRange_hook *)handle;
}

C_EXPORT QTableWidgetItem_hookH QTableWidgetItem_hook_create(QObjectH handle)
{
	return (QTableWidgetItem_hookH) new QTableWidgetItem_hook((QObject*)handle);
}

C_EXPORT void QTableWidgetItem_hook_destroy(QTableWidgetItem_hookH handle)
{
	delete (QTableWidgetItem_hook *)handle;
}

C_EXPORT QTableWidget_hookH QTableWidget_hook_create(QObjectH handle)
{
	return (QTableWidget_hookH) new QTableWidget_hook((QObject*)handle);
}

C_EXPORT void QTableWidget_hook_destroy(QTableWidget_hookH handle)
{
	delete (QTableWidget_hook *)handle;
}

C_EXPORT void QTableWidget_hook_hook_itemPressed(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemPressed(hook);
}

C_EXPORT void QTableWidget_hook_hook_itemClicked(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemClicked(hook);
}

C_EXPORT void QTableWidget_hook_hook_itemDoubleClicked(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemDoubleClicked(hook);
}

C_EXPORT void QTableWidget_hook_hook_itemActivated(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemActivated(hook);
}

C_EXPORT void QTableWidget_hook_hook_itemEntered(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemEntered(hook);
}

C_EXPORT void QTableWidget_hook_hook_itemChanged(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemChanged(hook);
}

C_EXPORT void QTableWidget_hook_hook_currentItemChanged(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_currentItemChanged(hook);
}

C_EXPORT void QTableWidget_hook_hook_itemSelectionChanged(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_itemSelectionChanged(hook);
}

C_EXPORT void QTableWidget_hook_hook_cellPressed(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_cellPressed(hook);
}

C_EXPORT void QTableWidget_hook_hook_cellClicked(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_cellClicked(hook);
}

C_EXPORT void QTableWidget_hook_hook_cellDoubleClicked(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_cellDoubleClicked(hook);
}

C_EXPORT void QTableWidget_hook_hook_cellActivated(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_cellActivated(hook);
}

C_EXPORT void QTableWidget_hook_hook_cellEntered(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_cellEntered(hook);
}

C_EXPORT void QTableWidget_hook_hook_cellChanged(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_cellChanged(hook);
}

C_EXPORT void QTableWidget_hook_hook_currentCellChanged(QTableWidget_hookH handle, QHookH hook)
{
	((QTableWidget_hook *)handle)->hook_currentCellChanged(hook);
}

