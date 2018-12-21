//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclthread.h"

C_EXPORT QLCLThreadH QLCLThread_create(QObjectH parent)
{
	return (QLCLThreadH) new QLCLThread((QObject*)parent);
}

C_EXPORT void QLCLThread_destroy(QLCLThreadH handle)
{
	delete (QLCLThread *)handle;
}

C_EXPORT void QLCLThread_override_run(QLCLThreadH handle, const QOverrideHook hook)
{
	((QLCLThread *)handle)->override_run(hook);
}

C_EXPORT int QLCLThread_exec(QLCLThreadH handle)
{
	return (int) ((QLCLThread *)handle)->exec();
}

