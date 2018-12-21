//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qprintpreviewwidget_hook.h"

C_EXPORT QPrintPreviewWidget_hookH QPrintPreviewWidget_hook_create(QObjectH handle)
{
	return (QPrintPreviewWidget_hookH) new QPrintPreviewWidget_hook((QObject*)handle);
}

C_EXPORT void QPrintPreviewWidget_hook_destroy(QPrintPreviewWidget_hookH handle)
{
	delete (QPrintPreviewWidget_hook *)handle;
}

C_EXPORT void QPrintPreviewWidget_hook_hook_paintRequested(QPrintPreviewWidget_hookH handle, QHookH hook)
{
	((QPrintPreviewWidget_hook *)handle)->hook_paintRequested(hook);
}

C_EXPORT void QPrintPreviewWidget_hook_hook_previewChanged(QPrintPreviewWidget_hookH handle, QHookH hook)
{
	((QPrintPreviewWidget_hook *)handle)->hook_previewChanged(hook);
}

