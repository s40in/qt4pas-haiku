//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QObjectH QObject_create(QObjectH parent)
{
	return (QObjectH) new QObject((QObject*)parent);
}

C_EXPORT void QObject_destroy(QObjectH handle)
{
	delete (QObject *)handle;
}

C_EXPORT bool QObject_event(QObjectH handle, QEventH AnonParam1)
{
	return (bool) ((QObject *)handle)->event((QEvent*)AnonParam1);
}

C_EXPORT bool QObject_eventFilter(QObjectH handle, QObjectH AnonParam1, QEventH AnonParam2)
{
	return (bool) ((QObject *)handle)->eventFilter((QObject*)AnonParam1, (QEvent*)AnonParam2);
}

C_EXPORT void QObject_tr(PWideString retval, const char* sourceText, const char* comment, int n)
{
	QString t_retval;
	t_retval = QObject::tr(sourceText, comment, n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QObject_trUtf8(PWideString retval, const char* sourceText, const char* comment, int n)
{
	QString t_retval;
	t_retval = QObject::trUtf8(sourceText, comment, n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT const QMetaObjectH QObject_metaObject(QObjectH handle)
{
	return (const QMetaObjectH) ((QObject *)handle)->metaObject();
}

C_EXPORT void QObject_objectName(QObjectH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QObject *)handle)->objectName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QObject_setObjectName(QObjectH handle, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QObject *)handle)->setObjectName(t_name);
}

C_EXPORT bool QObject_isWidgetType(QObjectH handle)
{
	return (bool) ((QObject *)handle)->isWidgetType();
}

C_EXPORT bool QObject_signalsBlocked(QObjectH handle)
{
	return (bool) ((QObject *)handle)->signalsBlocked();
}

C_EXPORT bool QObject_blockSignals(QObjectH handle, bool b)
{
	return (bool) ((QObject *)handle)->blockSignals(b);
}

C_EXPORT QThreadH QObject_thread(QObjectH handle)
{
	return (QThreadH) ((QObject *)handle)->thread();
}

C_EXPORT void QObject_moveToThread(QObjectH handle, QThreadH thread)
{
	((QObject *)handle)->moveToThread((QThread*)thread);
}

C_EXPORT int QObject_startTimer(QObjectH handle, int interval)
{
	return (int) ((QObject *)handle)->startTimer(interval);
}

C_EXPORT void QObject_killTimer(QObjectH handle, int id)
{
	((QObject *)handle)->killTimer(id);
}

C_EXPORT void QObject_children(QObjectH handle, PPtrIntArray retval)
{
	QObjectList t_retval;
	t_retval = ((QObject *)handle)->children();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QObject_setParent(QObjectH handle, QObjectH AnonParam1)
{
	((QObject *)handle)->setParent((QObject*)AnonParam1);
}

C_EXPORT void QObject_installEventFilter(QObjectH handle, QObjectH AnonParam1)
{
	((QObject *)handle)->installEventFilter((QObject*)AnonParam1);
}

C_EXPORT void QObject_removeEventFilter(QObjectH handle, QObjectH AnonParam1)
{
	((QObject *)handle)->removeEventFilter((QObject*)AnonParam1);
}

C_EXPORT bool QObject_connect(const QObjectH sender, const char* signal, const QObjectH receiver, const char* member, Qt::ConnectionType AnonParam5)
{
	return (bool) QObject::connect((const QObject*)sender, signal, (const QObject*)receiver, member, AnonParam5);
}

C_EXPORT bool QObject_connect2(QObjectH handle, const QObjectH sender, const char* signal, const char* member, Qt::ConnectionType type)
{
	return (bool) ((QObject *)handle)->connect((const QObject*)sender, signal, member, type);
}

C_EXPORT bool QObject_disconnect(const QObjectH sender, const char* signal, const QObjectH receiver, const char* member)
{
	return (bool) QObject::disconnect((const QObject*)sender, signal, (const QObject*)receiver, member);
}

C_EXPORT bool QObject_disconnect3(QObjectH handle, const QObjectH receiver, const char* member)
{
	return (bool) ((QObject *)handle)->disconnect((const QObject*)receiver, member);
}

C_EXPORT void QObject_dumpObjectTree(QObjectH handle)
{
	((QObject *)handle)->dumpObjectTree();
}

C_EXPORT void QObject_dumpObjectInfo(QObjectH handle)
{
	((QObject *)handle)->dumpObjectInfo();
}

C_EXPORT bool QObject_setProperty(QObjectH handle, const char* name, const QVariantH value)
{
	return (bool) ((QObject *)handle)->setProperty(name, *(const QVariant*)value);
}

C_EXPORT void QObject_property(QObjectH handle, QVariantH retval, const char* name)
{
	*(QVariant *)retval = ((QObject *)handle)->property(name);
}

C_EXPORT uint QObject_registerUserData()
{
	return (uint) QObject::registerUserData();
}

C_EXPORT QObjectH QObject_parent(QObjectH handle)
{
	return (QObjectH) ((QObject *)handle)->parent();
}

C_EXPORT bool QObject_inherits(QObjectH handle, const char* classname)
{
	return (bool) ((QObject *)handle)->inherits(classname);
}

C_EXPORT void QObject_deleteLater(QObjectH handle)
{
	((QObject *)handle)->deleteLater();
}

