//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QScrollBarH QScrollBar_create(QWidgetH parent)
{
	return (QScrollBarH) new QScrollBar((QWidget*)parent);
}

C_EXPORT void QScrollBar_destroy(QScrollBarH handle)
{
	delete (QScrollBar *)handle;
}

C_EXPORT QScrollBarH QScrollBar_create2(Qt::Orientation AnonParam1, QWidgetH parent)
{
	return (QScrollBarH) new QScrollBar(AnonParam1, (QWidget*)parent);
}

C_EXPORT void QScrollBar_sizeHint(QScrollBarH handle, PSize retval)
{
	*(QSize *)retval = ((QScrollBar *)handle)->sizeHint();
}

C_EXPORT bool QScrollBar_event(QScrollBarH handle, QEventH event)
{
	return (bool) ((QScrollBar *)handle)->event((QEvent*)event);
}

