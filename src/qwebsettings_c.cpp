//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWebSettingsH QWebSettings_globalSettings()
{
	return (QWebSettingsH) QWebSettings::globalSettings();
}

C_EXPORT void QWebSettings_setFontFamily(QWebSettingsH handle, QWebSettings::FontFamily which, PWideString family)
{
	QString t_family;
	copyPWideStringToQString(family, t_family);
	((QWebSettings *)handle)->setFontFamily(which, t_family);
}

C_EXPORT void QWebSettings_fontFamily(QWebSettingsH handle, PWideString retval, QWebSettings::FontFamily which)
{
	QString t_retval;
	t_retval = ((QWebSettings *)handle)->fontFamily(which);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebSettings_resetFontFamily(QWebSettingsH handle, QWebSettings::FontFamily which)
{
	((QWebSettings *)handle)->resetFontFamily(which);
}

C_EXPORT void QWebSettings_setFontSize(QWebSettingsH handle, QWebSettings::FontSize type, int size)
{
	((QWebSettings *)handle)->setFontSize(type, size);
}

C_EXPORT int QWebSettings_fontSize(QWebSettingsH handle, QWebSettings::FontSize type)
{
	return (int) ((QWebSettings *)handle)->fontSize(type);
}

C_EXPORT void QWebSettings_resetFontSize(QWebSettingsH handle, QWebSettings::FontSize type)
{
	((QWebSettings *)handle)->resetFontSize(type);
}

C_EXPORT void QWebSettings_setAttribute(QWebSettingsH handle, QWebSettings::WebAttribute attr, bool on)
{
	((QWebSettings *)handle)->setAttribute(attr, on);
}

C_EXPORT bool QWebSettings_testAttribute(QWebSettingsH handle, QWebSettings::WebAttribute attr)
{
	return (bool) ((QWebSettings *)handle)->testAttribute(attr);
}

C_EXPORT void QWebSettings_resetAttribute(QWebSettingsH handle, QWebSettings::WebAttribute attr)
{
	((QWebSettings *)handle)->resetAttribute(attr);
}

C_EXPORT void QWebSettings_setUserStyleSheetUrl(QWebSettingsH handle, const QUrlH location)
{
	((QWebSettings *)handle)->setUserStyleSheetUrl(*(const QUrl*)location);
}

C_EXPORT void QWebSettings_userStyleSheetUrl(QWebSettingsH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebSettings *)handle)->userStyleSheetUrl();
}

C_EXPORT void QWebSettings_setIconDatabasePath(PWideString location)
{
	QString t_location;
	copyPWideStringToQString(location, t_location);
	QWebSettings::setIconDatabasePath(t_location);
}

C_EXPORT void QWebSettings_iconDatabasePath(PWideString retval)
{
	QString t_retval;
	t_retval = QWebSettings::iconDatabasePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebSettings_clearIconDatabase()
{
	QWebSettings::clearIconDatabase();
}

C_EXPORT void QWebSettings_iconForUrl(QIconH retval, const QUrlH url)
{
	*(QIcon *)retval = QWebSettings::iconForUrl(*(const QUrl*)url);
}

C_EXPORT void QWebSettings_setWebGraphic(QWebSettings::WebGraphic type, const QPixmapH graphic)
{
	QWebSettings::setWebGraphic(type, *(const QPixmap*)graphic);
}

C_EXPORT void QWebSettings_webGraphic(QPixmapH retval, QWebSettings::WebGraphic type)
{
	*(QPixmap *)retval = QWebSettings::webGraphic(type);
}

C_EXPORT void QWebSettings_setMaximumPagesInCache(int pages)
{
	QWebSettings::setMaximumPagesInCache(pages);
}

C_EXPORT int QWebSettings_maximumPagesInCache()
{
	return (int) QWebSettings::maximumPagesInCache();
}

C_EXPORT void QWebSettings_setObjectCacheCapacities(int cacheMinDeadCapacity, int cacheMaxDead, int totalCapacity)
{
	QWebSettings::setObjectCacheCapacities(cacheMinDeadCapacity, cacheMaxDead, totalCapacity);
}

C_EXPORT void QWebSettings_setOfflineStoragePath(PWideString path)
{
	QString t_path;
	copyPWideStringToQString(path, t_path);
	QWebSettings::setOfflineStoragePath(t_path);
}

C_EXPORT void QWebSettings_offlineStoragePath(PWideString retval)
{
	QString t_retval;
	t_retval = QWebSettings::offlineStoragePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebSettings_setOfflineStorageDefaultQuota(qint64 maximumSize)
{
	QWebSettings::setOfflineStorageDefaultQuota(maximumSize);
}

C_EXPORT qint64 QWebSettings_offlineStorageDefaultQuota()
{
	return (qint64) QWebSettings::offlineStorageDefaultQuota();
}

