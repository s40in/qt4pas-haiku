//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QLineEditH QLineEdit_create(QWidgetH parent)
{
	return (QLineEditH) new QLineEdit((QWidget*)parent);
}

C_EXPORT void QLineEdit_destroy(QLineEditH handle)
{
	delete (QLineEdit *)handle;
}

C_EXPORT QLineEditH QLineEdit_create2(PWideString AnonParam1, QWidgetH parent)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	return (QLineEditH) new QLineEdit(t_AnonParam1, (QWidget*)parent);
}

C_EXPORT void QLineEdit_text(QLineEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLineEdit *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLineEdit_displayText(QLineEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLineEdit *)handle)->displayText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QLineEdit_maxLength(QLineEditH handle)
{
	return (int) ((QLineEdit *)handle)->maxLength();
}

C_EXPORT void QLineEdit_setMaxLength(QLineEditH handle, int AnonParam1)
{
	((QLineEdit *)handle)->setMaxLength(AnonParam1);
}

C_EXPORT void QLineEdit_setFrame(QLineEditH handle, bool AnonParam1)
{
	((QLineEdit *)handle)->setFrame(AnonParam1);
}

C_EXPORT bool QLineEdit_hasFrame(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->hasFrame();
}

C_EXPORT QLineEdit::EchoMode QLineEdit_echoMode(QLineEditH handle)
{
	return (QLineEdit::EchoMode) ((QLineEdit *)handle)->echoMode();
}

C_EXPORT void QLineEdit_setEchoMode(QLineEditH handle, QLineEdit::EchoMode AnonParam1)
{
	((QLineEdit *)handle)->setEchoMode(AnonParam1);
}

C_EXPORT bool QLineEdit_isReadOnly(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->isReadOnly();
}

C_EXPORT void QLineEdit_setReadOnly(QLineEditH handle, bool AnonParam1)
{
	((QLineEdit *)handle)->setReadOnly(AnonParam1);
}

C_EXPORT void QLineEdit_setValidator(QLineEditH handle, const QValidatorH AnonParam1)
{
	((QLineEdit *)handle)->setValidator((const QValidator*)AnonParam1);
}

C_EXPORT const QValidatorH QLineEdit_validator(QLineEditH handle)
{
	return (const QValidatorH) ((QLineEdit *)handle)->validator();
}

C_EXPORT void QLineEdit_setCompleter(QLineEditH handle, QCompleterH completer)
{
	((QLineEdit *)handle)->setCompleter((QCompleter*)completer);
}

C_EXPORT QCompleterH QLineEdit_completer(QLineEditH handle)
{
	return (QCompleterH) ((QLineEdit *)handle)->completer();
}

C_EXPORT void QLineEdit_sizeHint(QLineEditH handle, PSize retval)
{
	*(QSize *)retval = ((QLineEdit *)handle)->sizeHint();
}

C_EXPORT void QLineEdit_minimumSizeHint(QLineEditH handle, PSize retval)
{
	*(QSize *)retval = ((QLineEdit *)handle)->minimumSizeHint();
}

C_EXPORT int QLineEdit_cursorPosition(QLineEditH handle)
{
	return (int) ((QLineEdit *)handle)->cursorPosition();
}

C_EXPORT void QLineEdit_setCursorPosition(QLineEditH handle, int AnonParam1)
{
	((QLineEdit *)handle)->setCursorPosition(AnonParam1);
}

C_EXPORT int QLineEdit_cursorPositionAt(QLineEditH handle, const QPointH pos)
{
	return (int) ((QLineEdit *)handle)->cursorPositionAt(*(const QPoint*)pos);
}

C_EXPORT void QLineEdit_setAlignment(QLineEditH handle, unsigned int flag)
{
	((QLineEdit *)handle)->setAlignment((Qt::Alignment)flag);
}

C_EXPORT unsigned int QLineEdit_alignment(QLineEditH handle)
{
	return (unsigned int) ((QLineEdit *)handle)->alignment();
}

C_EXPORT void QLineEdit_cursorForward(QLineEditH handle, bool mark, int steps)
{
	((QLineEdit *)handle)->cursorForward(mark, steps);
}

C_EXPORT void QLineEdit_cursorBackward(QLineEditH handle, bool mark, int steps)
{
	((QLineEdit *)handle)->cursorBackward(mark, steps);
}

C_EXPORT void QLineEdit_cursorWordForward(QLineEditH handle, bool mark)
{
	((QLineEdit *)handle)->cursorWordForward(mark);
}

C_EXPORT void QLineEdit_cursorWordBackward(QLineEditH handle, bool mark)
{
	((QLineEdit *)handle)->cursorWordBackward(mark);
}

