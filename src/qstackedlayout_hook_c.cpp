//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qstackedlayout_hook.h"

C_EXPORT QStackedLayout_hookH QStackedLayout_hook_create(QObjectH handle)
{
	return (QStackedLayout_hookH) new QStackedLayout_hook((QObject*)handle);
}

C_EXPORT void QStackedLayout_hook_destroy(QStackedLayout_hookH handle)
{
	delete (QStackedLayout_hook *)handle;
}

C_EXPORT void QStackedLayout_hook_hook_widgetRemoved(QStackedLayout_hookH handle, QHookH hook)
{
	((QStackedLayout_hook *)handle)->hook_widgetRemoved(hook);
}

C_EXPORT void QStackedLayout_hook_hook_currentChanged(QStackedLayout_hookH handle, QHookH hook)
{
	((QStackedLayout_hook *)handle)->hook_currentChanged(hook);
}

