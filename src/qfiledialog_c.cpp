//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFileDialogH QFileDialog_create(QWidgetH parent, unsigned int f)
{
	return (QFileDialogH) new QFileDialog((QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QFileDialog_destroy(QFileDialogH handle)
{
	delete (QFileDialog *)handle;
}

C_EXPORT QFileDialogH QFileDialog_create2(QWidgetH parent, PWideString caption, PWideString directory, PWideString filter)
{
	QString t_caption;
	QString t_directory;
	QString t_filter;
	copyPWideStringToQString(caption, t_caption);
	copyPWideStringToQString(directory, t_directory);
	copyPWideStringToQString(filter, t_filter);
	return (QFileDialogH) new QFileDialog((QWidget*)parent, t_caption, t_directory, t_filter);
}

C_EXPORT void QFileDialog_setDirectory(QFileDialogH handle, PWideString directory)
{
	QString t_directory;
	copyPWideStringToQString(directory, t_directory);
	((QFileDialog *)handle)->setDirectory(t_directory);
}

C_EXPORT void QFileDialog_setDirectory2(QFileDialogH handle, const QDirH directory)
{
	((QFileDialog *)handle)->setDirectory(*(const QDir*)directory);
}

C_EXPORT void QFileDialog_directory(QFileDialogH handle, QDirH retval)
{
	*(QDir *)retval = ((QFileDialog *)handle)->directory();
}

C_EXPORT void QFileDialog_selectFile(QFileDialogH handle, PWideString filename)
{
	QString t_filename;
	copyPWideStringToQString(filename, t_filename);
	((QFileDialog *)handle)->selectFile(t_filename);
}

C_EXPORT void QFileDialog_selectedFiles(QFileDialogH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QFileDialog *)handle)->selectedFiles();
}

C_EXPORT void QFileDialog_setNameFilterDetailsVisible(QFileDialogH handle, bool enabled)
{
	((QFileDialog *)handle)->setNameFilterDetailsVisible(enabled);
}

C_EXPORT bool QFileDialog_isNameFilterDetailsVisible(QFileDialogH handle)
{
	return (bool) ((QFileDialog *)handle)->isNameFilterDetailsVisible();
}

C_EXPORT void QFileDialog_setNameFilter(QFileDialogH handle, PWideString filter)
{
	QString t_filter;
	copyPWideStringToQString(filter, t_filter);
	((QFileDialog *)handle)->setNameFilter(t_filter);
}

C_EXPORT void QFileDialog_setNameFilters(QFileDialogH handle, const QStringListH filters)
{
	((QFileDialog *)handle)->setNameFilters(*(const QStringList*)filters);
}

C_EXPORT void QFileDialog_nameFilters(QFileDialogH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QFileDialog *)handle)->nameFilters();
}

C_EXPORT void QFileDialog_selectNameFilter(QFileDialogH handle, PWideString filter)
{
	QString t_filter;
	copyPWideStringToQString(filter, t_filter);
	((QFileDialog *)handle)->selectNameFilter(t_filter);
}

C_EXPORT void QFileDialog_selectedNameFilter(QFileDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileDialog *)handle)->selectedNameFilter();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT unsigned int QFileDialog_filter(QFileDialogH handle)
{
	return (unsigned int) ((QFileDialog *)handle)->filter();
}

C_EXPORT void QFileDialog_setFilter(QFileDialogH handle, unsigned int filters)
{
	((QFileDialog *)handle)->setFilter((QDir::Filters)filters);
}

C_EXPORT void QFileDialog_setViewMode(QFileDialogH handle, QFileDialog::ViewMode mode)
{
	((QFileDialog *)handle)->setViewMode(mode);
}

C_EXPORT QFileDialog::ViewMode QFileDialog_viewMode(QFileDialogH handle)
{
	return (QFileDialog::ViewMode) ((QFileDialog *)handle)->viewMode();
}

C_EXPORT void QFileDialog_setFileMode(QFileDialogH handle, QFileDialog::FileMode mode)
{
	((QFileDialog *)handle)->setFileMode(mode);
}

C_EXPORT QFileDialog::FileMode QFileDialog_fileMode(QFileDialogH handle)
{
	return (QFileDialog::FileMode) ((QFileDialog *)handle)->fileMode();
}

