//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlineedit_hook.h"

C_EXPORT QLineEdit_hookH QLineEdit_hook_create(QObjectH handle)
{
	return (QLineEdit_hookH) new QLineEdit_hook((QObject*)handle);
}

C_EXPORT void QLineEdit_hook_destroy(QLineEdit_hookH handle)
{
	delete (QLineEdit_hook *)handle;
}

C_EXPORT void QLineEdit_hook_hook_textChanged(QLineEdit_hookH handle, QHookH hook)
{
	((QLineEdit_hook *)handle)->hook_textChanged(hook);
}

C_EXPORT void QLineEdit_hook_hook_textEdited(QLineEdit_hookH handle, QHookH hook)
{
	((QLineEdit_hook *)handle)->hook_textEdited(hook);
}

C_EXPORT void QLineEdit_hook_hook_cursorPositionChanged(QLineEdit_hookH handle, QHookH hook)
{
	((QLineEdit_hook *)handle)->hook_cursorPositionChanged(hook);
}

C_EXPORT void QLineEdit_hook_hook_returnPressed(QLineEdit_hookH handle, QHookH hook)
{
	((QLineEdit_hook *)handle)->hook_returnPressed(hook);
}

C_EXPORT void QLineEdit_hook_hook_editingFinished(QLineEdit_hookH handle, QHookH hook)
{
	((QLineEdit_hook *)handle)->hook_editingFinished(hook);
}

C_EXPORT void QLineEdit_hook_hook_selectionChanged(QLineEdit_hookH handle, QHookH hook)
{
	((QLineEdit_hook *)handle)->hook_selectionChanged(hook);
}

