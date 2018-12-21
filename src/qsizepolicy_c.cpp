//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSizePolicyH QSizePolicy_create()
{
	return (QSizePolicyH) new QSizePolicy();
}

C_EXPORT void QSizePolicy_destroy(QSizePolicyH handle)
{
	delete (QSizePolicy *)handle;
}

C_EXPORT QSizePolicyH QSizePolicy_create2(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
{
	return (QSizePolicyH) new QSizePolicy(horizontal, vertical);
}

C_EXPORT QSizePolicyH QSizePolicy_create3(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type)
{
	return (QSizePolicyH) new QSizePolicy(horizontal, vertical, type);
}

C_EXPORT QSizePolicy::Policy QSizePolicy_horizontalPolicy(QSizePolicyH handle)
{
	return (QSizePolicy::Policy) ((QSizePolicy *)handle)->horizontalPolicy();
}

C_EXPORT QSizePolicy::Policy QSizePolicy_verticalPolicy(QSizePolicyH handle)
{
	return (QSizePolicy::Policy) ((QSizePolicy *)handle)->verticalPolicy();
}

C_EXPORT QSizePolicy::ControlType QSizePolicy_controlType(QSizePolicyH handle)
{
	return (QSizePolicy::ControlType) ((QSizePolicy *)handle)->controlType();
}

C_EXPORT void QSizePolicy_setHorizontalPolicy(QSizePolicyH handle, QSizePolicy::Policy d)
{
	((QSizePolicy *)handle)->setHorizontalPolicy(d);
}

C_EXPORT void QSizePolicy_setVerticalPolicy(QSizePolicyH handle, QSizePolicy::Policy d)
{
	((QSizePolicy *)handle)->setVerticalPolicy(d);
}

C_EXPORT void QSizePolicy_setControlType(QSizePolicyH handle, QSizePolicy::ControlType type)
{
	((QSizePolicy *)handle)->setControlType(type);
}

C_EXPORT unsigned int QSizePolicy_expandingDirections(QSizePolicyH handle)
{
	return (unsigned int) ((QSizePolicy *)handle)->expandingDirections();
}

C_EXPORT void QSizePolicy_setHeightForWidth(QSizePolicyH handle, bool b)
{
	((QSizePolicy *)handle)->setHeightForWidth(b);
}

C_EXPORT bool QSizePolicy_hasHeightForWidth(QSizePolicyH handle)
{
	return (bool) ((QSizePolicy *)handle)->hasHeightForWidth();
}

C_EXPORT int QSizePolicy_horizontalStretch(QSizePolicyH handle)
{
	return (int) ((QSizePolicy *)handle)->horizontalStretch();
}

C_EXPORT int QSizePolicy_verticalStretch(QSizePolicyH handle)
{
	return (int) ((QSizePolicy *)handle)->verticalStretch();
}

C_EXPORT void QSizePolicy_setHorizontalStretch(QSizePolicyH handle, unsigned char stretchFactor)
{
	((QSizePolicy *)handle)->setHorizontalStretch((uchar)stretchFactor);
}

C_EXPORT void QSizePolicy_setVerticalStretch(QSizePolicyH handle, unsigned char stretchFactor)
{
	((QSizePolicy *)handle)->setVerticalStretch((uchar)stretchFactor);
}

C_EXPORT void QSizePolicy_transpose(QSizePolicyH handle)
{
	((QSizePolicy *)handle)->transpose();
}

