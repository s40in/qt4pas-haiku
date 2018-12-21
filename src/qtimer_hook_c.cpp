//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtimer_hook.h"

C_EXPORT QTimer_hookH QTimer_hook_create(QObjectH handle)
{
	return (QTimer_hookH) new QTimer_hook((QObject*)handle);
}

C_EXPORT void QTimer_hook_destroy(QTimer_hookH handle)
{
	delete (QTimer_hook *)handle;
}

C_EXPORT void QTimer_hook_hook_timeout(QTimer_hookH handle, QHookH hook)
{
	((QTimer_hook *)handle)->hook_timeout(hook);
}

