//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT unsigned int QIODevice_openMode(QIODeviceH handle)
{
	return (unsigned int) ((QIODevice *)handle)->openMode();
}

C_EXPORT void QIODevice_setTextModeEnabled(QIODeviceH handle, bool enabled)
{
	((QIODevice *)handle)->setTextModeEnabled(enabled);
}

C_EXPORT bool QIODevice_isTextModeEnabled(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->isTextModeEnabled();
}

C_EXPORT bool QIODevice_isOpen(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->isOpen();
}

C_EXPORT bool QIODevice_isReadable(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->isReadable();
}

C_EXPORT bool QIODevice_isWritable(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->isWritable();
}

C_EXPORT bool QIODevice_isSequential(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->isSequential();
}

C_EXPORT bool QIODevice_open(QIODeviceH handle, unsigned int mode)
{
	return (bool) ((QIODevice *)handle)->open((QIODevice::OpenMode)mode);
}

C_EXPORT void QIODevice_close(QIODeviceH handle)
{
	((QIODevice *)handle)->close();
}

C_EXPORT qint64 QIODevice_pos(QIODeviceH handle)
{
	return (qint64) ((QIODevice *)handle)->pos();
}

C_EXPORT qint64 QIODevice_size(QIODeviceH handle)
{
	return (qint64) ((QIODevice *)handle)->size();
}

C_EXPORT bool QIODevice_seek(QIODeviceH handle, qint64 pos)
{
	return (bool) ((QIODevice *)handle)->seek(pos);
}

C_EXPORT bool QIODevice_atEnd(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->atEnd();
}

C_EXPORT bool QIODevice_reset(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->reset();
}

C_EXPORT qint64 QIODevice_bytesAvailable(QIODeviceH handle)
{
	return (qint64) ((QIODevice *)handle)->bytesAvailable();
}

C_EXPORT qint64 QIODevice_bytesToWrite(QIODeviceH handle)
{
	return (qint64) ((QIODevice *)handle)->bytesToWrite();
}

C_EXPORT qint64 QIODevice_read(QIODeviceH handle, char* data, qint64 maxlen)
{
	return (qint64) ((QIODevice *)handle)->read(data, maxlen);
}

C_EXPORT void QIODevice_read2(QIODeviceH handle, QByteArrayH retval, qint64 maxlen)
{
	*(QByteArray *)retval = ((QIODevice *)handle)->read(maxlen);
}

C_EXPORT void QIODevice_readAll(QIODeviceH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QIODevice *)handle)->readAll();
}

C_EXPORT qint64 QIODevice_readLine(QIODeviceH handle, char* data, qint64 maxlen)
{
	return (qint64) ((QIODevice *)handle)->readLine(data, maxlen);
}

C_EXPORT void QIODevice_readLine2(QIODeviceH handle, QByteArrayH retval, qint64 maxlen)
{
	*(QByteArray *)retval = ((QIODevice *)handle)->readLine(maxlen);
}

C_EXPORT bool QIODevice_canReadLine(QIODeviceH handle)
{
	return (bool) ((QIODevice *)handle)->canReadLine();
}

C_EXPORT qint64 QIODevice_write(QIODeviceH handle, const char* data, qint64 len)
{
	return (qint64) ((QIODevice *)handle)->write(data, len);
}

C_EXPORT qint64 QIODevice_write2(QIODeviceH handle, const char* data)
{
	return (qint64) ((QIODevice *)handle)->write(data);
}

C_EXPORT qint64 QIODevice_write3(QIODeviceH handle, const QByteArrayH data)
{
	return (qint64) ((QIODevice *)handle)->write(*(const QByteArray*)data);
}

C_EXPORT qint64 QIODevice_peek(QIODeviceH handle, char* data, qint64 maxlen)
{
	return (qint64) ((QIODevice *)handle)->peek(data, maxlen);
}

C_EXPORT void QIODevice_peek2(QIODeviceH handle, QByteArrayH retval, qint64 maxlen)
{
	*(QByteArray *)retval = ((QIODevice *)handle)->peek(maxlen);
}

C_EXPORT bool QIODevice_waitForReadyRead(QIODeviceH handle, int msecs)
{
	return (bool) ((QIODevice *)handle)->waitForReadyRead(msecs);
}

C_EXPORT bool QIODevice_waitForBytesWritten(QIODeviceH handle, int msecs)
{
	return (bool) ((QIODevice *)handle)->waitForBytesWritten(msecs);
}

C_EXPORT void QIODevice_ungetChar(QIODeviceH handle, char c)
{
	((QIODevice *)handle)->ungetChar(c);
}

C_EXPORT bool QIODevice_putChar(QIODeviceH handle, char c)
{
	return (bool) ((QIODevice *)handle)->putChar(c);
}

C_EXPORT bool QIODevice_getChar(QIODeviceH handle, char* c)
{
	return (bool) ((QIODevice *)handle)->getChar(c);
}

C_EXPORT void QIODevice_errorString(QIODeviceH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QIODevice *)handle)->errorString();
	copyQStringToPWideString(t_retval, retval);
}

