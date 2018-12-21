//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QComboBoxH QComboBox_create(QWidgetH parent)
{
	return (QComboBoxH) new QComboBox((QWidget*)parent);
}

C_EXPORT void QComboBox_destroy(QComboBoxH handle)
{
	delete (QComboBox *)handle;
}

C_EXPORT int QComboBox_maxVisibleItems(QComboBoxH handle)
{
	return (int) ((QComboBox *)handle)->maxVisibleItems();
}

C_EXPORT void QComboBox_setMaxVisibleItems(QComboBoxH handle, int maxItems)
{
	((QComboBox *)handle)->setMaxVisibleItems(maxItems);
}

C_EXPORT int QComboBox_count(QComboBoxH handle)
{
	return (int) ((QComboBox *)handle)->count();
}

C_EXPORT void QComboBox_setMaxCount(QComboBoxH handle, int max)
{
	((QComboBox *)handle)->setMaxCount(max);
}

C_EXPORT int QComboBox_maxCount(QComboBoxH handle)
{
	return (int) ((QComboBox *)handle)->maxCount();
}

C_EXPORT bool QComboBox_autoCompletion(QComboBoxH handle)
{
	return (bool) ((QComboBox *)handle)->autoCompletion();
}

C_EXPORT void QComboBox_setAutoCompletion(QComboBoxH handle, bool enable)
{
	((QComboBox *)handle)->setAutoCompletion(enable);
}

C_EXPORT Qt::CaseSensitivity QComboBox_autoCompletionCaseSensitivity(QComboBoxH handle)
{
	return (Qt::CaseSensitivity) ((QComboBox *)handle)->autoCompletionCaseSensitivity();
}

C_EXPORT void QComboBox_setAutoCompletionCaseSensitivity(QComboBoxH handle, Qt::CaseSensitivity sensitivity)
{
	((QComboBox *)handle)->setAutoCompletionCaseSensitivity(sensitivity);
}

C_EXPORT bool QComboBox_duplicatesEnabled(QComboBoxH handle)
{
	return (bool) ((QComboBox *)handle)->duplicatesEnabled();
}

C_EXPORT void QComboBox_setDuplicatesEnabled(QComboBoxH handle, bool enable)
{
	((QComboBox *)handle)->setDuplicatesEnabled(enable);
}

C_EXPORT void QComboBox_setFrame(QComboBoxH handle, bool AnonParam1)
{
	((QComboBox *)handle)->setFrame(AnonParam1);
}

C_EXPORT bool QComboBox_hasFrame(QComboBoxH handle)
{
	return (bool) ((QComboBox *)handle)->hasFrame();
}

C_EXPORT int QComboBox_findText(QComboBoxH handle, PWideString text, unsigned int flags)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QComboBox *)handle)->findText(t_text, (Qt::MatchFlags)flags);
}

C_EXPORT int QComboBox_findData(QComboBoxH handle, const QVariantH data, Qt::ItemDataRole role, unsigned int flags)
{
	return (int) ((QComboBox *)handle)->findData(*(const QVariant*)data, role, (Qt::MatchFlags)flags);
}

C_EXPORT QComboBox::InsertPolicy QComboBox_insertPolicy(QComboBoxH handle)
{
	return (QComboBox::InsertPolicy) ((QComboBox *)handle)->insertPolicy();
}

C_EXPORT void QComboBox_setInsertPolicy(QComboBoxH handle, QComboBox::InsertPolicy policy)
{
	((QComboBox *)handle)->setInsertPolicy(policy);
}

C_EXPORT QComboBox::SizeAdjustPolicy QComboBox_sizeAdjustPolicy(QComboBoxH handle)
{
	return (QComboBox::SizeAdjustPolicy) ((QComboBox *)handle)->sizeAdjustPolicy();
}

C_EXPORT void QComboBox_setSizeAdjustPolicy(QComboBoxH handle, QComboBox::SizeAdjustPolicy policy)
{
	((QComboBox *)handle)->setSizeAdjustPolicy(policy);
}

