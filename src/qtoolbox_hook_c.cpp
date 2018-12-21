//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtoolbox_hook.h"

C_EXPORT QToolBox_hookH QToolBox_hook_create(QObjectH handle)
{
	return (QToolBox_hookH) new QToolBox_hook((QObject*)handle);
}

C_EXPORT void QToolBox_hook_destroy(QToolBox_hookH handle)
{
	delete (QToolBox_hook *)handle;
}

C_EXPORT void QToolBox_hook_hook_currentChanged(QToolBox_hookH handle, QHookH hook)
{
	((QToolBox_hook *)handle)->hook_currentChanged(hook);
}

