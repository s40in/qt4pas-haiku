//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QProcessH QProcess_create(QObjectH parent)
{
	return (QProcessH) new QProcess((QObject*)parent);
}

C_EXPORT void QProcess_destroy(QProcessH handle)
{
	delete (QProcess *)handle;
}

C_EXPORT void QProcess_start(QProcessH handle, PWideString program, const QStringListH arguments, unsigned int mode)
{
	QString t_program;
	copyPWideStringToQString(program, t_program);
	((QProcess *)handle)->start(t_program, *(const QStringList*)arguments, (QIODevice::OpenMode)mode);
}

C_EXPORT void QProcess_start2(QProcessH handle, PWideString program, unsigned int mode)
{
	QString t_program;
	copyPWideStringToQString(program, t_program);
	((QProcess *)handle)->start(t_program, (QIODevice::OpenMode)mode);
}

C_EXPORT QProcess::ProcessChannelMode QProcess_readChannelMode(QProcessH handle)
{
	return (QProcess::ProcessChannelMode) ((QProcess *)handle)->readChannelMode();
}

C_EXPORT void QProcess_setReadChannelMode(QProcessH handle, QProcess::ProcessChannelMode mode)
{
	((QProcess *)handle)->setReadChannelMode(mode);
}

C_EXPORT QProcess::ProcessChannelMode QProcess_processChannelMode(QProcessH handle)
{
	return (QProcess::ProcessChannelMode) ((QProcess *)handle)->processChannelMode();
}

C_EXPORT void QProcess_setProcessChannelMode(QProcessH handle, QProcess::ProcessChannelMode mode)
{
	((QProcess *)handle)->setProcessChannelMode(mode);
}

C_EXPORT QProcess::ProcessChannel QProcess_readChannel(QProcessH handle)
{
	return (QProcess::ProcessChannel) ((QProcess *)handle)->readChannel();
}

C_EXPORT void QProcess_setReadChannel(QProcessH handle, QProcess::ProcessChannel channel)
{
	((QProcess *)handle)->setReadChannel(channel);
}

C_EXPORT void QProcess_closeReadChannel(QProcessH handle, QProcess::ProcessChannel channel)
{
	((QProcess *)handle)->closeReadChannel(channel);
}

C_EXPORT void QProcess_closeWriteChannel(QProcessH handle)
{
	((QProcess *)handle)->closeWriteChannel();
}

C_EXPORT void QProcess_setStandardInputFile(QProcessH handle, PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QProcess *)handle)->setStandardInputFile(t_fileName);
}

C_EXPORT void QProcess_setStandardOutputFile(QProcessH handle, PWideString fileName, unsigned int mode)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QProcess *)handle)->setStandardOutputFile(t_fileName, (QIODevice::OpenMode)mode);
}

C_EXPORT void QProcess_setStandardErrorFile(QProcessH handle, PWideString fileName, unsigned int mode)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	((QProcess *)handle)->setStandardErrorFile(t_fileName, (QIODevice::OpenMode)mode);
}

C_EXPORT void QProcess_setStandardOutputProcess(QProcessH handle, QProcessH destination)
{
	((QProcess *)handle)->setStandardOutputProcess((QProcess*)destination);
}

C_EXPORT void QProcess_workingDirectory(QProcessH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QProcess *)handle)->workingDirectory();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QProcess_setWorkingDirectory(QProcessH handle, PWideString dir)
{
	QString t_dir;
	copyPWideStringToQString(dir, t_dir);
	((QProcess *)handle)->setWorkingDirectory(t_dir);
}

C_EXPORT void QProcess_setEnvironment(QProcessH handle, const QStringListH environment)
{
	((QProcess *)handle)->setEnvironment(*(const QStringList*)environment);
}

C_EXPORT void QProcess_environment(QProcessH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QProcess *)handle)->environment();
}

C_EXPORT QProcess::ProcessError QProcess_error(QProcessH handle)
{
	return (QProcess::ProcessError) ((QProcess *)handle)->error();
}

C_EXPORT QProcess::ProcessState QProcess_state(QProcessH handle)
{
	return (QProcess::ProcessState) ((QProcess *)handle)->state();
}

