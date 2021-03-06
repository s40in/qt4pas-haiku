//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebdatabase_hook.h"

C_EXPORT QWebDatabase_hookH QWebDatabase_hook_create(QObjectH handle)
{
	return (QWebDatabase_hookH) new QWebDatabase_hook((QObject*)handle);
}

C_EXPORT void QWebDatabase_hook_destroy(QWebDatabase_hookH handle)
{
	delete (QWebDatabase_hook *)handle;
}

