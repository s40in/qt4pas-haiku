//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QEventH QEvent_create(QEvent::Type type)
{
	return (QEventH) new QEvent(type);
}

C_EXPORT void QEvent_destroy(QEventH handle)
{
	delete (QEvent *)handle;
}

C_EXPORT QEvent::Type QEvent_type(QEventH handle)
{
	return (QEvent::Type) ((QEvent *)handle)->type();
}

C_EXPORT bool QEvent_spontaneous(QEventH handle)
{
	return (bool) ((QEvent *)handle)->spontaneous();
}

C_EXPORT void QEvent_setAccepted(QEventH handle, bool accepted)
{
	((QEvent *)handle)->setAccepted(accepted);
}

C_EXPORT bool QEvent_isAccepted(QEventH handle)
{
	return (bool) ((QEvent *)handle)->isAccepted();
}

C_EXPORT void QEvent_accept(QEventH handle)
{
	((QEvent *)handle)->accept();
}

C_EXPORT void QEvent_ignore(QEventH handle)
{
	((QEvent *)handle)->ignore();
}

C_EXPORT int QEvent_registerEventType(int hint)
{
	return (int) QEvent::registerEventType(hint);
}

C_EXPORT QTimerEventH QTimerEvent_create(int timerId)
{
	return (QTimerEventH) new QTimerEvent(timerId);
}

C_EXPORT void QTimerEvent_destroy(QTimerEventH handle)
{
	delete (QTimerEvent *)handle;
}

C_EXPORT int QTimerEvent_timerId(QTimerEventH handle)
{
	return (int) ((QTimerEvent *)handle)->timerId();
}

C_EXPORT QChildEventH QChildEvent_create(QEvent::Type type, QObjectH child)
{
	return (QChildEventH) new QChildEvent(type, (QObject*)child);
}

C_EXPORT void QChildEvent_destroy(QChildEventH handle)
{
	delete (QChildEvent *)handle;
}

C_EXPORT QObjectH QChildEvent_child(QChildEventH handle)
{
	return (QObjectH) ((QChildEvent *)handle)->child();
}

C_EXPORT bool QChildEvent_added(QChildEventH handle)
{
	return (bool) ((QChildEvent *)handle)->added();
}

C_EXPORT bool QChildEvent_polished(QChildEventH handle)
{
	return (bool) ((QChildEvent *)handle)->polished();
}

C_EXPORT bool QChildEvent_removed(QChildEventH handle)
{
	return (bool) ((QChildEvent *)handle)->removed();
}

C_EXPORT QDynamicPropertyChangeEventH QDynamicPropertyChangeEvent_create(const QByteArrayH name)
{
	return (QDynamicPropertyChangeEventH) new QDynamicPropertyChangeEvent(*(const QByteArray*)name);
}

C_EXPORT void QDynamicPropertyChangeEvent_destroy(QDynamicPropertyChangeEventH handle)
{
	delete (QDynamicPropertyChangeEvent *)handle;
}

C_EXPORT void QDynamicPropertyChangeEvent_propertyName(QDynamicPropertyChangeEventH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QDynamicPropertyChangeEvent *)handle)->propertyName();
}

