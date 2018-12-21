//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QAbstractEventDispatcherH QAbstractEventDispatcher_instance(QThreadH thread)
{
	return (QAbstractEventDispatcherH) QAbstractEventDispatcher::instance((QThread*)thread);
}

C_EXPORT bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcherH handle, unsigned int flags)
{
	return (bool) ((QAbstractEventDispatcher *)handle)->processEvents((QEventLoop::ProcessEventsFlags)flags);
}

C_EXPORT bool QAbstractEventDispatcher_hasPendingEvents(QAbstractEventDispatcherH handle)
{
	return (bool) ((QAbstractEventDispatcher *)handle)->hasPendingEvents();
}

C_EXPORT void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcherH handle, QSocketNotifierH notifier)
{
	((QAbstractEventDispatcher *)handle)->registerSocketNotifier((QSocketNotifier*)notifier);
}

C_EXPORT void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcherH handle, QSocketNotifierH notifier)
{
	((QAbstractEventDispatcher *)handle)->unregisterSocketNotifier((QSocketNotifier*)notifier);
}

C_EXPORT int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcherH handle, int interval, QObjectH object)
{
	return (int) ((QAbstractEventDispatcher *)handle)->registerTimer(interval, (QObject*)object);
}

C_EXPORT void QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcherH handle, int timerId, int interval, QObjectH object)
{
	((QAbstractEventDispatcher *)handle)->registerTimer(timerId, interval, (QObject*)object);
}

C_EXPORT bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcherH handle, int timerId)
{
	return (bool) ((QAbstractEventDispatcher *)handle)->unregisterTimer(timerId);
}

C_EXPORT bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcherH handle, QObjectH object)
{
	return (bool) ((QAbstractEventDispatcher *)handle)->unregisterTimers((QObject*)object);
}

C_EXPORT void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcherH handle)
{
	((QAbstractEventDispatcher *)handle)->wakeUp();
}

C_EXPORT void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcherH handle)
{
	((QAbstractEventDispatcher *)handle)->interrupt();
}

C_EXPORT void QAbstractEventDispatcher_flush(QAbstractEventDispatcherH handle)
{
	((QAbstractEventDispatcher *)handle)->flush();
}

C_EXPORT void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcherH handle)
{
	((QAbstractEventDispatcher *)handle)->startingUp();
}

C_EXPORT void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcherH handle)
{
	((QAbstractEventDispatcher *)handle)->closingDown();
}

C_EXPORT EventFilter2 QAbstractEventDispatcher_setEventFilter(QAbstractEventDispatcherH handle, EventFilter2 filter)
{
	return (EventFilter2) ((QAbstractEventDispatcher *)handle)->setEventFilter(filter);
}

C_EXPORT bool QAbstractEventDispatcher_filterEvent(QAbstractEventDispatcherH handle, void* message)
{
	return (bool) ((QAbstractEventDispatcher *)handle)->filterEvent(message);
}

