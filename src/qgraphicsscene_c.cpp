//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QGraphicsSceneH QGraphicsScene_create(QObjectH parent)
{
	return (QGraphicsSceneH) new QGraphicsScene((QObject*)parent);
}

C_EXPORT void QGraphicsScene_destroy(QGraphicsSceneH handle)
{
	delete (QGraphicsScene *)handle;
}

C_EXPORT QGraphicsSceneH QGraphicsScene_create2(const QRectFH sceneRect, QObjectH parent)
{
	return (QGraphicsSceneH) new QGraphicsScene(*(const QRectF*)sceneRect, (QObject*)parent);
}

C_EXPORT QGraphicsSceneH QGraphicsScene_create3(qreal x, qreal y, qreal width, qreal height, QObjectH parent)
{
	return (QGraphicsSceneH) new QGraphicsScene(x, y, width, height, (QObject*)parent);
}

C_EXPORT void QGraphicsScene_sceneRect(QGraphicsSceneH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QGraphicsScene *)handle)->sceneRect();
}

C_EXPORT qreal QGraphicsScene_width(QGraphicsSceneH handle)
{
	return (qreal) ((QGraphicsScene *)handle)->width();
}

C_EXPORT qreal QGraphicsScene_height(QGraphicsSceneH handle)
{
	return (qreal) ((QGraphicsScene *)handle)->height();
}

C_EXPORT void QGraphicsScene_setSceneRect(QGraphicsSceneH handle, const QRectFH rect)
{
	((QGraphicsScene *)handle)->setSceneRect(*(const QRectF*)rect);
}

C_EXPORT void QGraphicsScene_setSceneRect2(QGraphicsSceneH handle, qreal x, qreal y, qreal w, qreal h)
{
	((QGraphicsScene *)handle)->setSceneRect(x, y, w, h);
}

C_EXPORT void QGraphicsScene_render(QGraphicsSceneH handle, QPainterH painter, const QRectFH target, const QRectFH source, Qt::AspectRatioMode aspectRatioMode)
{
	((QGraphicsScene *)handle)->render((QPainter*)painter, *(const QRectF*)target, *(const QRectF*)source, aspectRatioMode);
}

C_EXPORT QGraphicsScene::ItemIndexMethod QGraphicsScene_itemIndexMethod(QGraphicsSceneH handle)
{
	return (QGraphicsScene::ItemIndexMethod) ((QGraphicsScene *)handle)->itemIndexMethod();
}

C_EXPORT void QGraphicsScene_setItemIndexMethod(QGraphicsSceneH handle, QGraphicsScene::ItemIndexMethod method)
{
	((QGraphicsScene *)handle)->setItemIndexMethod(method);
}

C_EXPORT bool QGraphicsScene_isSortCacheEnabled(QGraphicsSceneH handle)
{
	return (bool) ((QGraphicsScene *)handle)->isSortCacheEnabled();
}

C_EXPORT void QGraphicsScene_setSortCacheEnabled(QGraphicsSceneH handle, bool enabled)
{
	((QGraphicsScene *)handle)->setSortCacheEnabled(enabled);
}

C_EXPORT int QGraphicsScene_bspTreeDepth(QGraphicsSceneH handle)
{
	return (int) ((QGraphicsScene *)handle)->bspTreeDepth();
}

C_EXPORT void QGraphicsScene_setBspTreeDepth(QGraphicsSceneH handle, int depth)
{
	((QGraphicsScene *)handle)->setBspTreeDepth(depth);
}

C_EXPORT void QGraphicsScene_itemsBoundingRect(QGraphicsSceneH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QGraphicsScene *)handle)->itemsBoundingRect();
}

C_EXPORT void QGraphicsScene_items(QGraphicsSceneH handle, PPtrIntArray retval)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->items();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_items2(QGraphicsSceneH handle, PPtrIntArray retval, const QPointFH pos)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->items(*(const QPointF*)pos);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_items3(QGraphicsSceneH handle, PPtrIntArray retval, const QRectFH rect, Qt::ItemSelectionMode mode)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->items(*(const QRectF*)rect, mode);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_items4(QGraphicsSceneH handle, PPtrIntArray retval, const QPolygonFH polygon, Qt::ItemSelectionMode mode)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->items(*(const QPolygonF*)polygon, mode);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_items5(QGraphicsSceneH handle, PPtrIntArray retval, const QPainterPathH path, Qt::ItemSelectionMode mode)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->items(*(const QPainterPath*)path, mode);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_collidingItems(QGraphicsSceneH handle, PPtrIntArray retval, const QGraphicsItemH item, Qt::ItemSelectionMode mode)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->collidingItems((const QGraphicsItem*)item, mode);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QGraphicsItemH QGraphicsScene_itemAt(QGraphicsSceneH handle, const QPointFH pos)
{
	return (QGraphicsItemH) ((QGraphicsScene *)handle)->itemAt(*(const QPointF*)pos);
}

