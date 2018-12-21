//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFileInfoH QFileInfo_create()
{
	return (QFileInfoH) new QFileInfo();
}

C_EXPORT void QFileInfo_destroy(QFileInfoH handle)
{
	delete (QFileInfo *)handle;
}

C_EXPORT QFileInfoH QFileInfo_create2(PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	return (QFileInfoH) new QFileInfo(t_file);
}

C_EXPORT QFileInfoH QFileInfo_create3(const QFileH file)
{
	return (QFileInfoH) new QFileInfo(*(const QFile*)file);
}

C_EXPORT QFileInfoH QFileInfo_create4(const QDirH dir, PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	return (QFileInfoH) new QFileInfo(*(const QDir*)dir, t_file);
}

C_EXPORT QFileInfoH QFileInfo_create5(const QFileInfoH fileinfo)
{
	return (QFileInfoH) new QFileInfo(*(const QFileInfo*)fileinfo);
}

C_EXPORT void QFileInfo_setFile(QFileInfoH handle, PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	((QFileInfo *)handle)->setFile(t_file);
}

C_EXPORT void QFileInfo_setFile2(QFileInfoH handle, const QFileH file)
{
	((QFileInfo *)handle)->setFile(*(const QFile*)file);
}

C_EXPORT void QFileInfo_setFile3(QFileInfoH handle, const QDirH dir, PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	((QFileInfo *)handle)->setFile(*(const QDir*)dir, t_file);
}

C_EXPORT bool QFileInfo_exists(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->exists();
}

C_EXPORT void QFileInfo_refresh(QFileInfoH handle)
{
	((QFileInfo *)handle)->refresh();
}

C_EXPORT void QFileInfo_filePath(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->filePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_absoluteFilePath(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->absoluteFilePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_canonicalFilePath(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->canonicalFilePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_fileName(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->fileName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_baseName(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->baseName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_completeBaseName(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->completeBaseName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_suffix(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->suffix();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_bundleName(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->bundleName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_completeSuffix(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->completeSuffix();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_path(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->path();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_absolutePath(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->absolutePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_canonicalPath(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->canonicalPath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_dir(QFileInfoH handle, QDirH retval)
{
	*(QDir *)retval = ((QFileInfo *)handle)->dir();
}

C_EXPORT void QFileInfo_absoluteDir(QFileInfoH handle, QDirH retval)
{
	*(QDir *)retval = ((QFileInfo *)handle)->absoluteDir();
}

C_EXPORT bool QFileInfo_isReadable(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isReadable();
}

C_EXPORT bool QFileInfo_isWritable(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isWritable();
}

C_EXPORT bool QFileInfo_isExecutable(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isExecutable();
}

C_EXPORT bool QFileInfo_isHidden(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isHidden();
}

C_EXPORT bool QFileInfo_isRelative(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isRelative();
}

C_EXPORT bool QFileInfo_isAbsolute(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isAbsolute();
}

C_EXPORT bool QFileInfo_makeAbsolute(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->makeAbsolute();
}

C_EXPORT bool QFileInfo_isFile(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isFile();
}

C_EXPORT bool QFileInfo_isDir(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isDir();
}

C_EXPORT bool QFileInfo_isSymLink(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isSymLink();
}

C_EXPORT bool QFileInfo_isRoot(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isRoot();
}

C_EXPORT bool QFileInfo_isBundle(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->isBundle();
}

C_EXPORT void QFileInfo_readLink(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->readLink();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_symLinkTarget(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->symLinkTarget();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFileInfo_owner(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->owner();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT uint QFileInfo_ownerId(QFileInfoH handle)
{
	return (uint) ((QFileInfo *)handle)->ownerId();
}

C_EXPORT void QFileInfo_group(QFileInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileInfo *)handle)->group();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT uint QFileInfo_groupId(QFileInfoH handle)
{
	return (uint) ((QFileInfo *)handle)->groupId();
}

C_EXPORT bool QFileInfo_permission(QFileInfoH handle, unsigned int permissions)
{
	return (bool) ((QFileInfo *)handle)->permission((QFile::Permissions)permissions);
}

C_EXPORT unsigned int QFileInfo_permissions(QFileInfoH handle)
{
	return (unsigned int) ((QFileInfo *)handle)->permissions();
}

C_EXPORT qint64 QFileInfo_size(QFileInfoH handle)
{
	return (qint64) ((QFileInfo *)handle)->size();
}

C_EXPORT void QFileInfo_created(QFileInfoH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QFileInfo *)handle)->created();
}

C_EXPORT void QFileInfo_lastModified(QFileInfoH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QFileInfo *)handle)->lastModified();
}

C_EXPORT void QFileInfo_lastRead(QFileInfoH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QFileInfo *)handle)->lastRead();
}

C_EXPORT void QFileInfo_detach(QFileInfoH handle)
{
	((QFileInfo *)handle)->detach();
}

C_EXPORT bool QFileInfo_caching(QFileInfoH handle)
{
	return (bool) ((QFileInfo *)handle)->caching();
}

C_EXPORT void QFileInfo_setCaching(QFileInfoH handle, bool on)
{
	((QFileInfo *)handle)->setCaching(on);
}