C_EXPORT int QComboBox_minimumContentsLength(QComboBoxH handle)
{
	return (int) ((QComboBox *)handle)->minimumContentsLength();
}

C_EXPORT void QComboBox_setMinimumContentsLength(QComboBoxH handle, int characters)
{
	((QComboBox *)handle)->setMinimumContentsLength(characters);
}

C_EXPORT void QComboBox_iconSize(QComboBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QComboBox *)handle)->iconSize();
}

C_EXPORT void QComboBox_setIconSize(QComboBoxH handle, const QSizeH size)
{
	((QComboBox *)handle)->setIconSize(*(const QSize*)size);
}

C_EXPORT bool QComboBox_isEditable(QComboBoxH handle)
{
	return (bool) ((QComboBox *)handle)->isEditable();
}

C_EXPORT void QComboBox_setEditable(QComboBoxH handle, bool editable)
{
	((QComboBox *)handle)->setEditable(editable);
}

C_EXPORT void QComboBox_setLineEdit(QComboBoxH handle, QLineEditH edit)
{
	((QComboBox *)handle)->setLineEdit((QLineEdit*)edit);
}

C_EXPORT QLineEditH QComboBox_lineEdit(QComboBoxH handle)
{
	return (QLineEditH) ((QComboBox *)handle)->lineEdit();
}

C_EXPORT void QComboBox_setValidator(QComboBoxH handle, const QValidatorH v)
{
	((QComboBox *)handle)->setValidator((const QValidator*)v);
}

C_EXPORT const QValidatorH QComboBox_validator(QComboBoxH handle)
{
	return (const QValidatorH) ((QComboBox *)handle)->validator();
}

C_EXPORT void QComboBox_setCompleter(QComboBoxH handle, QCompleterH c)
{
	((QComboBox *)handle)->setCompleter((QCompleter*)c);
}

C_EXPORT QCompleterH QComboBox_completer(QComboBoxH handle)
{
	return (QCompleterH) ((QComboBox *)handle)->completer();
}

C_EXPORT QAbstractItemDelegateH QComboBox_itemDelegate(QComboBoxH handle)
{
	return (QAbstractItemDelegateH) ((QComboBox *)handle)->itemDelegate();
}

C_EXPORT void QComboBox_setItemDelegate(QComboBoxH handle, QAbstractItemDelegateH delegate)
{
	((QComboBox *)handle)->setItemDelegate((QAbstractItemDelegate*)delegate);
}

C_EXPORT QAbstractItemModelH QComboBox_model(QComboBoxH handle)
{
	return (QAbstractItemModelH) ((QComboBox *)handle)->model();
}

C_EXPORT void QComboBox_setModel(QComboBoxH handle, QAbstractItemModelH model)
{
	((QComboBox *)handle)->setModel((QAbstractItemModel*)model);
}

C_EXPORT void QComboBox_rootModelIndex(QComboBoxH handle, QModelIndexH retval)
{
	*(QModelIndex *)retval = ((QComboBox *)handle)->rootModelIndex();
}

C_EXPORT void QComboBox_setRootModelIndex(QComboBoxH handle, const QModelIndexH index)
{
	((QComboBox *)handle)->setRootModelIndex(*(const QModelIndex*)index);
}

C_EXPORT int QComboBox_modelColumn(QComboBoxH handle)
{
	return (int) ((QComboBox *)handle)->modelColumn();
}

C_EXPORT void QComboBox_setModelColumn(QComboBoxH handle, int visibleColumn)
{
	((QComboBox *)handle)->setModelColumn(visibleColumn);
}

C_EXPORT int QComboBox_currentIndex(QComboBoxH handle)
{
	return (int) ((QComboBox *)handle)->currentIndex();
}