C_EXPORT void QGraphicsScene_items6(QGraphicsSceneH handle, PPtrIntArray retval, qreal x, qreal y, qreal w, qreal h, Qt::ItemSelectionMode mode)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->items(x, y, w, h, mode);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QGraphicsItemH QGraphicsScene_itemAt2(QGraphicsSceneH handle, qreal x, qreal y)
{
	return (QGraphicsItemH) ((QGraphicsScene *)handle)->itemAt(x, y);
}

C_EXPORT void QGraphicsScene_selectedItems(QGraphicsSceneH handle, PPtrIntArray retval)
{
	QList<QGraphicsItem*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->selectedItems();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_selectionArea(QGraphicsSceneH handle, QPainterPathH retval)
{
	*(QPainterPath *)retval = ((QGraphicsScene *)handle)->selectionArea();
}

C_EXPORT void QGraphicsScene_setSelectionArea(QGraphicsSceneH handle, const QPainterPathH path)
{
	((QGraphicsScene *)handle)->setSelectionArea(*(const QPainterPath*)path);
}

C_EXPORT void QGraphicsScene_setSelectionArea2(QGraphicsSceneH handle, const QPainterPathH path, Qt::ItemSelectionMode AnonParam2)
{
	((QGraphicsScene *)handle)->setSelectionArea(*(const QPainterPath*)path, AnonParam2);
}

C_EXPORT QGraphicsItemGroupH QGraphicsScene_createItemGroup(QGraphicsSceneH handle, PPtrIntArray items)
{
	QList<QGraphicsItem*> t_items;
	copyPtrIntArrayToQListTemplate(items, t_items);
	return (QGraphicsItemGroupH) ((QGraphicsScene *)handle)->createItemGroup(t_items);
}

C_EXPORT void QGraphicsScene_destroyItemGroup(QGraphicsSceneH handle, QGraphicsItemGroupH group)
{
	((QGraphicsScene *)handle)->destroyItemGroup((QGraphicsItemGroup*)group);
}

C_EXPORT void QGraphicsScene_addItem(QGraphicsSceneH handle, QGraphicsItemH item)
{
	((QGraphicsScene *)handle)->addItem((QGraphicsItem*)item);
}

C_EXPORT QGraphicsEllipseItemH QGraphicsScene_addEllipse(QGraphicsSceneH handle, const QRectFH rect, const QPenH pen, const QBrushH brush)
{
	return (QGraphicsEllipseItemH) ((QGraphicsScene *)handle)->addEllipse(*(const QRectF*)rect, *(const QPen*)pen, *(const QBrush*)brush);
}

C_EXPORT QGraphicsLineItemH QGraphicsScene_addLine(QGraphicsSceneH handle, const QLineFH line, const QPenH pen)
{
	return (QGraphicsLineItemH) ((QGraphicsScene *)handle)->addLine(*(const QLineF*)line, *(const QPen*)pen);
}

C_EXPORT QGraphicsPathItemH QGraphicsScene_addPath(QGraphicsSceneH handle, const QPainterPathH path, const QPenH pen, const QBrushH brush)
{
	return (QGraphicsPathItemH) ((QGraphicsScene *)handle)->addPath(*(const QPainterPath*)path, *(const QPen*)pen, *(const QBrush*)brush);
}

C_EXPORT QGraphicsPixmapItemH QGraphicsScene_addPixmap(QGraphicsSceneH handle, const QPixmapH pixmap)
{
	return (QGraphicsPixmapItemH) ((QGraphicsScene *)handle)->addPixmap(*(const QPixmap*)pixmap);
}

C_EXPORT QGraphicsPolygonItemH QGraphicsScene_addPolygon(QGraphicsSceneH handle, const QPolygonFH polygon, const QPenH pen, const QBrushH brush)
{
	return (QGraphicsPolygonItemH) ((QGraphicsScene *)handle)->addPolygon(*(const QPolygonF*)polygon, *(const QPen*)pen, *(const QBrush*)brush);
}

C_EXPORT QGraphicsRectItemH QGraphicsScene_addRect(QGraphicsSceneH handle, const QRectFH rect, const QPenH pen, const QBrushH brush)
{
	return (QGraphicsRectItemH) ((QGraphicsScene *)handle)->addRect(*(const QRectF*)rect, *(const QPen*)pen, *(const QBrush*)brush);
}

C_EXPORT QGraphicsTextItemH QGraphicsScene_addText(QGraphicsSceneH handle, PWideString text, const QFontH font)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QGraphicsTextItemH) ((QGraphicsScene *)handle)->addText(t_text, *(const QFont*)font);
}

