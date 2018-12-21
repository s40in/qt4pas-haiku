//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qslider_hook.h"

C_EXPORT QSlider_hookH QSlider_hook_create(QObjectH handle)
{
	return (QSlider_hookH) new QSlider_hook((QObject*)handle);
}

C_EXPORT void QSlider_hook_destroy(QSlider_hookH handle)
{
	delete (QSlider_hook *)handle;
}

