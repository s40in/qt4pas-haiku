//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qdrag_hook.h"

C_EXPORT QDrag_hookH QDrag_hook_create(QObjectH handle)
{
	return (QDrag_hookH) new QDrag_hook((QObject*)handle);
}

C_EXPORT void QDrag_hook_destroy(QDrag_hookH handle)
{
	delete (QDrag_hook *)handle;
}

C_EXPORT void QDrag_hook_hook_actionChanged(QDrag_hookH handle, QHookH hook)
{
	((QDrag_hook *)handle)->hook_actionChanged(hook);
}

C_EXPORT void QDrag_hook_hook_targetChanged(QDrag_hookH handle, QHookH hook)
{
	((QDrag_hook *)handle)->hook_targetChanged(hook);
}

