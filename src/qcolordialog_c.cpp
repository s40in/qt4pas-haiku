//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QColorDialogH QColorDialog_create(QWidgetH parent)
{
	return (QColorDialogH) new QColorDialog((QWidget*)parent);
}

C_EXPORT void QColorDialog_destroy(QColorDialogH handle)
{
	delete (QColorDialog *)handle;
}

C_EXPORT QColorDialogH QColorDialog_create2(const QColorH initial, QWidgetH parent)
{
	return (QColorDialogH) new QColorDialog(*(const QColor*)initial, (QWidget*)parent);
}

C_EXPORT void QColorDialog_setCurrentColor(QColorDialogH handle, const QColorH color)
{
	((QColorDialog *)handle)->setCurrentColor(*(const QColor*)color);
}

C_EXPORT void QColorDialog_currentColor(QColorDialogH handle, PQColor retval)
{
	*(QColor *)retval = ((QColorDialog *)handle)->currentColor();
}

C_EXPORT void QColorDialog_selectedColor(QColorDialogH handle, PQColor retval)
{
	*(QColor *)retval = ((QColorDialog *)handle)->selectedColor();
}

C_EXPORT void QColorDialog_setOption(QColorDialogH handle, QColorDialog::ColorDialogOption option, bool on)
{
	((QColorDialog *)handle)->setOption(option, on);
}

C_EXPORT bool QColorDialog_testOption(QColorDialogH handle, QColorDialog::ColorDialogOption option)
{
	return (bool) ((QColorDialog *)handle)->testOption(option);
}

C_EXPORT void QColorDialog_setOptions(QColorDialogH handle, unsigned int options)
{
	((QColorDialog *)handle)->setOptions((QColorDialog::ColorDialogOptions)options);
}

C_EXPORT unsigned int QColorDialog_options(QColorDialogH handle)
{
	return (unsigned int) ((QColorDialog *)handle)->options();
}

C_EXPORT void QColorDialog_open(QColorDialogH handle, QObjectH receiver, const char* member)
{
	((QColorDialog *)handle)->open((QObject*)receiver, member);
}

C_EXPORT void QColorDialog_setVisible(QColorDialogH handle, bool visible)
{
	((QColorDialog *)handle)->setVisible(visible);
}

C_EXPORT void QColorDialog_getColor(PQColor retval, const QColorH initial, QWidgetH parent, PWideString title, unsigned int options)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	*(QColor *)retval = QColorDialog::getColor(*(const QColor*)initial, (QWidget*)parent, t_title, (QColorDialog::ColorDialogOptions)options);
}

C_EXPORT void QColorDialog_getColor2(PQColor retval, const QColorH initial, QWidgetH parent)
{
	*(QColor *)retval = QColorDialog::getColor(*(const QColor*)initial, (QWidget*)parent);
}

C_EXPORT QRgb QColorDialog_getRgba(QRgb rgba, bool* ok, QWidgetH parent)
{
	return (QRgb) QColorDialog::getRgba(rgba, ok, (QWidget*)parent);
}

C_EXPORT int QColorDialog_customCount()
{
	return (int) QColorDialog::customCount();
}

C_EXPORT QRgb QColorDialog_customColor(int index)
{
	return (QRgb) QColorDialog::customColor(index);
}

C_EXPORT void QColorDialog_setCustomColor(int index, QRgb color)
{
	QColorDialog::setCustomColor(index, color);
}

C_EXPORT void QColorDialog_setStandardColor(int index, QRgb color)
{
	QColorDialog::setStandardColor(index, color);
}

