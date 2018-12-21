//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebhistory_hook.h"

C_EXPORT QWebHistoryItem_hookH QWebHistoryItem_hook_create(QObjectH handle)
{
	return (QWebHistoryItem_hookH) new QWebHistoryItem_hook((QObject*)handle);
}

C_EXPORT void QWebHistoryItem_hook_destroy(QWebHistoryItem_hookH handle)
{
	delete (QWebHistoryItem_hook *)handle;
}

C_EXPORT QWebHistory_hookH QWebHistory_hook_create(QObjectH handle)
{
	return (QWebHistory_hookH) new QWebHistory_hook((QObject*)handle);
}

C_EXPORT void QWebHistory_hook_destroy(QWebHistory_hookH handle)
{
	delete (QWebHistory_hook *)handle;
}