C_EXPORT void QComboBox_currentText(QComboBoxH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QComboBox *)handle)->currentText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QComboBox_itemText(QComboBoxH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QComboBox *)handle)->itemText(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QComboBox_itemIcon(QComboBoxH handle, QIconH retval, int index)
{
	*(QIcon *)retval = ((QComboBox *)handle)->itemIcon(index);
}

C_EXPORT void QComboBox_itemData(QComboBoxH handle, QVariantH retval, int index, Qt::ItemDataRole role)
{
	*(QVariant *)retval = ((QComboBox *)handle)->itemData(index, role);
}

C_EXPORT void QComboBox_addItem(QComboBoxH handle, PWideString text, const QVariantH userData)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QComboBox *)handle)->addItem(t_text, *(const QVariant*)userData);
}

C_EXPORT void QComboBox_addItem2(QComboBoxH handle, const QIconH icon, PWideString text, const QVariantH userData)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QComboBox *)handle)->addItem(*(const QIcon*)icon, t_text, *(const QVariant*)userData);
}

C_EXPORT void QComboBox_addItems(QComboBoxH handle, const QStringListH texts)
{
	((QComboBox *)handle)->addItems(*(const QStringList*)texts);
}

C_EXPORT void QComboBox_insertItem(QComboBoxH handle, int index, PWideString text, const QVariantH userData)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QComboBox *)handle)->insertItem(index, t_text, *(const QVariant*)userData);
}

C_EXPORT void QComboBox_insertItem2(QComboBoxH handle, int index, const QIconH icon, PWideString text, const QVariantH userData)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QComboBox *)handle)->insertItem(index, *(const QIcon*)icon, t_text, *(const QVariant*)userData);
}

C_EXPORT void QComboBox_insertItems(QComboBoxH handle, int index, const QStringListH texts)
{
	((QComboBox *)handle)->insertItems(index, *(const QStringList*)texts);
}

C_EXPORT void QComboBox_insertSeparator(QComboBoxH handle, int index)
{
	((QComboBox *)handle)->insertSeparator(index);
}

C_EXPORT void QComboBox_removeItem(QComboBoxH handle, int index)
{
	((QComboBox *)handle)->removeItem(index);
}

C_EXPORT void QComboBox_setItemText(QComboBoxH handle, int index, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QComboBox *)handle)->setItemText(index, t_text);
}

C_EXPORT void QComboBox_setItemIcon(QComboBoxH handle, int index, const QIconH icon)
{
	((QComboBox *)handle)->setItemIcon(index, *(const QIcon*)icon);
}

C_EXPORT void QComboBox_setItemData(QComboBoxH handle, int index, const QVariantH value, Qt::ItemDataRole role)
{
	((QComboBox *)handle)->setItemData(index, *(const QVariant*)value, role);
}

C_EXPORT QAbstractItemViewH QComboBox_view(QComboBoxH handle)
{
	return (QAbstractItemViewH) ((QComboBox *)handle)->view();
}

C_EXPORT void QComboBox_setView(QComboBoxH handle, QAbstractItemViewH itemView)
{
	((QComboBox *)handle)->setView((QAbstractItemView*)itemView);
}

C_EXPORT void QComboBox_sizeHint(QComboBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QComboBox *)handle)->sizeHint();
}

C_EXPORT void QComboBox_minimumSizeHint(QComboBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QComboBox *)handle)->minimumSizeHint();
}

C_EXPORT void QComboBox_showPopup(QComboBoxH handle)
{
	((QComboBox *)handle)->showPopup();
}

C_EXPORT void QComboBox_hidePopup(QComboBoxH handle)
{
	((QComboBox *)handle)->hidePopup();
}

C_EXPORT bool QComboBox_event(QComboBoxH handle, QEventH event)
{
	return (bool) ((QComboBox *)handle)->event((QEvent*)event);
}

C_EXPORT void QComboBox_clear(QComboBoxH handle)
{
	((QComboBox *)handle)->clear();
}

C_EXPORT void QComboBox_clearEditText(QComboBoxH handle)
{
	((QComboBox *)handle)->clearEditText();
}

C_EXPORT void QComboBox_setEditText(QComboBoxH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QComboBox *)handle)->setEditText(t_text);
}

C_EXPORT void QComboBox_setCurrentIndex(QComboBoxH handle, int index)
{
	((QComboBox *)handle)->setCurrentIndex(index);
}

