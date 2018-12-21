//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTextEditH QTextEdit_create(QWidgetH parent)
{
	return (QTextEditH) new QTextEdit((QWidget*)parent);
}

C_EXPORT void QTextEdit_destroy(QTextEditH handle)
{
	delete (QTextEdit *)handle;
}

C_EXPORT QTextEditH QTextEdit_create2(PWideString text, QWidgetH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QTextEditH) new QTextEdit(t_text, (QWidget*)parent);
}

C_EXPORT void QTextEdit_setDocument(QTextEditH handle, QTextDocumentH document)
{
	((QTextEdit *)handle)->setDocument((QTextDocument*)document);
}

C_EXPORT QTextDocumentH QTextEdit_document(QTextEditH handle)
{
	return (QTextDocumentH) ((QTextEdit *)handle)->document();
}

C_EXPORT void QTextEdit_setTextCursor(QTextEditH handle, const QTextCursorH cursor)
{
	((QTextEdit *)handle)->setTextCursor(*(const QTextCursor*)cursor);
}

C_EXPORT void QTextEdit_textCursor(QTextEditH handle, QTextCursorH retval)
{
	*(QTextCursor *)retval = ((QTextEdit *)handle)->textCursor();
}

C_EXPORT bool QTextEdit_isReadOnly(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->isReadOnly();
}

C_EXPORT void QTextEdit_setReadOnly(QTextEditH handle, bool ro)
{
	((QTextEdit *)handle)->setReadOnly(ro);
}

C_EXPORT void QTextEdit_setTextInteractionFlags(QTextEditH handle, unsigned int flags)
{
	((QTextEdit *)handle)->setTextInteractionFlags((Qt::TextInteractionFlags)flags);
}

C_EXPORT unsigned int QTextEdit_textInteractionFlags(QTextEditH handle)
{
	return (unsigned int) ((QTextEdit *)handle)->textInteractionFlags();
}

C_EXPORT qreal QTextEdit_fontPointSize(QTextEditH handle)
{
	return (qreal) ((QTextEdit *)handle)->fontPointSize();
}

C_EXPORT void QTextEdit_fontFamily(QTextEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextEdit *)handle)->fontFamily();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QTextEdit_fontWeight(QTextEditH handle)
{
	return (int) ((QTextEdit *)handle)->fontWeight();
}

C_EXPORT bool QTextEdit_fontUnderline(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->fontUnderline();
}

C_EXPORT bool QTextEdit_fontItalic(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->fontItalic();
}

C_EXPORT void QTextEdit_textColor(QTextEditH handle, PQColor retval)
{
	*(QColor *)retval = ((QTextEdit *)handle)->textColor();
}

C_EXPORT void QTextEdit_textBackgroundColor(QTextEditH handle, PQColor retval)
{
	*(QColor *)retval = ((QTextEdit *)handle)->textBackgroundColor();
}

C_EXPORT void QTextEdit_currentFont(QTextEditH handle, QFontH retval)
{
	*(QFont *)retval = ((QTextEdit *)handle)->currentFont();
}

C_EXPORT unsigned int QTextEdit_alignment(QTextEditH handle)
{
	return (unsigned int) ((QTextEdit *)handle)->alignment();
}

C_EXPORT void QTextEdit_mergeCurrentCharFormat(QTextEditH handle, const QTextCharFormatH modifier)
{
	((QTextEdit *)handle)->mergeCurrentCharFormat(*(const QTextCharFormat*)modifier);
}

C_EXPORT void QTextEdit_setCurrentCharFormat(QTextEditH handle, const QTextCharFormatH format)
{
	((QTextEdit *)handle)->setCurrentCharFormat(*(const QTextCharFormat*)format);
}

C_EXPORT void QTextEdit_currentCharFormat(QTextEditH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QTextEdit *)handle)->currentCharFormat();
}

C_EXPORT unsigned int QTextEdit_autoFormatting(QTextEditH handle)
{
	return (unsigned int) ((QTextEdit *)handle)->autoFormatting();
}

C_EXPORT void QTextEdit_setAutoFormatting(QTextEditH handle, unsigned int features)
{
	((QTextEdit *)handle)->setAutoFormatting((QTextEdit::AutoFormatting)features);
}

C_EXPORT bool QTextEdit_tabChangesFocus(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->tabChangesFocus();
}

C_EXPORT void QTextEdit_setTabChangesFocus(QTextEditH handle, bool b)
{
	((QTextEdit *)handle)->setTabChangesFocus(b);
}

C_EXPORT void QTextEdit_setDocumentTitle(QTextEditH handle, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	((QTextEdit *)handle)->setDocumentTitle(t_title);
}

