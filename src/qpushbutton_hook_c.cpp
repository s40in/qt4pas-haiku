//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qpushbutton_hook.h"

C_EXPORT QPushButton_hookH QPushButton_hook_create(QObjectH handle)
{
	return (QPushButton_hookH) new QPushButton_hook((QObject*)handle);
}

C_EXPORT void QPushButton_hook_destroy(QPushButton_hookH handle)
{
	delete (QPushButton_hook *)handle;
}

