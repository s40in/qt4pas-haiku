//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtreewidget_hook.h"

C_EXPORT QTreeWidgetItem_hookH QTreeWidgetItem_hook_create(QObjectH handle)
{
	return (QTreeWidgetItem_hookH) new QTreeWidgetItem_hook((QObject*)handle);
}

C_EXPORT void QTreeWidgetItem_hook_destroy(QTreeWidgetItem_hookH handle)
{
	delete (QTreeWidgetItem_hook *)handle;
}

C_EXPORT QTreeWidget_hookH QTreeWidget_hook_create(QObjectH handle)
{
	return (QTreeWidget_hookH) new QTreeWidget_hook((QObject*)handle);
}

C_EXPORT void QTreeWidget_hook_destroy(QTreeWidget_hookH handle)
{
	delete (QTreeWidget_hook *)handle;
}

C_EXPORT void QTreeWidget_hook_hook_itemPressed(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemPressed(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemClicked(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemClicked(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemDoubleClicked(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemDoubleClicked(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemActivated(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemActivated(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemEntered(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemEntered(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemChanged(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemChanged(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemExpanded(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemExpanded(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemCollapsed(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemCollapsed(hook);
}

C_EXPORT void QTreeWidget_hook_hook_currentItemChanged(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_currentItemChanged(hook);
}

C_EXPORT void QTreeWidget_hook_hook_itemSelectionChanged(QTreeWidget_hookH handle, QHookH hook)
{
	((QTreeWidget_hook *)handle)->hook_itemSelectionChanged(hook);
}