C_EXPORT void QFileDialog_setAcceptMode(QFileDialogH handle, QFileDialog::AcceptMode mode)
{
	((QFileDialog *)handle)->setAcceptMode(mode);
}

C_EXPORT QFileDialog::AcceptMode QFileDialog_acceptMode(QFileDialogH handle)
{
	return (QFileDialog::AcceptMode) ((QFileDialog *)handle)->acceptMode();
}

C_EXPORT void QFileDialog_setReadOnly(QFileDialogH handle, bool enabled)
{
	((QFileDialog *)handle)->setReadOnly(enabled);
}

C_EXPORT bool QFileDialog_isReadOnly(QFileDialogH handle)
{
	return (bool) ((QFileDialog *)handle)->isReadOnly();
}

C_EXPORT void QFileDialog_setResolveSymlinks(QFileDialogH handle, bool enabled)
{
	((QFileDialog *)handle)->setResolveSymlinks(enabled);
}

C_EXPORT bool QFileDialog_resolveSymlinks(QFileDialogH handle)
{
	return (bool) ((QFileDialog *)handle)->resolveSymlinks();
}

C_EXPORT void QFileDialog_saveState(QFileDialogH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QFileDialog *)handle)->saveState();
}

C_EXPORT bool QFileDialog_restoreState(QFileDialogH handle, const QByteArrayH state)
{
	return (bool) ((QFileDialog *)handle)->restoreState(*(const QByteArray*)state);
}

C_EXPORT void QFileDialog_setConfirmOverwrite(QFileDialogH handle, bool enabled)
{
	((QFileDialog *)handle)->setConfirmOverwrite(enabled);
}

C_EXPORT bool QFileDialog_confirmOverwrite(QFileDialogH handle)
{
	return (bool) ((QFileDialog *)handle)->confirmOverwrite();
}

C_EXPORT void QFileDialog_setDefaultSuffix(QFileDialogH handle, PWideString suffix)
{
	QString t_suffix;
	copyPWideStringToQString(suffix, t_suffix);
	((QFileDialog *)handle)->setDefaultSuffix(t_suffix);
}

C_EXPORT void QFileDialog_defaultSuffix(QFileDialogH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileDialog *)handle)->defaultSuffix();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileDialog_setHistory(QFileDialogH handle, const QStringListH paths)
{
	((QFileDialog *)handle)->setHistory(*(const QStringList*)paths);
}

C_EXPORT void QFileDialog_history(QFileDialogH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QFileDialog *)handle)->history();
}

C_EXPORT void QFileDialog_setItemDelegate(QFileDialogH handle, QAbstractItemDelegateH delegate)
{
	((QFileDialog *)handle)->setItemDelegate((QAbstractItemDelegate*)delegate);
}

C_EXPORT QAbstractItemDelegateH QFileDialog_itemDelegate(QFileDialogH handle)
{
	return (QAbstractItemDelegateH) ((QFileDialog *)handle)->itemDelegate();
}

C_EXPORT void QFileDialog_setIconProvider(QFileDialogH handle, QFileIconProviderH provider)
{
	((QFileDialog *)handle)->setIconProvider((QFileIconProvider*)provider);
}

C_EXPORT QFileIconProviderH QFileDialog_iconProvider(QFileDialogH handle)
{
	return (QFileIconProviderH) ((QFileDialog *)handle)->iconProvider();
}

C_EXPORT void QFileDialog_setLabelText(QFileDialogH handle, QFileDialog::DialogLabel label, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QFileDialog *)handle)->setLabelText(label, t_text);
}

