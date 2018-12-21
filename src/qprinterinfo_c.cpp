//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPrinterInfoH QPrinterInfo_create()
{
	return (QPrinterInfoH) new QPrinterInfo();
}

C_EXPORT void QPrinterInfo_destroy(QPrinterInfoH handle)
{
	delete (QPrinterInfo *)handle;
}

C_EXPORT QPrinterInfoH QPrinterInfo_create2(const QPrinterInfoH src)
{
	return (QPrinterInfoH) new QPrinterInfo(*(const QPrinterInfo*)src);
}

C_EXPORT QPrinterInfoH QPrinterInfo_create3(const QPrinterH printer)
{
	return (QPrinterInfoH) new QPrinterInfo(*(const QPrinter*)printer);
}

C_EXPORT void QPrinterInfo_printerName(QPrinterInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinterInfo *)handle)->printerName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QPrinterInfo_isNull(QPrinterInfoH handle)
{
	return (bool) ((QPrinterInfo *)handle)->isNull();
}

C_EXPORT bool QPrinterInfo_isDefault(QPrinterInfoH handle)
{
	return (bool) ((QPrinterInfo *)handle)->isDefault();
}

C_EXPORT void QPrinterInfo_supportedPaperSizes(QPrinterInfoH handle, PPtrIntArray retval)
{
	QList<QPrinter::PaperSize> t_retval;
	t_retval = ((QPrinterInfo *)handle)->supportedPaperSizes();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QPrinterInfo_availablePrinters(PPtrIntArray retval)
{
	QList<QPrinterInfo> t_retval;
	t_retval = QPrinterInfo::availablePrinters();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QPrinterInfo_defaultPrinter(QPrinterInfoH retval)
{
	*(QPrinterInfo *)retval = QPrinterInfo::defaultPrinter();
}

