//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qsplitter_hook.h"

C_EXPORT QSplitter_hookH QSplitter_hook_create(QObjectH handle)
{
	return (QSplitter_hookH) new QSplitter_hook((QObject*)handle);
}

C_EXPORT void QSplitter_hook_destroy(QSplitter_hookH handle)
{
	delete (QSplitter_hook *)handle;
}

C_EXPORT void QSplitter_hook_hook_splitterMoved(QSplitter_hookH handle, QHookH hook)
{
	((QSplitter_hook *)handle)->hook_splitterMoved(hook);
}

C_EXPORT QSplitterHandle_hookH QSplitterHandle_hook_create(QObjectH handle)
{
	return (QSplitterHandle_hookH) new QSplitterHandle_hook((QObject*)handle);
}

C_EXPORT void QSplitterHandle_hook_destroy(QSplitterHandle_hookH handle)
{
	delete (QSplitterHandle_hook *)handle;
}

