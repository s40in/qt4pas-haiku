//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qdialog_hook.h"

C_EXPORT QDialog_hookH QDialog_hook_create(QObjectH handle)
{
	return (QDialog_hookH) new QDialog_hook((QObject*)handle);
}

C_EXPORT void QDialog_hook_destroy(QDialog_hookH handle)
{
	delete (QDialog_hook *)handle;
}

C_EXPORT void QDialog_hook_hook_finished(QDialog_hookH handle, QHookH hook)
{
	((QDialog_hook *)handle)->hook_finished(hook);
}

C_EXPORT void QDialog_hook_hook_accepted(QDialog_hookH handle, QHookH hook)
{
	((QDialog_hook *)handle)->hook_accepted(hook);
}

C_EXPORT void QDialog_hook_hook_rejected(QDialog_hookH handle, QHookH hook)
{
	((QDialog_hook *)handle)->hook_rejected(hook);
}

