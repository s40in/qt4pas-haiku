//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QLayoutItem_sizeHint(QLayoutItemH handle, PSize retval)
{
	*(QSize *)retval = ((QLayoutItem *)handle)->sizeHint();
}

C_EXPORT void QLayoutItem_minimumSize(QLayoutItemH handle, PSize retval)
{
	*(QSize *)retval = ((QLayoutItem *)handle)->minimumSize();
}

C_EXPORT void QLayoutItem_maximumSize(QLayoutItemH handle, PSize retval)
{
	*(QSize *)retval = ((QLayoutItem *)handle)->maximumSize();
}

C_EXPORT unsigned int QLayoutItem_expandingDirections(QLayoutItemH handle)
{
	return (unsigned int) ((QLayoutItem *)handle)->expandingDirections();
}

C_EXPORT void QLayoutItem_setGeometry(QLayoutItemH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QLayoutItem *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT void QLayoutItem_geometry(QLayoutItemH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QLayoutItem *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QLayoutItem_isEmpty(QLayoutItemH handle)
{
	return (bool) ((QLayoutItem *)handle)->isEmpty();
}

C_EXPORT bool QLayoutItem_hasHeightForWidth(QLayoutItemH handle)
{
	return (bool) ((QLayoutItem *)handle)->hasHeightForWidth();
}

C_EXPORT int QLayoutItem_heightForWidth(QLayoutItemH handle, int AnonParam1)
{
	return (int) ((QLayoutItem *)handle)->heightForWidth(AnonParam1);
}

C_EXPORT int QLayoutItem_minimumHeightForWidth(QLayoutItemH handle, int AnonParam1)
{
	return (int) ((QLayoutItem *)handle)->minimumHeightForWidth(AnonParam1);
}

C_EXPORT void QLayoutItem_invalidate(QLayoutItemH handle)
{
	((QLayoutItem *)handle)->invalidate();
}

C_EXPORT QWidgetH QLayoutItem_widget(QLayoutItemH handle)
{
	return (QWidgetH) ((QLayoutItem *)handle)->widget();
}

C_EXPORT QLayoutH QLayoutItem_layout(QLayoutItemH handle)
{
	return (QLayoutH) ((QLayoutItem *)handle)->layout();
}

C_EXPORT QSpacerItemH QLayoutItem_spacerItem(QLayoutItemH handle)
{
	return (QSpacerItemH) ((QLayoutItem *)handle)->spacerItem();
}

C_EXPORT unsigned int QLayoutItem_alignment(QLayoutItemH handle)
{
	return (unsigned int) ((QLayoutItem *)handle)->alignment();
}

C_EXPORT void QLayoutItem_setAlignment(QLayoutItemH handle, unsigned int a)
{
	((QLayoutItem *)handle)->setAlignment((Qt::Alignment)a);
}

C_EXPORT unsigned int QLayoutItem_controlTypes(QLayoutItemH handle)
{
	return (unsigned int) ((QLayoutItem *)handle)->controlTypes();
}

C_EXPORT QSpacerItemH QSpacerItem_create(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData)
{
	return (QSpacerItemH) new QSpacerItem(w, h, hData, vData);
}

C_EXPORT void QSpacerItem_destroy(QSpacerItemH handle)
{
	delete (QSpacerItem *)handle;
}

C_EXPORT void QSpacerItem_changeSize(QSpacerItemH handle, int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData)
{
	((QSpacerItem *)handle)->changeSize(w, h, hData, vData);
}

C_EXPORT void QSpacerItem_sizeHint(QSpacerItemH handle, PSize retval)
{
	*(QSize *)retval = ((QSpacerItem *)handle)->sizeHint();
}

C_EXPORT void QSpacerItem_minimumSize(QSpacerItemH handle, PSize retval)
{
	*(QSize *)retval = ((QSpacerItem *)handle)->minimumSize();
}

C_EXPORT void QSpacerItem_maximumSize(QSpacerItemH handle, PSize retval)
{
	*(QSize *)retval = ((QSpacerItem *)handle)->maximumSize();
}

C_EXPORT unsigned int QSpacerItem_expandingDirections(QSpacerItemH handle)
{
	return (unsigned int) ((QSpacerItem *)handle)->expandingDirections();
}

C_EXPORT bool QSpacerItem_isEmpty(QSpacerItemH handle)
{
	return (bool) ((QSpacerItem *)handle)->isEmpty();
}

C_EXPORT void QSpacerItem_setGeometry(QSpacerItemH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QSpacerItem *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT void QSpacerItem_geometry(QSpacerItemH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QSpacerItem *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT QSpacerItemH QSpacerItem_spacerItem(QSpacerItemH handle)
{
	return (QSpacerItemH) ((QSpacerItem *)handle)->spacerItem();
}

C_EXPORT QWidgetItemH QWidgetItem_create(QWidgetH w)
{
	return (QWidgetItemH) new QWidgetItem((QWidget*)w);
}

C_EXPORT void QWidgetItem_destroy(QWidgetItemH handle)
{
	delete (QWidgetItem *)handle;
}

C_EXPORT void QWidgetItem_sizeHint(QWidgetItemH handle, PSize retval)
{
	*(QSize *)retval = ((QWidgetItem *)handle)->sizeHint();
}

C_EXPORT void QWidgetItem_minimumSize(QWidgetItemH handle, PSize retval)
{
	*(QSize *)retval = ((QWidgetItem *)handle)->minimumSize();
}

C_EXPORT void QWidgetItem_maximumSize(QWidgetItemH handle, PSize retval)
{
	*(QSize *)retval = ((QWidgetItem *)handle)->maximumSize();
}

C_EXPORT unsigned int QWidgetItem_expandingDirections(QWidgetItemH handle)
{
	return (unsigned int) ((QWidgetItem *)handle)->expandingDirections();
}

C_EXPORT bool QWidgetItem_isEmpty(QWidgetItemH handle)
{
	return (bool) ((QWidgetItem *)handle)->isEmpty();
}

C_EXPORT void QWidgetItem_setGeometry(QWidgetItemH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QWidgetItem *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT void QWidgetItem_geometry(QWidgetItemH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidgetItem *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT QWidgetH QWidgetItem_widget(QWidgetItemH handle)
{
	return (QWidgetH) ((QWidgetItem *)handle)->widget();
}

C_EXPORT bool QWidgetItem_hasHeightForWidth(QWidgetItemH handle)
{
	return (bool) ((QWidgetItem *)handle)->hasHeightForWidth();
}

C_EXPORT int QWidgetItem_heightForWidth(QWidgetItemH handle, int AnonParam1)
{
	return (int) ((QWidgetItem *)handle)->heightForWidth(AnonParam1);
}

