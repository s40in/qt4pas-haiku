//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPlainTextEditH QPlainTextEdit_create(QWidgetH parent)
{
	return (QPlainTextEditH) new QPlainTextEdit((QWidget*)parent);
}

C_EXPORT void QPlainTextEdit_destroy(QPlainTextEditH handle)
{
	delete (QPlainTextEdit *)handle;
}

C_EXPORT QPlainTextEditH QPlainTextEdit_create2(PWideString text, QWidgetH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QPlainTextEditH) new QPlainTextEdit(t_text, (QWidget*)parent);
}

C_EXPORT void QPlainTextEdit_setDocument(QPlainTextEditH handle, QTextDocumentH document)
{
	((QPlainTextEdit *)handle)->setDocument((QTextDocument*)document);
}

C_EXPORT QTextDocumentH QPlainTextEdit_document(QPlainTextEditH handle)
{
	return (QTextDocumentH) ((QPlainTextEdit *)handle)->document();
}

C_EXPORT void QPlainTextEdit_setTextCursor(QPlainTextEditH handle, const QTextCursorH cursor)
{
	((QPlainTextEdit *)handle)->setTextCursor(*(const QTextCursor*)cursor);
}

C_EXPORT void QPlainTextEdit_textCursor(QPlainTextEditH handle, QTextCursorH retval)
{
	*(QTextCursor *)retval = ((QPlainTextEdit *)handle)->textCursor();
}

C_EXPORT bool QPlainTextEdit_isReadOnly(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->isReadOnly();
}

C_EXPORT void QPlainTextEdit_setReadOnly(QPlainTextEditH handle, bool ro)
{
	((QPlainTextEdit *)handle)->setReadOnly(ro);
}

C_EXPORT void QPlainTextEdit_setTextInteractionFlags(QPlainTextEditH handle, unsigned int flags)
{
	((QPlainTextEdit *)handle)->setTextInteractionFlags((Qt::TextInteractionFlags)flags);
}

C_EXPORT unsigned int QPlainTextEdit_textInteractionFlags(QPlainTextEditH handle)
{
	return (unsigned int) ((QPlainTextEdit *)handle)->textInteractionFlags();
}

C_EXPORT void QPlainTextEdit_mergeCurrentCharFormat(QPlainTextEditH handle, const QTextCharFormatH modifier)
{
	((QPlainTextEdit *)handle)->mergeCurrentCharFormat(*(const QTextCharFormat*)modifier);
}

C_EXPORT void QPlainTextEdit_setCurrentCharFormat(QPlainTextEditH handle, const QTextCharFormatH format)
{
	((QPlainTextEdit *)handle)->setCurrentCharFormat(*(const QTextCharFormat*)format);
}

C_EXPORT void QPlainTextEdit_currentCharFormat(QPlainTextEditH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QPlainTextEdit *)handle)->currentCharFormat();
}

C_EXPORT bool QPlainTextEdit_tabChangesFocus(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->tabChangesFocus();
}

C_EXPORT void QPlainTextEdit_setTabChangesFocus(QPlainTextEditH handle, bool b)
{
	((QPlainTextEdit *)handle)->setTabChangesFocus(b);
}

C_EXPORT void QPlainTextEdit_setDocumentTitle(QPlainTextEditH handle, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	((QPlainTextEdit *)handle)->setDocumentTitle(t_title);
}

C_EXPORT void QPlainTextEdit_documentTitle(QPlainTextEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPlainTextEdit *)handle)->documentTitle();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QPlainTextEdit_isUndoRedoEnabled(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->isUndoRedoEnabled();
}

C_EXPORT void QPlainTextEdit_setUndoRedoEnabled(QPlainTextEditH handle, bool enable)
{
	((QPlainTextEdit *)handle)->setUndoRedoEnabled(enable);
}

C_EXPORT void QPlainTextEdit_setMaximumBlockCount(QPlainTextEditH handle, int maximum)
{
	((QPlainTextEdit *)handle)->setMaximumBlockCount(maximum);
}

C_EXPORT int QPlainTextEdit_maximumBlockCount(QPlainTextEditH handle)
{
	return (int) ((QPlainTextEdit *)handle)->maximumBlockCount();
}

C_EXPORT QPlainTextEdit::LineWrapMode QPlainTextEdit_lineWrapMode(QPlainTextEditH handle)
{
	return (QPlainTextEdit::LineWrapMode) ((QPlainTextEdit *)handle)->lineWrapMode();
}

