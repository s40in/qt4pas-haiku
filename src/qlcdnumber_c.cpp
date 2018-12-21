//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QLCDNumberH QLCDNumber_create(QWidgetH parent)
{
	return (QLCDNumberH) new QLCDNumber((QWidget*)parent);
}

C_EXPORT void QLCDNumber_destroy(QLCDNumberH handle)
{
	delete (QLCDNumber *)handle;
}

C_EXPORT QLCDNumberH QLCDNumber_create2(uint numDigits, QWidgetH parent)
{
	return (QLCDNumberH) new QLCDNumber(numDigits, (QWidget*)parent);
}

C_EXPORT bool QLCDNumber_smallDecimalPoint(QLCDNumberH handle)
{
	return (bool) ((QLCDNumber *)handle)->smallDecimalPoint();
}

C_EXPORT int QLCDNumber_numDigits(QLCDNumberH handle)
{
	return (int) ((QLCDNumber *)handle)->numDigits();
}

C_EXPORT void QLCDNumber_setNumDigits(QLCDNumberH handle, int nDigits)
{
	((QLCDNumber *)handle)->setNumDigits(nDigits);
}

C_EXPORT bool QLCDNumber_checkOverflow(QLCDNumberH handle, double num)
{
	return (bool) ((QLCDNumber *)handle)->checkOverflow(num);
}

C_EXPORT bool QLCDNumber_checkOverflow2(QLCDNumberH handle, int num)
{
	return (bool) ((QLCDNumber *)handle)->checkOverflow(num);
}

C_EXPORT QLCDNumber::Mode QLCDNumber_mode(QLCDNumberH handle)
{
	return (QLCDNumber::Mode) ((QLCDNumber *)handle)->mode();
}

C_EXPORT void QLCDNumber_setMode(QLCDNumberH handle, QLCDNumber::Mode AnonParam1)
{
	((QLCDNumber *)handle)->setMode(AnonParam1);
}

C_EXPORT QLCDNumber::SegmentStyle QLCDNumber_segmentStyle(QLCDNumberH handle)
{
	return (QLCDNumber::SegmentStyle) ((QLCDNumber *)handle)->segmentStyle();
}

C_EXPORT void QLCDNumber_setSegmentStyle(QLCDNumberH handle, QLCDNumber::SegmentStyle AnonParam1)
{
	((QLCDNumber *)handle)->setSegmentStyle(AnonParam1);
}

C_EXPORT double QLCDNumber_value(QLCDNumberH handle)
{
	return (double) ((QLCDNumber *)handle)->value();
}

C_EXPORT int QLCDNumber_intValue(QLCDNumberH handle)
{
	return (int) ((QLCDNumber *)handle)->intValue();
}

C_EXPORT void QLCDNumber_sizeHint(QLCDNumberH handle, PSize retval)
{
	*(QSize *)retval = ((QLCDNumber *)handle)->sizeHint();
}

C_EXPORT void QLCDNumber_display(QLCDNumberH handle, PWideString str)
{
	QString t_str;
	copyPWideStringToQString(str, t_str);
	((QLCDNumber *)handle)->display(t_str);
}

C_EXPORT void QLCDNumber_display2(QLCDNumberH handle, int num)
{
	((QLCDNumber *)handle)->display(num);
}

C_EXPORT void QLCDNumber_display3(QLCDNumberH handle, double num)
{
	((QLCDNumber *)handle)->display(num);
}

C_EXPORT void QLCDNumber_setHexMode(QLCDNumberH handle)
{
	((QLCDNumber *)handle)->setHexMode();
}

C_EXPORT void QLCDNumber_setDecMode(QLCDNumberH handle)
{
	((QLCDNumber *)handle)->setDecMode();
}

C_EXPORT void QLCDNumber_setOctMode(QLCDNumberH handle)
{
	((QLCDNumber *)handle)->setOctMode();
}

C_EXPORT void QLCDNumber_setBinMode(QLCDNumberH handle)
{
	((QLCDNumber *)handle)->setBinMode();
}

C_EXPORT void QLCDNumber_setSmallDecimalPoint(QLCDNumberH handle, bool AnonParam1)
{
	((QLCDNumber *)handle)->setSmallDecimalPoint(AnonParam1);
}

