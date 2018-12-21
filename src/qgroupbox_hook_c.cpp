//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qgroupbox_hook.h"

C_EXPORT QGroupBox_hookH QGroupBox_hook_create(QObjectH handle)
{
	return (QGroupBox_hookH) new QGroupBox_hook((QObject*)handle);
}

C_EXPORT void QGroupBox_hook_destroy(QGroupBox_hookH handle)
{
	delete (QGroupBox_hook *)handle;
}

C_EXPORT void QGroupBox_hook_hook_clicked(QGroupBox_hookH handle, QHookH hook)
{
	((QGroupBox_hook *)handle)->hook_clicked(hook);
}

C_EXPORT void QGroupBox_hook_hook_clicked2(QGroupBox_hookH handle, QHookH hook)
{
	((QGroupBox_hook *)handle)->hook_clicked2(hook);
}

C_EXPORT void QGroupBox_hook_hook_toggled(QGroupBox_hookH handle, QHookH hook)
{
	((QGroupBox_hook *)handle)->hook_toggled(hook);
}

