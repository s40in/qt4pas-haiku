//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QTextObject_format(QTextObjectH handle, QTextFormatH retval)
{
	*(QTextFormat *)retval = ((QTextObject *)handle)->format();
}

C_EXPORT int QTextObject_formatIndex(QTextObjectH handle)
{
	return (int) ((QTextObject *)handle)->formatIndex();
}

C_EXPORT QTextDocumentH QTextObject_document(QTextObjectH handle)
{
	return (QTextDocumentH) ((QTextObject *)handle)->document();
}

C_EXPORT int QTextObject_objectIndex(QTextObjectH handle)
{
	return (int) ((QTextObject *)handle)->objectIndex();
}

C_EXPORT QTextFrameH QTextFrame_create(QTextDocumentH doc)
{
	return (QTextFrameH) new QTextFrame((QTextDocument*)doc);
}

C_EXPORT void QTextFrame_destroy(QTextFrameH handle)
{
	delete (QTextFrame *)handle;
}

C_EXPORT void QTextFrame_setFrameFormat(QTextFrameH handle, const QTextFrameFormatH format)
{
	((QTextFrame *)handle)->setFrameFormat(*(const QTextFrameFormat*)format);
}

C_EXPORT void QTextFrame_frameFormat(QTextFrameH handle, QTextFrameFormatH retval)
{
	*(QTextFrameFormat *)retval = ((QTextFrame *)handle)->frameFormat();
}

C_EXPORT void QTextFrame_firstCursorPosition(QTextFrameH handle, QTextCursorH retval)
{
	*(QTextCursor *)retval = ((QTextFrame *)handle)->firstCursorPosition();
}

C_EXPORT void QTextFrame_lastCursorPosition(QTextFrameH handle, QTextCursorH retval)
{
	*(QTextCursor *)retval = ((QTextFrame *)handle)->lastCursorPosition();
}

C_EXPORT int QTextFrame_firstPosition(QTextFrameH handle)
{
	return (int) ((QTextFrame *)handle)->firstPosition();
}

C_EXPORT int QTextFrame_lastPosition(QTextFrameH handle)
{
	return (int) ((QTextFrame *)handle)->lastPosition();
}

C_EXPORT void QTextFrame_childFrames(QTextFrameH handle, PPtrIntArray retval)
{
	QList<QTextFrame*> t_retval;
	t_retval = ((QTextFrame *)handle)->childFrames();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QTextFrameH QTextFrame_parentFrame(QTextFrameH handle)
{
	return (QTextFrameH) ((QTextFrame *)handle)->parentFrame();
}

C_EXPORT QTextBlockH QTextBlock_create()
{
	return (QTextBlockH) new QTextBlock();
}

C_EXPORT void QTextBlock_destroy(QTextBlockH handle)
{
	delete (QTextBlock *)handle;
}

C_EXPORT QTextBlockH QTextBlock_create2(const QTextBlockH o)
{
	return (QTextBlockH) new QTextBlock(*(const QTextBlock*)o);
}

C_EXPORT bool QTextBlock_isValid(QTextBlockH handle)
{
	return (bool) ((QTextBlock *)handle)->isValid();
}

C_EXPORT int QTextBlock_position(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->position();
}

C_EXPORT int QTextBlock_length(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->length();
}

C_EXPORT bool QTextBlock_contains(QTextBlockH handle, int position)
{
	return (bool) ((QTextBlock *)handle)->contains(position);
}

C_EXPORT QTextLayoutH QTextBlock_layout(QTextBlockH handle)
{
	return (QTextLayoutH) ((QTextBlock *)handle)->layout();
}

C_EXPORT void QTextBlock_clearLayout(QTextBlockH handle)
{
	((QTextBlock *)handle)->clearLayout();
}

C_EXPORT void QTextBlock_blockFormat(QTextBlockH handle, QTextBlockFormatH retval)
{
	*(QTextBlockFormat *)retval = ((QTextBlock *)handle)->blockFormat();
}

C_EXPORT int QTextBlock_blockFormatIndex(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->blockFormatIndex();
}

C_EXPORT void QTextBlock_charFormat(QTextBlockH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QTextBlock *)handle)->charFormat();
}

