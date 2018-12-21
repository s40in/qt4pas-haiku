//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QAbstractButton_setText(QAbstractButtonH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QAbstractButton *)handle)->setText(t_text);
}

C_EXPORT void QAbstractButton_text(QAbstractButtonH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QAbstractButton *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QAbstractButton_setIcon(QAbstractButtonH handle, const QIconH icon)
{
	((QAbstractButton *)handle)->setIcon(*(const QIcon*)icon);
}

C_EXPORT void QAbstractButton_icon(QAbstractButtonH handle, QIconH retval)
{
	*(QIcon *)retval = ((QAbstractButton *)handle)->icon();
}

C_EXPORT void QAbstractButton_iconSize(QAbstractButtonH handle, PSize retval)
{
	*(QSize *)retval = ((QAbstractButton *)handle)->iconSize();
}

C_EXPORT void QAbstractButton_setShortcut(QAbstractButtonH handle, const QKeySequenceH key)
{
	((QAbstractButton *)handle)->setShortcut(*(const QKeySequence*)key);
}

C_EXPORT void QAbstractButton_shortcut(QAbstractButtonH handle, QKeySequenceH retval)
{
	*(QKeySequence *)retval = ((QAbstractButton *)handle)->shortcut();
}

C_EXPORT void QAbstractButton_setCheckable(QAbstractButtonH handle, bool AnonParam1)
{
	((QAbstractButton *)handle)->setCheckable(AnonParam1);
}

C_EXPORT bool QAbstractButton_isCheckable(QAbstractButtonH handle)
{
	return (bool) ((QAbstractButton *)handle)->isCheckable();
}

C_EXPORT bool QAbstractButton_isChecked(QAbstractButtonH handle)
{
	return (bool) ((QAbstractButton *)handle)->isChecked();
}

C_EXPORT void QAbstractButton_setDown(QAbstractButtonH handle, bool AnonParam1)
{
	((QAbstractButton *)handle)->setDown(AnonParam1);
}

C_EXPORT bool QAbstractButton_isDown(QAbstractButtonH handle)
{
	return (bool) ((QAbstractButton *)handle)->isDown();
}

C_EXPORT void QAbstractButton_setAutoRepeat(QAbstractButtonH handle, bool AnonParam1)
{
	((QAbstractButton *)handle)->setAutoRepeat(AnonParam1);
}

C_EXPORT bool QAbstractButton_autoRepeat(QAbstractButtonH handle)
{
	return (bool) ((QAbstractButton *)handle)->autoRepeat();
}

C_EXPORT void QAbstractButton_setAutoRepeatDelay(QAbstractButtonH handle, int AnonParam1)
{
	((QAbstractButton *)handle)->setAutoRepeatDelay(AnonParam1);
}

C_EXPORT int QAbstractButton_autoRepeatDelay(QAbstractButtonH handle)
{
	return (int) ((QAbstractButton *)handle)->autoRepeatDelay();
}

C_EXPORT void QAbstractButton_setAutoRepeatInterval(QAbstractButtonH handle, int AnonParam1)
{
	((QAbstractButton *)handle)->setAutoRepeatInterval(AnonParam1);
}

C_EXPORT int QAbstractButton_autoRepeatInterval(QAbstractButtonH handle)
{
	return (int) ((QAbstractButton *)handle)->autoRepeatInterval();
}

C_EXPORT void QAbstractButton_setAutoExclusive(QAbstractButtonH handle, bool AnonParam1)
{
	((QAbstractButton *)handle)->setAutoExclusive(AnonParam1);
}

C_EXPORT bool QAbstractButton_autoExclusive(QAbstractButtonH handle)
{
	return (bool) ((QAbstractButton *)handle)->autoExclusive();
}

C_EXPORT QButtonGroupH QAbstractButton_group(QAbstractButtonH handle)
{
	return (QButtonGroupH) ((QAbstractButton *)handle)->group();
}

C_EXPORT void QAbstractButton_setIconSize(QAbstractButtonH handle, const QSizeH size)
{
	((QAbstractButton *)handle)->setIconSize(*(const QSize*)size);
}

C_EXPORT void QAbstractButton_animateClick(QAbstractButtonH handle, int msec)
{
	((QAbstractButton *)handle)->animateClick(msec);
}

C_EXPORT void QAbstractButton_click(QAbstractButtonH handle)
{
	((QAbstractButton *)handle)->click();
}

C_EXPORT void QAbstractButton_toggle(QAbstractButtonH handle)
{
	((QAbstractButton *)handle)->toggle();
}

C_EXPORT void QAbstractButton_setChecked(QAbstractButtonH handle, bool AnonParam1)
{
	((QAbstractButton *)handle)->setChecked(AnonParam1);
}

