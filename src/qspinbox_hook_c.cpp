//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qspinbox_hook.h"

C_EXPORT QSpinBox_hookH QSpinBox_hook_create(QObjectH handle)
{
	return (QSpinBox_hookH) new QSpinBox_hook((QObject*)handle);
}

C_EXPORT void QSpinBox_hook_destroy(QSpinBox_hookH handle)
{
	delete (QSpinBox_hook *)handle;
}

C_EXPORT void QSpinBox_hook_hook_valueChanged(QSpinBox_hookH handle, QHookH hook)
{
	((QSpinBox_hook *)handle)->hook_valueChanged(hook);
}

C_EXPORT void QSpinBox_hook_hook_valueChanged2(QSpinBox_hookH handle, QHookH hook)
{
	((QSpinBox_hook *)handle)->hook_valueChanged2(hook);
}

C_EXPORT QDoubleSpinBox_hookH QDoubleSpinBox_hook_create(QObjectH handle)
{
	return (QDoubleSpinBox_hookH) new QDoubleSpinBox_hook((QObject*)handle);
}

C_EXPORT void QDoubleSpinBox_hook_destroy(QDoubleSpinBox_hookH handle)
{
	delete (QDoubleSpinBox_hook *)handle;
}

C_EXPORT void QDoubleSpinBox_hook_hook_valueChanged(QDoubleSpinBox_hookH handle, QHookH hook)
{
	((QDoubleSpinBox_hook *)handle)->hook_valueChanged(hook);
}

C_EXPORT void QDoubleSpinBox_hook_hook_valueChanged2(QDoubleSpinBox_hookH handle, QHookH hook)
{
	((QDoubleSpinBox_hook *)handle)->hook_valueChanged2(hook);
}

