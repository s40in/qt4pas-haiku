//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qclipboard_hook.h"

C_EXPORT QClipboard_hookH QClipboard_hook_create(QObjectH handle)
{
	return (QClipboard_hookH) new QClipboard_hook((QObject*)handle);
}

C_EXPORT void QClipboard_hook_destroy(QClipboard_hookH handle)
{
	delete (QClipboard_hook *)handle;
}

C_EXPORT void QClipboard_hook_hook_changed(QClipboard_hookH handle, QHookH hook)
{
	((QClipboard_hook *)handle)->hook_changed(hook);
}

C_EXPORT void QClipboard_hook_hook_selectionChanged(QClipboard_hookH handle, QHookH hook)
{
	((QClipboard_hook *)handle)->hook_selectionChanged(hook);
}

C_EXPORT void QClipboard_hook_hook_findBufferChanged(QClipboard_hookH handle, QHookH hook)
{
	((QClipboard_hook *)handle)->hook_findBufferChanged(hook);
}

C_EXPORT void QClipboard_hook_hook_dataChanged(QClipboard_hookH handle, QHookH hook)
{
	((QClipboard_hook *)handle)->hook_dataChanged(hook);
}

