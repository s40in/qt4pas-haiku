//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qgraphicsscene_hook.h"

C_EXPORT QGraphicsScene_hookH QGraphicsScene_hook_create(QObjectH handle)
{
	return (QGraphicsScene_hookH) new QGraphicsScene_hook((QObject*)handle);
}

C_EXPORT void QGraphicsScene_hook_destroy(QGraphicsScene_hookH handle)
{
	delete (QGraphicsScene_hook *)handle;
}

C_EXPORT void QGraphicsScene_hook_hook_sceneRectChanged(QGraphicsScene_hookH handle, QHookH hook)
{
	((QGraphicsScene_hook *)handle)->hook_sceneRectChanged(hook);
}

C_EXPORT void QGraphicsScene_hook_hook_selectionChanged(QGraphicsScene_hookH handle, QHookH hook)
{
	((QGraphicsScene_hook *)handle)->hook_selectionChanged(hook);
}

