//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtextedit_hook.h"

C_EXPORT QTextEdit_hookH QTextEdit_hook_create(QObjectH handle)
{
	return (QTextEdit_hookH) new QTextEdit_hook((QObject*)handle);
}

C_EXPORT void QTextEdit_hook_destroy(QTextEdit_hookH handle)
{
	delete (QTextEdit_hook *)handle;
}

C_EXPORT void QTextEdit_hook_hook_textChanged(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_textChanged(hook);
}

C_EXPORT void QTextEdit_hook_hook_undoAvailable(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_undoAvailable(hook);
}

C_EXPORT void QTextEdit_hook_hook_redoAvailable(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_redoAvailable(hook);
}

C_EXPORT void QTextEdit_hook_hook_currentCharFormatChanged(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_currentCharFormatChanged(hook);
}

C_EXPORT void QTextEdit_hook_hook_copyAvailable(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_copyAvailable(hook);
}

C_EXPORT void QTextEdit_hook_hook_selectionChanged(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_selectionChanged(hook);
}

C_EXPORT void QTextEdit_hook_hook_cursorPositionChanged(QTextEdit_hookH handle, QHookH hook)
{
	((QTextEdit_hook *)handle)->hook_cursorPositionChanged(hook);
}

