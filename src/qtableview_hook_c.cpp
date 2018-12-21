//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qtableview_hook.h"

C_EXPORT QTableView_hookH QTableView_hook_create(QObjectH handle)
{
	return (QTableView_hookH) new QTableView_hook((QObject*)handle);
}

C_EXPORT void QTableView_hook_destroy(QTableView_hookH handle)
{
	delete (QTableView_hook *)handle;
}

