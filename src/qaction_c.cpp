//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QActionH QAction_create(QObjectH parent)
{
	return (QActionH) new QAction((QObject*)parent);
}

C_EXPORT void QAction_destroy(QActionH handle)
{
	delete (QAction *)handle;
}

C_EXPORT QActionH QAction_create2(PWideString text, QObjectH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) new QAction(t_text, (QObject*)parent);
}

C_EXPORT QActionH QAction_create3(const QIconH icon, PWideString text, QObjectH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) new QAction(*(const QIcon*)icon, t_text, (QObject*)parent);
}

C_EXPORT void QAction_setActionGroup(QActionH handle, QActionGroupH group)
{
	((QAction *)handle)->setActionGroup((QActionGroup*)group);
}

C_EXPORT QActionGroupH QAction_actionGroup(QActionH handle)
{
	return (QActionGroupH) ((QAction *)handle)->actionGroup();
}

C_EXPORT void QAction_setIcon(QActionH handle, const QIconH icon)
{
	((QAction *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QAction_icon(QActionH handle, QIconH retval)
{
	*(QIcon *)retval = ((QAction *)handle)->icon();
}

C_EXPORT void QAction_setText(QActionH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QAction *)handle)->setText(t_text);
}

C_EXPORT void QAction_text(QActionH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAction *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAction_setIconText(QActionH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QAction *)handle)->setIconText(t_text);
}

C_EXPORT void QAction_iconText(QActionH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAction *)handle)->iconText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAction_setToolTip(QActionH handle, PWideString tip)
{
	QString t_tip;
	copyPWideStringToQString(tip, t_tip);
	((QAction *)handle)->setToolTip(t_tip);
}

C_EXPORT void QAction_toolTip(QActionH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAction *)handle)->toolTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAction_setStatusTip(QActionH handle, PWideString statusTip)
{
	QString t_statusTip;
	copyPWideStringToQString(statusTip, t_statusTip);
	((QAction *)handle)->setStatusTip(t_statusTip);
}

C_EXPORT void QAction_statusTip(QActionH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAction *)handle)->statusTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAction_setWhatsThis(QActionH handle, PWideString what)
{
	QString t_what;
	copyPWideStringToQString(what, t_what);
	((QAction *)handle)->setWhatsThis(t_what);
}

C_EXPORT void QAction_whatsThis(QActionH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAction *)handle)->whatsThis();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QMenuH QAction_menu(QActionH handle)
{
	return (QMenuH) ((QAction *)handle)->menu();
}

C_EXPORT void QAction_setMenu(QActionH handle, QMenuH menu)
{
	((QAction *)handle)->setMenu((QMenu*)menu);
}

C_EXPORT void QAction_setSeparator(QActionH handle, bool b)
{
	((QAction *)handle)->setSeparator(b);
}

C_EXPORT bool QAction_isSeparator(QActionH handle)
{
	return (bool) ((QAction *)handle)->isSeparator();
}

C_EXPORT void QAction_setShortcut(QActionH handle, const QKeySequenceH shortcut)
{
	((QAction *)handle)->setShortcut(*(const QKeySequence*)shortcut);
}

C_EXPORT void QAction_shortcut(QActionH handle, QKeySequenceH retval)
{
	*(QKeySequence *)retval = ((QAction *)handle)->shortcut();
}

C_EXPORT void QAction_setShortcuts2(QActionH handle, QKeySequence::StandardKey AnonParam1)
{
	((QAction *)handle)->setShortcuts(AnonParam1);
}

C_EXPORT void QAction_setShortcutContext(QActionH handle, Qt::ShortcutContext context)
{
	((QAction *)handle)->setShortcutContext(context);
}

C_EXPORT Qt::ShortcutContext QAction_shortcutContext(QActionH handle)
{
	return (Qt::ShortcutContext) ((QAction *)handle)->shortcutContext();
}

C_EXPORT void QAction_setAutoRepeat(QActionH handle, bool AnonParam1)
{
	((QAction *)handle)->setAutoRepeat(AnonParam1);
}