C_EXPORT void QFileDialog_labelText(QFileDialogH handle, PWideString retval, QFileDialog::DialogLabel label)
{
	QString t_retval;
	t_retval = ((QFileDialog *)handle)->labelText(label);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileDialog_setProxyModel(QFileDialogH handle, QAbstractProxyModelH model)
{
	((QFileDialog *)handle)->setProxyModel((QAbstractProxyModel*)model);
}

C_EXPORT QAbstractProxyModelH QFileDialog_proxyModel(QFileDialogH handle)
{
	return (QAbstractProxyModelH) ((QFileDialog *)handle)->proxyModel();
}

C_EXPORT void QFileDialog_setOption(QFileDialogH handle, QFileDialog::Option option, bool on)
{
	((QFileDialog *)handle)->setOption(option, on);
}

C_EXPORT bool QFileDialog_testOption(QFileDialogH handle, QFileDialog::Option option)
{
	return (bool) ((QFileDialog *)handle)->testOption(option);
}

C_EXPORT void QFileDialog_setOptions(QFileDialogH handle, unsigned int options)
{
	((QFileDialog *)handle)->setOptions((QFileDialog::Options)options);
}

C_EXPORT unsigned int QFileDialog_options(QFileDialogH handle)
{
	return (unsigned int) ((QFileDialog *)handle)->options();
}

C_EXPORT void QFileDialog_open(QFileDialogH handle, QObjectH receiver, const char* member)
{
	((QFileDialog *)handle)->open((QObject*)receiver, member);
}

C_EXPORT void QFileDialog_setVisible(QFileDialogH handle, bool visible)
{
	((QFileDialog *)handle)->setVisible(visible);
}

C_EXPORT void QFileDialog_getOpenFileName(PWideString retval, QWidgetH parent, PWideString caption, PWideString dir, PWideString filter, PWideString selectedFilter, unsigned int options)
{
	QString t_retval;
	QString t_caption;
	QString t_dir;
	QString t_filter;
	QString t_selectedFilter;
	copyPWideStringToQString(caption, t_caption);
	copyPWideStringToQString(dir, t_dir);
	copyPWideStringToQString(filter, t_filter);
	if ( selectedFilter )
		copyPWideStringToQString(selectedFilter, t_selectedFilter);
	t_retval = QFileDialog::getOpenFileName((QWidget*)parent, t_caption, t_dir, t_filter, selectedFilter ? &t_selectedFilter : NULL, (QFileDialog::Options)options);
	copyQStringToPWideString(t_retval, retval);
	if ( selectedFilter )
		copyQStringToPWideString(t_selectedFilter, selectedFilter);
}

C_EXPORT void QFileDialog_getSaveFileName(PWideString retval, QWidgetH parent, PWideString caption, PWideString dir, PWideString filter, PWideString selectedFilter, unsigned int options)
{
	QString t_retval;
	QString t_caption;
	QString t_dir;
	QString t_filter;
	QString t_selectedFilter;
	copyPWideStringToQString(caption, t_caption);
	copyPWideStringToQString(dir, t_dir);
	copyPWideStringToQString(filter, t_filter);
	if ( selectedFilter )
		copyPWideStringToQString(selectedFilter, t_selectedFilter);
	t_retval = QFileDialog::getSaveFileName((QWidget*)parent, t_caption, t_dir, t_filter, selectedFilter ? &t_selectedFilter : NULL, (QFileDialog::Options)options);
	copyQStringToPWideString(t_retval, retval);
	if ( selectedFilter )
		copyQStringToPWideString(t_selectedFilter, selectedFilter);
}

C_EXPORT void QFileDialog_getExistingDirectory(PWideString retval, QWidgetH parent, PWideString caption, PWideString dir, unsigned int options)
{
	QString t_retval;
	QString t_caption;
	QString t_dir;
	copyPWideStringToQString(caption, t_caption);
	copyPWideStringToQString(dir, t_dir);
	t_retval = QFileDialog::getExistingDirectory((QWidget*)parent, t_caption, t_dir, (QFileDialog::Options)options);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileDialog_getOpenFileNames(QStringListH retval, QWidgetH parent, PWideString caption, PWideString dir, PWideString filter, PWideString selectedFilter, unsigned int options)
{
	QString t_caption;
	QString t_dir;
	QString t_filter;
	QString t_selectedFilter;
	copyPWideStringToQString(caption, t_caption);
	copyPWideStringToQString(dir, t_dir);
	copyPWideStringToQString(filter, t_filter);
	if ( selectedFilter )
		copyPWideStringToQString(selectedFilter, t_selectedFilter);
	*(QStringList *)retval = QFileDialog::getOpenFileNames((QWidget*)parent, t_caption, t_dir, t_filter, selectedFilter ? &t_selectedFilter : NULL, (QFileDialog::Options)options);
	if ( selectedFilter )
		copyQStringToPWideString(t_selectedFilter, selectedFilter);
}