C_EXPORT void QPlainTextEdit_setLineWrapMode(QPlainTextEditH handle, QPlainTextEdit::LineWrapMode mode)
{
	((QPlainTextEdit *)handle)->setLineWrapMode(mode);
}

C_EXPORT QTextOption::WrapMode QPlainTextEdit_wordWrapMode(QPlainTextEditH handle)
{
	return (QTextOption::WrapMode) ((QPlainTextEdit *)handle)->wordWrapMode();
}

C_EXPORT void QPlainTextEdit_setWordWrapMode(QPlainTextEditH handle, QTextOption::WrapMode policy)
{
	((QPlainTextEdit *)handle)->setWordWrapMode(policy);
}

C_EXPORT void QPlainTextEdit_setBackgroundVisible(QPlainTextEditH handle, bool visible)
{
	((QPlainTextEdit *)handle)->setBackgroundVisible(visible);
}

C_EXPORT bool QPlainTextEdit_backgroundVisible(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->backgroundVisible();
}

C_EXPORT void QPlainTextEdit_setCenterOnScroll(QPlainTextEditH handle, bool enabled)
{
	((QPlainTextEdit *)handle)->setCenterOnScroll(enabled);
}

C_EXPORT bool QPlainTextEdit_centerOnScroll(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->centerOnScroll();
}

C_EXPORT bool QPlainTextEdit_find(QPlainTextEditH handle, PWideString exp, unsigned int options)
{
	QString t_exp;
	copyPWideStringToQString(exp, t_exp);
	return (bool) ((QPlainTextEdit *)handle)->find(t_exp, (QTextDocument::FindFlags)options);
}

C_EXPORT void QPlainTextEdit_toPlainText(QPlainTextEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPlainTextEdit *)handle)->toPlainText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QPlainTextEdit_ensureCursorVisible(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->ensureCursorVisible();
}

C_EXPORT void QPlainTextEdit_loadResource(QPlainTextEditH handle, QVariantH retval, int type, const QUrlH name)
{
	*(QVariant *)retval = ((QPlainTextEdit *)handle)->loadResource(type, *(const QUrl*)name);
}

C_EXPORT QMenuH QPlainTextEdit_createStandardContextMenu(QPlainTextEditH handle)
{
	return (QMenuH) ((QPlainTextEdit *)handle)->createStandardContextMenu();
}

C_EXPORT void QPlainTextEdit_cursorForPosition(QPlainTextEditH handle, QTextCursorH retval, const QPointH pos)
{
	*(QTextCursor *)retval = ((QPlainTextEdit *)handle)->cursorForPosition(*(const QPoint*)pos);
}

C_EXPORT void QPlainTextEdit_cursorRect(QPlainTextEditH handle, PRect retval, const QTextCursorH cursor)
{
	QRect t_retval;
	t_retval = ((QPlainTextEdit *)handle)->cursorRect(*(const QTextCursor*)cursor);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QPlainTextEdit_cursorRect2(QPlainTextEditH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPlainTextEdit *)handle)->cursorRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QPlainTextEdit_overwriteMode(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->overwriteMode();
}

C_EXPORT void QPlainTextEdit_setOverwriteMode(QPlainTextEditH handle, bool overwrite)
{
	((QPlainTextEdit *)handle)->setOverwriteMode(overwrite);
}

C_EXPORT int QPlainTextEdit_tabStopWidth(QPlainTextEditH handle)
{
	return (int) ((QPlainTextEdit *)handle)->tabStopWidth();
}

C_EXPORT void QPlainTextEdit_setTabStopWidth(QPlainTextEditH handle, int width)
{
	((QPlainTextEdit *)handle)->setTabStopWidth(width);
}

C_EXPORT int QPlainTextEdit_cursorWidth(QPlainTextEditH handle)
{
	return (int) ((QPlainTextEdit *)handle)->cursorWidth();
}

C_EXPORT void QPlainTextEdit_setCursorWidth(QPlainTextEditH handle, int width)
{
	((QPlainTextEdit *)handle)->setCursorWidth(width);
}

C_EXPORT void QPlainTextEdit_moveCursor(QPlainTextEditH handle, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode)
{
	((QPlainTextEdit *)handle)->moveCursor(operation, mode);
}

C_EXPORT bool QPlainTextEdit_canPaste(QPlainTextEditH handle)
{
	return (bool) ((QPlainTextEdit *)handle)->canPaste();
}

