//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlayout_hook.h"

C_EXPORT QLayout_hookH QLayout_hook_create(QObjectH handle)
{
	return (QLayout_hookH) new QLayout_hook((QObject*)handle);
}

C_EXPORT void QLayout_hook_destroy(QLayout_hookH handle)
{
	delete (QLayout_hook *)handle;
}

