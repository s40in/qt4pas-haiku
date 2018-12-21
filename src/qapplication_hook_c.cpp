//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qapplication_hook.h"

C_EXPORT QApplication_hookH QApplication_hook_create(QObjectH handle)
{
	return (QApplication_hookH) new QApplication_hook((QObject*)handle);
}

C_EXPORT void QApplication_hook_destroy(QApplication_hookH handle)
{
	delete (QApplication_hook *)handle;
}

C_EXPORT void QApplication_hook_hook_lastWindowClosed(QApplication_hookH handle, QHookH hook)
{
	((QApplication_hook *)handle)->hook_lastWindowClosed(hook);
}

C_EXPORT void QApplication_hook_hook_focusChanged(QApplication_hookH handle, QHookH hook)
{
	((QApplication_hook *)handle)->hook_focusChanged(hook);
}

C_EXPORT void QApplication_hook_hook_fontDatabaseChanged(QApplication_hookH handle, QHookH hook)
{
	((QApplication_hook *)handle)->hook_fontDatabaseChanged(hook);
}

#if defined BINUX || MSWINDOWS || DARWIN
C_EXPORT void QApplication_hook_hook_commitDataRequest(QApplication_hookH handle, QHookH hook)
{
	((QApplication_hook *)handle)->hook_commitDataRequest(hook);
}

C_EXPORT void QApplication_hook_hook_saveStateRequest(QApplication_hookH handle, QHookH hook)
{
	((QApplication_hook *)handle)->hook_saveStateRequest(hook);
}

#endif
