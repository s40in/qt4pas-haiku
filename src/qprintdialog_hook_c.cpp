//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qprintdialog_hook.h"

C_EXPORT QPrintDialog_hookH QPrintDialog_hook_create(QObjectH handle)
{
	return (QPrintDialog_hookH) new QPrintDialog_hook((QObject*)handle);
}

C_EXPORT void QPrintDialog_hook_destroy(QPrintDialog_hookH handle)
{
	delete (QPrintDialog_hook *)handle;
}

C_EXPORT void QPrintDialog_hook_hook_accepted(QPrintDialog_hookH handle, QHookH hook)
{
	((QPrintDialog_hook *)handle)->hook_accepted(hook);
}

