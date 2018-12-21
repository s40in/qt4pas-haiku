//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTextCursorH QTextCursor_create()
{
	return (QTextCursorH) new QTextCursor();
}

C_EXPORT void QTextCursor_destroy(QTextCursorH handle)
{
	delete (QTextCursor *)handle;
}

C_EXPORT QTextCursorH QTextCursor_create2(QTextDocumentH document)
{
	return (QTextCursorH) new QTextCursor((QTextDocument*)document);
}

C_EXPORT QTextCursorH QTextCursor_create3(QTextFrameH frame)
{
	return (QTextCursorH) new QTextCursor((QTextFrame*)frame);
}

C_EXPORT QTextCursorH QTextCursor_create4(const QTextBlockH block)
{
	return (QTextCursorH) new QTextCursor(*(const QTextBlock*)block);
}

C_EXPORT QTextCursorH QTextCursor_create6(const QTextCursorH cursor)
{
	return (QTextCursorH) new QTextCursor(*(const QTextCursor*)cursor);
}

C_EXPORT bool QTextCursor_isNull(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->isNull();
}

C_EXPORT void QTextCursor_setPosition(QTextCursorH handle, int pos, QTextCursor::MoveMode mode)
{
	((QTextCursor *)handle)->setPosition(pos, mode);
}

C_EXPORT int QTextCursor_position(QTextCursorH handle)
{
	return (int) ((QTextCursor *)handle)->position();
}

C_EXPORT int QTextCursor_anchor(QTextCursorH handle)
{
	return (int) ((QTextCursor *)handle)->anchor();
}

C_EXPORT void QTextCursor_insertText(QTextCursorH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextCursor *)handle)->insertText(t_text);
}

C_EXPORT void QTextCursor_insertText2(QTextCursorH handle, PWideString text, const QTextCharFormatH format)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QTextCursor *)handle)->insertText(t_text, *(const QTextCharFormat*)format);
}

C_EXPORT bool QTextCursor_movePosition(QTextCursorH handle, QTextCursor::MoveOperation op, QTextCursor::MoveMode AnonParam2, int n)
{
	return (bool) ((QTextCursor *)handle)->movePosition(op, AnonParam2, n);
}

C_EXPORT bool QTextCursor_visualNavigation(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->visualNavigation();
}

C_EXPORT void QTextCursor_setVisualNavigation(QTextCursorH handle, bool b)
{
	((QTextCursor *)handle)->setVisualNavigation(b);
}

C_EXPORT void QTextCursor_deleteChar(QTextCursorH handle)
{
	((QTextCursor *)handle)->deleteChar();
}

C_EXPORT void QTextCursor_deletePreviousChar(QTextCursorH handle)
{
	((QTextCursor *)handle)->deletePreviousChar();
}

C_EXPORT void QTextCursor_select(QTextCursorH handle, QTextCursor::SelectionType selection)
{
	((QTextCursor *)handle)->select(selection);
}

C_EXPORT bool QTextCursor_hasSelection(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->hasSelection();
}

C_EXPORT bool QTextCursor_hasComplexSelection(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->hasComplexSelection();
}

C_EXPORT void QTextCursor_removeSelectedText(QTextCursorH handle)
{
	((QTextCursor *)handle)->removeSelectedText();
}

C_EXPORT void QTextCursor_clearSelection(QTextCursorH handle)
{
	((QTextCursor *)handle)->clearSelection();
}

C_EXPORT int QTextCursor_selectionStart(QTextCursorH handle)
{
	return (int) ((QTextCursor *)handle)->selectionStart();
}

C_EXPORT int QTextCursor_selectionEnd(QTextCursorH handle)
{
	return (int) ((QTextCursor *)handle)->selectionEnd();
}

C_EXPORT void QTextCursor_selectedText(QTextCursorH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextCursor *)handle)->selectedText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTextCursor_selection(QTextCursorH handle, QTextDocumentFragmentH retval)
{
	*(QTextDocumentFragment *)retval = ((QTextCursor *)handle)->selection();
}

C_EXPORT void QTextCursor_selectedTableCells(QTextCursorH handle, int* firstRow, int* numRows, int* firstColumn, int* numColumns)
{
	((QTextCursor *)handle)->selectedTableCells(firstRow, numRows, firstColumn, numColumns);
}

C_EXPORT void QTextCursor_block(QTextCursorH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextCursor *)handle)->block();
}

C_EXPORT void QTextCursor_charFormat(QTextCursorH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QTextCursor *)handle)->charFormat();
}

C_EXPORT void QTextCursor_setCharFormat(QTextCursorH handle, const QTextCharFormatH format)
{
	((QTextCursor *)handle)->setCharFormat(*(const QTextCharFormat*)format);
}

C_EXPORT void QTextCursor_mergeCharFormat(QTextCursorH handle, const QTextCharFormatH modifier)
{
	((QTextCursor *)handle)->mergeCharFormat(*(const QTextCharFormat*)modifier);
}

C_EXPORT void QTextCursor_blockFormat(QTextCursorH handle, QTextBlockFormatH retval)
{
	*(QTextBlockFormat *)retval = ((QTextCursor *)handle)->blockFormat();
}

C_EXPORT void QTextCursor_setBlockFormat(QTextCursorH handle, const QTextBlockFormatH format)
{
	((QTextCursor *)handle)->setBlockFormat(*(const QTextBlockFormat*)format);
}

