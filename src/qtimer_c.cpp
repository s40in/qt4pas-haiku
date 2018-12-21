//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTimerH QTimer_create(QObjectH parent)
{
	return (QTimerH) new QTimer((QObject*)parent);
}

C_EXPORT void QTimer_destroy(QTimerH handle)
{
	delete (QTimer *)handle;
}

C_EXPORT bool QTimer_isActive(QTimerH handle)
{
	return (bool) ((QTimer *)handle)->isActive();
}

C_EXPORT int QTimer_timerId(QTimerH handle)
{
	return (int) ((QTimer *)handle)->timerId();
}

C_EXPORT void QTimer_setInterval(QTimerH handle, int msec)
{
	((QTimer *)handle)->setInterval(msec);
}

C_EXPORT int QTimer_interval(QTimerH handle)
{
	return (int) ((QTimer *)handle)->interval();
}

C_EXPORT void QTimer_setSingleShot(QTimerH handle, bool singleShot)
{
	((QTimer *)handle)->setSingleShot(singleShot);
}

C_EXPORT bool QTimer_isSingleShot(QTimerH handle)
{
	return (bool) ((QTimer *)handle)->isSingleShot();
}

C_EXPORT void QTimer_singleShot(int msec, QObjectH receiver, const char* member)
{
	QTimer::singleShot(msec, (QObject*)receiver, member);
}

C_EXPORT void QTimer_start(QTimerH handle, int msec)
{
	((QTimer *)handle)->start(msec);
}

C_EXPORT void QTimer_start2(QTimerH handle)
{
	((QTimer *)handle)->start();
}

C_EXPORT void QTimer_stop(QTimerH handle)
{
	((QTimer *)handle)->stop();
}

