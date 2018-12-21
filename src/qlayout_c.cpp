//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT int QLayout_margin(QLayoutH handle)
{
	return (int) ((QLayout *)handle)->margin();
}

C_EXPORT int QLayout_spacing(QLayoutH handle)
{
	return (int) ((QLayout *)handle)->spacing();
}

C_EXPORT void QLayout_setMargin(QLayoutH handle, int AnonParam1)
{
	((QLayout *)handle)->setMargin(AnonParam1);
}

C_EXPORT void QLayout_setSpacing(QLayoutH handle, int AnonParam1)
{
	((QLayout *)handle)->setSpacing(AnonParam1);
}

C_EXPORT void QLayout_setContentsMargins(QLayoutH handle, int left, int top, int right, int bottom)
{
	((QLayout *)handle)->setContentsMargins(left, top, right, bottom);
}

C_EXPORT void QLayout_getContentsMargins(QLayoutH handle, int* left, int* top, int* right, int* bottom)
{
	((QLayout *)handle)->getContentsMargins(left, top, right, bottom);
}

C_EXPORT void QLayout_contentsRect(QLayoutH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QLayout *)handle)->contentsRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QLayout_setAlignment(QLayoutH handle, QWidgetH w, unsigned int alignment)
{
	return (bool) ((QLayout *)handle)->setAlignment((QWidget*)w, (Qt::Alignment)alignment);
}

C_EXPORT bool QLayout_setAlignment2(QLayoutH handle, QLayoutH l, unsigned int alignment)
{
	return (bool) ((QLayout *)handle)->setAlignment((QLayout*)l, (Qt::Alignment)alignment);
}

C_EXPORT void QLayout_setSizeConstraint(QLayoutH handle, QLayout::SizeConstraint AnonParam1)
{
	((QLayout *)handle)->setSizeConstraint(AnonParam1);
}

C_EXPORT QLayout::SizeConstraint QLayout_sizeConstraint(QLayoutH handle)
{
	return (QLayout::SizeConstraint) ((QLayout *)handle)->sizeConstraint();
}

C_EXPORT void QLayout_setMenuBar(QLayoutH handle, QWidgetH w)
{
	((QLayout *)handle)->setMenuBar((QWidget*)w);
}

C_EXPORT QWidgetH QLayout_menuBar(QLayoutH handle)
{
	return (QWidgetH) ((QLayout *)handle)->menuBar();
}

C_EXPORT QWidgetH QLayout_parentWidget(QLayoutH handle)
{
	return (QWidgetH) ((QLayout *)handle)->parentWidget();
}

C_EXPORT void QLayout_invalidate(QLayoutH handle)
{
	((QLayout *)handle)->invalidate();
}

C_EXPORT void QLayout_geometry(QLayoutH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QLayout *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QLayout_activate(QLayoutH handle)
{
	return (bool) ((QLayout *)handle)->activate();
}

C_EXPORT void QLayout_update(QLayoutH handle)
{
	((QLayout *)handle)->update();
}

C_EXPORT void QLayout_addWidget(QLayoutH handle, QWidgetH w)
{
	((QLayout *)handle)->addWidget((QWidget*)w);
}

C_EXPORT void QLayout_addItem(QLayoutH handle, QLayoutItemH AnonParam1)
{
	((QLayout *)handle)->addItem((QLayoutItem*)AnonParam1);
}

C_EXPORT void QLayout_removeWidget(QLayoutH handle, QWidgetH w)
{
	((QLayout *)handle)->removeWidget((QWidget*)w);
}

C_EXPORT void QLayout_removeItem(QLayoutH handle, QLayoutItemH AnonParam1)
{
	((QLayout *)handle)->removeItem((QLayoutItem*)AnonParam1);
}

C_EXPORT unsigned int QLayout_expandingDirections(QLayoutH handle)
{
	return (unsigned int) ((QLayout *)handle)->expandingDirections();
}

C_EXPORT void QLayout_minimumSize(QLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QLayout *)handle)->minimumSize();
}

C_EXPORT void QLayout_maximumSize(QLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QLayout *)handle)->maximumSize();
}

C_EXPORT void QLayout_setGeometry(QLayoutH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QLayout *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT QLayoutItemH QLayout_itemAt(QLayoutH handle, int index)
{
	return (QLayoutItemH) ((QLayout *)handle)->itemAt(index);
}

C_EXPORT QLayoutItemH QLayout_takeAt(QLayoutH handle, int index)
{
	return (QLayoutItemH) ((QLayout *)handle)->takeAt(index);
}

C_EXPORT int QLayout_indexOf(QLayoutH handle, QWidgetH AnonParam1)
{
	return (int) ((QLayout *)handle)->indexOf((QWidget*)AnonParam1);
}

C_EXPORT int QLayout_count(QLayoutH handle)
{
	return (int) ((QLayout *)handle)->count();
}

C_EXPORT bool QLayout_isEmpty(QLayoutH handle)
{
	return (bool) ((QLayout *)handle)->isEmpty();
}

C_EXPORT int QLayout_totalHeightForWidth(QLayoutH handle, int w)
{
	return (int) ((QLayout *)handle)->totalHeightForWidth(w);
}

C_EXPORT void QLayout_totalMinimumSize(QLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QLayout *)handle)->totalMinimumSize();
}

C_EXPORT void QLayout_totalMaximumSize(QLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QLayout *)handle)->totalMaximumSize();
}

C_EXPORT void QLayout_totalSizeHint(QLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QLayout *)handle)->totalSizeHint();
}

C_EXPORT QLayoutH QLayout_layout(QLayoutH handle)
{
	return (QLayoutH) ((QLayout *)handle)->layout();
}

C_EXPORT void QLayout_setEnabled(QLayoutH handle, bool AnonParam1)
{
	((QLayout *)handle)->setEnabled(AnonParam1);
}

C_EXPORT bool QLayout_isEnabled(QLayoutH handle)
{
	return (bool) ((QLayout *)handle)->isEnabled();
}

C_EXPORT void QLayout_closestAcceptableSize(PSize retval, const QWidgetH w, const QSizeH s)
{
	*(QSize *)retval = QLayout::closestAcceptableSize((const QWidget*)w, *(const QSize*)s);
}

C_EXPORT QLayoutItemH QLayout_to_QLayoutItem(QLayoutH handle)
{
	return (QLayoutItemH)(QLayoutItem *)(QLayout *)handle;
}