C_EXPORT Q_PID QProcess_pid(QProcessH handle)
{
	return (Q_PID) ((QProcess *)handle)->pid();
}

C_EXPORT bool QProcess_waitForStarted(QProcessH handle, int msecs)
{
	return (bool) ((QProcess *)handle)->waitForStarted(msecs);
}

C_EXPORT bool QProcess_waitForReadyRead(QProcessH handle, int msecs)
{
	return (bool) ((QProcess *)handle)->waitForReadyRead(msecs);
}

C_EXPORT bool QProcess_waitForBytesWritten(QProcessH handle, int msecs)
{
	return (bool) ((QProcess *)handle)->waitForBytesWritten(msecs);
}

C_EXPORT bool QProcess_waitForFinished(QProcessH handle, int msecs)
{
	return (bool) ((QProcess *)handle)->waitForFinished(msecs);
}

C_EXPORT void QProcess_readAllStandardOutput(QProcessH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QProcess *)handle)->readAllStandardOutput();
}

C_EXPORT void QProcess_readAllStandardError(QProcessH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QProcess *)handle)->readAllStandardError();
}

C_EXPORT int QProcess_exitCode(QProcessH handle)
{
	return (int) ((QProcess *)handle)->exitCode();
}

C_EXPORT QProcess::ExitStatus QProcess_exitStatus(QProcessH handle)
{
	return (QProcess::ExitStatus) ((QProcess *)handle)->exitStatus();
}

C_EXPORT qint64 QProcess_bytesAvailable(QProcessH handle)
{
	return (qint64) ((QProcess *)handle)->bytesAvailable();
}

C_EXPORT qint64 QProcess_bytesToWrite(QProcessH handle)
{
	return (qint64) ((QProcess *)handle)->bytesToWrite();
}

C_EXPORT bool QProcess_isSequential(QProcessH handle)
{
	return (bool) ((QProcess *)handle)->isSequential();
}

C_EXPORT bool QProcess_canReadLine(QProcessH handle)
{
	return (bool) ((QProcess *)handle)->canReadLine();
}

C_EXPORT void QProcess_close(QProcessH handle)
{
	((QProcess *)handle)->close();
}

C_EXPORT bool QProcess_atEnd(QProcessH handle)
{
	return (bool) ((QProcess *)handle)->atEnd();
}

C_EXPORT int QProcess_execute(PWideString program, const QStringListH arguments)
{
	QString t_program;
	copyPWideStringToQString(program, t_program);
	return (int) QProcess::execute(t_program, *(const QStringList*)arguments);
}

C_EXPORT int QProcess_execute2(PWideString program)
{
	QString t_program;
	copyPWideStringToQString(program, t_program);
	return (int) QProcess::execute(t_program);
}

C_EXPORT bool QProcess_startDetached(PWideString program, const QStringListH arguments, PWideString workingDirectory, qint64* pid)
{
	QString t_program;
	QString t_workingDirectory;
	copyPWideStringToQString(program, t_program);
	copyPWideStringToQString(workingDirectory, t_workingDirectory);
	return (bool) QProcess::startDetached(t_program, *(const QStringList*)arguments, t_workingDirectory, pid);
}

C_EXPORT bool QProcess_startDetached2(PWideString program, const QStringListH arguments)
{
	QString t_program;
	copyPWideStringToQString(program, t_program);
	return (bool) QProcess::startDetached(t_program, *(const QStringList*)arguments);
}

C_EXPORT bool QProcess_startDetached3(PWideString program)
{
	QString t_program;
	copyPWideStringToQString(program, t_program);
	return (bool) QProcess::startDetached(t_program);
}

C_EXPORT void QProcess_systemEnvironment(QStringListH retval)
{
	*(QStringList *)retval = QProcess::systemEnvironment();
}

C_EXPORT void QProcess_terminate(QProcessH handle)
{
	((QProcess *)handle)->terminate();
}

C_EXPORT void QProcess_kill(QProcessH handle)
{
	((QProcess *)handle)->kill();
}

