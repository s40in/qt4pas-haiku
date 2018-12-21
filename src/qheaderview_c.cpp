//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QHeaderViewH QHeaderView_create(Qt::Orientation orientation, QWidgetH parent)
{
	return (QHeaderViewH) new QHeaderView(orientation, (QWidget*)parent);
}

C_EXPORT void QHeaderView_destroy(QHeaderViewH handle)
{
	delete (QHeaderView *)handle;
}

C_EXPORT void QHeaderView_setModel(QHeaderViewH handle, QAbstractItemModelH model)
{
	((QHeaderView *)handle)->setModel((QAbstractItemModel*)model);
}

C_EXPORT Qt::Orientation QHeaderView_orientation(QHeaderViewH handle)
{
	return (Qt::Orientation) ((QHeaderView *)handle)->orientation();
}

C_EXPORT int QHeaderView_offset(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->offset();
}

C_EXPORT int QHeaderView_length(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->length();
}

C_EXPORT void QHeaderView_sizeHint(QHeaderViewH handle, PSize retval)
{
	*(QSize *)retval = ((QHeaderView *)handle)->sizeHint();
}

C_EXPORT int QHeaderView_sectionSizeHint(QHeaderViewH handle, int logicalIndex)
{
	return (int) ((QHeaderView *)handle)->sectionSizeHint(logicalIndex);
}

C_EXPORT int QHeaderView_visualIndexAt(QHeaderViewH handle, int position)
{
	return (int) ((QHeaderView *)handle)->visualIndexAt(position);
}

C_EXPORT int QHeaderView_logicalIndexAt(QHeaderViewH handle, int position)
{
	return (int) ((QHeaderView *)handle)->logicalIndexAt(position);
}

C_EXPORT int QHeaderView_logicalIndexAt2(QHeaderViewH handle, int x, int y)
{
	return (int) ((QHeaderView *)handle)->logicalIndexAt(x, y);
}

C_EXPORT int QHeaderView_logicalIndexAt3(QHeaderViewH handle, const QPointH pos)
{
	return (int) ((QHeaderView *)handle)->logicalIndexAt(*(const QPoint*)pos);
}

C_EXPORT int QHeaderView_sectionSize(QHeaderViewH handle, int logicalIndex)
{
	return (int) ((QHeaderView *)handle)->sectionSize(logicalIndex);
}

C_EXPORT int QHeaderView_sectionPosition(QHeaderViewH handle, int logicalIndex)
{
	return (int) ((QHeaderView *)handle)->sectionPosition(logicalIndex);
}

C_EXPORT int QHeaderView_sectionViewportPosition(QHeaderViewH handle, int logicalIndex)
{
	return (int) ((QHeaderView *)handle)->sectionViewportPosition(logicalIndex);
}

C_EXPORT void QHeaderView_moveSection(QHeaderViewH handle, int from, int to)
{
	((QHeaderView *)handle)->moveSection(from, to);
}

C_EXPORT void QHeaderView_swapSections(QHeaderViewH handle, int first, int second)
{
	((QHeaderView *)handle)->swapSections(first, second);
}

C_EXPORT void QHeaderView_resizeSection(QHeaderViewH handle, int logicalIndex, int size)
{
	((QHeaderView *)handle)->resizeSection(logicalIndex, size);
}

C_EXPORT void QHeaderView_resizeSections(QHeaderViewH handle, QHeaderView::ResizeMode mode)
{
	((QHeaderView *)handle)->resizeSections(mode);
}

C_EXPORT bool QHeaderView_isSectionHidden(QHeaderViewH handle, int logicalIndex)
{
	return (bool) ((QHeaderView *)handle)->isSectionHidden(logicalIndex);
}

C_EXPORT void QHeaderView_setSectionHidden(QHeaderViewH handle, int logicalIndex, bool hide)
{
	((QHeaderView *)handle)->setSectionHidden(logicalIndex, hide);
}

C_EXPORT int QHeaderView_hiddenSectionCount(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->hiddenSectionCount();
}

C_EXPORT void QHeaderView_hideSection(QHeaderViewH handle, int logicalIndex)
{
	((QHeaderView *)handle)->hideSection(logicalIndex);
}

C_EXPORT void QHeaderView_showSection(QHeaderViewH handle, int logicalIndex)
{
	((QHeaderView *)handle)->showSection(logicalIndex);
}

C_EXPORT int QHeaderView_count(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->count();
}

C_EXPORT int QHeaderView_visualIndex(QHeaderViewH handle, int logicalIndex)
{
	return (int) ((QHeaderView *)handle)->visualIndex(logicalIndex);
}

C_EXPORT int QHeaderView_logicalIndex(QHeaderViewH handle, int visualIndex)
{
	return (int) ((QHeaderView *)handle)->logicalIndex(visualIndex);
}

C_EXPORT void QHeaderView_setMovable(QHeaderViewH handle, bool movable)
{
	((QHeaderView *)handle)->setMovable(movable);
}

C_EXPORT bool QHeaderView_isMovable(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->isMovable();
}

C_EXPORT void QHeaderView_setClickable(QHeaderViewH handle, bool clickable)
{
	((QHeaderView *)handle)->setClickable(clickable);
}

C_EXPORT bool QHeaderView_isClickable(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->isClickable();
}

