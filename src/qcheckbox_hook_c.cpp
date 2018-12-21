//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qcheckbox_hook.h"

C_EXPORT QCheckBox_hookH QCheckBox_hook_create(QObjectH handle)
{
	return (QCheckBox_hookH) new QCheckBox_hook((QObject*)handle);
}

C_EXPORT void QCheckBox_hook_destroy(QCheckBox_hookH handle)
{
	delete (QCheckBox_hook *)handle;
}

C_EXPORT void QCheckBox_hook_hook_stateChanged(QCheckBox_hookH handle, QHookH hook)
{
	((QCheckBox_hook *)handle)->hook_stateChanged(hook);
}

