//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qshortcut_hook.h"

C_EXPORT QShortcut_hookH QShortcut_hook_create(QObjectH handle)
{
	return (QShortcut_hookH) new QShortcut_hook((QObject*)handle);
}

C_EXPORT void QShortcut_hook_destroy(QShortcut_hookH handle)
{
	delete (QShortcut_hook *)handle;
}

C_EXPORT void QShortcut_hook_hook_activated(QShortcut_hookH handle, QHookH hook)
{
	((QShortcut_hook *)handle)->hook_activated(hook);
}

C_EXPORT void QShortcut_hook_hook_activatedAmbiguously(QShortcut_hookH handle, QHookH hook)
{
	((QShortcut_hook *)handle)->hook_activatedAmbiguously(hook);
}

