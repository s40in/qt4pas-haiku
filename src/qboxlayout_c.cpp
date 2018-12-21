//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QBoxLayoutH QBoxLayout_create(QBoxLayout::Direction AnonParam1, QWidgetH parent)
{
	return (QBoxLayoutH) new QBoxLayout(AnonParam1, (QWidget*)parent);
}

C_EXPORT void QBoxLayout_destroy(QBoxLayoutH handle)
{
	delete (QBoxLayout *)handle;
}

C_EXPORT QBoxLayout::Direction QBoxLayout_direction(QBoxLayoutH handle)
{
	return (QBoxLayout::Direction) ((QBoxLayout *)handle)->direction();
}

C_EXPORT void QBoxLayout_setDirection(QBoxLayoutH handle, QBoxLayout::Direction AnonParam1)
{
	((QBoxLayout *)handle)->setDirection(AnonParam1);
}

C_EXPORT void QBoxLayout_addSpacing(QBoxLayoutH handle, int size)
{
	((QBoxLayout *)handle)->addSpacing(size);
}

C_EXPORT void QBoxLayout_addStretch(QBoxLayoutH handle, int stretch)
{
	((QBoxLayout *)handle)->addStretch(stretch);
}

C_EXPORT void QBoxLayout_addSpacerItem(QBoxLayoutH handle, QSpacerItemH spacerItem)
{
	((QBoxLayout *)handle)->addSpacerItem((QSpacerItem*)spacerItem);
}

C_EXPORT void QBoxLayout_addWidget(QBoxLayoutH handle, QWidgetH AnonParam1, int stretch, unsigned int alignment)
{
	((QBoxLayout *)handle)->addWidget((QWidget*)AnonParam1, stretch, (Qt::Alignment)alignment);
}

C_EXPORT void QBoxLayout_addLayout(QBoxLayoutH handle, QLayoutH layout, int stretch)
{
	((QBoxLayout *)handle)->addLayout((QLayout*)layout, stretch);
}

C_EXPORT void QBoxLayout_addStrut(QBoxLayoutH handle, int AnonParam1)
{
	((QBoxLayout *)handle)->addStrut(AnonParam1);
}

C_EXPORT void QBoxLayout_addItem(QBoxLayoutH handle, QLayoutItemH AnonParam1)
{
	((QBoxLayout *)handle)->addItem((QLayoutItem*)AnonParam1);
}

C_EXPORT void QBoxLayout_insertSpacing(QBoxLayoutH handle, int index, int size)
{
	((QBoxLayout *)handle)->insertSpacing(index, size);
}

C_EXPORT void QBoxLayout_insertStretch(QBoxLayoutH handle, int index, int stretch)
{
	((QBoxLayout *)handle)->insertStretch(index, stretch);
}

C_EXPORT void QBoxLayout_insertSpacerItem(QBoxLayoutH handle, int index, QSpacerItemH spacerItem)
{
	((QBoxLayout *)handle)->insertSpacerItem(index, (QSpacerItem*)spacerItem);
}

C_EXPORT void QBoxLayout_insertWidget(QBoxLayoutH handle, int index, QWidgetH widget, int stretch, unsigned int alignment)
{
	((QBoxLayout *)handle)->insertWidget(index, (QWidget*)widget, stretch, (Qt::Alignment)alignment);
}

C_EXPORT void QBoxLayout_insertLayout(QBoxLayoutH handle, int index, QLayoutH layout, int stretch)
{
	((QBoxLayout *)handle)->insertLayout(index, (QLayout*)layout, stretch);
}

C_EXPORT int QBoxLayout_spacing(QBoxLayoutH handle)
{
	return (int) ((QBoxLayout *)handle)->spacing();
}

C_EXPORT void QBoxLayout_setSpacing(QBoxLayoutH handle, int spacing)
{
	((QBoxLayout *)handle)->setSpacing(spacing);
}

