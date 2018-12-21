//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qheaderview_hook.h"

C_EXPORT QHeaderView_hookH QHeaderView_hook_create(QObjectH handle)
{
	return (QHeaderView_hookH) new QHeaderView_hook((QObject*)handle);
}

C_EXPORT void QHeaderView_hook_destroy(QHeaderView_hookH handle)
{
	delete (QHeaderView_hook *)handle;
}

C_EXPORT void QHeaderView_hook_hook_sectionMoved(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionMoved(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionResized(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionResized(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionPressed(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionPressed(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionClicked(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionClicked(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionEntered(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionEntered(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionDoubleClicked(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionDoubleClicked(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionCountChanged(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionCountChanged(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionHandleDoubleClicked(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionHandleDoubleClicked(hook);
}

C_EXPORT void QHeaderView_hook_hook_sectionAutoResize(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sectionAutoResize(hook);
}

C_EXPORT void QHeaderView_hook_hook_geometriesChanged(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_geometriesChanged(hook);
}

C_EXPORT void QHeaderView_hook_hook_sortIndicatorChanged(QHeaderView_hookH handle, QHookH hook)
{
	((QHeaderView_hook *)handle)->hook_sortIndicatorChanged(hook);
}

