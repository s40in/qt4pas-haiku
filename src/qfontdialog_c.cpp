//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QFontDialogH QFontDialog_create(QWidgetH parent)
{
	return (QFontDialogH) new QFontDialog((QWidget*)parent);
}

C_EXPORT void QFontDialog_destroy(QFontDialogH handle)
{
	delete (QFontDialog *)handle;
}

C_EXPORT QFontDialogH QFontDialog_create2(const QFontH initial, QWidgetH parent)
{
	return (QFontDialogH) new QFontDialog(*(const QFont*)initial, (QWidget*)parent);
}

C_EXPORT void QFontDialog_setCurrentFont(QFontDialogH handle, const QFontH font)
{
	((QFontDialog *)handle)->setCurrentFont(*(const QFont*)font);
}

C_EXPORT void QFontDialog_currentFont(QFontDialogH handle, QFontH retval)
{
	*(QFont *)retval = ((QFontDialog *)handle)->currentFont();
}

C_EXPORT void QFontDialog_selectedFont(QFontDialogH handle, QFontH retval)
{
	*(QFont *)retval = ((QFontDialog *)handle)->selectedFont();
}

C_EXPORT void QFontDialog_setOption(QFontDialogH handle, QFontDialog::FontDialogOption option, bool on)
{
	((QFontDialog *)handle)->setOption(option, on);
}

C_EXPORT bool QFontDialog_testOption(QFontDialogH handle, QFontDialog::FontDialogOption option)
{
	return (bool) ((QFontDialog *)handle)->testOption(option);
}

C_EXPORT void QFontDialog_setOptions(QFontDialogH handle, unsigned int options)
{
	((QFontDialog *)handle)->setOptions((QFontDialog::FontDialogOptions)options);
}

C_EXPORT unsigned int QFontDialog_options(QFontDialogH handle)
{
	return (unsigned int) ((QFontDialog *)handle)->options();
}

C_EXPORT void QFontDialog_open(QFontDialogH handle, QObjectH receiver, const char* member)
{
	((QFontDialog *)handle)->open((QObject*)receiver, member);
}

C_EXPORT void QFontDialog_setVisible(QFontDialogH handle, bool visible)
{
	((QFontDialog *)handle)->setVisible(visible);
}

C_EXPORT void QFontDialog_getFont(QFontH retval, bool* ok, const QFontH initial, QWidgetH parent, PWideString title, unsigned int options)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	*(QFont *)retval = QFontDialog::getFont(ok, *(const QFont*)initial, (QWidget*)parent, t_title, (QFontDialog::FontDialogOptions)options);
}

C_EXPORT void QFontDialog_getFont2(QFontH retval, bool* ok, const QFontH initial, QWidgetH parent, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	*(QFont *)retval = QFontDialog::getFont(ok, *(const QFont*)initial, (QWidget*)parent, t_title);
}

C_EXPORT void QFontDialog_getFont3(QFontH retval, bool* ok, const QFontH initial, QWidgetH parent)
{
	*(QFont *)retval = QFontDialog::getFont(ok, *(const QFont*)initial, (QWidget*)parent);
}

C_EXPORT void QFontDialog_getFont4(QFontH retval, bool* ok, QWidgetH parent)
{
	*(QFont *)retval = QFontDialog::getFont(ok, (QWidget*)parent);
}