C_EXPORT void QTextEdit_documentTitle(QTextEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextEdit *)handle)->documentTitle();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QTextEdit_isUndoRedoEnabled(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->isUndoRedoEnabled();
}

C_EXPORT void QTextEdit_setUndoRedoEnabled(QTextEditH handle, bool enable)
{
	((QTextEdit *)handle)->setUndoRedoEnabled(enable);
}

C_EXPORT QTextEdit::LineWrapMode QTextEdit_lineWrapMode(QTextEditH handle)
{
	return (QTextEdit::LineWrapMode) ((QTextEdit *)handle)->lineWrapMode();
}

C_EXPORT void QTextEdit_setLineWrapMode(QTextEditH handle, QTextEdit::LineWrapMode mode)
{
	((QTextEdit *)handle)->setLineWrapMode(mode);
}

C_EXPORT int QTextEdit_lineWrapColumnOrWidth(QTextEditH handle)
{
	return (int) ((QTextEdit *)handle)->lineWrapColumnOrWidth();
}

C_EXPORT void QTextEdit_setLineWrapColumnOrWidth(QTextEditH handle, int w)
{
	((QTextEdit *)handle)->setLineWrapColumnOrWidth(w);
}

C_EXPORT QTextOption::WrapMode QTextEdit_wordWrapMode(QTextEditH handle)
{
	return (QTextOption::WrapMode) ((QTextEdit *)handle)->wordWrapMode();
}

C_EXPORT void QTextEdit_setWordWrapMode(QTextEditH handle, QTextOption::WrapMode policy)
{
	((QTextEdit *)handle)->setWordWrapMode(policy);
}

C_EXPORT bool QTextEdit_find(QTextEditH handle, PWideString exp, unsigned int options)
{
	QString t_exp;
	copyPWideStringToQString(exp, t_exp);
	return (bool) ((QTextEdit *)handle)->find(t_exp, (QTextDocument::FindFlags)options);
}

C_EXPORT void QTextEdit_toPlainText(QTextEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextEdit *)handle)->toPlainText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextEdit_toHtml(QTextEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextEdit *)handle)->toHtml();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextEdit_ensureCursorVisible(QTextEditH handle)
{
	((QTextEdit *)handle)->ensureCursorVisible();
}

C_EXPORT void QTextEdit_loadResource(QTextEditH handle, QVariantH retval, int type, const QUrlH name)
{
	*(QVariant *)retval = ((QTextEdit *)handle)->loadResource(type, *(const QUrl*)name);
}

C_EXPORT QMenuH QTextEdit_createStandardContextMenu(QTextEditH handle)
{
	return (QMenuH) ((QTextEdit *)handle)->createStandardContextMenu();
}

C_EXPORT QMenuH QTextEdit_createStandardContextMenu2(QTextEditH handle, const QPointH position)
{
	return (QMenuH) ((QTextEdit *)handle)->createStandardContextMenu(*(const QPoint*)position);
}

C_EXPORT void QTextEdit_cursorForPosition(QTextEditH handle, QTextCursorH retval, const QPointH pos)
{
	*(QTextCursor *)retval = ((QTextEdit *)handle)->cursorForPosition(*(const QPoint*)pos);
}

