//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTextDocumentH QTextDocument_create(QObjectH parent)
{
	return (QTextDocumentH) new QTextDocument((QObject*)parent);
}

C_EXPORT void QTextDocument_destroy(QTextDocumentH handle)
{
	delete (QTextDocument *)handle;
}

C_EXPORT QTextDocumentH QTextDocument_create2(PWideString text, QObjectH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QTextDocumentH) new QTextDocument(t_text, (QObject*)parent);
}

C_EXPORT QTextDocumentH QTextDocument_clone(QTextDocumentH handle, QObjectH parent)
{
	return (QTextDocumentH) ((QTextDocument *)handle)->clone((QObject*)parent);
}

C_EXPORT bool QTextDocument_isEmpty(QTextDocumentH handle)
{
	return (bool) ((QTextDocument *)handle)->isEmpty();
}

C_EXPORT void QTextDocument_clear(QTextDocumentH handle)
{
	((QTextDocument *)handle)->clear();
}

C_EXPORT void QTextDocument_setUndoRedoEnabled(QTextDocumentH handle, bool enable)
{
	((QTextDocument *)handle)->setUndoRedoEnabled(enable);
}

C_EXPORT bool QTextDocument_isUndoRedoEnabled(QTextDocumentH handle)
{
	return (bool) ((QTextDocument *)handle)->isUndoRedoEnabled();
}

C_EXPORT bool QTextDocument_isUndoAvailable(QTextDocumentH handle)
{
	return (bool) ((QTextDocument *)handle)->isUndoAvailable();
}

C_EXPORT bool QTextDocument_isRedoAvailable(QTextDocumentH handle)
{
	return (bool) ((QTextDocument *)handle)->isRedoAvailable();
}

C_EXPORT int QTextDocument_revision(QTextDocumentH handle)
{
	return (int) ((QTextDocument *)handle)->revision();
}

C_EXPORT void QTextDocument_setDocumentLayout(QTextDocumentH handle, QAbstractTextDocumentLayoutH layout)
{
	((QTextDocument *)handle)->setDocumentLayout((QAbstractTextDocumentLayout*)layout);
}

C_EXPORT QAbstractTextDocumentLayoutH QTextDocument_documentLayout(QTextDocumentH handle)
{
	return (QAbstractTextDocumentLayoutH) ((QTextDocument *)handle)->documentLayout();
}

C_EXPORT void QTextDocument_setMetaInformation(QTextDocumentH handle, QTextDocument::MetaInformation info, PWideString AnonParam2)
{
	QString t_AnonParam2;
	copyPWideStringToQString(AnonParam2, t_AnonParam2);
	((QTextDocument *)handle)->setMetaInformation(info, t_AnonParam2);
}

C_EXPORT void QTextDocument_metaInformation(QTextDocumentH handle, PWideString retval, QTextDocument::MetaInformation info)
{
	QString t_retval;
	t_retval = ((QTextDocument *)handle)->metaInformation(info);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextDocument_toHtml(QTextDocumentH handle, PWideString retval, const QByteArrayH encoding)
{
	QString t_retval;
	t_retval = ((QTextDocument *)handle)->toHtml(*(const QByteArray*)encoding);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextDocument_setHtml(QTextDocumentH handle, PWideString html)
{
	QString t_html;
	copyPWideStringToQString(html, t_html);
	((QTextDocument *)handle)->setHtml(t_html);
}

C_EXPORT void QTextDocument_toPlainText(QTextDocumentH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextDocument *)handle)->toPlainText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextDocument_setPlainText(QTextDocumentH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextDocument *)handle)->setPlainText(t_text);
}

C_EXPORT void QTextDocument_characterAt(QTextDocumentH handle, PWideChar retval, int pos)
{
	*(QChar *)retval = ((QTextDocument *)handle)->characterAt(pos);
}

C_EXPORT void QTextDocument_find(QTextDocumentH handle, QTextCursorH retval, PWideString subString, int from, unsigned int options)
{
	QString t_subString;
	copyPWideStringToQString(subString, t_subString);
	*(QTextCursor *)retval = ((QTextDocument *)handle)->find(t_subString, from, (QTextDocument::FindFlags)options);
}

C_EXPORT void QTextDocument_find2(QTextDocumentH handle, QTextCursorH retval, PWideString subString, const QTextCursorH from, unsigned int options)
{
	QString t_subString;
	copyPWideStringToQString(subString, t_subString);
	*(QTextCursor *)retval = ((QTextDocument *)handle)->find(t_subString, *(const QTextCursor*)from, (QTextDocument::FindFlags)options);
}