C_EXPORT bool QAction_autoRepeat(QActionH handle)
{
	return (bool) ((QAction *)handle)->autoRepeat();
}

C_EXPORT void QAction_setFont(QActionH handle, const QFontH font)
{
	((QAction *)handle)->setFont(*(const QFont*)font);
}

C_EXPORT void QAction_font(QActionH handle, QFontH retval)
{
	*(QFont *)retval = ((QAction *)handle)->font();
}

C_EXPORT void QAction_setCheckable(QActionH handle, bool AnonParam1)
{
	((QAction *)handle)->setCheckable(AnonParam1);
}

C_EXPORT bool QAction_isCheckable(QActionH handle)
{
	return (bool) ((QAction *)handle)->isCheckable();
}

C_EXPORT void QAction_data(QActionH handle, QVariantH retval)
{
	*(QVariant *)retval = ((QAction *)handle)->data();
}

C_EXPORT void QAction_setData(QActionH handle, const QVariantH var)
{
	((QAction *)handle)->setData(*(const QVariant*)var);
}

C_EXPORT bool QAction_isChecked(QActionH handle)
{
	return (bool) ((QAction *)handle)->isChecked();
}

C_EXPORT bool QAction_isEnabled(QActionH handle)
{
	return (bool) ((QAction *)handle)->isEnabled();
}

C_EXPORT bool QAction_isVisible(QActionH handle)
{
	return (bool) ((QAction *)handle)->isVisible();
}

C_EXPORT void QAction_activate(QActionH handle, QAction::ActionEvent event)
{
	((QAction *)handle)->activate(event);
}

C_EXPORT bool QAction_showStatusText(QActionH handle, QWidgetH widget)
{
	return (bool) ((QAction *)handle)->showStatusText((QWidget*)widget);
}

C_EXPORT void QAction_setMenuRole(QActionH handle, QAction::MenuRole menuRole)
{
	((QAction *)handle)->setMenuRole(menuRole);
}

C_EXPORT QAction::MenuRole QAction_menuRole(QActionH handle)
{
	return (QAction::MenuRole) ((QAction *)handle)->menuRole();
}

C_EXPORT void QAction_setIconVisibleInMenu(QActionH handle, bool visible)
{
	((QAction *)handle)->setIconVisibleInMenu(visible);
}

C_EXPORT bool QAction_isIconVisibleInMenu(QActionH handle)
{
	return (bool) ((QAction *)handle)->isIconVisibleInMenu();
}

C_EXPORT QWidgetH QAction_parentWidget(QActionH handle)
{
	return (QWidgetH) ((QAction *)handle)->parentWidget();
}

C_EXPORT void QAction_associatedWidgets(QActionH handle, PPtrIntArray retval)
{
	QList<QWidget*> t_retval;
	t_retval = ((QAction *)handle)->associatedWidgets();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QAction_associatedGraphicsWidgets(QActionH handle, PPtrIntArray retval)
{
	QList<QGraphicsWidget*> t_retval;
	t_retval = ((QAction *)handle)->associatedGraphicsWidgets();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QAction_trigger(QActionH handle)
{
	((QAction *)handle)->trigger();
}

C_EXPORT void QAction_hover(QActionH handle)
{
	((QAction *)handle)->hover();
}

C_EXPORT void QAction_setChecked(QActionH handle, bool AnonParam1)
{
	((QAction *)handle)->setChecked(AnonParam1);
}

C_EXPORT void QAction_toggle(QActionH handle)
{
	((QAction *)handle)->toggle();
}

C_EXPORT void QAction_setEnabled(QActionH handle, bool AnonParam1)
{
	((QAction *)handle)->setEnabled(AnonParam1);
}

C_EXPORT void QAction_setDisabled(QActionH handle, bool b)
{
	((QAction *)handle)->setDisabled(b);
}

C_EXPORT void QAction_setVisible(QActionH handle, bool AnonParam1)
{
	((QAction *)handle)->setVisible(AnonParam1);
}

