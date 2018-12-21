//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT int QPaintDevice_devType(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->devType();
}

C_EXPORT bool QPaintDevice_paintingActive(QPaintDeviceH handle)
{
	return (bool) ((QPaintDevice *)handle)->paintingActive();
}

C_EXPORT QPaintEngineH QPaintDevice_paintEngine(QPaintDeviceH handle)
{
	return (QPaintEngineH) ((QPaintDevice *)handle)->paintEngine();
}

C_EXPORT int QPaintDevice_width(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->width();
}

C_EXPORT int QPaintDevice_height(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->height();
}

C_EXPORT int QPaintDevice_widthMM(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->widthMM();
}

C_EXPORT int QPaintDevice_heightMM(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->heightMM();
}

C_EXPORT int QPaintDevice_logicalDpiX(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->logicalDpiX();
}

C_EXPORT int QPaintDevice_logicalDpiY(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->logicalDpiY();
}

C_EXPORT int QPaintDevice_physicalDpiX(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->physicalDpiX();
}

C_EXPORT int QPaintDevice_physicalDpiY(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->physicalDpiY();
}

C_EXPORT int QPaintDevice_numColors(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->numColors();
}

C_EXPORT int QPaintDevice_depth(QPaintDeviceH handle)
{
	return (int) ((QPaintDevice *)handle)->depth();
}

#if defined MSWINDOWS
C_EXPORT HDC QPaintDevice_getDC(QPaintDeviceH handle)
{
	return (HDC) ((QPaintDevice *)handle)->getDC();
}

C_EXPORT void QPaintDevice_releaseDC(QPaintDeviceH handle, HDC hdc)
{
	((QPaintDevice *)handle)->releaseDC(hdc);
}

#endif
