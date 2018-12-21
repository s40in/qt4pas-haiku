//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QCoreApplicationH QCoreApplication_create(int* argc, char** argv)
{
	return (QCoreApplicationH) new QCoreApplication(*(int*)argc, argv);
}

C_EXPORT void QCoreApplication_destroy(QCoreApplicationH handle)
{
	delete (QCoreApplication *)handle;
}

C_EXPORT void QCoreApplication_arguments(QStringListH retval)
{
	*(QStringList *)retval = QCoreApplication::arguments();
}

C_EXPORT void QCoreApplication_setAttribute(Qt::ApplicationAttribute attribute, bool on)
{
	QCoreApplication::setAttribute(attribute, on);
}

C_EXPORT bool QCoreApplication_testAttribute(Qt::ApplicationAttribute attribute)
{
	return (bool) QCoreApplication::testAttribute(attribute);
}

C_EXPORT void QCoreApplication_setOrganizationDomain(PWideString orgDomain)
{
	QString t_orgDomain;
	copyPWideStringToQString(orgDomain, t_orgDomain);
	QCoreApplication::setOrganizationDomain(t_orgDomain);
}

C_EXPORT void QCoreApplication_organizationDomain(PWideString retval)
{
	QString t_retval;
	t_retval = QCoreApplication::organizationDomain();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QCoreApplication_setOrganizationName(PWideString orgName)
{
	QString t_orgName;
	copyPWideStringToQString(orgName, t_orgName);
	QCoreApplication::setOrganizationName(t_orgName);
}

C_EXPORT void QCoreApplication_organizationName(PWideString retval)
{
	QString t_retval;
	t_retval = QCoreApplication::organizationName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QCoreApplication_setApplicationName(PWideString application)
{
	QString t_application;
	copyPWideStringToQString(application, t_application);
	QCoreApplication::setApplicationName(t_application);
}

C_EXPORT void QCoreApplication_applicationName(PWideString retval)
{
	QString t_retval;
	t_retval = QCoreApplication::applicationName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QCoreApplication_setApplicationVersion(PWideString version)
{
	QString t_version;
	copyPWideStringToQString(version, t_version);
	QCoreApplication::setApplicationVersion(t_version);
}

C_EXPORT void QCoreApplication_applicationVersion(PWideString retval)
{
	QString t_retval;
	t_retval = QCoreApplication::applicationVersion();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QCoreApplicationH QCoreApplication_instance()
{
	return (QCoreApplicationH) QCoreApplication::instance();
}

C_EXPORT int QCoreApplication_exec()
{
	return (int) QCoreApplication::exec();
}

C_EXPORT void QCoreApplication_processEvents(unsigned int flags)
{
	QCoreApplication::processEvents((QEventLoop::ProcessEventsFlags)flags);
}

C_EXPORT void QCoreApplication_processEvents2(unsigned int flags, int maxtime)
{
	QCoreApplication::processEvents((QEventLoop::ProcessEventsFlags)flags, maxtime);
}

C_EXPORT void QCoreApplication_exit(int retcode)
{
	QCoreApplication::exit(retcode);
}

C_EXPORT bool QCoreApplication_sendEvent(QObjectH receiver, QEventH event)
{
	return (bool) QCoreApplication::sendEvent((QObject*)receiver, (QEvent*)event);
}

C_EXPORT void QCoreApplication_postEvent(QObjectH receiver, QEventH event)
{
	QCoreApplication::postEvent((QObject*)receiver, (QEvent*)event);
}

C_EXPORT void QCoreApplication_postEvent2(QObjectH receiver, QEventH event, int priority)
{
	QCoreApplication::postEvent((QObject*)receiver, (QEvent*)event, priority);
}

C_EXPORT void QCoreApplication_sendPostedEvents(QObjectH receiver, int event_type)
{
	QCoreApplication::sendPostedEvents((QObject*)receiver, event_type);
}

C_EXPORT void QCoreApplication_sendPostedEvents2()
{
	QCoreApplication::sendPostedEvents();
}

C_EXPORT void QCoreApplication_removePostedEvents(QObjectH receiver)
{
	QCoreApplication::removePostedEvents((QObject*)receiver);
}

C_EXPORT void QCoreApplication_removePostedEvents2(QObjectH receiver, int eventType)
{
	QCoreApplication::removePostedEvents((QObject*)receiver, eventType);
}

C_EXPORT bool QCoreApplication_hasPendingEvents()
{
	return (bool) QCoreApplication::hasPendingEvents();
}

C_EXPORT bool QCoreApplication_notify(QCoreApplicationH handle, QObjectH AnonParam1, QEventH AnonParam2)
{
	return (bool) ((QCoreApplication *)handle)->notify((QObject*)AnonParam1, (QEvent*)AnonParam2);
}

C_EXPORT bool QCoreApplication_startingUp()
{
	return (bool) QCoreApplication::startingUp();
}

C_EXPORT bool QCoreApplication_closingDown()
{
	return (bool) QCoreApplication::closingDown();
}

C_EXPORT void QCoreApplication_applicationDirPath(PWideString retval)
{
	QString t_retval;
	t_retval = QCoreApplication::applicationDirPath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QCoreApplication_applicationFilePath(PWideString retval)
{
	QString t_retval;
	t_retval = QCoreApplication::applicationFilePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT qint64 QCoreApplication_applicationPid()
{
	return (qint64) QCoreApplication::applicationPid();
}

C_EXPORT void QCoreApplication_setLibraryPaths(const QStringListH AnonParam1)
{
	QCoreApplication::setLibraryPaths(*(const QStringList*)AnonParam1);
}

C_EXPORT void QCoreApplication_libraryPaths(QStringListH retval)
{
	*(QStringList *)retval = QCoreApplication::libraryPaths();
}

C_EXPORT void QCoreApplication_addLibraryPath(PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QCoreApplication::addLibraryPath(t_AnonParam1);
}

C_EXPORT void QCoreApplication_removeLibraryPath(PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QCoreApplication::removeLibraryPath(t_AnonParam1);
}

C_EXPORT void QCoreApplication_installTranslator(QTranslatorH messageFile)
{
	QCoreApplication::installTranslator((QTranslator*)messageFile);
}

C_EXPORT void QCoreApplication_removeTranslator(QTranslatorH messageFile)
{
	QCoreApplication::removeTranslator((QTranslator*)messageFile);
}

C_EXPORT void QCoreApplication_translate(PWideString retval, const char* context, const char* key, const char* disambiguation, QCoreApplication::Encoding encoding)
{
	QString t_retval;
	t_retval = QCoreApplication::translate(context, key, disambiguation, encoding);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QCoreApplication_translate2(PWideString retval, const char* context, const char* key, const char* disambiguation, QCoreApplication::Encoding encoding, int n)
{
	QString t_retval;
	t_retval = QCoreApplication::translate(context, key, disambiguation, encoding, n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QCoreApplication_flush()
{
	QCoreApplication::flush();
}

#if defined BINUX || DARWIN || QTOPIA
C_EXPORT void QCoreApplication_watchUnixSignal(int signal, bool watch)
{
	QCoreApplication::watchUnixSignal(signal, watch);
}

#endif
C_EXPORT EventFilter QCoreApplication_setEventFilter(QCoreApplicationH handle, EventFilter filter)
{
	return (EventFilter) ((QCoreApplication *)handle)->setEventFilter(filter);
}

C_EXPORT bool QCoreApplication_filterEvent(QCoreApplicationH handle, void* message, long* result)
{
	return (bool) ((QCoreApplication *)handle)->filterEvent(message, result);
}

C_EXPORT void QCoreApplication_quit()
{
	QCoreApplication::quit();
}

#if defined MSWINDOWS
C_EXPORT bool QCoreApplication_winEventFilter(QCoreApplicationH handle, MSG* message, long* result)
{
	return (bool) ((QCoreApplication *)handle)->winEventFilter(message, result);
}

#endif
