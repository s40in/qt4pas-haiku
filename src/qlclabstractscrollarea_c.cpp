//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclabstractscrollarea.h"

C_EXPORT QLCLAbstractScrollAreaH QLCLAbstractScrollArea_create(QWidgetH parent)
{
	return (QLCLAbstractScrollAreaH) new QLCLAbstractScrollArea((QWidget*)parent);
}

C_EXPORT void QLCLAbstractScrollArea_destroy(QLCLAbstractScrollAreaH handle)
{
	delete (QLCLAbstractScrollArea *)handle;
}

C_EXPORT void QLCLAbstractScrollArea_override_viewportEvent(QLCLAbstractScrollAreaH handle, const QOverrideHook hook)
{
	((QLCLAbstractScrollArea *)handle)->override_viewportEvent(hook);
}

C_EXPORT bool QLCLAbstractScrollArea_InheritedViewportEvent(QLCLAbstractScrollAreaH handle, QEventH event)
{
	return (bool) ((QLCLAbstractScrollArea *)handle)->InheritedViewportEvent((QEvent*)event);
}

