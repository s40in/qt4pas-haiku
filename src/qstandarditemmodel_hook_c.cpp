//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qstandarditemmodel_hook.h"

C_EXPORT QStandardItem_hookH QStandardItem_hook_create(QObjectH handle)
{
	return (QStandardItem_hookH) new QStandardItem_hook((QObject*)handle);
}

C_EXPORT void QStandardItem_hook_destroy(QStandardItem_hookH handle)
{
	delete (QStandardItem_hook *)handle;
}

C_EXPORT QStandardItemModel_hookH QStandardItemModel_hook_create(QObjectH handle)
{
	return (QStandardItemModel_hookH) new QStandardItemModel_hook((QObject*)handle);
}

C_EXPORT void QStandardItemModel_hook_destroy(QStandardItemModel_hookH handle)
{
	delete (QStandardItemModel_hook *)handle;
}

C_EXPORT void QStandardItemModel_hook_hook_itemChanged(QStandardItemModel_hookH handle, QHookH hook)
{
	((QStandardItemModel_hook *)handle)->hook_itemChanged(hook);
}