C_EXPORT bool QBoxLayout_setStretchFactor(QBoxLayoutH handle, QWidgetH w, int stretch)
{
	return (bool) ((QBoxLayout *)handle)->setStretchFactor((QWidget*)w, stretch);
}

C_EXPORT bool QBoxLayout_setStretchFactor2(QBoxLayoutH handle, QLayoutH l, int stretch)
{
	return (bool) ((QBoxLayout *)handle)->setStretchFactor((QLayout*)l, stretch);
}

C_EXPORT void QBoxLayout_setStretch(QBoxLayoutH handle, int index, int stretch)
{
	((QBoxLayout *)handle)->setStretch(index, stretch);
}

C_EXPORT int QBoxLayout_stretch(QBoxLayoutH handle, int index)
{
	return (int) ((QBoxLayout *)handle)->stretch(index);
}

C_EXPORT void QBoxLayout_sizeHint(QBoxLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QBoxLayout *)handle)->sizeHint();
}

C_EXPORT void QBoxLayout_minimumSize(QBoxLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QBoxLayout *)handle)->minimumSize();
}

C_EXPORT void QBoxLayout_maximumSize(QBoxLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QBoxLayout *)handle)->maximumSize();
}

C_EXPORT bool QBoxLayout_hasHeightForWidth(QBoxLayoutH handle)
{
	return (bool) ((QBoxLayout *)handle)->hasHeightForWidth();
}

C_EXPORT int QBoxLayout_heightForWidth(QBoxLayoutH handle, int AnonParam1)
{
	return (int) ((QBoxLayout *)handle)->heightForWidth(AnonParam1);
}

C_EXPORT int QBoxLayout_minimumHeightForWidth(QBoxLayoutH handle, int AnonParam1)
{
	return (int) ((QBoxLayout *)handle)->minimumHeightForWidth(AnonParam1);
}

C_EXPORT unsigned int QBoxLayout_expandingDirections(QBoxLayoutH handle)
{
	return (unsigned int) ((QBoxLayout *)handle)->expandingDirections();
}

C_EXPORT void QBoxLayout_invalidate(QBoxLayoutH handle)
{
	((QBoxLayout *)handle)->invalidate();
}

C_EXPORT QLayoutItemH QBoxLayout_itemAt(QBoxLayoutH handle, int AnonParam1)
{
	return (QLayoutItemH) ((QBoxLayout *)handle)->itemAt(AnonParam1);
}

C_EXPORT QLayoutItemH QBoxLayout_takeAt(QBoxLayoutH handle, int AnonParam1)
{
	return (QLayoutItemH) ((QBoxLayout *)handle)->takeAt(AnonParam1);
}

C_EXPORT int QBoxLayout_count(QBoxLayoutH handle)
{
	return (int) ((QBoxLayout *)handle)->count();
}

C_EXPORT void QBoxLayout_setGeometry(QBoxLayoutH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QBoxLayout *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT QHBoxLayoutH QHBoxLayout_create()
{
	return (QHBoxLayoutH) new QHBoxLayout();
}

C_EXPORT void QHBoxLayout_destroy(QHBoxLayoutH handle)
{
	delete (QHBoxLayout *)handle;
}

C_EXPORT QHBoxLayoutH QHBoxLayout_create2(QWidgetH parent)
{
	return (QHBoxLayoutH) new QHBoxLayout((QWidget*)parent);
}

C_EXPORT QVBoxLayoutH QVBoxLayout_create()
{
	return (QVBoxLayoutH) new QVBoxLayout();
}

C_EXPORT void QVBoxLayout_destroy(QVBoxLayoutH handle)
{
	delete (QVBoxLayout *)handle;
}

C_EXPORT QVBoxLayoutH QVBoxLayout_create2(QWidgetH parent)
{
	return (QVBoxLayoutH) new QVBoxLayout((QWidget*)parent);
}

