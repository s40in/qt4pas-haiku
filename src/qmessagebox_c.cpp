//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMessageBoxH QMessageBox_create(QWidgetH parent)
{
	return (QMessageBoxH) new QMessageBox((QWidget*)parent);
}

C_EXPORT void QMessageBox_destroy(QMessageBoxH handle)
{
	delete (QMessageBox *)handle;
}

C_EXPORT QMessageBoxH QMessageBox_create2(QMessageBox::Icon icon, PWideString title, PWideString text, unsigned int buttons, QWidgetH parent, unsigned int flags)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	return (QMessageBoxH) new QMessageBox(icon, t_title, t_text, (QMessageBox::StandardButtons)buttons, (QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QMessageBox_addButton(QMessageBoxH handle, QAbstractButtonH button, QMessageBox::ButtonRole role)
{
	((QMessageBox *)handle)->addButton((QAbstractButton*)button, role);
}

C_EXPORT QPushButtonH QMessageBox_addButton2(QMessageBoxH handle, PWideString text, QMessageBox::ButtonRole role)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QPushButtonH) ((QMessageBox *)handle)->addButton(t_text, role);
}

C_EXPORT QPushButtonH QMessageBox_addButton3(QMessageBoxH handle, QMessageBox::StandardButton button)
{
	return (QPushButtonH) ((QMessageBox *)handle)->addButton(button);
}

C_EXPORT void QMessageBox_removeButton(QMessageBoxH handle, QAbstractButtonH button)
{
	((QMessageBox *)handle)->removeButton((QAbstractButton*)button);
}

C_EXPORT void QMessageBox_open(QMessageBoxH handle, QObjectH receiver, const char* member)
{
	((QMessageBox *)handle)->open((QObject*)receiver, member);
}

C_EXPORT void QMessageBox_buttons(QMessageBoxH handle, PPtrIntArray retval)
{
	QList<QAbstractButton*> t_retval;
	t_retval = ((QMessageBox *)handle)->buttons();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QMessageBox::ButtonRole QMessageBox_buttonRole(QMessageBoxH handle, QAbstractButtonH button)
{
	return (QMessageBox::ButtonRole) ((QMessageBox *)handle)->buttonRole((QAbstractButton*)button);
}

C_EXPORT void QMessageBox_setStandardButtons(QMessageBoxH handle, unsigned int buttons)
{
	((QMessageBox *)handle)->setStandardButtons((QMessageBox::StandardButtons)buttons);
}

C_EXPORT unsigned int QMessageBox_standardButtons(QMessageBoxH handle)
{
	return (unsigned int) ((QMessageBox *)handle)->standardButtons();
}

C_EXPORT QMessageBox::StandardButton QMessageBox_standardButton(QMessageBoxH handle, QAbstractButtonH button)
{
	return (QMessageBox::StandardButton) ((QMessageBox *)handle)->standardButton((QAbstractButton*)button);
}

C_EXPORT QAbstractButtonH QMessageBox_button(QMessageBoxH handle, QMessageBox::StandardButton which)
{
	return (QAbstractButtonH) ((QMessageBox *)handle)->button(which);
}

C_EXPORT QPushButtonH QMessageBox_defaultButton(QMessageBoxH handle)
{
	return (QPushButtonH) ((QMessageBox *)handle)->defaultButton();
}

C_EXPORT void QMessageBox_setDefaultButton(QMessageBoxH handle, QPushButtonH button)
{
	((QMessageBox *)handle)->setDefaultButton((QPushButton*)button);
}

C_EXPORT void QMessageBox_setDefaultButton2(QMessageBoxH handle, QMessageBox::StandardButton button)
{
	((QMessageBox *)handle)->setDefaultButton(button);
}

C_EXPORT QAbstractButtonH QMessageBox_escapeButton(QMessageBoxH handle)
{
	return (QAbstractButtonH) ((QMessageBox *)handle)->escapeButton();
}

C_EXPORT void QMessageBox_setEscapeButton(QMessageBoxH handle, QAbstractButtonH button)
{
	((QMessageBox *)handle)->setEscapeButton((QAbstractButton*)button);
}

C_EXPORT void QMessageBox_setEscapeButton2(QMessageBoxH handle, QMessageBox::StandardButton button)
{
	((QMessageBox *)handle)->setEscapeButton(button);
}

C_EXPORT QAbstractButtonH QMessageBox_clickedButton(QMessageBoxH handle)
{
	return (QAbstractButtonH) ((QMessageBox *)handle)->clickedButton();
}

C_EXPORT void QMessageBox_text(QMessageBoxH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QMessageBox *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMessageBox_setText(QMessageBoxH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QMessageBox *)handle)->setText(t_text);
}

