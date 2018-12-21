//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QToolTip_showText(const QPointH pos, PWideString text, QWidgetH w)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	QToolTip::showText(*(const QPoint*)pos, t_text, (QWidget*)w);
}

C_EXPORT void QToolTip_showText2(const QPointH pos, PWideString text, QWidgetH w, PRect rect)
{
	QString t_text;
	QRect t_rect;
	copyPWideStringToQString(text, t_text);
	copyPRectToQRect(rect, t_rect);
	QToolTip::showText(*(const QPoint*)pos, t_text, (QWidget*)w, t_rect);
}

C_EXPORT void QToolTip_hideText()
{
	QToolTip::hideText();
}

C_EXPORT bool QToolTip_isVisible()
{
	return (bool) QToolTip::isVisible();
}

C_EXPORT void QToolTip_text(PWideString retval)
{
	QString t_retval;
	t_retval = QToolTip::text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QToolTip_palette(QPaletteH retval)
{
	*(QPalette *)retval = QToolTip::palette();
}

C_EXPORT void QToolTip_setPalette(const QPaletteH AnonParam1)
{
	QToolTip::setPalette(*(const QPalette*)AnonParam1);
}

C_EXPORT void QToolTip_font(QFontH retval)
{
	*(QFont *)retval = QToolTip::font();
}

C_EXPORT void QToolTip_setFont(const QFontH AnonParam1)
{
	QToolTip::setFont(*(const QFont*)AnonParam1);
}

