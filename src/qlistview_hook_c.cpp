//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlistview_hook.h"

C_EXPORT QListView_hookH QListView_hook_create(QObjectH handle)
{
	return (QListView_hookH) new QListView_hook((QObject*)handle);
}

C_EXPORT void QListView_hook_destroy(QListView_hookH handle)
{
	delete (QListView_hook *)handle;
}

