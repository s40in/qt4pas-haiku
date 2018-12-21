//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QProgressBarH QProgressBar_create(QWidgetH parent)
{
	return (QProgressBarH) new QProgressBar((QWidget*)parent);
}

C_EXPORT void QProgressBar_destroy(QProgressBarH handle)
{
	delete (QProgressBar *)handle;
}

C_EXPORT int QProgressBar_minimum(QProgressBarH handle)
{
	return (int) ((QProgressBar *)handle)->minimum();
}

C_EXPORT int QProgressBar_maximum(QProgressBarH handle)
{
	return (int) ((QProgressBar *)handle)->maximum();
}

C_EXPORT int QProgressBar_value(QProgressBarH handle)
{
	return (int) ((QProgressBar *)handle)->value();
}

C_EXPORT void QProgressBar_text(QProgressBarH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QProgressBar *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QProgressBar_setTextVisible(QProgressBarH handle, bool visible)
{
	((QProgressBar *)handle)->setTextVisible(visible);
}

C_EXPORT bool QProgressBar_isTextVisible(QProgressBarH handle)
{
	return (bool) ((QProgressBar *)handle)->isTextVisible();
}

C_EXPORT unsigned int QProgressBar_alignment(QProgressBarH handle)
{
	return (unsigned int) ((QProgressBar *)handle)->alignment();
}

C_EXPORT void QProgressBar_setAlignment(QProgressBarH handle, unsigned int alignment)
{
	((QProgressBar *)handle)->setAlignment((Qt::Alignment)alignment);
}

C_EXPORT void QProgressBar_sizeHint(QProgressBarH handle, PSize retval)
{
	*(QSize *)retval = ((QProgressBar *)handle)->sizeHint();
}

C_EXPORT void QProgressBar_minimumSizeHint(QProgressBarH handle, PSize retval)
{
	*(QSize *)retval = ((QProgressBar *)handle)->minimumSizeHint();
}

C_EXPORT Qt::Orientation QProgressBar_orientation(QProgressBarH handle)
{
	return (Qt::Orientation) ((QProgressBar *)handle)->orientation();
}

C_EXPORT void QProgressBar_setInvertedAppearance(QProgressBarH handle, bool invert)
{
	((QProgressBar *)handle)->setInvertedAppearance(invert);
}

C_EXPORT bool QProgressBar_invertedAppearance(QProgressBarH handle)
{
	return (bool) ((QProgressBar *)handle)->invertedAppearance();
}

C_EXPORT void QProgressBar_setTextDirection(QProgressBarH handle, QProgressBar::Direction textDirection)
{
	((QProgressBar *)handle)->setTextDirection(textDirection);
}

C_EXPORT QProgressBar::Direction QProgressBar_textDirection(QProgressBarH handle)
{
	return (QProgressBar::Direction) ((QProgressBar *)handle)->textDirection();
}

C_EXPORT void QProgressBar_setFormat(QProgressBarH handle, PWideString format)
{
	QString t_format;
	copyPWideStringToQString(format, t_format);
	((QProgressBar *)handle)->setFormat(t_format);
}

C_EXPORT void QProgressBar_format(QProgressBarH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QProgressBar *)handle)->format();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QProgressBar_reset(QProgressBarH handle)
{
	((QProgressBar *)handle)->reset();
}

C_EXPORT void QProgressBar_setRange(QProgressBarH handle, int minimum, int maximum)
{
	((QProgressBar *)handle)->setRange(minimum, maximum);
}

C_EXPORT void QProgressBar_setMinimum(QProgressBarH handle, int minimum)
{
	((QProgressBar *)handle)->setMinimum(minimum);
}

C_EXPORT void QProgressBar_setMaximum(QProgressBarH handle, int maximum)
{
	((QProgressBar *)handle)->setMaximum(maximum);
}

C_EXPORT void QProgressBar_setValue(QProgressBarH handle, int value)
{
	((QProgressBar *)handle)->setValue(value);
}

C_EXPORT void QProgressBar_setOrientation(QProgressBarH handle, Qt::Orientation AnonParam1)
{
	((QProgressBar *)handle)->setOrientation(AnonParam1);
}

