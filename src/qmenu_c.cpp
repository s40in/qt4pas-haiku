//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMenuH QMenu_create(QWidgetH parent)
{
	return (QMenuH) new QMenu((QWidget*)parent);
}

C_EXPORT void QMenu_destroy(QMenuH handle)
{
	delete (QMenu *)handle;
}

C_EXPORT QMenuH QMenu_create2(PWideString title, QWidgetH parent)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QMenuH) new QMenu(t_title, (QWidget*)parent);
}

C_EXPORT QActionH QMenu_addAction(QMenuH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QMenu *)handle)->addAction(t_text);
}

C_EXPORT QActionH QMenu_addAction2(QMenuH handle, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QMenu *)handle)->addAction(*(const QIcon*)icon, t_text);
}

C_EXPORT QActionH QMenu_addAction3(QMenuH handle, PWideString text, const QObjectH receiver, const char* member, const QKeySequenceH shortcut)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QMenu *)handle)->addAction(t_text, (const QObject*)receiver, member, *(const QKeySequence*)shortcut);
}

C_EXPORT QActionH QMenu_addAction4(QMenuH handle, const QIconH icon, PWideString text, const QObjectH receiver, const char* member, const QKeySequenceH shortcut)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QMenu *)handle)->addAction(*(const QIcon*)icon, t_text, (const QObject*)receiver, member, *(const QKeySequence*)shortcut);
}

C_EXPORT QActionH QMenu_addMenu(QMenuH handle, QMenuH menu)
{
	return (QActionH) ((QMenu *)handle)->addMenu((QMenu*)menu);
}

C_EXPORT QMenuH QMenu_addMenu2(QMenuH handle, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QMenuH) ((QMenu *)handle)->addMenu(t_title);
}

C_EXPORT QMenuH QMenu_addMenu3(QMenuH handle, const QIconH icon, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QMenuH) ((QMenu *)handle)->addMenu(*(const QIcon*)icon, t_title);
}

C_EXPORT QActionH QMenu_addSeparator(QMenuH handle)
{
	return (QActionH) ((QMenu *)handle)->addSeparator();
}

C_EXPORT QActionH QMenu_insertMenu(QMenuH handle, QActionH before, QMenuH menu)
{
	return (QActionH) ((QMenu *)handle)->insertMenu((QAction*)before, (QMenu*)menu);
}

C_EXPORT QActionH QMenu_insertSeparator(QMenuH handle, QActionH before)
{
	return (QActionH) ((QMenu *)handle)->insertSeparator((QAction*)before);
}

C_EXPORT bool QMenu_isEmpty(QMenuH handle)
{
	return (bool) ((QMenu *)handle)->isEmpty();
}

C_EXPORT void QMenu_clear(QMenuH handle)
{
	((QMenu *)handle)->clear();
}

C_EXPORT void QMenu_setTearOffEnabled(QMenuH handle, bool AnonParam1)
{
	((QMenu *)handle)->setTearOffEnabled(AnonParam1);
}

C_EXPORT bool QMenu_isTearOffEnabled(QMenuH handle)
{
	return (bool) ((QMenu *)handle)->isTearOffEnabled();
}

C_EXPORT bool QMenu_isTearOffMenuVisible(QMenuH handle)
{
	return (bool) ((QMenu *)handle)->isTearOffMenuVisible();
}

C_EXPORT void QMenu_hideTearOffMenu(QMenuH handle)
{
	((QMenu *)handle)->hideTearOffMenu();
}

C_EXPORT void QMenu_setDefaultAction(QMenuH handle, QActionH AnonParam1)
{
	((QMenu *)handle)->setDefaultAction((QAction*)AnonParam1);
}

C_EXPORT QActionH QMenu_defaultAction(QMenuH handle)
{
	return (QActionH) ((QMenu *)handle)->defaultAction();
}

C_EXPORT void QMenu_setActiveAction(QMenuH handle, QActionH act)
{
	((QMenu *)handle)->setActiveAction((QAction*)act);
}

C_EXPORT QActionH QMenu_activeAction(QMenuH handle)
{
	return (QActionH) ((QMenu *)handle)->activeAction();
}

C_EXPORT void QMenu_popup(QMenuH handle, const QPointH pos, QActionH at)
{
	((QMenu *)handle)->popup(*(const QPoint*)pos, (QAction*)at);
}

C_EXPORT QActionH QMenu_exec(QMenuH handle)
{
	return (QActionH) ((QMenu *)handle)->exec();
}

C_EXPORT QActionH QMenu_exec2(QMenuH handle, const QPointH pos, QActionH at)
{
	return (QActionH) ((QMenu *)handle)->exec(*(const QPoint*)pos, (QAction*)at);
}

C_EXPORT QActionH QMenu_exec3(PPtrIntArray actions, const QPointH pos, QActionH at)
{
	QList<QAction*> t_actions;
	copyPtrIntArrayToQListTemplate(actions, t_actions);
	return (QActionH) QMenu::exec(t_actions, *(const QPoint*)pos, (QAction*)at);
}

C_EXPORT QActionH QMenu_exec4(PPtrIntArray actions, const QPointH pos, QActionH at, QWidgetH parent)
{
	QList<QAction*> t_actions;
	copyPtrIntArrayToQListTemplate(actions, t_actions);
	return (QActionH) QMenu::exec(t_actions, *(const QPoint*)pos, (QAction*)at, (QWidget*)parent);
}

C_EXPORT void QMenu_sizeHint(QMenuH handle, PSize retval)
{
	*(QSize *)retval = ((QMenu *)handle)->sizeHint();
}

C_EXPORT void QMenu_actionGeometry(QMenuH handle, PRect retval, QActionH AnonParam1)
{
	QRect t_retval;
	t_retval = ((QMenu *)handle)->actionGeometry((QAction*)AnonParam1);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT QActionH QMenu_actionAt(QMenuH handle, const QPointH AnonParam1)
{
	return (QActionH) ((QMenu *)handle)->actionAt(*(const QPoint*)AnonParam1);
}

C_EXPORT QActionH QMenu_menuAction(QMenuH handle)
{
	return (QActionH) ((QMenu *)handle)->menuAction();
}

C_EXPORT void QMenu_title(QMenuH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QMenu *)handle)->title();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMenu_setTitle(QMenuH handle, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	((QMenu *)handle)->setTitle(t_title);
}

C_EXPORT void QMenu_icon(QMenuH handle, QIconH retval)
{
	*(QIcon *)retval = ((QMenu *)handle)->icon();
}

C_EXPORT void QMenu_setIcon(QMenuH handle, const QIconH icon)
{
	((QMenu *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QMenu_setNoReplayFor(QMenuH handle, QWidgetH widget)
{
	((QMenu *)handle)->setNoReplayFor((QWidget*)widget);
}

C_EXPORT bool QMenu_separatorsCollapsible(QMenuH handle)
{
	return (bool) ((QMenu *)handle)->separatorsCollapsible();
}

C_EXPORT void QMenu_setSeparatorsCollapsible(QMenuH handle, bool collapse)
{
	((QMenu *)handle)->setSeparatorsCollapsible(collapse);
}

