//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebsettings_hook.h"

C_EXPORT QWebSettings_hookH QWebSettings_hook_create(QObjectH handle)
{
	return (QWebSettings_hookH) new QWebSettings_hook((QObject*)handle);
}

C_EXPORT void QWebSettings_hook_destroy(QWebSettings_hookH handle)
{
	delete (QWebSettings_hook *)handle;
}

