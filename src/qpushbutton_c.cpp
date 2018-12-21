//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPushButtonH QPushButton_create(QWidgetH parent)
{
	return (QPushButtonH) new QPushButton((QWidget*)parent);
}

C_EXPORT void QPushButton_destroy(QPushButtonH handle)
{
	delete (QPushButton *)handle;
}

C_EXPORT QPushButtonH QPushButton_create2(PWideString text, QWidgetH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QPushButtonH) new QPushButton(t_text, (QWidget*)parent);
}

C_EXPORT QPushButtonH QPushButton_create3(const QIconH icon, PWideString text, QWidgetH parent)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QPushButtonH) new QPushButton(*(const QIcon*)icon, t_text, (QWidget*)parent);
}

C_EXPORT void QPushButton_sizeHint(QPushButtonH handle, PSize retval)
{
	*(QSize *)retval = ((QPushButton *)handle)->sizeHint();
}

C_EXPORT void QPushButton_minimumSizeHint(QPushButtonH handle, PSize retval)
{
	*(QSize *)retval = ((QPushButton *)handle)->minimumSizeHint();
}

C_EXPORT bool QPushButton_autoDefault(QPushButtonH handle)
{
	return (bool) ((QPushButton *)handle)->autoDefault();
}

C_EXPORT void QPushButton_setAutoDefault(QPushButtonH handle, bool AnonParam1)
{
	((QPushButton *)handle)->setAutoDefault(AnonParam1);
}

C_EXPORT bool QPushButton_isDefault(QPushButtonH handle)
{
	return (bool) ((QPushButton *)handle)->isDefault();
}

C_EXPORT void QPushButton_setDefault(QPushButtonH handle, bool AnonParam1)
{
	((QPushButton *)handle)->setDefault(AnonParam1);
}

C_EXPORT void QPushButton_setMenu(QPushButtonH handle, QMenuH menu)
{
	((QPushButton *)handle)->setMenu((QMenu*)menu);
}

C_EXPORT QMenuH QPushButton_menu(QPushButtonH handle)
{
	return (QMenuH) ((QPushButton *)handle)->menu();
}

C_EXPORT void QPushButton_setFlat(QPushButtonH handle, bool AnonParam1)
{
	((QPushButton *)handle)->setFlat(AnonParam1);
}

C_EXPORT bool QPushButton_isFlat(QPushButtonH handle)
{
	return (bool) ((QPushButton *)handle)->isFlat();
}

C_EXPORT void QPushButton_showMenu(QPushButtonH handle)
{
	((QPushButton *)handle)->showMenu();
}

