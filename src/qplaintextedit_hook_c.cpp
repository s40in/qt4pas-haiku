//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qplaintextedit_hook.h"

C_EXPORT QPlainTextEdit_hookH QPlainTextEdit_hook_create(QObjectH handle)
{
	return (QPlainTextEdit_hookH) new QPlainTextEdit_hook((QObject*)handle);
}

C_EXPORT void QPlainTextEdit_hook_destroy(QPlainTextEdit_hookH handle)
{
	delete (QPlainTextEdit_hook *)handle;
}

C_EXPORT void QPlainTextEdit_hook_hook_textChanged(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_textChanged(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_undoAvailable(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_undoAvailable(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_redoAvailable(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_redoAvailable(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_copyAvailable(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_copyAvailable(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_selectionChanged(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_selectionChanged(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_cursorPositionChanged(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_cursorPositionChanged(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_updateRequest(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_updateRequest(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_blockCountChanged(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_blockCountChanged(hook);
}

C_EXPORT void QPlainTextEdit_hook_hook_modificationChanged(QPlainTextEdit_hookH handle, QHookH hook)
{
	((QPlainTextEdit_hook *)handle)->hook_modificationChanged(hook);
}

C_EXPORT QPlainTextDocumentLayout_hookH QPlainTextDocumentLayout_hook_create(QObjectH handle)
{
	return (QPlainTextDocumentLayout_hookH) new QPlainTextDocumentLayout_hook((QObject*)handle);
}

C_EXPORT void QPlainTextDocumentLayout_hook_destroy(QPlainTextDocumentLayout_hookH handle)
{
	delete (QPlainTextDocumentLayout_hook *)handle;
}

