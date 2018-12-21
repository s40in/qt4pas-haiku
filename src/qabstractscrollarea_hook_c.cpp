//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractscrollarea_hook.h"

C_EXPORT QAbstractScrollArea_hookH QAbstractScrollArea_hook_create(QObjectH handle)
{
	return (QAbstractScrollArea_hookH) new QAbstractScrollArea_hook((QObject*)handle);
}

C_EXPORT void QAbstractScrollArea_hook_destroy(QAbstractScrollArea_hookH handle)
{
	delete (QAbstractScrollArea_hook *)handle;
}

