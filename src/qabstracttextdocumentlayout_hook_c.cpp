//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstracttextdocumentlayout_hook.h"

C_EXPORT QAbstractTextDocumentLayout_hookH QAbstractTextDocumentLayout_hook_create(QObjectH handle)
{
	return (QAbstractTextDocumentLayout_hookH) new QAbstractTextDocumentLayout_hook((QObject*)handle);
}

C_EXPORT void QAbstractTextDocumentLayout_hook_destroy(QAbstractTextDocumentLayout_hookH handle)
{
	delete (QAbstractTextDocumentLayout_hook *)handle;
}

C_EXPORT void QAbstractTextDocumentLayout_hook_hook_update(QAbstractTextDocumentLayout_hookH handle, QHookH hook)
{
	((QAbstractTextDocumentLayout_hook *)handle)->hook_update(hook);
}

C_EXPORT void QAbstractTextDocumentLayout_hook_hook_update2(QAbstractTextDocumentLayout_hookH handle, QHookH hook)
{
	((QAbstractTextDocumentLayout_hook *)handle)->hook_update2(hook);
}

C_EXPORT void QAbstractTextDocumentLayout_hook_hook_updateBlock(QAbstractTextDocumentLayout_hookH handle, QHookH hook)
{
	((QAbstractTextDocumentLayout_hook *)handle)->hook_updateBlock(hook);
}

C_EXPORT void QAbstractTextDocumentLayout_hook_hook_documentSizeChanged(QAbstractTextDocumentLayout_hookH handle, QHookH hook)
{
	((QAbstractTextDocumentLayout_hook *)handle)->hook_documentSizeChanged(hook);
}

C_EXPORT void QAbstractTextDocumentLayout_hook_hook_pageCountChanged(QAbstractTextDocumentLayout_hookH handle, QHookH hook)
{
	((QAbstractTextDocumentLayout_hook *)handle)->hook_pageCountChanged(hook);
}

C_EXPORT QTextObjectInterface_hookH QTextObjectInterface_hook_create(QObjectH handle)
{
	return (QTextObjectInterface_hookH) new QTextObjectInterface_hook((QObject*)handle);
}

C_EXPORT void QTextObjectInterface_hook_destroy(QTextObjectInterface_hookH handle)
{
	delete (QTextObjectInterface_hook *)handle;
}

