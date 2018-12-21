//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qbuttongroup_hook.h"

C_EXPORT QButtonGroup_hookH QButtonGroup_hook_create(QObjectH handle)
{
	return (QButtonGroup_hookH) new QButtonGroup_hook((QObject*)handle);
}

C_EXPORT void QButtonGroup_hook_destroy(QButtonGroup_hookH handle)
{
	delete (QButtonGroup_hook *)handle;
}

C_EXPORT void QButtonGroup_hook_hook_buttonClicked(QButtonGroup_hookH handle, QHookH hook)
{
	((QButtonGroup_hook *)handle)->hook_buttonClicked(hook);
}

C_EXPORT void QButtonGroup_hook_hook_buttonClicked2(QButtonGroup_hookH handle, QHookH hook)
{
	((QButtonGroup_hook *)handle)->hook_buttonClicked2(hook);
}

C_EXPORT void QButtonGroup_hook_hook_buttonPressed(QButtonGroup_hookH handle, QHookH hook)
{
	((QButtonGroup_hook *)handle)->hook_buttonPressed(hook);
}

C_EXPORT void QButtonGroup_hook_hook_buttonPressed2(QButtonGroup_hookH handle, QHookH hook)
{
	((QButtonGroup_hook *)handle)->hook_buttonPressed2(hook);
}

C_EXPORT void QButtonGroup_hook_hook_buttonReleased(QButtonGroup_hookH handle, QHookH hook)
{
	((QButtonGroup_hook *)handle)->hook_buttonReleased(hook);
}

C_EXPORT void QButtonGroup_hook_hook_buttonReleased2(QButtonGroup_hookH handle, QHookH hook)
{
	((QButtonGroup_hook *)handle)->hook_buttonReleased2(hook);
}