C_EXPORT void QTextDocument_find3(QTextDocumentH handle, QTextCursorH retval, const QRegExpH expr, int from, unsigned int options)
{
	*(QTextCursor *)retval = ((QTextDocument *)handle)->find(*(const QRegExp*)expr, from, (QTextDocument::FindFlags)options);
}

C_EXPORT void QTextDocument_find4(QTextDocumentH handle, QTextCursorH retval, const QRegExpH expr, const QTextCursorH from, unsigned int options)
{
	*(QTextCursor *)retval = ((QTextDocument *)handle)->find(*(const QRegExp*)expr, *(const QTextCursor*)from, (QTextDocument::FindFlags)options);
}

C_EXPORT QTextFrameH QTextDocument_frameAt(QTextDocumentH handle, int pos)
{
	return (QTextFrameH) ((QTextDocument *)handle)->frameAt(pos);
}

C_EXPORT QTextFrameH QTextDocument_rootFrame(QTextDocumentH handle)
{
	return (QTextFrameH) ((QTextDocument *)handle)->rootFrame();
}

C_EXPORT QTextObjectH QTextDocument_object(QTextDocumentH handle, int objectIndex)
{
	return (QTextObjectH) ((QTextDocument *)handle)->object(objectIndex);
}

C_EXPORT QTextObjectH QTextDocument_objectForFormat(QTextDocumentH handle, const QTextFormatH AnonParam1)
{
	return (QTextObjectH) ((QTextDocument *)handle)->objectForFormat(*(const QTextFormat*)AnonParam1);
}

C_EXPORT void QTextDocument_findBlock(QTextDocumentH handle, QTextBlockH retval, int pos)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->findBlock(pos);
}

C_EXPORT void QTextDocument_findBlockByNumber(QTextDocumentH handle, QTextBlockH retval, int blockNumber)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->findBlockByNumber(blockNumber);
}

C_EXPORT void QTextDocument_findBlockByLineNumber(QTextDocumentH handle, QTextBlockH retval, int blockNumber)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->findBlockByLineNumber(blockNumber);
}

C_EXPORT void QTextDocument_begin(QTextDocumentH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->begin();
}

C_EXPORT void QTextDocument_end(QTextDocumentH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->end();
}

C_EXPORT void QTextDocument_firstBlock(QTextDocumentH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->firstBlock();
}

C_EXPORT void QTextDocument_lastBlock(QTextDocumentH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextDocument *)handle)->lastBlock();
}

C_EXPORT void QTextDocument_setPageSize(QTextDocumentH handle, const QSizeFH size)
{
	((QTextDocument *)handle)->setPageSize(*(const QSizeF*)size);
}

C_EXPORT void QTextDocument_pageSize(QTextDocumentH handle, QSizeFH retval)
{
	*(QSizeF *)retval = ((QTextDocument *)handle)->pageSize();
}

C_EXPORT void QTextDocument_setDefaultFont(QTextDocumentH handle, const QFontH font)
{
	((QTextDocument *)handle)->setDefaultFont(*(const QFont*)font);
}

C_EXPORT void QTextDocument_defaultFont(QTextDocumentH handle, QFontH retval)
{
	*(QFont *)retval = ((QTextDocument *)handle)->defaultFont();
}

C_EXPORT int QTextDocument_pageCount(QTextDocumentH handle)
{
	return (int) ((QTextDocument *)handle)->pageCount();
}

C_EXPORT bool QTextDocument_isModified(QTextDocumentH handle)
{
	return (bool) ((QTextDocument *)handle)->isModified();
}

C_EXPORT void QTextDocument_print(QTextDocumentH handle, QPrinterH printer)
{
	((QTextDocument *)handle)->print((QPrinter*)printer);
}

C_EXPORT void QTextDocument_resource(QTextDocumentH handle, QVariantH retval, int type, const QUrlH name)
{
	*(QVariant *)retval = ((QTextDocument *)handle)->resource(type, *(const QUrl*)name);
}

C_EXPORT void QTextDocument_addResource(QTextDocumentH handle, int type, const QUrlH name, const QVariantH resource)
{
	((QTextDocument *)handle)->addResource(type, *(const QUrl*)name, *(const QVariant*)resource);
}

C_EXPORT void QTextDocument_markContentsDirty(QTextDocumentH handle, int from, int length)
{
	((QTextDocument *)handle)->markContentsDirty(from, length);
}

