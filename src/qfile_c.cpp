//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFileH QFile_create()
{
	return (QFileH) new QFile();
}

C_EXPORT void QFile_destroy(QFileH handle)
{
	delete (QFile *)handle;
}

C_EXPORT QFileH QFile_create2(PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	return (QFileH) new QFile(t_name);
}

C_EXPORT QFileH QFile_create3(QObjectH parent)
{
	return (QFileH) new QFile((QObject*)parent);
}

C_EXPORT QFileH QFile_create4(PWideString name, QObjectH parent)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	return (QFileH) new QFile(t_name, (QObject*)parent);
}

C_EXPORT QFile::FileError QFile_error(QFileH handle)
{
	return (QFile::FileError) ((QFile *)handle)->error();
}

C_EXPORT void QFile_unsetError(QFileH handle)
{
	((QFile *)handle)->unsetError();
}

C_EXPORT void QFile_fileName(QFileH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFile *)handle)->fileName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFile_setFileName(QFileH handle, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QFile *)handle)->setFileName(t_name);
}

C_EXPORT void QFile_encodeName(QByteArrayH retval, PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	*(QByteArray *)retval = QFile::encodeName(t_fileName);
}

C_EXPORT void QFile_decodeName(PWideString retval, const QByteArrayH localFileName)
{
	QString t_retval;
	t_retval = QFile::decodeName(*(const QByteArray*)localFileName);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFile_decodeName2(PWideString retval, const char* localFileName)
{
	QString t_retval;
	t_retval = QFile::decodeName(localFileName);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QFile_exists(QFileH handle)
{
	return (bool) ((QFile *)handle)->exists();
}

C_EXPORT bool QFile_exists2(PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) QFile::exists(t_fileName);
}

C_EXPORT void QFile_readLink(QFileH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFile *)handle)->readLink();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFile_readLink2(PWideString retval, PWideString fileName)
{
	QString t_retval;
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	t_retval = QFile::readLink(t_fileName);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFile_symLinkTarget(QFileH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFile *)handle)->symLinkTarget();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFile_symLinkTarget2(PWideString retval, PWideString fileName)
{
	QString t_retval;
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	t_retval = QFile::symLinkTarget(t_fileName);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QFile_remove(QFileH handle)
{
	return (bool) ((QFile *)handle)->remove();
}

C_EXPORT bool QFile_remove2(PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (bool) QFile::remove(t_fileName);
}

C_EXPORT bool QFile_rename(QFileH handle, PWideString newName)
{
	QString t_newName;
	copyPWideStringToQString(newName, t_newName);
	return (bool) ((QFile *)handle)->rename(t_newName);
}

C_EXPORT bool QFile_rename2(PWideString oldName, PWideString newName)
{
	QString t_oldName;
	QString t_newName;
	copyPWideStringToQString(oldName, t_oldName);
	copyPWideStringToQString(newName, t_newName);
	return (bool) QFile::rename(t_oldName, t_newName);
}

C_EXPORT bool QFile_link(QFileH handle, PWideString newName)
{
	QString t_newName;
	copyPWideStringToQString(newName, t_newName);
	return (bool) ((QFile *)handle)->link(t_newName);
}

C_EXPORT bool QFile_link2(PWideString oldname, PWideString newName)
{
	QString t_oldname;
	QString t_newName;
	copyPWideStringToQString(oldname, t_oldname);
	copyPWideStringToQString(newName, t_newName);
	return (bool) QFile::link(t_oldname, t_newName);
}

C_EXPORT bool QFile_copy(QFileH handle, PWideString newName)
{
	QString t_newName;
	copyPWideStringToQString(newName, t_newName);
	return (bool) ((QFile *)handle)->copy(t_newName);
}

C_EXPORT bool QFile_copy2(PWideString fileName, PWideString newName)
{
	QString t_fileName;
	QString t_newName;
	copyPWideStringToQString(fileName, t_fileName);
	copyPWideStringToQString(newName, t_newName);
	return (bool) QFile::copy(t_fileName, t_newName);
}

C_EXPORT bool QFile_isSequential(QFileH handle)
{
	return (bool) ((QFile *)handle)->isSequential();
}

C_EXPORT bool QFile_open(QFileH handle, unsigned int flags)
{
	return (bool) ((QFile *)handle)->open((QIODevice::OpenMode)flags);
}

C_EXPORT bool QFile_open2(QFileH handle, int fd, unsigned int flags)
{
	return (bool) ((QFile *)handle)->open(fd, (QIODevice::OpenMode)flags);
}

C_EXPORT void QFile_close(QFileH handle)
{
	((QFile *)handle)->close();
}

C_EXPORT qint64 QFile_size(QFileH handle)
{
	return (qint64) ((QFile *)handle)->size();
}

C_EXPORT qint64 QFile_pos(QFileH handle)
{
	return (qint64) ((QFile *)handle)->pos();
}

C_EXPORT bool QFile_seek(QFileH handle, qint64 offset)
{
	return (bool) ((QFile *)handle)->seek(offset);
}

C_EXPORT bool QFile_atEnd(QFileH handle)
{
	return (bool) ((QFile *)handle)->atEnd();
}

C_EXPORT bool QFile_flush(QFileH handle)
{
	return (bool) ((QFile *)handle)->flush();
}

C_EXPORT bool QFile_resize(QFileH handle, qint64 sz)
{
	return (bool) ((QFile *)handle)->resize(sz);
}

C_EXPORT bool QFile_resize2(PWideString filename, qint64 sz)
{
	QString t_filename;
	copyPWideStringToQString(filename, t_filename);
	return (bool) QFile::resize(t_filename, sz);
}

C_EXPORT unsigned int QFile_permissions(QFileH handle)
{
	return (unsigned int) ((QFile *)handle)->permissions();
}

C_EXPORT unsigned int QFile_permissions2(PWideString filename)
{
	QString t_filename;
	copyPWideStringToQString(filename, t_filename);
	return (unsigned int) QFile::permissions(t_filename);
}

C_EXPORT bool QFile_setPermissions(QFileH handle, unsigned int permissionSpec)
{
	return (bool) ((QFile *)handle)->setPermissions((QFile::Permissions)permissionSpec);
}

C_EXPORT bool QFile_setPermissions2(PWideString filename, unsigned int permissionSpec)
{
	QString t_filename;
	copyPWideStringToQString(filename, t_filename);
	return (bool) QFile::setPermissions(t_filename, (QFile::Permissions)permissionSpec);
}

C_EXPORT int QFile_handle(QFileH handle)
{
	return (int) ((QFile *)handle)->handle();
}

C_EXPORT uchar* QFile_map(QFileH handle, qint64 offset, qint64 size, QFile::MemoryMapFlags flags)
{
	return (uchar*) ((QFile *)handle)->map(offset, size, flags);
}

C_EXPORT bool QFile_unmap(QFileH handle, uchar* address)
{
	return (bool) ((QFile *)handle)->unmap(address);
}

C_EXPORT QAbstractFileEngineH QFile_fileEngine(QFileH handle)
{
	return (QAbstractFileEngineH) ((QFile *)handle)->fileEngine();
}