C_EXPORT void QPlainTextEdit_print(QPlainTextEditH handle, QPrinterH printer)
{
	((QPlainTextEdit *)handle)->print((QPrinter*)printer);
}

C_EXPORT int QPlainTextEdit_blockCount(QPlainTextEditH handle)
{
	return (int) ((QPlainTextEdit *)handle)->blockCount();
}

C_EXPORT void QPlainTextEdit_setPlainText(QPlainTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QPlainTextEdit *)handle)->setPlainText(t_text);
}

C_EXPORT void QPlainTextEdit_cut(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->cut();
}

C_EXPORT void QPlainTextEdit_copy(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->copy();
}

C_EXPORT void QPlainTextEdit_paste(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->paste();
}

C_EXPORT void QPlainTextEdit_undo(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->undo();
}

C_EXPORT void QPlainTextEdit_redo(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->redo();
}

C_EXPORT void QPlainTextEdit_clear(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->clear();
}

C_EXPORT void QPlainTextEdit_selectAll(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->selectAll();
}

C_EXPORT void QPlainTextEdit_insertPlainText(QPlainTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QPlainTextEdit *)handle)->insertPlainText(t_text);
}

C_EXPORT void QPlainTextEdit_appendPlainText(QPlainTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QPlainTextEdit *)handle)->appendPlainText(t_text);
}

C_EXPORT void QPlainTextEdit_appendHtml(QPlainTextEditH handle, PWideString html)
{
	QString t_html;
	copyPWideStringToQString(html, t_html);
	((QPlainTextEdit *)handle)->appendHtml(t_html);
}

C_EXPORT void QPlainTextEdit_centerCursor(QPlainTextEditH handle)
{
	((QPlainTextEdit *)handle)->centerCursor();
}

C_EXPORT QPlainTextDocumentLayoutH QPlainTextDocumentLayout_create(QTextDocumentH document)
{
	return (QPlainTextDocumentLayoutH) new QPlainTextDocumentLayout((QTextDocument*)document);
}

C_EXPORT void QPlainTextDocumentLayout_destroy(QPlainTextDocumentLayoutH handle)
{
	delete (QPlainTextDocumentLayout *)handle;
}

C_EXPORT int QPlainTextDocumentLayout_hitTest(QPlainTextDocumentLayoutH handle, const QPointFH AnonParam1, Qt::HitTestAccuracy AnonParam2)
{
	return (int) ((QPlainTextDocumentLayout *)handle)->hitTest(*(const QPointF*)AnonParam1, AnonParam2);
}

C_EXPORT int QPlainTextDocumentLayout_pageCount(QPlainTextDocumentLayoutH handle)
{
	return (int) ((QPlainTextDocumentLayout *)handle)->pageCount();
}

C_EXPORT void QPlainTextDocumentLayout_documentSize(QPlainTextDocumentLayoutH handle, QSizeFH retval)
{
	*(QSizeF *)retval = ((QPlainTextDocumentLayout *)handle)->documentSize();
}

C_EXPORT void QPlainTextDocumentLayout_frameBoundingRect(QPlainTextDocumentLayoutH handle, QRectFH retval, QTextFrameH AnonParam1)
{
	*(QRectF *)retval = ((QPlainTextDocumentLayout *)handle)->frameBoundingRect((QTextFrame*)AnonParam1);
}

C_EXPORT void QPlainTextDocumentLayout_blockBoundingRect(QPlainTextDocumentLayoutH handle, QRectFH retval, const QTextBlockH block)
{
	*(QRectF *)retval = ((QPlainTextDocumentLayout *)handle)->blockBoundingRect(*(const QTextBlock*)block);
}

C_EXPORT void QPlainTextDocumentLayout_ensureBlockLayout(QPlainTextDocumentLayoutH handle, const QTextBlockH block)
{
	((QPlainTextDocumentLayout *)handle)->ensureBlockLayout(*(const QTextBlock*)block);
}

C_EXPORT void QPlainTextDocumentLayout_setCursorWidth(QPlainTextDocumentLayoutH handle, int width)
{
	((QPlainTextDocumentLayout *)handle)->setCursorWidth(width);
}

C_EXPORT int QPlainTextDocumentLayout_cursorWidth(QPlainTextDocumentLayoutH handle)
{
	return (int) ((QPlainTextDocumentLayout *)handle)->cursorWidth();
}

C_EXPORT void QPlainTextDocumentLayout_requestUpdate(QPlainTextDocumentLayoutH handle)
{
	((QPlainTextDocumentLayout *)handle)->requestUpdate();
}

