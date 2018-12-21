//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QRadioButtonH QRadioButton_create(QWidgetH parent)
{
	return (QRadioButtonH) new QRadioButton((QWidget*)parent);
}

C_EXPORT void QRadioButton_destroy(QRadioButtonH handle)
{
	delete (QRadioButton *)handle;
}

C_EXPORT QRadioButtonH QRadioButton_create2(PWideString text, QWidgetH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QRadioButtonH) new QRadioButton(t_text, (QWidget*)parent);
}

C_EXPORT void QRadioButton_sizeHint(QRadioButtonH handle, PSize retval)
{
	*(QSize *)retval = ((QRadioButton *)handle)->sizeHint();
}

