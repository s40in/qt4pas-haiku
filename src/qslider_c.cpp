//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSliderH QSlider_create(QWidgetH parent)
{
	return (QSliderH) new QSlider((QWidget*)parent);
}

C_EXPORT void QSlider_destroy(QSliderH handle)
{
	delete (QSlider *)handle;
}

C_EXPORT QSliderH QSlider_create2(Qt::Orientation orientation, QWidgetH parent)
{
	return (QSliderH) new QSlider(orientation, (QWidget*)parent);
}

C_EXPORT void QSlider_sizeHint(QSliderH handle, PSize retval)
{
	*(QSize *)retval = ((QSlider *)handle)->sizeHint();
}

C_EXPORT void QSlider_minimumSizeHint(QSliderH handle, PSize retval)
{
	*(QSize *)retval = ((QSlider *)handle)->minimumSizeHint();
}

C_EXPORT void QSlider_setTickPosition(QSliderH handle, QSlider::TickPosition position)
{
	((QSlider *)handle)->setTickPosition(position);
}

C_EXPORT QSlider::TickPosition QSlider_tickPosition(QSliderH handle)
{
	return (QSlider::TickPosition) ((QSlider *)handle)->tickPosition();
}

C_EXPORT void QSlider_setTickInterval(QSliderH handle, int ti)
{
	((QSlider *)handle)->setTickInterval(ti);
}

C_EXPORT int QSlider_tickInterval(QSliderH handle)
{
	return (int) ((QSlider *)handle)->tickInterval();
}

C_EXPORT bool QSlider_event(QSliderH handle, QEventH event)
{
	return (bool) ((QSlider *)handle)->event((QEvent*)event);
}

