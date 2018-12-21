//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QEventLoopH QEventLoop_create(QObjectH parent)
{
	return (QEventLoopH) new QEventLoop((QObject*)parent);
}

C_EXPORT void QEventLoop_destroy(QEventLoopH handle)
{
	delete (QEventLoop *)handle;
}

C_EXPORT bool QEventLoop_processEvents(QEventLoopH handle, unsigned int flags)
{
	return (bool) ((QEventLoop *)handle)->processEvents((QEventLoop::ProcessEventsFlags)flags);
}

C_EXPORT void QEventLoop_processEvents2(QEventLoopH handle, unsigned int flags, int maximumTime)
{
	((QEventLoop *)handle)->processEvents((QEventLoop::ProcessEventsFlags)flags, maximumTime);
}

C_EXPORT int QEventLoop_exec(QEventLoopH handle, unsigned int flags)
{
	return (int) ((QEventLoop *)handle)->exec((QEventLoop::ProcessEventsFlags)flags);
}

C_EXPORT void QEventLoop_exit(QEventLoopH handle, int returnCode)
{
	((QEventLoop *)handle)->exit(returnCode);
}

C_EXPORT bool QEventLoop_isRunning(QEventLoopH handle)
{
	return (bool) ((QEventLoop *)handle)->isRunning();
}

C_EXPORT void QEventLoop_wakeUp(QEventLoopH handle)
{
	((QEventLoop *)handle)->wakeUp();
}

C_EXPORT void QEventLoop_quit(QEventLoopH handle)
{
	((QEventLoop *)handle)->quit();
}

