//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qstatusbar_hook.h"

C_EXPORT QStatusBar_hookH QStatusBar_hook_create(QObjectH handle)
{
	return (QStatusBar_hookH) new QStatusBar_hook((QObject*)handle);
}

C_EXPORT void QStatusBar_hook_destroy(QStatusBar_hookH handle)
{
	delete (QStatusBar_hook *)handle;
}

C_EXPORT void QStatusBar_hook_hook_messageChanged(QStatusBar_hookH handle, QHookH hook)
{
	((QStatusBar_hook *)handle)->hook_messageChanged(hook);
}

