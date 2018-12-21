//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qfilesystemwatcher_hook.h"

C_EXPORT QFileSystemWatcher_hookH QFileSystemWatcher_hook_create(QObjectH handle)
{
	return (QFileSystemWatcher_hookH) new QFileSystemWatcher_hook((QObject*)handle);
}

C_EXPORT void QFileSystemWatcher_hook_destroy(QFileSystemWatcher_hookH handle)
{
	delete (QFileSystemWatcher_hook *)handle;
}

C_EXPORT void QFileSystemWatcher_hook_hook_fileChanged(QFileSystemWatcher_hookH handle, QHookH hook)
{
	((QFileSystemWatcher_hook *)handle)->hook_fileChanged(hook);
}

C_EXPORT void QFileSystemWatcher_hook_hook_directoryChanged(QFileSystemWatcher_hookH handle, QHookH hook)
{
	((QFileSystemWatcher_hook *)handle)->hook_directoryChanged(hook);
}

