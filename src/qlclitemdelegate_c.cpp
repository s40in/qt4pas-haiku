//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclitemdelegate.h"

C_EXPORT QLCLItemDelegateH QLCLItemDelegate_create(QObjectH parent)
{
	return (QLCLItemDelegateH) new QLCLItemDelegate((QObject*)parent);
}

C_EXPORT void QLCLItemDelegate_destroy(QLCLItemDelegateH handle)
{
	delete (QLCLItemDelegate *)handle;
}

C_EXPORT void QLCLItemDelegate_override_sizeHint(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_sizeHint(hook);
}

C_EXPORT void QLCLItemDelegate_override_paint(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_paint(hook);
}

C_EXPORT void QLCLItemDelegate_override_createEditor(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_createEditor(hook);
}

C_EXPORT void QLCLItemDelegate_override_setEditorData(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_setEditorData(hook);
}

C_EXPORT void QLCLItemDelegate_override_setModelData(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_setModelData(hook);
}

C_EXPORT void QLCLItemDelegate_override_updateEditorGeometry(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_updateEditorGeometry(hook);
}

C_EXPORT void QLCLItemDelegate_override_editorEvent(QLCLItemDelegateH handle, const QOverrideHook hook)
{
	((QLCLItemDelegate *)handle)->override_editorEvent(hook);
}

C_EXPORT bool QLCLItemDelegate_InheritedEditorEvent(QLCLItemDelegateH handle, QEventH event, QAbstractItemModelH model, const QStyleOptionViewItemH option, const QModelIndexH index)
{
	return (bool) ((QLCLItemDelegate *)handle)->InheritedEditorEvent((QEvent*)event, (QAbstractItemModel*)model, *(const QStyleOptionViewItem*)option, *(const QModelIndex*)index);
}