C_EXPORT QMessageBox::Icon QMessageBox_icon(QMessageBoxH handle)
{
	return (QMessageBox::Icon) ((QMessageBox *)handle)->icon();
}

C_EXPORT void QMessageBox_setIcon(QMessageBoxH handle, QMessageBox::Icon AnonParam1)
{
	((QMessageBox *)handle)->setIcon(AnonParam1);
}

C_EXPORT void QMessageBox_iconPixmap(QMessageBoxH handle, QPixmapH retval)
{
	*(QPixmap *)retval = ((QMessageBox *)handle)->iconPixmap();
}

C_EXPORT void QMessageBox_setIconPixmap(QMessageBoxH handle, const QPixmapH pixmap)
{
	((QMessageBox *)handle)->setIconPixmap(*(const QPixmap*)pixmap);
}

C_EXPORT Qt::TextFormat QMessageBox_textFormat(QMessageBoxH handle)
{
	return (Qt::TextFormat) ((QMessageBox *)handle)->textFormat();
}

C_EXPORT void QMessageBox_setTextFormat(QMessageBoxH handle, Qt::TextFormat format)
{
	((QMessageBox *)handle)->setTextFormat(format);
}

C_EXPORT QMessageBox::StandardButton QMessageBox_information(QWidgetH parent, PWideString title, PWideString text, unsigned int buttons, QMessageBox::StandardButton defaultButton)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	return (QMessageBox::StandardButton) QMessageBox::information((QWidget*)parent, t_title, t_text, (QMessageBox::StandardButtons)buttons, defaultButton);
}

C_EXPORT QMessageBox::StandardButton QMessageBox_question(QWidgetH parent, PWideString title, PWideString text, unsigned int buttons, QMessageBox::StandardButton defaultButton)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	return (QMessageBox::StandardButton) QMessageBox::question((QWidget*)parent, t_title, t_text, (QMessageBox::StandardButtons)buttons, defaultButton);
}

C_EXPORT QMessageBox::StandardButton QMessageBox_warning(QWidgetH parent, PWideString title, PWideString text, unsigned int buttons, QMessageBox::StandardButton defaultButton)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	return (QMessageBox::StandardButton) QMessageBox::warning((QWidget*)parent, t_title, t_text, (QMessageBox::StandardButtons)buttons, defaultButton);
}

C_EXPORT QMessageBox::StandardButton QMessageBox_critical(QWidgetH parent, PWideString title, PWideString text, unsigned int buttons, QMessageBox::StandardButton defaultButton)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	return (QMessageBox::StandardButton) QMessageBox::critical((QWidget*)parent, t_title, t_text, (QMessageBox::StandardButtons)buttons, defaultButton);
}

C_EXPORT void QMessageBox_about(QWidgetH parent, PWideString title, PWideString text)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	QMessageBox::about((QWidget*)parent, t_title, t_text);
}

C_EXPORT void QMessageBox_aboutQt(QWidgetH parent, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	QMessageBox::aboutQt((QWidget*)parent, t_title);
}

C_EXPORT void QMessageBox_sizeHint(QMessageBoxH handle, PSize retval)
{
	*(QSize *)retval = ((QMessageBox *)handle)->sizeHint();
}

