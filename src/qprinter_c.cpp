//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPrinterH QPrinter_create(QPrinter::PrinterMode mode)
{
	return (QPrinterH) new QPrinter(mode);
}

C_EXPORT void QPrinter_destroy(QPrinterH handle)
{
	delete (QPrinter *)handle;
}

C_EXPORT QPrinterH QPrinter_create2(const QPrinterInfoH printer, QPrinter::PrinterMode mode)
{
	return (QPrinterH) new QPrinter(*(const QPrinterInfo*)printer, mode);
}

C_EXPORT int QPrinter_devType(QPrinterH handle)
{
	return (int) ((QPrinter *)handle)->devType();
}

C_EXPORT void QPrinter_setOutputFormat(QPrinterH handle, QPrinter::OutputFormat format)
{
	((QPrinter *)handle)->setOutputFormat(format);
}

C_EXPORT QPrinter::OutputFormat QPrinter_outputFormat(QPrinterH handle)
{
	return (QPrinter::OutputFormat) ((QPrinter *)handle)->outputFormat();
}

C_EXPORT void QPrinter_setPrinterName(QPrinterH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QPrinter *)handle)->setPrinterName(t_AnonParam1);
}

C_EXPORT void QPrinter_printerName(QPrinterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinter *)handle)->printerName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QPrinter_isValid(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->isValid();
}

C_EXPORT void QPrinter_setOutputFileName(QPrinterH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QPrinter *)handle)->setOutputFileName(t_AnonParam1);
}

C_EXPORT void QPrinter_outputFileName(QPrinterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinter *)handle)->outputFileName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QPrinter_setPrintProgram(QPrinterH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QPrinter *)handle)->setPrintProgram(t_AnonParam1);
}

C_EXPORT void QPrinter_printProgram(QPrinterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinter *)handle)->printProgram();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QPrinter_setDocName(QPrinterH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QPrinter *)handle)->setDocName(t_AnonParam1);
}

C_EXPORT void QPrinter_docName(QPrinterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinter *)handle)->docName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QPrinter_setCreator(QPrinterH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QPrinter *)handle)->setCreator(t_AnonParam1);
}

C_EXPORT void QPrinter_creator(QPrinterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinter *)handle)->creator();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QPrinter_setOrientation(QPrinterH handle, QPrinter::Orientation AnonParam1)
{
	((QPrinter *)handle)->setOrientation(AnonParam1);
}

C_EXPORT QPrinter::Orientation QPrinter_orientation(QPrinterH handle)
{
	return (QPrinter::Orientation) ((QPrinter *)handle)->orientation();
}

C_EXPORT void QPrinter_setPageSize(QPrinterH handle, QPrinter::PageSize AnonParam1)
{
	((QPrinter *)handle)->setPageSize(AnonParam1);
}

C_EXPORT QPrinter::PageSize QPrinter_pageSize(QPrinterH handle)
{
	return (QPrinter::PageSize) ((QPrinter *)handle)->pageSize();
}

C_EXPORT void QPrinter_setPaperSize(QPrinterH handle, QPrinter::PageSize AnonParam1)
{
	((QPrinter *)handle)->setPaperSize(AnonParam1);
}

C_EXPORT QPrinter::PageSize QPrinter_paperSize(QPrinterH handle)
{
	return (QPrinter::PageSize) ((QPrinter *)handle)->paperSize();
}

C_EXPORT void QPrinter_setPaperSize2(QPrinterH handle, const QSizeFH paperSize, QPrinter::Unit unit)
{
	((QPrinter *)handle)->setPaperSize(*(const QSizeF*)paperSize, unit);
}

C_EXPORT void QPrinter_paperSize2(QPrinterH handle, QSizeFH retval, QPrinter::Unit unit)
{
	*(QSizeF *)retval = ((QPrinter *)handle)->paperSize(unit);
}

C_EXPORT void QPrinter_setPageOrder(QPrinterH handle, QPrinter::PageOrder AnonParam1)
{
	((QPrinter *)handle)->setPageOrder(AnonParam1);
}

C_EXPORT QPrinter::PageOrder QPrinter_pageOrder(QPrinterH handle)
{
	return (QPrinter::PageOrder) ((QPrinter *)handle)->pageOrder();
}

C_EXPORT void QPrinter_setResolution(QPrinterH handle, int AnonParam1)
{
	((QPrinter *)handle)->setResolution(AnonParam1);
}

C_EXPORT int QPrinter_resolution(QPrinterH handle)
{
	return (int) ((QPrinter *)handle)->resolution();
}

C_EXPORT void QPrinter_setColorMode(QPrinterH handle, QPrinter::ColorMode AnonParam1)
{
	((QPrinter *)handle)->setColorMode(AnonParam1);
}

C_EXPORT QPrinter::ColorMode QPrinter_colorMode(QPrinterH handle)
{
	return (QPrinter::ColorMode) ((QPrinter *)handle)->colorMode();
}

C_EXPORT void QPrinter_setCollateCopies(QPrinterH handle, bool collate)
{
	((QPrinter *)handle)->setCollateCopies(collate);
}

C_EXPORT bool QPrinter_collateCopies(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->collateCopies();
}

C_EXPORT void QPrinter_setFullPage(QPrinterH handle, bool AnonParam1)
{
	((QPrinter *)handle)->setFullPage(AnonParam1);
}

C_EXPORT bool QPrinter_fullPage(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->fullPage();
}

C_EXPORT void QPrinter_setNumCopies(QPrinterH handle, int AnonParam1)
{
	((QPrinter *)handle)->setNumCopies(AnonParam1);
}

