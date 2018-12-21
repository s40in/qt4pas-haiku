//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qfiledialog_hook.h"

C_EXPORT QFileDialog_hookH QFileDialog_hook_create(QObjectH handle)
{
	return (QFileDialog_hookH) new QFileDialog_hook((QObject*)handle);
}

C_EXPORT void QFileDialog_hook_destroy(QFileDialog_hookH handle)
{
	delete (QFileDialog_hook *)handle;
}

C_EXPORT void QFileDialog_hook_hook_fileSelected(QFileDialog_hookH handle, QHookH hook)
{
	((QFileDialog_hook *)handle)->hook_fileSelected(hook);
}

C_EXPORT void QFileDialog_hook_hook_filesSelected(QFileDialog_hookH handle, QHookH hook)
{
	((QFileDialog_hook *)handle)->hook_filesSelected(hook);
}

C_EXPORT void QFileDialog_hook_hook_currentChanged(QFileDialog_hookH handle, QHookH hook)
{
	((QFileDialog_hook *)handle)->hook_currentChanged(hook);
}

C_EXPORT void QFileDialog_hook_hook_directoryEntered(QFileDialog_hookH handle, QHookH hook)
{
	((QFileDialog_hook *)handle)->hook_directoryEntered(hook);
}

C_EXPORT void QFileDialog_hook_hook_filterSelected(QFileDialog_hookH handle, QHookH hook)
{
	((QFileDialog_hook *)handle)->hook_filterSelected(hook);
}

