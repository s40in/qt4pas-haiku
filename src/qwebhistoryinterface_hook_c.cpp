//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebhistoryinterface_hook.h"

C_EXPORT QWebHistoryInterface_hookH QWebHistoryInterface_hook_create(QObjectH handle)
{
	return (QWebHistoryInterface_hookH) new QWebHistoryInterface_hook((QObject*)handle);
}

C_EXPORT void QWebHistoryInterface_hook_destroy(QWebHistoryInterface_hookH handle)
{
	delete (QWebHistoryInterface_hook *)handle;
}

