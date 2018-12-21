//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qmdiarea_hook.h"

C_EXPORT QMdiArea_hookH QMdiArea_hook_create(QObjectH handle)
{
	return (QMdiArea_hookH) new QMdiArea_hook((QObject*)handle);
}

C_EXPORT void QMdiArea_hook_destroy(QMdiArea_hookH handle)
{
	delete (QMdiArea_hook *)handle;
}

C_EXPORT void QMdiArea_hook_hook_subWindowActivated(QMdiArea_hookH handle, QHookH hook)
{
	((QMdiArea_hook *)handle)->hook_subWindowActivated(hook);
}

