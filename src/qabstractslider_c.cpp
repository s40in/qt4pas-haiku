//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QAbstractSliderH QAbstractSlider_create(QWidgetH parent)
{
	return (QAbstractSliderH) new QAbstractSlider((QWidget*)parent);
}

C_EXPORT void QAbstractSlider_destroy(QAbstractSliderH handle)
{
	delete (QAbstractSlider *)handle;
}

C_EXPORT Qt::Orientation QAbstractSlider_orientation(QAbstractSliderH handle)
{
	return (Qt::Orientation) ((QAbstractSlider *)handle)->orientation();
}

C_EXPORT void QAbstractSlider_setMinimum(QAbstractSliderH handle, int AnonParam1)
{
	((QAbstractSlider *)handle)->setMinimum(AnonParam1);
}

C_EXPORT int QAbstractSlider_minimum(QAbstractSliderH handle)
{
	return (int) ((QAbstractSlider *)handle)->minimum();
}

C_EXPORT void QAbstractSlider_setMaximum(QAbstractSliderH handle, int AnonParam1)
{
	((QAbstractSlider *)handle)->setMaximum(AnonParam1);
}

C_EXPORT int QAbstractSlider_maximum(QAbstractSliderH handle)
{
	return (int) ((QAbstractSlider *)handle)->maximum();
}

C_EXPORT void QAbstractSlider_setRange(QAbstractSliderH handle, int min, int max)
{
	((QAbstractSlider *)handle)->setRange(min, max);
}

C_EXPORT void QAbstractSlider_setSingleStep(QAbstractSliderH handle, int AnonParam1)
{
	((QAbstractSlider *)handle)->setSingleStep(AnonParam1);
}

C_EXPORT int QAbstractSlider_singleStep(QAbstractSliderH handle)
{
	return (int) ((QAbstractSlider *)handle)->singleStep();
}

C_EXPORT void QAbstractSlider_setPageStep(QAbstractSliderH handle, int AnonParam1)
{
	((QAbstractSlider *)handle)->setPageStep(AnonParam1);
}

C_EXPORT int QAbstractSlider_pageStep(QAbstractSliderH handle)
{
	return (int) ((QAbstractSlider *)handle)->pageStep();
}

C_EXPORT void QAbstractSlider_setTracking(QAbstractSliderH handle, bool enable)
{
	((QAbstractSlider *)handle)->setTracking(enable);
}

C_EXPORT bool QAbstractSlider_hasTracking(QAbstractSliderH handle)
{
	return (bool) ((QAbstractSlider *)handle)->hasTracking();
}

C_EXPORT void QAbstractSlider_setSliderDown(QAbstractSliderH handle, bool AnonParam1)
{
	((QAbstractSlider *)handle)->setSliderDown(AnonParam1);
}

C_EXPORT bool QAbstractSlider_isSliderDown(QAbstractSliderH handle)
{
	return (bool) ((QAbstractSlider *)handle)->isSliderDown();
}

C_EXPORT void QAbstractSlider_setSliderPosition(QAbstractSliderH handle, int AnonParam1)
{
	((QAbstractSlider *)handle)->setSliderPosition(AnonParam1);
}

C_EXPORT int QAbstractSlider_sliderPosition(QAbstractSliderH handle)
{
	return (int) ((QAbstractSlider *)handle)->sliderPosition();
}

C_EXPORT void QAbstractSlider_setInvertedAppearance(QAbstractSliderH handle, bool AnonParam1)
{
	((QAbstractSlider *)handle)->setInvertedAppearance(AnonParam1);
}

C_EXPORT bool QAbstractSlider_invertedAppearance(QAbstractSliderH handle)
{
	return (bool) ((QAbstractSlider *)handle)->invertedAppearance();
}

C_EXPORT void QAbstractSlider_setInvertedControls(QAbstractSliderH handle, bool AnonParam1)
{
	((QAbstractSlider *)handle)->setInvertedControls(AnonParam1);
}

C_EXPORT bool QAbstractSlider_invertedControls(QAbstractSliderH handle)
{
	return (bool) ((QAbstractSlider *)handle)->invertedControls();
}

C_EXPORT int QAbstractSlider_value(QAbstractSliderH handle)
{
	return (int) ((QAbstractSlider *)handle)->value();
}

C_EXPORT void QAbstractSlider_triggerAction(QAbstractSliderH handle, QAbstractSlider::SliderAction action)
{
	((QAbstractSlider *)handle)->triggerAction(action);
}

C_EXPORT void QAbstractSlider_setValue(QAbstractSliderH handle, int AnonParam1)
{
	((QAbstractSlider *)handle)->setValue(AnonParam1);
}

C_EXPORT void QAbstractSlider_setOrientation(QAbstractSliderH handle, Qt::Orientation AnonParam1)
{
	((QAbstractSlider *)handle)->setOrientation(AnonParam1);
}

