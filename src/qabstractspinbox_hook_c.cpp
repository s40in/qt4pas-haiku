//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractspinbox_hook.h"

C_EXPORT QAbstractSpinBox_hookH QAbstractSpinBox_hook_create(QObjectH handle)
{
	return (QAbstractSpinBox_hookH) new QAbstractSpinBox_hook((QObject*)handle);
}

C_EXPORT void QAbstractSpinBox_hook_destroy(QAbstractSpinBox_hookH handle)
{
	delete (QAbstractSpinBox_hook *)handle;
}

C_EXPORT void QAbstractSpinBox_hook_hook_editingFinished(QAbstractSpinBox_hookH handle, QHookH hook)
{
	((QAbstractSpinBox_hook *)handle)->hook_editingFinished(hook);
}