C_EXPORT void QTextEdit_cursorRect(QTextEditH handle, PRect retval, const QTextCursorH cursor)
{
	QRect t_retval;
	t_retval = ((QTextEdit *)handle)->cursorRect(*(const QTextCursor*)cursor);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QTextEdit_cursorRect2(QTextEditH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QTextEdit *)handle)->cursorRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QTextEdit_anchorAt(QTextEditH handle, PWideString retval, const QPointH pos)
{
	QString t_retval;
	t_retval = ((QTextEdit *)handle)->anchorAt(*(const QPoint*)pos);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QTextEdit_overwriteMode(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->overwriteMode();
}

C_EXPORT void QTextEdit_setOverwriteMode(QTextEditH handle, bool overwrite)
{
	((QTextEdit *)handle)->setOverwriteMode(overwrite);
}

C_EXPORT int QTextEdit_tabStopWidth(QTextEditH handle)
{
	return (int) ((QTextEdit *)handle)->tabStopWidth();
}

C_EXPORT void QTextEdit_setTabStopWidth(QTextEditH handle, int width)
{
	((QTextEdit *)handle)->setTabStopWidth(width);
}

C_EXPORT int QTextEdit_cursorWidth(QTextEditH handle)
{
	return (int) ((QTextEdit *)handle)->cursorWidth();
}

C_EXPORT void QTextEdit_setCursorWidth(QTextEditH handle, int width)
{
	((QTextEdit *)handle)->setCursorWidth(width);
}

C_EXPORT bool QTextEdit_acceptRichText(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->acceptRichText();
}

C_EXPORT void QTextEdit_setAcceptRichText(QTextEditH handle, bool accept)
{
	((QTextEdit *)handle)->setAcceptRichText(accept);
}

C_EXPORT void QTextEdit_moveCursor(QTextEditH handle, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode)
{
	((QTextEdit *)handle)->moveCursor(operation, mode);
}

C_EXPORT bool QTextEdit_canPaste(QTextEditH handle)
{
	return (bool) ((QTextEdit *)handle)->canPaste();
}

C_EXPORT void QTextEdit_print(QTextEditH handle, QPrinterH printer)
{
	((QTextEdit *)handle)->print((QPrinter*)printer);
}

C_EXPORT void QTextEdit_setFontPointSize(QTextEditH handle, qreal s)
{
	((QTextEdit *)handle)->setFontPointSize(s);
}

C_EXPORT void QTextEdit_setFontFamily(QTextEditH handle, PWideString fontFamily)
{
	QString t_fontFamily;
	copyPWideStringToQString(fontFamily, t_fontFamily);
	((QTextEdit *)handle)->setFontFamily(t_fontFamily);
}

C_EXPORT void QTextEdit_setFontWeight(QTextEditH handle, int w)
{
	((QTextEdit *)handle)->setFontWeight(w);
}

C_EXPORT void QTextEdit_setFontUnderline(QTextEditH handle, bool b)
{
	((QTextEdit *)handle)->setFontUnderline(b);
}

C_EXPORT void QTextEdit_setFontItalic(QTextEditH handle, bool b)
{
	((QTextEdit *)handle)->setFontItalic(b);
}

C_EXPORT void QTextEdit_setTextColor(QTextEditH handle, const QColorH c)
{
	((QTextEdit *)handle)->setTextColor(*(const QColor*)c);
}

C_EXPORT void QTextEdit_setTextBackgroundColor(QTextEditH handle, const QColorH c)
{
	((QTextEdit *)handle)->setTextBackgroundColor(*(const QColor*)c);
}

C_EXPORT void QTextEdit_setCurrentFont(QTextEditH handle, const QFontH f)
{
	((QTextEdit *)handle)->setCurrentFont(*(const QFont*)f);
}

C_EXPORT void QTextEdit_setAlignment(QTextEditH handle, unsigned int a)
{
	((QTextEdit *)handle)->setAlignment((Qt::Alignment)a);
}

C_EXPORT void QTextEdit_setPlainText(QTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextEdit *)handle)->setPlainText(t_text);
}

C_EXPORT void QTextEdit_setHtml(QTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextEdit *)handle)->setHtml(t_text);
}

C_EXPORT void QTextEdit_setText(QTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextEdit *)handle)->setText(t_text);
}

C_EXPORT void QTextEdit_cut(QTextEditH handle)
{
	((QTextEdit *)handle)->cut();
}

C_EXPORT void QTextEdit_copy(QTextEditH handle)
{
	((QTextEdit *)handle)->copy();
}

C_EXPORT void QTextEdit_paste(QTextEditH handle)
{
	((QTextEdit *)handle)->paste();
}

C_EXPORT void QTextEdit_undo(QTextEditH handle)
{
	((QTextEdit *)handle)->undo();
}

C_EXPORT void QTextEdit_redo(QTextEditH handle)
{
	((QTextEdit *)handle)->redo();
}

C_EXPORT void QTextEdit_clear(QTextEditH handle)
{
	((QTextEdit *)handle)->clear();
}

C_EXPORT void QTextEdit_selectAll(QTextEditH handle)
{
	((QTextEdit *)handle)->selectAll();
}

C_EXPORT void QTextEdit_insertPlainText(QTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextEdit *)handle)->insertPlainText(t_text);
}

C_EXPORT void QTextEdit_insertHtml(QTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextEdit *)handle)->insertHtml(t_text);
}

C_EXPORT void QTextEdit_append(QTextEditH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextEdit *)handle)->append(t_text);
}

C_EXPORT void QTextEdit_scrollToAnchor(QTextEditH handle, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QTextEdit *)handle)->scrollToAnchor(t_name);
}

C_EXPORT void QTextEdit_zoomIn(QTextEditH handle, int range)
{
	((QTextEdit *)handle)->zoomIn(range);
}

C_EXPORT void QTextEdit_zoomOut(QTextEditH handle, int range)
{
	((QTextEdit *)handle)->zoomOut(range);
}

