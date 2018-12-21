//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPrintPreviewDialogH QPrintPreviewDialog_create(QWidgetH parent, unsigned int flags)
{
	return (QPrintPreviewDialogH) new QPrintPreviewDialog((QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QPrintPreviewDialog_destroy(QPrintPreviewDialogH handle)
{
	delete (QPrintPreviewDialog *)handle;
}

C_EXPORT QPrintPreviewDialogH QPrintPreviewDialog_create2(QPrinterH printer, QWidgetH parent, unsigned int flags)
{
	return (QPrintPreviewDialogH) new QPrintPreviewDialog((QPrinter*)printer, (QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QPrintPreviewDialog_open(QPrintPreviewDialogH handle, QObjectH receiver, const char* member)
{
	((QPrintPreviewDialog *)handle)->open((QObject*)receiver, member);
}

C_EXPORT QPrinterH QPrintPreviewDialog_printer(QPrintPreviewDialogH handle)
{
	return (QPrinterH) ((QPrintPreviewDialog *)handle)->printer();
}

C_EXPORT void QPrintPreviewDialog_setVisible(QPrintPreviewDialogH handle, bool visible)
{
	((QPrintPreviewDialog *)handle)->setVisible(visible);
}

C_EXPORT void QPrintPreviewDialog_done(QPrintPreviewDialogH handle, int result)
{
	((QPrintPreviewDialog *)handle)->done(result);
}

