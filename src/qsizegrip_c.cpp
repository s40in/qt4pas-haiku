//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSizeGripH QSizeGrip_create(QWidgetH parent)
{
	return (QSizeGripH) new QSizeGrip((QWidget*)parent);
}

C_EXPORT void QSizeGrip_destroy(QSizeGripH handle)
{
	delete (QSizeGrip *)handle;
}

C_EXPORT void QSizeGrip_sizeHint(QSizeGripH handle, PSize retval)
{
	*(QSize *)retval = ((QSizeGrip *)handle)->sizeHint();
}

C_EXPORT void QSizeGrip_setVisible(QSizeGripH handle, bool AnonParam1)
{
	((QSizeGrip *)handle)->setVisible(AnonParam1);
}