C_EXPORT int QTextBlock_charFormatIndex(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->charFormatIndex();
}

C_EXPORT void QTextBlock_text(QTextBlockH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextBlock *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT const QTextDocumentH QTextBlock_document(QTextBlockH handle)
{
	return (const QTextDocumentH) ((QTextBlock *)handle)->document();
}

C_EXPORT QTextListH QTextBlock_textList(QTextBlockH handle)
{
	return (QTextListH) ((QTextBlock *)handle)->textList();
}

C_EXPORT QTextBlockUserDataH QTextBlock_userData(QTextBlockH handle)
{
	return (QTextBlockUserDataH) ((QTextBlock *)handle)->userData();
}

C_EXPORT void QTextBlock_setUserData(QTextBlockH handle, QTextBlockUserDataH data)
{
	((QTextBlock *)handle)->setUserData((QTextBlockUserData*)data);
}

C_EXPORT int QTextBlock_userState(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->userState();
}

C_EXPORT void QTextBlock_setUserState(QTextBlockH handle, int state)
{
	((QTextBlock *)handle)->setUserState(state);
}

C_EXPORT int QTextBlock_revision(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->revision();
}

C_EXPORT void QTextBlock_setRevision(QTextBlockH handle, int rev)
{
	((QTextBlock *)handle)->setRevision(rev);
}

C_EXPORT bool QTextBlock_isVisible(QTextBlockH handle)
{
	return (bool) ((QTextBlock *)handle)->isVisible();
}

C_EXPORT void QTextBlock_setVisible(QTextBlockH handle, bool visible)
{
	((QTextBlock *)handle)->setVisible(visible);
}

C_EXPORT int QTextBlock_blockNumber(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->blockNumber();
}

C_EXPORT int QTextBlock_firstLineNumber(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->firstLineNumber();
}

C_EXPORT void QTextBlock_setLineCount(QTextBlockH handle, int count)
{
	((QTextBlock *)handle)->setLineCount(count);
}

C_EXPORT int QTextBlock_lineCount(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->lineCount();
}

C_EXPORT void QTextBlock_next(QTextBlockH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextBlock *)handle)->next();
}

C_EXPORT void QTextBlock_previous(QTextBlockH handle, QTextBlockH retval)
{
	*(QTextBlock *)retval = ((QTextBlock *)handle)->previous();
}

C_EXPORT int QTextBlock_fragmentIndex(QTextBlockH handle)
{
	return (int) ((QTextBlock *)handle)->fragmentIndex();
}

C_EXPORT QTextFragmentH QTextFragment_create()
{
	return (QTextFragmentH) new QTextFragment();
}

C_EXPORT void QTextFragment_destroy(QTextFragmentH handle)
{
	delete (QTextFragment *)handle;
}

C_EXPORT QTextFragmentH QTextFragment_create2(const QTextFragmentH o)
{
	return (QTextFragmentH) new QTextFragment(*(const QTextFragment*)o);
}

C_EXPORT bool QTextFragment_isValid(QTextFragmentH handle)
{
	return (bool) ((QTextFragment *)handle)->isValid();
}

C_EXPORT int QTextFragment_position(QTextFragmentH handle)
{
	return (int) ((QTextFragment *)handle)->position();
}

C_EXPORT int QTextFragment_length(QTextFragmentH handle)
{
	return (int) ((QTextFragment *)handle)->length();
}

C_EXPORT bool QTextFragment_contains(QTextFragmentH handle, int position)
{
	return (bool) ((QTextFragment *)handle)->contains(position);
}

C_EXPORT void QTextFragment_charFormat(QTextFragmentH handle, QTextCharFormatH retval)
{
	*(QTextCharFormat *)retval = ((QTextFragment *)handle)->charFormat();
}

C_EXPORT int QTextFragment_charFormatIndex(QTextFragmentH handle)
{
	return (int) ((QTextFragment *)handle)->charFormatIndex();
}

C_EXPORT void QTextFragment_text(QTextFragmentH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QTextFragment *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