C_EXPORT QGraphicsSimpleTextItemH QGraphicsScene_addSimpleText(QGraphicsSceneH handle, PWideString text, const QFontH font)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QGraphicsSimpleTextItemH) ((QGraphicsScene *)handle)->addSimpleText(t_text, *(const QFont*)font);
}

C_EXPORT QGraphicsProxyWidgetH QGraphicsScene_addWidget(QGraphicsSceneH handle, QWidgetH widget, unsigned int wFlags)
{
	return (QGraphicsProxyWidgetH) ((QGraphicsScene *)handle)->addWidget((QWidget*)widget, (Qt::WindowFlags)wFlags);
}

C_EXPORT QGraphicsEllipseItemH QGraphicsScene_addEllipse2(QGraphicsSceneH handle, qreal x, qreal y, qreal w, qreal h, const QPenH pen, const QBrushH brush)
{
	return (QGraphicsEllipseItemH) ((QGraphicsScene *)handle)->addEllipse(x, y, w, h, *(const QPen*)pen, *(const QBrush*)brush);
}

C_EXPORT QGraphicsLineItemH QGraphicsScene_addLine2(QGraphicsSceneH handle, qreal x1, qreal y1, qreal x2, qreal y2, const QPenH pen)
{
	return (QGraphicsLineItemH) ((QGraphicsScene *)handle)->addLine(x1, y1, x2, y2, *(const QPen*)pen);
}

C_EXPORT QGraphicsRectItemH QGraphicsScene_addRect2(QGraphicsSceneH handle, qreal x, qreal y, qreal w, qreal h, const QPenH pen, const QBrushH brush)
{
	return (QGraphicsRectItemH) ((QGraphicsScene *)handle)->addRect(x, y, w, h, *(const QPen*)pen, *(const QBrush*)brush);
}

C_EXPORT void QGraphicsScene_removeItem(QGraphicsSceneH handle, QGraphicsItemH item)
{
	((QGraphicsScene *)handle)->removeItem((QGraphicsItem*)item);
}

C_EXPORT QGraphicsItemH QGraphicsScene_focusItem(QGraphicsSceneH handle)
{
	return (QGraphicsItemH) ((QGraphicsScene *)handle)->focusItem();
}

C_EXPORT void QGraphicsScene_setFocusItem(QGraphicsSceneH handle, QGraphicsItemH item, Qt::FocusReason focusReason)
{
	((QGraphicsScene *)handle)->setFocusItem((QGraphicsItem*)item, focusReason);
}

C_EXPORT bool QGraphicsScene_hasFocus(QGraphicsSceneH handle)
{
	return (bool) ((QGraphicsScene *)handle)->hasFocus();
}

C_EXPORT void QGraphicsScene_setFocus(QGraphicsSceneH handle, Qt::FocusReason focusReason)
{
	((QGraphicsScene *)handle)->setFocus(focusReason);
}

C_EXPORT void QGraphicsScene_clearFocus(QGraphicsSceneH handle)
{
	((QGraphicsScene *)handle)->clearFocus();
}

C_EXPORT void QGraphicsScene_setStickyFocus(QGraphicsSceneH handle, bool enabled)
{
	((QGraphicsScene *)handle)->setStickyFocus(enabled);
}

C_EXPORT bool QGraphicsScene_stickyFocus(QGraphicsSceneH handle)
{
	return (bool) ((QGraphicsScene *)handle)->stickyFocus();
}

C_EXPORT QGraphicsItemH QGraphicsScene_mouseGrabberItem(QGraphicsSceneH handle)
{
	return (QGraphicsItemH) ((QGraphicsScene *)handle)->mouseGrabberItem();
}