C_EXPORT int QPrinter_numCopies(QPrinterH handle)
{
	return (int) ((QPrinter *)handle)->numCopies();
}

C_EXPORT void QPrinter_setPaperSource(QPrinterH handle, QPrinter::PaperSource AnonParam1)
{
	((QPrinter *)handle)->setPaperSource(AnonParam1);
}

C_EXPORT QPrinter::PaperSource QPrinter_paperSource(QPrinterH handle)
{
	return (QPrinter::PaperSource) ((QPrinter *)handle)->paperSource();
}

C_EXPORT void QPrinter_setDuplex(QPrinterH handle, QPrinter::DuplexMode duplex)
{
	((QPrinter *)handle)->setDuplex(duplex);
}

C_EXPORT QPrinter::DuplexMode QPrinter_duplex(QPrinterH handle)
{
	return (QPrinter::DuplexMode) ((QPrinter *)handle)->duplex();
}

C_EXPORT void QPrinter_supportedResolutions(QPrinterH handle, PPtrIntArray retval)
{
	QList<int> t_retval;
	t_retval = ((QPrinter *)handle)->supportedResolutions();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QPrinter_setFontEmbeddingEnabled(QPrinterH handle, bool enable)
{
	((QPrinter *)handle)->setFontEmbeddingEnabled(enable);
}

C_EXPORT bool QPrinter_fontEmbeddingEnabled(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->fontEmbeddingEnabled();
}

C_EXPORT void QPrinter_setDoubleSidedPrinting(QPrinterH handle, bool enable)
{
	((QPrinter *)handle)->setDoubleSidedPrinting(enable);
}

C_EXPORT bool QPrinter_doubleSidedPrinting(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->doubleSidedPrinting();
}

C_EXPORT void QPrinter_paperRect(QPrinterH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPrinter *)handle)->paperRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QPrinter_pageRect(QPrinterH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPrinter *)handle)->pageRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QPrinter_paperRect2(QPrinterH handle, QRectFH retval, QPrinter::Unit AnonParam1)
{
	*(QRectF *)retval = ((QPrinter *)handle)->paperRect(AnonParam1);
}

C_EXPORT void QPrinter_pageRect2(QPrinterH handle, QRectFH retval, QPrinter::Unit AnonParam1)
{
	*(QRectF *)retval = ((QPrinter *)handle)->pageRect(AnonParam1);
}

#if defined BINUX || DARWIN || QTOPIA
C_EXPORT void QPrinter_printerSelectionOption(QPrinterH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinter *)handle)->printerSelectionOption();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QPrinter_setPrinterSelectionOption(QPrinterH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QPrinter *)handle)->setPrinterSelectionOption(t_AnonParam1);
}

#endif
C_EXPORT bool QPrinter_newPage(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->newPage();
}

C_EXPORT bool QPrinter_abort(QPrinterH handle)
{
	return (bool) ((QPrinter *)handle)->abort();
}

C_EXPORT QPrinter::PrinterState QPrinter_printerState(QPrinterH handle)
{
	return (QPrinter::PrinterState) ((QPrinter *)handle)->printerState();
}

C_EXPORT QPaintEngineH QPrinter_paintEngine(QPrinterH handle)
{
	return (QPaintEngineH) ((QPrinter *)handle)->paintEngine();
}

C_EXPORT QPrintEngineH QPrinter_printEngine(QPrinterH handle)
{
	return (QPrintEngineH) ((QPrinter *)handle)->printEngine();
}

C_EXPORT void QPrinter_setFromTo(QPrinterH handle, int fromPage, int toPage)
{
	((QPrinter *)handle)->setFromTo(fromPage, toPage);
}

C_EXPORT int QPrinter_fromPage(QPrinterH handle)
{
	return (int) ((QPrinter *)handle)->fromPage();
}

C_EXPORT int QPrinter_toPage(QPrinterH handle)
{
	return (int) ((QPrinter *)handle)->toPage();
}

C_EXPORT void QPrinter_setPrintRange(QPrinterH handle, QPrinter::PrintRange range)
{
	((QPrinter *)handle)->setPrintRange(range);
}

C_EXPORT QPrinter::PrintRange QPrinter_printRange(QPrinterH handle)
{
	return (QPrinter::PrintRange) ((QPrinter *)handle)->printRange();
}

C_EXPORT void QPrinter_setPageMargins(QPrinterH handle, qreal left, qreal top, qreal right, qreal bottom, QPrinter::Unit unit)
{
	((QPrinter *)handle)->setPageMargins(left, top, right, bottom, unit);
}

C_EXPORT void QPrinter_getPageMargins(QPrinterH handle, qreal* left, qreal* top, qreal* right, qreal* bottom, QPrinter::Unit unit)
{
	((QPrinter *)handle)->getPageMargins(left, top, right, bottom, unit);
}

#if defined MSWINDOWS
C_EXPORT void QPrinter_setWinPageSize(QPrinterH handle, int winPageSize)
{
	((QPrinter *)handle)->setWinPageSize(winPageSize);
}

C_EXPORT int QPrinter_winPageSize(QPrinterH handle)
{
	return (int) ((QPrinter *)handle)->winPageSize();
}

C_EXPORT HDC QPrinter_getDC(QPrinterH handle)
{
	return (HDC) ((QPrinter *)handle)->getDC();
}

C_EXPORT void QPrinter_releaseDC(QPrinterH handle, HDC hdc)
{
	((QPrinter *)handle)->releaseDC(hdc);
}

#endif
