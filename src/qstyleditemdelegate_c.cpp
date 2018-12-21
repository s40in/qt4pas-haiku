//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QStyledItemDelegateH QStyledItemDelegate_create(QObjectH parent)
{
	return (QStyledItemDelegateH) new QStyledItemDelegate((QObject*)parent);
}

C_EXPORT void QStyledItemDelegate_destroy(QStyledItemDelegateH handle)
{
	delete (QStyledItemDelegate *)handle;
}

C_EXPORT void QStyledItemDelegate_paint(QStyledItemDelegateH handle, QPainterH painter, const QStyleOptionViewItemH option, const QModelIndexH index)
{
	((QStyledItemDelegate *)handle)->paint((QPainter*)painter, *(const QStyleOptionViewItem*)option, *(const QModelIndex*)index);
}

C_EXPORT void QStyledItemDelegate_sizeHint(QStyledItemDelegateH handle, PSize retval, const QStyleOptionViewItemH option, const QModelIndexH index)
{
	*(QSize *)retval = ((QStyledItemDelegate *)handle)->sizeHint(*(const QStyleOptionViewItem*)option, *(const QModelIndex*)index);
}

C_EXPORT QWidgetH QStyledItemDelegate_createEditor(QStyledItemDelegateH handle, QWidgetH parent, const QStyleOptionViewItemH option, const QModelIndexH index)
{
	return (QWidgetH) ((QStyledItemDelegate *)handle)->createEditor((QWidget*)parent, *(const QStyleOptionViewItem*)option, *(const QModelIndex*)index);
}

C_EXPORT void QStyledItemDelegate_setEditorData(QStyledItemDelegateH handle, QWidgetH editor, const QModelIndexH index)
{
	((QStyledItemDelegate *)handle)->setEditorData((QWidget*)editor, *(const QModelIndex*)index);
}

C_EXPORT void QStyledItemDelegate_setModelData(QStyledItemDelegateH handle, QWidgetH editor, QAbstractItemModelH model, const QModelIndexH index)
{
	((QStyledItemDelegate *)handle)->setModelData((QWidget*)editor, (QAbstractItemModel*)model, *(const QModelIndex*)index);
}

C_EXPORT void QStyledItemDelegate_updateEditorGeometry(QStyledItemDelegateH handle, QWidgetH editor, const QStyleOptionViewItemH option, const QModelIndexH index)
{
	((QStyledItemDelegate *)handle)->updateEditorGeometry((QWidget*)editor, *(const QStyleOptionViewItem*)option, *(const QModelIndex*)index);
}

C_EXPORT QItemEditorFactoryH QStyledItemDelegate_itemEditorFactory(QStyledItemDelegateH handle)
{
	return (QItemEditorFactoryH) ((QStyledItemDelegate *)handle)->itemEditorFactory();
}

C_EXPORT void QStyledItemDelegate_setItemEditorFactory(QStyledItemDelegateH handle, QItemEditorFactoryH factory)
{
	((QStyledItemDelegate *)handle)->setItemEditorFactory((QItemEditorFactory*)factory);
}

C_EXPORT void QStyledItemDelegate_displayText(QStyledItemDelegateH handle, PWideString retval, const QVariantH value, const QLocaleH locale)
{
	QString t_retval;
	t_retval = ((QStyledItemDelegate *)handle)->displayText(*(const QVariant*)value, *(const QLocale*)locale);
	copyQStringToPWideString(t_retval, retval);
}

