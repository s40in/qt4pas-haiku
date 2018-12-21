//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPrintDialogH QPrintDialog_create(QPrinterH printer, QWidgetH parent)
{
	return (QPrintDialogH) new QPrintDialog((QPrinter*)printer, (QWidget*)parent);
}

C_EXPORT void QPrintDialog_destroy(QPrintDialogH handle)
{
	delete (QPrintDialog *)handle;
}

C_EXPORT QPrintDialogH QPrintDialog_create2(QWidgetH parent)
{
	return (QPrintDialogH) new QPrintDialog((QWidget*)parent);
}

C_EXPORT int QPrintDialog_exec(QPrintDialogH handle)
{
	return (int) ((QPrintDialog *)handle)->exec();
}

#if defined BINUX || QTOPIA
C_EXPORT void QPrintDialog_accept(QPrintDialogH handle)
{
	((QPrintDialog *)handle)->accept();
}

#endif
C_EXPORT void QPrintDialog_done(QPrintDialogH handle, int result)
{
	((QPrintDialog *)handle)->done(result);
}

C_EXPORT void QPrintDialog_setOption(QPrintDialogH handle, QAbstractPrintDialog::PrintDialogOption option, bool on)
{
	((QPrintDialog *)handle)->setOption(option, on);
}

C_EXPORT bool QPrintDialog_testOption(QPrintDialogH handle, QAbstractPrintDialog::PrintDialogOption option)
{
	return (bool) ((QPrintDialog *)handle)->testOption(option);
}

C_EXPORT void QPrintDialog_setOptions(QPrintDialogH handle, unsigned int options)
{
	((QPrintDialog *)handle)->setOptions((QAbstractPrintDialog::PrintDialogOptions)options);
}

C_EXPORT unsigned int QPrintDialog_options(QPrintDialogH handle)
{
	return (unsigned int) ((QPrintDialog *)handle)->options();
}

#if defined BINUX || DARWIN || QTOPIA
C_EXPORT void QPrintDialog_setVisible(QPrintDialogH handle, bool visible)
{
	((QPrintDialog *)handle)->setVisible(visible);
}

#endif
C_EXPORT void QPrintDialog_open(QPrintDialogH handle, QObjectH receiver, const char* member)
{
	((QPrintDialog *)handle)->open((QObject*)receiver, member);
}