C_EXPORT QMessageBoxH QMessageBox_create3(PWideString title, PWideString text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidgetH parent, unsigned int f)
{
	QString t_title;
	QString t_text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	return (QMessageBoxH) new QMessageBox(t_title, t_text, icon, button0, button1, button2, (QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT int QMessageBox_information3(QWidgetH parent, PWideString title, PWideString text, PWideString button0Text, PWideString button1Text, PWideString button2Text, int defaultButtonNumber, int escapeButtonNumber)
{
	QString t_title;
	QString t_text;
	QString t_button0Text;
	QString t_button1Text;
	QString t_button2Text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	copyPWideStringToQString(button0Text, t_button0Text);
	copyPWideStringToQString(button1Text, t_button1Text);
	copyPWideStringToQString(button2Text, t_button2Text);
	return (int) QMessageBox::information((QWidget*)parent, t_title, t_text, t_button0Text, t_button1Text, t_button2Text, defaultButtonNumber, escapeButtonNumber);
}

C_EXPORT int QMessageBox_question3(QWidgetH parent, PWideString title, PWideString text, PWideString button0Text, PWideString button1Text, PWideString button2Text, int defaultButtonNumber, int escapeButtonNumber)
{
	QString t_title;
	QString t_text;
	QString t_button0Text;
	QString t_button1Text;
	QString t_button2Text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	copyPWideStringToQString(button0Text, t_button0Text);
	copyPWideStringToQString(button1Text, t_button1Text);
	copyPWideStringToQString(button2Text, t_button2Text);
	return (int) QMessageBox::question((QWidget*)parent, t_title, t_text, t_button0Text, t_button1Text, t_button2Text, defaultButtonNumber, escapeButtonNumber);
}

C_EXPORT int QMessageBox_warning3(QWidgetH parent, PWideString title, PWideString text, PWideString button0Text, PWideString button1Text, PWideString button2Text, int defaultButtonNumber, int escapeButtonNumber)
{
	QString t_title;
	QString t_text;
	QString t_button0Text;
	QString t_button1Text;
	QString t_button2Text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	copyPWideStringToQString(button0Text, t_button0Text);
	copyPWideStringToQString(button1Text, t_button1Text);
	copyPWideStringToQString(button2Text, t_button2Text);
	return (int) QMessageBox::warning((QWidget*)parent, t_title, t_text, t_button0Text, t_button1Text, t_button2Text, defaultButtonNumber, escapeButtonNumber);
}

C_EXPORT int QMessageBox_critical3(QWidgetH parent, PWideString title, PWideString text, PWideString button0Text, PWideString button1Text, PWideString button2Text, int defaultButtonNumber, int escapeButtonNumber)
{
	QString t_title;
	QString t_text;
	QString t_button0Text;
	QString t_button1Text;
	QString t_button2Text;
	copyPWideStringToQString(title, t_title);
	copyPWideStringToQString(text, t_text);
	copyPWideStringToQString(button0Text, t_button0Text);
	copyPWideStringToQString(button1Text, t_button1Text);
	copyPWideStringToQString(button2Text, t_button2Text);
	return (int) QMessageBox::critical((QWidget*)parent, t_title, t_text, t_button0Text, t_button1Text, t_button2Text, defaultButtonNumber, escapeButtonNumber);
}

C_EXPORT void QMessageBox_buttonText(QMessageBoxH handle, PWideString retval, int button)
{
	QString t_retval;
	t_retval = ((QMessageBox *)handle)->buttonText(button);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMessageBox_setButtonText(QMessageBoxH handle, int button, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QMessageBox *)handle)->setButtonText(button, t_text);
}

C_EXPORT void QMessageBox_informativeText(QMessageBoxH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QMessageBox *)handle)->informativeText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMessageBox_setInformativeText(QMessageBoxH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QMessageBox *)handle)->setInformativeText(t_text);
}

C_EXPORT void QMessageBox_detailedText(QMessageBoxH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QMessageBox *)handle)->detailedText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QMessageBox_setDetailedText(QMessageBoxH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QMessageBox *)handle)->setDetailedText(t_text);
}

C_EXPORT void QMessageBox_setWindowTitle(QMessageBoxH handle, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	((QMessageBox *)handle)->setWindowTitle(t_title);
}

C_EXPORT void QMessageBox_setWindowModality(QMessageBoxH handle, Qt::WindowModality windowModality)
{
	((QMessageBox *)handle)->setWindowModality(windowModality);
}

C_EXPORT void QMessageBox_standardIcon(QPixmapH retval, QMessageBox::Icon icon)
{
	*(QPixmap *)retval = QMessageBox::standardIcon(icon);
}