C_EXPORT void QGraphicsScene_backgroundBrush(QGraphicsSceneH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QGraphicsScene *)handle)->backgroundBrush();
}

C_EXPORT void QGraphicsScene_setBackgroundBrush(QGraphicsSceneH handle, const QBrushH brush)
{
	((QGraphicsScene *)handle)->setBackgroundBrush(*(const QBrush*)brush);
}

C_EXPORT void QGraphicsScene_foregroundBrush(QGraphicsSceneH handle, QBrushH retval)
{
	*(QBrush *)retval = ((QGraphicsScene *)handle)->foregroundBrush();
}

C_EXPORT void QGraphicsScene_setForegroundBrush(QGraphicsSceneH handle, const QBrushH brush)
{
	((QGraphicsScene *)handle)->setForegroundBrush(*(const QBrush*)brush);
}

C_EXPORT void QGraphicsScene_inputMethodQuery(QGraphicsSceneH handle, QVariantH retval, Qt::InputMethodQuery query)
{
	*(QVariant *)retval = ((QGraphicsScene *)handle)->inputMethodQuery(query);
}

C_EXPORT void QGraphicsScene_views(QGraphicsSceneH handle, PPtrIntArray retval)
{
	QList<QGraphicsView*> t_retval;
	t_retval = ((QGraphicsScene *)handle)->views();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QGraphicsScene_update(QGraphicsSceneH handle, qreal x, qreal y, qreal w, qreal h)
{
	((QGraphicsScene *)handle)->update(x, y, w, h);
}

C_EXPORT void QGraphicsScene_invalidate(QGraphicsSceneH handle, qreal x, qreal y, qreal w, qreal h, unsigned int layers)
{
	((QGraphicsScene *)handle)->invalidate(x, y, w, h, (QGraphicsScene::SceneLayers)layers);
}

C_EXPORT QStyleH QGraphicsScene_style(QGraphicsSceneH handle)
{
	return (QStyleH) ((QGraphicsScene *)handle)->style();
}

C_EXPORT void QGraphicsScene_setStyle(QGraphicsSceneH handle, QStyleH style)
{
	((QGraphicsScene *)handle)->setStyle((QStyle*)style);
}

C_EXPORT void QGraphicsScene_font(QGraphicsSceneH handle, QFontH retval)
{
	*(QFont *)retval = ((QGraphicsScene *)handle)->font();
}

C_EXPORT void QGraphicsScene_setFont(QGraphicsSceneH handle, const QFontH font)
{
	((QGraphicsScene *)handle)->setFont(*(const QFont*)font);
}

C_EXPORT void QGraphicsScene_palette(QGraphicsSceneH handle, QPaletteH retval)
{
	*(QPalette *)retval = ((QGraphicsScene *)handle)->palette();
}

C_EXPORT void QGraphicsScene_setPalette(QGraphicsSceneH handle, const QPaletteH palette)
{
	((QGraphicsScene *)handle)->setPalette(*(const QPalette*)palette);
}

C_EXPORT QGraphicsWidgetH QGraphicsScene_activeWindow(QGraphicsSceneH handle)
{
	return (QGraphicsWidgetH) ((QGraphicsScene *)handle)->activeWindow();
}

C_EXPORT void QGraphicsScene_setActiveWindow(QGraphicsSceneH handle, QGraphicsWidgetH widget)
{
	((QGraphicsScene *)handle)->setActiveWindow((QGraphicsWidget*)widget);
}

C_EXPORT void QGraphicsScene_update2(QGraphicsSceneH handle, const QRectFH rect)
{
	((QGraphicsScene *)handle)->update(*(const QRectF*)rect);
}

C_EXPORT void QGraphicsScene_invalidate2(QGraphicsSceneH handle, const QRectFH rect, unsigned int layers)
{
	((QGraphicsScene *)handle)->invalidate(*(const QRectF*)rect, (QGraphicsScene::SceneLayers)layers);
}

C_EXPORT void QGraphicsScene_advance(QGraphicsSceneH handle)
{
	((QGraphicsScene *)handle)->advance();
}

C_EXPORT void QGraphicsScene_clearSelection(QGraphicsSceneH handle)
{
	((QGraphicsScene *)handle)->clearSelection();
}

C_EXPORT void QGraphicsScene_clear(QGraphicsSceneH handle)
{
	((QGraphicsScene *)handle)->clear();
}

