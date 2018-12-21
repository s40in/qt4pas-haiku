//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QWebHistoryInterface_setDefaultInterface(QWebHistoryInterfaceH defaultInterface)
{
	QWebHistoryInterface::setDefaultInterface((QWebHistoryInterface*)defaultInterface);
}

C_EXPORT QWebHistoryInterfaceH QWebHistoryInterface_defaultInterface()
{
	return (QWebHistoryInterfaceH) QWebHistoryInterface::defaultInterface();
}

C_EXPORT bool QWebHistoryInterface_historyContains(QWebHistoryInterfaceH handle, PWideString url)
{
	QString t_url;
	copyPWideStringToQString(url, t_url);
	return (bool) ((QWebHistoryInterface *)handle)->historyContains(t_url);
}

C_EXPORT void QWebHistoryInterface_addHistoryEntry(QWebHistoryInterfaceH handle, PWideString url)
{
	QString t_url;
	copyPWideStringToQString(url, t_url);
	((QWebHistoryInterface *)handle)->addHistoryEntry(t_url);
}

