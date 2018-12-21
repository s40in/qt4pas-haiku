//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#if defined BINUX || MSWINDOWS || DARWIN
C_EXPORT void QSessionManager_sessionId(QSessionManagerH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSessionManager *)handle)->sessionId();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QSessionManager_sessionKey(QSessionManagerH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QSessionManager *)handle)->sessionKey();
	copyQStringToPWideString(t_retval, retval);
}

#endif
#if defined BINUX || DARWIN
C_EXPORT void* QSessionManager_handle(QSessionManagerH handle)
{
	return (void*) ((QSessionManager *)handle)->handle();
}

#endif
#if defined BINUX || MSWINDOWS || DARWIN
C_EXPORT bool QSessionManager_allowsInteraction(QSessionManagerH handle)
{
	return (bool) ((QSessionManager *)handle)->allowsInteraction();
}

C_EXPORT bool QSessionManager_allowsErrorInteraction(QSessionManagerH handle)
{
	return (bool) ((QSessionManager *)handle)->allowsErrorInteraction();
}

C_EXPORT void QSessionManager_release(QSessionManagerH handle)
{
	((QSessionManager *)handle)->release();
}

C_EXPORT void QSessionManager_cancel(QSessionManagerH handle)
{
	((QSessionManager *)handle)->cancel();
}

C_EXPORT void QSessionManager_setRestartHint(QSessionManagerH handle, QSessionManager::RestartHint AnonParam1)
{
	((QSessionManager *)handle)->setRestartHint(AnonParam1);
}

C_EXPORT QSessionManager::RestartHint QSessionManager_restartHint(QSessionManagerH handle)
{
	return (QSessionManager::RestartHint) ((QSessionManager *)handle)->restartHint();
}

C_EXPORT void QSessionManager_setRestartCommand(QSessionManagerH handle, const QStringListH AnonParam1)
{
	((QSessionManager *)handle)->setRestartCommand(*(const QStringList*)AnonParam1);
}

C_EXPORT void QSessionManager_restartCommand(QSessionManagerH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QSessionManager *)handle)->restartCommand();
}

C_EXPORT void QSessionManager_setDiscardCommand(QSessionManagerH handle, const QStringListH AnonParam1)
{
	((QSessionManager *)handle)->setDiscardCommand(*(const QStringList*)AnonParam1);
}

C_EXPORT void QSessionManager_discardCommand(QSessionManagerH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QSessionManager *)handle)->discardCommand();
}

C_EXPORT void QSessionManager_setManagerProperty(QSessionManagerH handle, PWideString name, PWideString value)
{
	QString t_name;
	QString t_value;
	copyPWideStringToQString(name, t_name);
	copyPWideStringToQString(value, t_value);
	((QSessionManager *)handle)->setManagerProperty(t_name, t_value);
}

C_EXPORT void QSessionManager_setManagerProperty2(QSessionManagerH handle, PWideString name, const QStringListH value)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QSessionManager *)handle)->setManagerProperty(t_name, *(const QStringList*)value);
}

C_EXPORT bool QSessionManager_isPhase2(QSessionManagerH handle)
{
	return (bool) ((QSessionManager *)handle)->isPhase2();
}

C_EXPORT void QSessionManager_requestPhase2(QSessionManagerH handle)
{
	((QSessionManager *)handle)->requestPhase2();
}

#endif
