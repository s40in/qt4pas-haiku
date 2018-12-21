//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPageSetupDialogH QPageSetupDialog_create(QPrinterH printer, QWidgetH parent)
{
	return (QPageSetupDialogH) new QPageSetupDialog((QPrinter*)printer, (QWidget*)parent);
}

C_EXPORT void QPageSetupDialog_destroy(QPageSetupDialogH handle)
{
	delete (QPageSetupDialog *)handle;
}

C_EXPORT QPageSetupDialogH QPageSetupDialog_create2(QWidgetH parent)
{
	return (QPageSetupDialogH) new QPageSetupDialog((QWidget*)parent);
}

C_EXPORT void QPageSetupDialog_addEnabledOption(QPageSetupDialogH handle, QPageSetupDialog::PageSetupDialogOption option)
{
	((QPageSetupDialog *)handle)->addEnabledOption(option);
}

C_EXPORT void QPageSetupDialog_setEnabledOptions(QPageSetupDialogH handle, unsigned int options)
{
	((QPageSetupDialog *)handle)->setEnabledOptions((QPageSetupDialog::PageSetupDialogOptions)options);
}

C_EXPORT unsigned int QPageSetupDialog_enabledOptions(QPageSetupDialogH handle)
{
	return (unsigned int) ((QPageSetupDialog *)handle)->enabledOptions();
}

C_EXPORT bool QPageSetupDialog_isOptionEnabled(QPageSetupDialogH handle, QPageSetupDialog::PageSetupDialogOption option)
{
	return (bool) ((QPageSetupDialog *)handle)->isOptionEnabled(option);
}

C_EXPORT void QPageSetupDialog_setOption(QPageSetupDialogH handle, QPageSetupDialog::PageSetupDialogOption option, bool on)
{
	((QPageSetupDialog *)handle)->setOption(option, on);
}

C_EXPORT bool QPageSetupDialog_testOption(QPageSetupDialogH handle, QPageSetupDialog::PageSetupDialogOption option)
{
	return (bool) ((QPageSetupDialog *)handle)->testOption(option);
}

C_EXPORT void QPageSetupDialog_setOptions(QPageSetupDialogH handle, unsigned int options)
{
	((QPageSetupDialog *)handle)->setOptions((QPageSetupDialog::PageSetupDialogOptions)options);
}

C_EXPORT unsigned int QPageSetupDialog_options(QPageSetupDialogH handle)
{
	return (unsigned int) ((QPageSetupDialog *)handle)->options();
}

C_EXPORT int QPageSetupDialog_exec(QPageSetupDialogH handle)
{
	return (int) ((QPageSetupDialog *)handle)->exec();
}

C_EXPORT void QPageSetupDialog_open(QPageSetupDialogH handle, QObjectH receiver, const char* member)
{
	((QPageSetupDialog *)handle)->open((QObject*)receiver, member);
}

#if defined DARWIN
C_EXPORT void QPageSetupDialog_setVisible(QPageSetupDialogH handle, bool visible)
{
	((QPageSetupDialog *)handle)->setVisible(visible);
}

#endif
