//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qcoreapplication_hook.h"

C_EXPORT QCoreApplication_hookH QCoreApplication_hook_create(QObjectH handle)
{
	return (QCoreApplication_hookH) new QCoreApplication_hook((QObject*)handle);
}

C_EXPORT void QCoreApplication_hook_destroy(QCoreApplication_hookH handle)
{
	delete (QCoreApplication_hook *)handle;
}

C_EXPORT void QCoreApplication_hook_hook_aboutToQuit(QCoreApplication_hookH handle, QHookH hook)
{
	((QCoreApplication_hook *)handle)->hook_aboutToQuit(hook);
}

C_EXPORT void QCoreApplication_hook_hook_unixSignal(QCoreApplication_hookH handle, QHookH hook)
{
	((QCoreApplication_hook *)handle)->hook_unixSignal(hook);
}