C_EXPORT void QTextDocument_setUseDesignMetrics(QTextDocumentH handle, bool b)
{
	((QTextDocument *)handle)->setUseDesignMetrics(b);
}

C_EXPORT bool QTextDocument_useDesignMetrics(QTextDocumentH handle)
{
	return (bool) ((QTextDocument *)handle)->useDesignMetrics();
}

C_EXPORT void QTextDocument_drawContents(QTextDocumentH handle, QPainterH painter, const QRectFH rect)
{
	((QTextDocument *)handle)->drawContents((QPainter*)painter, *(const QRectF*)rect);
}

C_EXPORT void QTextDocument_setTextWidth(QTextDocumentH handle, qreal width)
{
	((QTextDocument *)handle)->setTextWidth(width);
}

C_EXPORT qreal QTextDocument_textWidth(QTextDocumentH handle)
{
	return (qreal) ((QTextDocument *)handle)->textWidth();
}

C_EXPORT qreal QTextDocument_idealWidth(QTextDocumentH handle)
{
	return (qreal) ((QTextDocument *)handle)->idealWidth();
}

C_EXPORT qreal QTextDocument_indentWidth(QTextDocumentH handle)
{
	return (qreal) ((QTextDocument *)handle)->indentWidth();
}

C_EXPORT void QTextDocument_setIndentWidth(QTextDocumentH handle, qreal width)
{
	((QTextDocument *)handle)->setIndentWidth(width);
}

C_EXPORT qreal QTextDocument_documentMargin(QTextDocumentH handle)
{
	return (qreal) ((QTextDocument *)handle)->documentMargin();
}

C_EXPORT void QTextDocument_setDocumentMargin(QTextDocumentH handle, qreal margin)
{
	((QTextDocument *)handle)->setDocumentMargin(margin);
}

C_EXPORT void QTextDocument_adjustSize(QTextDocumentH handle)
{
	((QTextDocument *)handle)->adjustSize();
}

C_EXPORT void QTextDocument_size(QTextDocumentH handle, QSizeFH retval)
{
	*(QSizeF *)retval = ((QTextDocument *)handle)->size();
}

C_EXPORT int QTextDocument_blockCount(QTextDocumentH handle)
{
	return (int) ((QTextDocument *)handle)->blockCount();
}

C_EXPORT int QTextDocument_lineCount(QTextDocumentH handle)
{
	return (int) ((QTextDocument *)handle)->lineCount();
}

C_EXPORT int QTextDocument_characterCount(QTextDocumentH handle)
{
	return (int) ((QTextDocument *)handle)->characterCount();
}

C_EXPORT void QTextDocument_setDefaultStyleSheet(QTextDocumentH handle, PWideString sheet)
{
	QString t_sheet;
	copyPWideStringToQString(sheet, t_sheet);
	((QTextDocument *)handle)->setDefaultStyleSheet(t_sheet);
}

C_EXPORT void QTextDocument_defaultStyleSheet(QTextDocumentH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextDocument *)handle)->defaultStyleSheet();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextDocument_undo(QTextDocumentH handle, QTextCursorH cursor)
{
	((QTextDocument *)handle)->undo((QTextCursor*)cursor);
}

C_EXPORT void QTextDocument_redo(QTextDocumentH handle, QTextCursorH cursor)
{
	((QTextDocument *)handle)->redo((QTextCursor*)cursor);
}

C_EXPORT int QTextDocument_maximumBlockCount(QTextDocumentH handle)
{
	return (int) ((QTextDocument *)handle)->maximumBlockCount();
}

C_EXPORT void QTextDocument_setMaximumBlockCount(QTextDocumentH handle, int maximum)
{
	((QTextDocument *)handle)->setMaximumBlockCount(maximum);
}

C_EXPORT void QTextDocument_defaultTextOption(QTextDocumentH handle, QTextOptionH retval)
{
	*(QTextOption *)retval = ((QTextDocument *)handle)->defaultTextOption();
}

C_EXPORT void QTextDocument_setDefaultTextOption(QTextDocumentH handle, const QTextOptionH option)
{
	((QTextDocument *)handle)->setDefaultTextOption(*(const QTextOption*)option);
}

C_EXPORT void QTextDocument_undo2(QTextDocumentH handle)
{
	((QTextDocument *)handle)->undo();
}

C_EXPORT void QTextDocument_redo2(QTextDocumentH handle)
{
	((QTextDocument *)handle)->redo();
}

C_EXPORT void QTextDocument_setModified(QTextDocumentH handle, bool m)
{
	((QTextDocument *)handle)->setModified(m);
}

