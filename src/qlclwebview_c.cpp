//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclwebview.h"

C_EXPORT QLCLWebViewH QLCLWebView_create(QWidgetH parent)
{
	return (QLCLWebViewH) new QLCLWebView((QWidget*)parent);
}

C_EXPORT void QLCLWebView_destroy(QLCLWebViewH handle)
{
	delete (QLCLWebView *)handle;
}

C_EXPORT void QLCLWebView_override_createWindow(QLCLWebViewH handle, const QOverrideHook hook)
{
	((QLCLWebView *)handle)->override_createWindow(hook);
}

