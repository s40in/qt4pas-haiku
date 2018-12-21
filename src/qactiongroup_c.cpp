//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QActionGroupH QActionGroup_create(QObjectH parent)
{
	return (QActionGroupH) new QActionGroup((QObject*)parent);
}

C_EXPORT void QActionGroup_destroy(QActionGroupH handle)
{
	delete (QActionGroup *)handle;
}

C_EXPORT QActionH QActionGroup_addAction(QActionGroupH handle, QActionH a)
{
	return (QActionH) ((QActionGroup *)handle)->addAction((QAction*)a);
}

C_EXPORT QActionH QActionGroup_addAction2(QActionGroupH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QActionGroup *)handle)->addAction(t_text);
}

C_EXPORT QActionH QActionGroup_addAction3(QActionGroupH handle, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QActionGroup *)handle)->addAction(*(const QIcon*)icon, t_text);
}

C_EXPORT void QActionGroup_removeAction(QActionGroupH handle, QActionH a)
{
	((QActionGroup *)handle)->removeAction((QAction*)a);
}

C_EXPORT void QActionGroup_actions(QActionGroupH handle, PPtrIntArray retval)
{
	QList<QAction*> t_retval;
	t_retval = ((QActionGroup *)handle)->actions();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QActionH QActionGroup_checkedAction(QActionGroupH handle)
{
	return (QActionH) ((QActionGroup *)handle)->checkedAction();
}

C_EXPORT bool QActionGroup_isExclusive(QActionGroupH handle)
{
	return (bool) ((QActionGroup *)handle)->isExclusive();
}

C_EXPORT bool QActionGroup_isEnabled(QActionGroupH handle)
{
	return (bool) ((QActionGroup *)handle)->isEnabled();
}

C_EXPORT bool QActionGroup_isVisible(QActionGroupH handle)
{
	return (bool) ((QActionGroup *)handle)->isVisible();
}

C_EXPORT void QActionGroup_setEnabled(QActionGroupH handle, bool AnonParam1)
{
	((QActionGroup *)handle)->setEnabled(AnonParam1);
}

C_EXPORT void QActionGroup_setDisabled(QActionGroupH handle, bool b)
{
	((QActionGroup *)handle)->setDisabled(b);
}

C_EXPORT void QActionGroup_setVisible(QActionGroupH handle, bool AnonParam1)
{
	((QActionGroup *)handle)->setVisible(AnonParam1);
}

C_EXPORT void QActionGroup_setExclusive(QActionGroupH handle, bool AnonParam1)
{
	((QActionGroup *)handle)->setExclusive(AnonParam1);
}

