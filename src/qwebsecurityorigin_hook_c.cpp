//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qwebsecurityorigin_hook.h"

C_EXPORT QWebSecurityOrigin_hookH QWebSecurityOrigin_hook_create(QObjectH handle)
{
	return (QWebSecurityOrigin_hookH) new QWebSecurityOrigin_hook((QObject*)handle);
}

C_EXPORT void QWebSecurityOrigin_hook_destroy(QWebSecurityOrigin_hookH handle)
{
	delete (QWebSecurityOrigin_hook *)handle;
}

