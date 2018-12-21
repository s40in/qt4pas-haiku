//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlabel_hook.h"

C_EXPORT QLabel_hookH QLabel_hook_create(QObjectH handle)
{
	return (QLabel_hookH) new QLabel_hook((QObject*)handle);
}

C_EXPORT void QLabel_hook_destroy(QLabel_hookH handle)
{
	delete (QLabel_hook *)handle;
}

C_EXPORT void QLabel_hook_hook_linkActivated(QLabel_hookH handle, QHookH hook)
{
	((QLabel_hook *)handle)->hook_linkActivated(hook);
}

C_EXPORT void QLabel_hook_hook_linkHovered(QLabel_hookH handle, QHookH hook)
{
	((QLabel_hook *)handle)->hook_linkHovered(hook);
}

