//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QWhatsThis_enterWhatsThisMode()
{
	QWhatsThis::enterWhatsThisMode();
}

C_EXPORT bool QWhatsThis_inWhatsThisMode()
{
	return (bool) QWhatsThis::inWhatsThisMode();
}

C_EXPORT void QWhatsThis_leaveWhatsThisMode()
{
	QWhatsThis::leaveWhatsThisMode();
}

C_EXPORT void QWhatsThis_showText(const QPointH pos, PWideString text, QWidgetH w)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	QWhatsThis::showText(*(const QPoint*)pos, t_text, (QWidget*)w);
}

C_EXPORT void QWhatsThis_hideText()
{
	QWhatsThis::hideText();
}

C_EXPORT QActionH QWhatsThis_createAction(QObjectH parent)
{
	return (QActionH) QWhatsThis::createAction((QObject*)parent);
}