C_EXPORT void QTextCursor_mergeBlockFormat(QTextCursorH handle, const QTextBlockFormatH modifier)
{
	((QTextCursor *)handle)->mergeBlockFormat(*(const QTextBlockFormat*)modifier);
}

C_EXPORT void QTextCursor_blockCharFormat(QTextCursorH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QTextCursor *)handle)->blockCharFormat();
}

C_EXPORT void QTextCursor_setBlockCharFormat(QTextCursorH handle, const QTextCharFormatH format)
{
	((QTextCursor *)handle)->setBlockCharFormat(*(const QTextCharFormat*)format);
}

C_EXPORT void QTextCursor_mergeBlockCharFormat(QTextCursorH handle, const QTextCharFormatH modifier)
{
	((QTextCursor *)handle)->mergeBlockCharFormat(*(const QTextCharFormat*)modifier);
}

C_EXPORT bool QTextCursor_atBlockStart(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->atBlockStart();
}

C_EXPORT bool QTextCursor_atBlockEnd(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->atBlockEnd();
}

C_EXPORT bool QTextCursor_atStart(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->atStart();
}

C_EXPORT bool QTextCursor_atEnd(QTextCursorH handle)
{
	return (bool) ((QTextCursor *)handle)->atEnd();
}

C_EXPORT void QTextCursor_insertBlock(QTextCursorH handle)
{
	((QTextCursor *)handle)->insertBlock();
}

C_EXPORT void QTextCursor_insertBlock2(QTextCursorH handle, const QTextBlockFormatH format)
{
	((QTextCursor *)handle)->insertBlock(*(const QTextBlockFormat*)format);
}

C_EXPORT void QTextCursor_insertBlock3(QTextCursorH handle, const QTextBlockFormatH format, const QTextCharFormatH charFormat)
{
	((QTextCursor *)handle)->insertBlock(*(const QTextBlockFormat*)format, *(const QTextCharFormat*)charFormat);
}

C_EXPORT QTextListH QTextCursor_currentList(QTextCursorH handle)
{
	return (QTextListH) ((QTextCursor *)handle)->currentList();
}

C_EXPORT QTextTableH QTextCursor_insertTable(QTextCursorH handle, int rows, int cols, const QTextTableFormatH format)
{
	return (QTextTableH) ((QTextCursor *)handle)->insertTable(rows, cols, *(const QTextTableFormat*)format);
}

C_EXPORT QTextTableH QTextCursor_insertTable2(QTextCursorH handle, int rows, int cols)
{
	return (QTextTableH) ((QTextCursor *)handle)->insertTable(rows, cols);
}

C_EXPORT QTextTableH QTextCursor_currentTable(QTextCursorH handle)
{
	return (QTextTableH) ((QTextCursor *)handle)->currentTable();
}

C_EXPORT QTextFrameH QTextCursor_insertFrame(QTextCursorH handle, const QTextFrameFormatH format)
{
	return (QTextFrameH) ((QTextCursor *)handle)->insertFrame(*(const QTextFrameFormat*)format);
}

C_EXPORT QTextFrameH QTextCursor_currentFrame(QTextCursorH handle)
{
	return (QTextFrameH) ((QTextCursor *)handle)->currentFrame();
}

C_EXPORT void QTextCursor_insertFragment(QTextCursorH handle, const QTextDocumentFragmentH fragment)
{
	((QTextCursor *)handle)->insertFragment(*(const QTextDocumentFragment*)fragment);
}

C_EXPORT void QTextCursor_insertHtml(QTextCursorH handle, PWideString html)
{
	QString t_html;
	copyPWideStringToQString(html, t_html);
	((QTextCursor *)handle)->insertHtml(t_html);
}

C_EXPORT void QTextCursor_insertImage2(QTextCursorH handle, const QTextImageFormatH format)
{
	((QTextCursor *)handle)->insertImage(*(const QTextImageFormat*)format);
}

C_EXPORT void QTextCursor_insertImage3(QTextCursorH handle, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QTextCursor *)handle)->insertImage(t_name);
}

C_EXPORT void QTextCursor_insertImage4(QTextCursorH handle, const QImageH image, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QTextCursor *)handle)->insertImage(*(const QImage*)image, t_name);
}

C_EXPORT void QTextCursor_beginEditBlock(QTextCursorH handle)
{
	((QTextCursor *)handle)->beginEditBlock();
}

C_EXPORT void QTextCursor_joinPreviousEditBlock(QTextCursorH handle)
{
	((QTextCursor *)handle)->joinPreviousEditBlock();
}

C_EXPORT void QTextCursor_endEditBlock(QTextCursorH handle)
{
	((QTextCursor *)handle)->endEditBlock();
}

C_EXPORT bool QTextCursor_isCopyOf(QTextCursorH handle, const QTextCursorH other)
{
	return (bool) ((QTextCursor *)handle)->isCopyOf(*(const QTextCursor*)other);
}

C_EXPORT int QTextCursor_blockNumber(QTextCursorH handle)
{
	return (int) ((QTextCursor *)handle)->blockNumber();
}

C_EXPORT int QTextCursor_columnNumber(QTextCursorH handle)
{
	return (int) ((QTextCursor *)handle)->columnNumber();
}

C_EXPORT QTextDocumentH QTextCursor_document(QTextCursorH handle)
{
	return (QTextDocumentH) ((QTextCursor *)handle)->document();
}

