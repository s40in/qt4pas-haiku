//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QStackedLayoutH QStackedLayout_create()
{
	return (QStackedLayoutH) new QStackedLayout();
}

C_EXPORT void QStackedLayout_destroy(QStackedLayoutH handle)
{
	delete (QStackedLayout *)handle;
}

C_EXPORT QStackedLayoutH QStackedLayout_create2(QWidgetH parent)
{
	return (QStackedLayoutH) new QStackedLayout((QWidget*)parent);
}

C_EXPORT QStackedLayoutH QStackedLayout_create3(QLayoutH parentLayout)
{
	return (QStackedLayoutH) new QStackedLayout((QLayout*)parentLayout);
}

C_EXPORT int QStackedLayout_addWidget(QStackedLayoutH handle, QWidgetH w)
{
	return (int) ((QStackedLayout *)handle)->addWidget((QWidget*)w);
}

C_EXPORT int QStackedLayout_insertWidget(QStackedLayoutH handle, int index, QWidgetH w)
{
	return (int) ((QStackedLayout *)handle)->insertWidget(index, (QWidget*)w);
}

C_EXPORT QWidgetH QStackedLayout_currentWidget(QStackedLayoutH handle)
{
	return (QWidgetH) ((QStackedLayout *)handle)->currentWidget();
}

C_EXPORT int QStackedLayout_currentIndex(QStackedLayoutH handle)
{
	return (int) ((QStackedLayout *)handle)->currentIndex();
}

C_EXPORT QWidgetH QStackedLayout_widget(QStackedLayoutH handle, int AnonParam1)
{
	return (QWidgetH) ((QStackedLayout *)handle)->widget(AnonParam1);
}

C_EXPORT int QStackedLayout_count(QStackedLayoutH handle)
{
	return (int) ((QStackedLayout *)handle)->count();
}

C_EXPORT QStackedLayout::StackingMode QStackedLayout_stackingMode(QStackedLayoutH handle)
{
	return (QStackedLayout::StackingMode) ((QStackedLayout *)handle)->stackingMode();
}

C_EXPORT void QStackedLayout_setStackingMode(QStackedLayoutH handle, QStackedLayout::StackingMode stackingMode)
{
	((QStackedLayout *)handle)->setStackingMode(stackingMode);
}

C_EXPORT void QStackedLayout_addItem(QStackedLayoutH handle, QLayoutItemH item)
{
	((QStackedLayout *)handle)->addItem((QLayoutItem*)item);
}

C_EXPORT void QStackedLayout_sizeHint(QStackedLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QStackedLayout *)handle)->sizeHint();
}

C_EXPORT void QStackedLayout_minimumSize(QStackedLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QStackedLayout *)handle)->minimumSize();
}

C_EXPORT QLayoutItemH QStackedLayout_itemAt(QStackedLayoutH handle, int AnonParam1)
{
	return (QLayoutItemH) ((QStackedLayout *)handle)->itemAt(AnonParam1);
}

C_EXPORT QLayoutItemH QStackedLayout_takeAt(QStackedLayoutH handle, int AnonParam1)
{
	return (QLayoutItemH) ((QStackedLayout *)handle)->takeAt(AnonParam1);
}

C_EXPORT void QStackedLayout_setGeometry(QStackedLayoutH handle, PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	((QStackedLayout *)handle)->setGeometry(t_rect);
}

C_EXPORT void QStackedLayout_setCurrentIndex(QStackedLayoutH handle, int index)
{
	((QStackedLayout *)handle)->setCurrentIndex(index);
}

C_EXPORT void QStackedLayout_setCurrentWidget(QStackedLayoutH handle, QWidgetH w)
{
	((QStackedLayout *)handle)->setCurrentWidget((QWidget*)w);
}