C_EXPORT void QHeaderView_setHighlightSections(QHeaderViewH handle, bool highlight)
{
	((QHeaderView *)handle)->setHighlightSections(highlight);
}

C_EXPORT bool QHeaderView_highlightSections(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->highlightSections();
}

C_EXPORT void QHeaderView_setResizeMode(QHeaderViewH handle, QHeaderView::ResizeMode mode)
{
	((QHeaderView *)handle)->setResizeMode(mode);
}

C_EXPORT void QHeaderView_setResizeMode2(QHeaderViewH handle, int logicalIndex, QHeaderView::ResizeMode mode)
{
	((QHeaderView *)handle)->setResizeMode(logicalIndex, mode);
}

C_EXPORT QHeaderView::ResizeMode QHeaderView_resizeMode(QHeaderViewH handle, int logicalIndex)
{
	return (QHeaderView::ResizeMode) ((QHeaderView *)handle)->resizeMode(logicalIndex);
}

C_EXPORT int QHeaderView_stretchSectionCount(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->stretchSectionCount();
}

C_EXPORT void QHeaderView_setSortIndicatorShown(QHeaderViewH handle, bool show)
{
	((QHeaderView *)handle)->setSortIndicatorShown(show);
}

C_EXPORT bool QHeaderView_isSortIndicatorShown(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->isSortIndicatorShown();
}

C_EXPORT void QHeaderView_setSortIndicator(QHeaderViewH handle, int logicalIndex, Qt::SortOrder order)
{
	((QHeaderView *)handle)->setSortIndicator(logicalIndex, order);
}

C_EXPORT int QHeaderView_sortIndicatorSection(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->sortIndicatorSection();
}

C_EXPORT Qt::SortOrder QHeaderView_sortIndicatorOrder(QHeaderViewH handle)
{
	return (Qt::SortOrder) ((QHeaderView *)handle)->sortIndicatorOrder();
}

C_EXPORT bool QHeaderView_stretchLastSection(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->stretchLastSection();
}

C_EXPORT void QHeaderView_setStretchLastSection(QHeaderViewH handle, bool stretch)
{
	((QHeaderView *)handle)->setStretchLastSection(stretch);
}

C_EXPORT bool QHeaderView_cascadingSectionResizes(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->cascadingSectionResizes();
}

C_EXPORT void QHeaderView_setCascadingSectionResizes(QHeaderViewH handle, bool enable)
{
	((QHeaderView *)handle)->setCascadingSectionResizes(enable);
}

C_EXPORT int QHeaderView_defaultSectionSize(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->defaultSectionSize();
}

C_EXPORT void QHeaderView_setDefaultSectionSize(QHeaderViewH handle, int size)
{
	((QHeaderView *)handle)->setDefaultSectionSize(size);
}

C_EXPORT int QHeaderView_minimumSectionSize(QHeaderViewH handle)
{
	return (int) ((QHeaderView *)handle)->minimumSectionSize();
}

C_EXPORT void QHeaderView_setMinimumSectionSize(QHeaderViewH handle, int size)
{
	((QHeaderView *)handle)->setMinimumSectionSize(size);
}

C_EXPORT unsigned int QHeaderView_defaultAlignment(QHeaderViewH handle)
{
	return (unsigned int) ((QHeaderView *)handle)->defaultAlignment();
}

C_EXPORT void QHeaderView_setDefaultAlignment(QHeaderViewH handle, unsigned int alignment)
{
	((QHeaderView *)handle)->setDefaultAlignment((Qt::Alignment)alignment);
}

C_EXPORT void QHeaderView_doItemsLayout(QHeaderViewH handle)
{
	((QHeaderView *)handle)->doItemsLayout();
}

C_EXPORT bool QHeaderView_sectionsMoved(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->sectionsMoved();
}

C_EXPORT bool QHeaderView_sectionsHidden(QHeaderViewH handle)
{
	return (bool) ((QHeaderView *)handle)->sectionsHidden();
}

C_EXPORT void QHeaderView_saveState(QHeaderViewH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QHeaderView *)handle)->saveState();
}

C_EXPORT bool QHeaderView_restoreState(QHeaderViewH handle, const QByteArrayH state)
{
	return (bool) ((QHeaderView *)handle)->restoreState(*(const QByteArray*)state);
}

C_EXPORT void QHeaderView_reset(QHeaderViewH handle)
{
	((QHeaderView *)handle)->reset();
}

C_EXPORT void QHeaderView_setOffset(QHeaderViewH handle, int offset)
{
	((QHeaderView *)handle)->setOffset(offset);
}

C_EXPORT void QHeaderView_setOffsetToSectionPosition(QHeaderViewH handle, int visualIndex)
{
	((QHeaderView *)handle)->setOffsetToSectionPosition(visualIndex);
}

C_EXPORT void QHeaderView_setOffsetToLastSection(QHeaderViewH handle)
{
	((QHeaderView *)handle)->setOffsetToLastSection();
}

C_EXPORT void QHeaderView_headerDataChanged(QHeaderViewH handle, Qt::Orientation orientation, int logicalFirst, int logicalLast)
{
	((QHeaderView *)handle)->headerDataChanged(orientation, logicalFirst, logicalLast);
}

