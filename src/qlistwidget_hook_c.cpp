//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlistwidget_hook.h"

C_EXPORT QListWidgetItem_hookH QListWidgetItem_hook_create(QObjectH handle)
{
	return (QListWidgetItem_hookH) new QListWidgetItem_hook((QObject*)handle);
}

C_EXPORT void QListWidgetItem_hook_destroy(QListWidgetItem_hookH handle)
{
	delete (QListWidgetItem_hook *)handle;
}

C_EXPORT QListWidget_hookH QListWidget_hook_create(QObjectH handle)
{
	return (QListWidget_hookH) new QListWidget_hook((QObject*)handle);
}

C_EXPORT void QListWidget_hook_destroy(QListWidget_hookH handle)
{
	delete (QListWidget_hook *)handle;
}

C_EXPORT void QListWidget_hook_hook_itemPressed(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemPressed(hook);
}

C_EXPORT void QListWidget_hook_hook_itemClicked(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemClicked(hook);
}

C_EXPORT void QListWidget_hook_hook_itemDoubleClicked(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemDoubleClicked(hook);
}

C_EXPORT void QListWidget_hook_hook_itemActivated(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemActivated(hook);
}

C_EXPORT void QListWidget_hook_hook_itemEntered(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemEntered(hook);
}

C_EXPORT void QListWidget_hook_hook_itemChanged(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemChanged(hook);
}

C_EXPORT void QListWidget_hook_hook_currentItemChanged(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_currentItemChanged(hook);
}

C_EXPORT void QListWidget_hook_hook_currentTextChanged(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_currentTextChanged(hook);
}

C_EXPORT void QListWidget_hook_hook_currentRowChanged(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_currentRowChanged(hook);
}

C_EXPORT void QListWidget_hook_hook_itemSelectionChanged(QListWidget_hookH handle, QHookH hook)
{
	((QListWidget_hook *)handle)->hook_itemSelectionChanged(hook);
}

