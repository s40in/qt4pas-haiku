//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QGridLayoutH QGridLayout_create(QWidgetH parent)
{
	return (QGridLayoutH) new QGridLayout((QWidget*)parent);
}

C_EXPORT void QGridLayout_destroy(QGridLayoutH handle)
{
	delete (QGridLayout *)handle;
}

C_EXPORT QGridLayoutH QGridLayout_create2()
{
	return (QGridLayoutH) new QGridLayout();
}

C_EXPORT void QGridLayout_sizeHint(QGridLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QGridLayout *)handle)->sizeHint();
}

C_EXPORT void QGridLayout_minimumSize(QGridLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QGridLayout *)handle)->minimumSize();
}

C_EXPORT void QGridLayout_maximumSize(QGridLayoutH handle, PSize retval)
{
	*(QSize *)retval = ((QGridLayout *)handle)->maximumSize();
}

C_EXPORT void QGridLayout_setHorizontalSpacing(QGridLayoutH handle, int spacing)
{
	((QGridLayout *)handle)->setHorizontalSpacing(spacing);
}

C_EXPORT int QGridLayout_horizontalSpacing(QGridLayoutH handle)
{
	return (int) ((QGridLayout *)handle)->horizontalSpacing();
}

C_EXPORT void QGridLayout_setVerticalSpacing(QGridLayoutH handle, int spacing)
{
	((QGridLayout *)handle)->setVerticalSpacing(spacing);
}

C_EXPORT int QGridLayout_verticalSpacing(QGridLayoutH handle)
{
	return (int) ((QGridLayout *)handle)->verticalSpacing();
}

C_EXPORT void QGridLayout_setSpacing(QGridLayoutH handle, int spacing)
{
	((QGridLayout *)handle)->setSpacing(spacing);
}

C_EXPORT int QGridLayout_spacing(QGridLayoutH handle)
{
	return (int) ((QGridLayout *)handle)->spacing();
}

C_EXPORT void QGridLayout_setRowStretch(QGridLayoutH handle, int row, int stretch)
{
	((QGridLayout *)handle)->setRowStretch(row, stretch);
}

C_EXPORT void QGridLayout_setColumnStretch(QGridLayoutH handle, int column, int stretch)
{
	((QGridLayout *)handle)->setColumnStretch(column, stretch);
}

C_EXPORT int QGridLayout_rowStretch(QGridLayoutH handle, int row)
{
	return (int) ((QGridLayout *)handle)->rowStretch(row);
}

C_EXPORT int QGridLayout_columnStretch(QGridLayoutH handle, int column)
{
	return (int) ((QGridLayout *)handle)->columnStretch(column);
}

C_EXPORT void QGridLayout_setRowMinimumHeight(QGridLayoutH handle, int row, int minSize)
{
	((QGridLayout *)handle)->setRowMinimumHeight(row, minSize);
}

C_EXPORT void QGridLayout_setColumnMinimumWidth(QGridLayoutH handle, int column, int minSize)
{
	((QGridLayout *)handle)->setColumnMinimumWidth(column, minSize);
}

C_EXPORT int QGridLayout_rowMinimumHeight(QGridLayoutH handle, int row)
{
	return (int) ((QGridLayout *)handle)->rowMinimumHeight(row);
}

C_EXPORT int QGridLayout_columnMinimumWidth(QGridLayoutH handle, int column)
{
	return (int) ((QGridLayout *)handle)->columnMinimumWidth(column);
}

C_EXPORT int QGridLayout_columnCount(QGridLayoutH handle)
{
	return (int) ((QGridLayout *)handle)->columnCount();
}

C_EXPORT int QGridLayout_rowCount(QGridLayoutH handle)
{
	return (int) ((QGridLayout *)handle)->rowCount();
}

