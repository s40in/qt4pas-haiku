//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractprintdialog_hook.h"

C_EXPORT QAbstractPrintDialog_hookH QAbstractPrintDialog_hook_create(QObjectH handle)
{
	return (QAbstractPrintDialog_hookH) new QAbstractPrintDialog_hook((QObject*)handle);
}

C_EXPORT void QAbstractPrintDialog_hook_destroy(QAbstractPrintDialog_hookH handle)
{
	delete (QAbstractPrintDialog_hook *)handle;
}

