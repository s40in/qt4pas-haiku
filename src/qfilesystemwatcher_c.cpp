//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFileSystemWatcherH QFileSystemWatcher_create(QObjectH parent)
{
	return (QFileSystemWatcherH) new QFileSystemWatcher((QObject*)parent);
}

C_EXPORT void QFileSystemWatcher_destroy(QFileSystemWatcherH handle)
{
	delete (QFileSystemWatcher *)handle;
}

C_EXPORT QFileSystemWatcherH QFileSystemWatcher_create2(const QStringListH paths, QObjectH parent)
{
	return (QFileSystemWatcherH) new QFileSystemWatcher(*(const QStringList*)paths, (QObject*)parent);
}

C_EXPORT void QFileSystemWatcher_addPath(QFileSystemWatcherH handle, PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	((QFileSystemWatcher *)handle)->addPath(t_file);
}

C_EXPORT void QFileSystemWatcher_addPaths(QFileSystemWatcherH handle, const QStringListH files)
{
	((QFileSystemWatcher *)handle)->addPaths(*(const QStringList*)files);
}

C_EXPORT void QFileSystemWatcher_removePath(QFileSystemWatcherH handle, PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	((QFileSystemWatcher *)handle)->removePath(t_file);
}

C_EXPORT void QFileSystemWatcher_removePaths(QFileSystemWatcherH handle, const QStringListH files)
{
	((QFileSystemWatcher *)handle)->removePaths(*(const QStringList*)files);
}

C_EXPORT void QFileSystemWatcher_files(QFileSystemWatcherH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QFileSystemWatcher *)handle)->files();
}

C_EXPORT void QFileSystemWatcher_directories(QFileSystemWatcherH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QFileSystemWatcher *)handle)->directories();
}