C_EXPORT void QLineEdit_backspace(QLineEditH handle)
{
	((QLineEdit *)handle)->backspace();
}

C_EXPORT void QLineEdit_del(QLineEditH handle)
{
	((QLineEdit *)handle)->del();
}

C_EXPORT void QLineEdit_home(QLineEditH handle, bool mark)
{
	((QLineEdit *)handle)->home(mark);
}

C_EXPORT void QLineEdit_end(QLineEditH handle, bool mark)
{
	((QLineEdit *)handle)->end(mark);
}

C_EXPORT bool QLineEdit_isModified(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->isModified();
}

C_EXPORT void QLineEdit_setModified(QLineEditH handle, bool AnonParam1)
{
	((QLineEdit *)handle)->setModified(AnonParam1);
}

C_EXPORT void QLineEdit_setSelection(QLineEditH handle, int AnonParam1, int AnonParam2)
{
	((QLineEdit *)handle)->setSelection(AnonParam1, AnonParam2);
}

C_EXPORT bool QLineEdit_hasSelectedText(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->hasSelectedText();
}

C_EXPORT void QLineEdit_selectedText(QLineEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLineEdit *)handle)->selectedText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QLineEdit_selectionStart(QLineEditH handle)
{
	return (int) ((QLineEdit *)handle)->selectionStart();
}

C_EXPORT bool QLineEdit_isUndoAvailable(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->isUndoAvailable();
}

C_EXPORT bool QLineEdit_isRedoAvailable(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->isRedoAvailable();
}

C_EXPORT void QLineEdit_setDragEnabled(QLineEditH handle, bool b)
{
	((QLineEdit *)handle)->setDragEnabled(b);
}

C_EXPORT bool QLineEdit_dragEnabled(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->dragEnabled();
}

C_EXPORT void QLineEdit_inputMask(QLineEditH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QLineEdit *)handle)->inputMask();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QLineEdit_setInputMask(QLineEditH handle, PWideString inputMask)
{
	QString t_inputMask;
	copyPWideStringToQString(inputMask, t_inputMask);
	((QLineEdit *)handle)->setInputMask(t_inputMask);
}

C_EXPORT bool QLineEdit_hasAcceptableInput(QLineEditH handle)
{
	return (bool) ((QLineEdit *)handle)->hasAcceptableInput();
}

C_EXPORT void QLineEdit_setTextMargins(QLineEditH handle, int left, int top, int right, int bottom)
{
	((QLineEdit *)handle)->setTextMargins(left, top, right, bottom);
}

C_EXPORT void QLineEdit_getTextMargins(QLineEditH handle, int* left, int* top, int* right, int* bottom)
{
	((QLineEdit *)handle)->getTextMargins(left, top, right, bottom);
}

C_EXPORT void QLineEdit_setText(QLineEditH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QLineEdit *)handle)->setText(t_AnonParam1);
}

C_EXPORT void QLineEdit_clear(QLineEditH handle)
{
	((QLineEdit *)handle)->clear();
}

C_EXPORT void QLineEdit_selectAll(QLineEditH handle)
{
	((QLineEdit *)handle)->selectAll();
}

C_EXPORT void QLineEdit_undo(QLineEditH handle)
{
	((QLineEdit *)handle)->undo();
}

C_EXPORT void QLineEdit_redo(QLineEditH handle)
{
	((QLineEdit *)handle)->redo();
}

C_EXPORT void QLineEdit_cut(QLineEditH handle)
{
	((QLineEdit *)handle)->cut();
}

C_EXPORT void QLineEdit_copy(QLineEditH handle)
{
	((QLineEdit *)handle)->copy();
}

C_EXPORT void QLineEdit_paste(QLineEditH handle)
{
	((QLineEdit *)handle)->paste();
}

C_EXPORT void QLineEdit_deselect(QLineEditH handle)
{
	((QLineEdit *)handle)->deselect();
}

C_EXPORT void QLineEdit_insert(QLineEditH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QLineEdit *)handle)->insert(t_AnonParam1);
}

C_EXPORT QMenuH QLineEdit_createStandardContextMenu(QLineEditH handle)
{
	return (QMenuH) ((QLineEdit *)handle)->createStandardContextMenu();
}

C_EXPORT void QLineEdit_inputMethodQuery(QLineEditH handle, QVariantH retval, Qt::InputMethodQuery AnonParam1)
{
	*(QVariant *)retval = ((QLineEdit *)handle)->inputMethodQuery(AnonParam1);
}

C_EXPORT bool QLineEdit_event(QLineEditH handle, QEventH AnonParam1)
{
	return (bool) ((QLineEdit *)handle)->event((QEvent*)AnonParam1);
}

