//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT int QAbstractPrintDialog_exec(QAbstractPrintDialogH handle)
{
	return (int) ((QAbstractPrintDialog *)handle)->exec();
}

C_EXPORT void QAbstractPrintDialog_addEnabledOption(QAbstractPrintDialogH handle, QAbstractPrintDialog::PrintDialogOption option)
{
	((QAbstractPrintDialog *)handle)->addEnabledOption(option);
}

C_EXPORT void QAbstractPrintDialog_setEnabledOptions(QAbstractPrintDialogH handle, unsigned int options)
{
	((QAbstractPrintDialog *)handle)->setEnabledOptions((QAbstractPrintDialog::PrintDialogOptions)options);
}

C_EXPORT unsigned int QAbstractPrintDialog_enabledOptions(QAbstractPrintDialogH handle)
{
	return (unsigned int) ((QAbstractPrintDialog *)handle)->enabledOptions();
}

C_EXPORT bool QAbstractPrintDialog_isOptionEnabled(QAbstractPrintDialogH handle, QAbstractPrintDialog::PrintDialogOption option)
{
	return (bool) ((QAbstractPrintDialog *)handle)->isOptionEnabled(option);
}

C_EXPORT void QAbstractPrintDialog_setPrintRange(QAbstractPrintDialogH handle, QAbstractPrintDialog::PrintRange range)
{
	((QAbstractPrintDialog *)handle)->setPrintRange(range);
}

C_EXPORT QAbstractPrintDialog::PrintRange QAbstractPrintDialog_printRange(QAbstractPrintDialogH handle)
{
	return (QAbstractPrintDialog::PrintRange) ((QAbstractPrintDialog *)handle)->printRange();
}

C_EXPORT void QAbstractPrintDialog_setMinMax(QAbstractPrintDialogH handle, int min, int max)
{
	((QAbstractPrintDialog *)handle)->setMinMax(min, max);
}

C_EXPORT int QAbstractPrintDialog_minPage(QAbstractPrintDialogH handle)
{
	return (int) ((QAbstractPrintDialog *)handle)->minPage();
}

C_EXPORT int QAbstractPrintDialog_maxPage(QAbstractPrintDialogH handle)
{
	return (int) ((QAbstractPrintDialog *)handle)->maxPage();
}

C_EXPORT void QAbstractPrintDialog_setFromTo(QAbstractPrintDialogH handle, int fromPage, int toPage)
{
	((QAbstractPrintDialog *)handle)->setFromTo(fromPage, toPage);
}

C_EXPORT int QAbstractPrintDialog_fromPage(QAbstractPrintDialogH handle)
{
	return (int) ((QAbstractPrintDialog *)handle)->fromPage();
}

C_EXPORT int QAbstractPrintDialog_toPage(QAbstractPrintDialogH handle)
{
	return (int) ((QAbstractPrintDialog *)handle)->toPage();
}

C_EXPORT QPrinterH QAbstractPrintDialog_printer(QAbstractPrintDialogH handle)
{
	return (QPrinterH) ((QAbstractPrintDialog *)handle)->printer();
}