C_EXPORT void QGridLayout_cellRect(QGridLayoutH handle, PRect retval, int row, int column)
{
	QRect t_retval;
	t_retval = ((QGridLayout *)handle)->cellRect(row, column);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QGridLayout_hasHeightForWidth(QGridLayoutH handle)
{
	return (bool) ((QGridLayout *)handle)->hasHeightForWidth();
}

C_EXPORT int QGridLayout_heightForWidth(QGridLayoutH handle, int AnonParam1)
{
	return (int) ((QGridLayout *)handle)->heightForWidth(AnonParam1);
}

C_EXPORT int QGridLayout_minimumHeightForWidth(QGridLayoutH handle, int AnonParam1)
{
	return (int) ((QGridLayout *)handle)->minimumHeightForWidth(AnonParam1);
}

C_EXPORT unsigned int QGridLayout_expandingDirections(QGridLayoutH handle)
{
	return (unsigned int) ((QGridLayout *)handle)->expandingDirections();
}

C_EXPORT void QGridLayout_invalidate(QGridLayoutH handle)
{
	((QGridLayout *)handle)->invalidate();
}

C_EXPORT void QGridLayout_addWidget(QGridLayoutH handle, QWidgetH w)
{
	((QGridLayout *)handle)->addWidget((QWidget*)w);
}

C_EXPORT void QGridLayout_addWidget2(QGridLayoutH handle, QWidgetH AnonParam1, int row, int column, unsigned int AnonParam4)
{
	((QGridLayout *)handle)->addWidget((QWidget*)AnonParam1, row, column, (Qt::Alignment)AnonParam4);
}

C_EXPORT void QGridLayout_addWidget3(QGridLayoutH handle, QWidgetH AnonParam1, int row, int column, int rowSpan, int columnSpan, unsigned int AnonParam6)
{
	((QGridLayout *)handle)->addWidget((QWidget*)AnonParam1, row, column, rowSpan, columnSpan, (Qt::Alignment)AnonParam6);
}

C_EXPORT void QGridLayout_addLayout(QGridLayoutH handle, QLayoutH AnonParam1, int row, int column, unsigned int AnonParam4)
{
	((QGridLayout *)handle)->addLayout((QLayout*)AnonParam1, row, column, (Qt::Alignment)AnonParam4);
}

C_EXPORT void QGridLayout_addLayout2(QGridLayoutH handle, QLayoutH AnonParam1, int row, int column, int rowSpan, int columnSpan, unsigned int AnonParam6)
{
	((QGridLayout *)handle)->addLayout((QLayout*)AnonParam1, row, column, rowSpan, columnSpan, (Qt::Alignment)AnonParam6);
}

C_EXPORT void QGridLayout_setOriginCorner(QGridLayoutH handle, Qt::Corner AnonParam1)
{
	((QGridLayout *)handle)->setOriginCorner(AnonParam1);
}

C_EXPORT Qt::Corner QGridLayout_originCorner(QGridLayoutH handle)
{
	return (Qt::Corner) ((QGridLayout *)handle)->originCorner();
}

C_EXPORT QLayoutItemH QGridLayout_itemAt(QGridLayoutH handle, int index)
{
	return (QLayoutItemH) ((QGridLayout *)handle)->itemAt(index);
}

C_EXPORT QLayoutItemH QGridLayout_itemAtPosition(QGridLayoutH handle, int row, int column)
{
	return (QLayoutItemH) ((QGridLayout *)handle)->itemAtPosition(row, column);
}

C_EXPORT QLayoutItemH QGridLayout_takeAt(QGridLayoutH handle, int index)
{
	return (QLayoutItemH) ((QGridLayout *)handle)->takeAt(index);
}

C_EXPORT int QGridLayout_count(QGridLayoutH handle)
{
	return (int) ((QGridLayout *)handle)->count();
}

C_EXPORT void QGridLayout_setGeometry(QGridLayoutH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QGridLayout *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT void QGridLayout_addItem(QGridLayoutH handle, QLayoutItemH item, int row, int column, int rowSpan, int columnSpan, unsigned int AnonParam6)
{
	((QGridLayout *)handle)->addItem((QLayoutItem*)item, row, column, rowSpan, columnSpan, (Qt::Alignment)AnonParam6);
}

C_EXPORT void QGridLayout_setDefaultPositioning(QGridLayoutH handle, int n, Qt::Orientation orient)
{
	((QGridLayout *)handle)->setDefaultPositioning(n, orient);
}

C_EXPORT void QGridLayout_getItemPosition(QGridLayoutH handle, int idx, int* row, int* column, int* rowSpan, int* columnSpan)
{
	((QGridLayout *)handle)->getItemPosition(idx, row, column, rowSpan, columnSpan);
}

