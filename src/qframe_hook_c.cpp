//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qframe_hook.h"

C_EXPORT QFrame_hookH QFrame_hook_create(QObjectH handle)
{
	return (QFrame_hookH) new QFrame_hook((QObject*)handle);
}

C_EXPORT void QFrame_hook_destroy(QFrame_hookH handle)
{
	delete (QFrame_hook *)handle;
}

