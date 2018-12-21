//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT Qt::HANDLE QThread_currentThreadId()
{
	return (Qt::HANDLE) QThread::currentThreadId();
}

C_EXPORT QThreadH QThread_currentThread()
{
	return (QThreadH) QThread::currentThread();
}

C_EXPORT int QThread_idealThreadCount()
{
	return (int) QThread::idealThreadCount();
}

C_EXPORT void QThread_yieldCurrentThread()
{
	QThread::yieldCurrentThread();
}

C_EXPORT QThreadH QThread_create(QObjectH parent)
{
	return (QThreadH) new QThread((QObject*)parent);
}

C_EXPORT void QThread_destroy(QThreadH handle)
{
	delete (QThread *)handle;
}

C_EXPORT void QThread_setPriority(QThreadH handle, QThread::Priority priority)
{
	((QThread *)handle)->setPriority(priority);
}

C_EXPORT QThread::Priority QThread_priority(QThreadH handle)
{
	return (QThread::Priority) ((QThread *)handle)->priority();
}

C_EXPORT bool QThread_isFinished(QThreadH handle)
{
	return (bool) ((QThread *)handle)->isFinished();
}

C_EXPORT bool QThread_isRunning(QThreadH handle)
{
	return (bool) ((QThread *)handle)->isRunning();
}

C_EXPORT void QThread_setStackSize(QThreadH handle, uint stackSize)
{
	((QThread *)handle)->setStackSize(stackSize);
}

C_EXPORT uint QThread_stackSize(QThreadH handle)
{
	return (uint) ((QThread *)handle)->stackSize();
}

C_EXPORT void QThread_exit(QThreadH handle, int retcode)
{
	((QThread *)handle)->exit(retcode);
}

C_EXPORT void QThread_start(QThreadH handle, QThread::Priority AnonParam1)
{
	((QThread *)handle)->start(AnonParam1);
}

C_EXPORT void QThread_terminate(QThreadH handle)
{
	((QThread *)handle)->terminate();
}

C_EXPORT void QThread_quit(QThreadH handle)
{
	((QThread *)handle)->quit();
}

C_EXPORT bool QThread_wait(QThreadH handle, unsigned long time)
{
	return (bool) ((QThread *)handle)->wait(time);
}

