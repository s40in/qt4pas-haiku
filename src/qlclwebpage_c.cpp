//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclwebpage.h"

C_EXPORT QLCLWebPageH QLCLWebPage_create(QObjectH parent)
{
	return (QLCLWebPageH) new QLCLWebPage((QObject*)parent);
}

C_EXPORT void QLCLWebPage_destroy(QLCLWebPageH handle)
{
	delete (QLCLWebPage *)handle;
}

C_EXPORT void QLCLWebPage_override_userAgentForUrl(QLCLWebPageH handle, const QOverrideHook hook)
{
	((QLCLWebPage *)handle)->override_userAgentForUrl(hook);
}

C_EXPORT void QLCLWebPage_DefaultUserAgentForUrl(QLCLWebPageH handle, PWideString retval, const QUrlH url)
{
	QString t_retval;
	t_retval = ((QLCLWebPage *)handle)->DefaultUserAgentForUrl(*(const QUrl*)url);
	copyQStringToPWideString(t_retval, retval);
}

