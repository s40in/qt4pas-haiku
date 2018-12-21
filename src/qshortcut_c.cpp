//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QShortcutH QShortcut_create(QWidgetH parent)
{
	return (QShortcutH) new QShortcut((QWidget*)parent);
}

C_EXPORT void QShortcut_destroy(QShortcutH handle)
{
	delete (QShortcut *)handle;
}

C_EXPORT QShortcutH QShortcut_create2(const QKeySequenceH key, QWidgetH parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context)
{
	return (QShortcutH) new QShortcut(*(const QKeySequence*)key, (QWidget*)parent, member, ambiguousMember, context);
}

C_EXPORT void QShortcut_setKey(QShortcutH handle, const QKeySequenceH key)
{
	((QShortcut *)handle)->setKey(*(const QKeySequence*)key);
}

C_EXPORT void QShortcut_key(QShortcutH handle, QKeySequenceH retval)
{
	*(QKeySequence *)retval = ((QShortcut *)handle)->key();
}

C_EXPORT void QShortcut_setEnabled(QShortcutH handle, bool enable)
{
	((QShortcut *)handle)->setEnabled(enable);
}

C_EXPORT bool QShortcut_isEnabled(QShortcutH handle)
{
	return (bool) ((QShortcut *)handle)->isEnabled();
}

C_EXPORT void QShortcut_setContext(QShortcutH handle, Qt::ShortcutContext context)
{
	((QShortcut *)handle)->setContext(context);
}

C_EXPORT Qt::ShortcutContext QShortcut_context(QShortcutH handle)
{
	return (Qt::ShortcutContext) ((QShortcut *)handle)->context();
}

C_EXPORT void QShortcut_setWhatsThis(QShortcutH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QShortcut *)handle)->setWhatsThis(t_text);
}

C_EXPORT void QShortcut_whatsThis(QShortcutH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QShortcut *)handle)->whatsThis();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QShortcut_setAutoRepeat(QShortcutH handle, bool on)
{
	((QShortcut *)handle)->setAutoRepeat(on);
}

C_EXPORT bool QShortcut_autoRepeat(QShortcutH handle)
{
	return (bool) ((QShortcut *)handle)->autoRepeat();
}

C_EXPORT int QShortcut_id(QShortcutH handle)
{
	return (int) ((QShortcut *)handle)->id();
}

C_EXPORT QWidgetH QShortcut_parentWidget(QShortcutH handle)
{
	return (QWidgetH) ((QShortcut *)handle)->parentWidget();
}

