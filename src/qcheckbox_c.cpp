//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QCheckBoxH QCheckBox_create(QWidgetH parent)
{
	return (QCheckBoxH) new QCheckBox((QWidget*)parent);
}

C_EXPORT void QCheckBox_destroy(QCheckBoxH handle)
{
	delete (QCheckBox *)handle;
}

C_EXPORT QCheckBoxH QCheckBox_create2(PWideString text, QWidgetH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QCheckBoxH) new QCheckBox(t_text, (QWidget*)parent);
}

C_EXPORT void QCheckBox_sizeHint(QCheckBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QCheckBox *)handle)->sizeHint();
}

C_EXPORT void QCheckBox_setTristate(QCheckBoxH handle, bool y)
{
	((QCheckBox *)handle)->setTristate(y);
}

C_EXPORT bool QCheckBox_isTristate(QCheckBoxH handle)
{
	return (bool) ((QCheckBox *)handle)->isTristate();
}

C_EXPORT Qt::CheckState QCheckBox_checkState(QCheckBoxH handle)
{
	return (Qt::CheckState) ((QCheckBox *)handle)->checkState();
}

C_EXPORT void QCheckBox_setCheckState(QCheckBoxH handle, Qt::CheckState state)
{
	((QCheckBox *)handle)->setCheckState(state);
}

