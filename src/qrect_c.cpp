//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QRectH QRect_create()
{
	return (QRectH) new QRect();
}

C_EXPORT void QRect_destroy(QRectH handle)
{
	delete (QRect *)handle;
}

C_EXPORT QRectH QRect_create2(const QPointH topleft, const QPointH bottomright)
{
	return (QRectH) new QRect(*(const QPoint*)topleft, *(const QPoint*)bottomright);
}

C_EXPORT QRectH QRect_create3(const QPointH topleft, const QSizeH size)
{
	return (QRectH) new QRect(*(const QPoint*)topleft, *(const QSize*)size);
}

C_EXPORT QRectH QRect_create4(int left, int top, int width, int height)
{
	return (QRectH) new QRect(left, top, width, height);
}

C_EXPORT bool QRect_isNull(QRectH handle)
{
	return (bool) ((QRect *)handle)->isNull();
}

C_EXPORT bool QRect_isEmpty(QRectH handle)
{
	return (bool) ((QRect *)handle)->isEmpty();
}

C_EXPORT bool QRect_isValid(QRectH handle)
{
	return (bool) ((QRect *)handle)->isValid();
}

C_EXPORT int QRect_left(QRectH handle)
{
	return (int) ((QRect *)handle)->left();
}

C_EXPORT int QRect_top(QRectH handle)
{
	return (int) ((QRect *)handle)->top();
}

C_EXPORT int QRect_right(QRectH handle)
{
	return (int) ((QRect *)handle)->right();
}

C_EXPORT int QRect_bottom(QRectH handle)
{
	return (int) ((QRect *)handle)->bottom();
}

C_EXPORT void QRect_normalized(QRectH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QRect *)handle)->normalized();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT int QRect_x(QRectH handle)
{
	return (int) ((QRect *)handle)->x();
}

C_EXPORT int QRect_y(QRectH handle)
{
	return (int) ((QRect *)handle)->y();
}

C_EXPORT void QRect_setLeft(QRectH handle, int pos)
{
	((QRect *)handle)->setLeft(pos);
}

C_EXPORT void QRect_setTop(QRectH handle, int pos)
{
	((QRect *)handle)->setTop(pos);
}

C_EXPORT void QRect_setRight(QRectH handle, int pos)
{
	((QRect *)handle)->setRight(pos);
}

C_EXPORT void QRect_setBottom(QRectH handle, int pos)
{
	((QRect *)handle)->setBottom(pos);
}

C_EXPORT void QRect_setX(QRectH handle, int x)
{
	((QRect *)handle)->setX(x);
}

C_EXPORT void QRect_setY(QRectH handle, int y)
{
	((QRect *)handle)->setY(y);
}

C_EXPORT void QRect_setTopLeft(QRectH handle, const QPointH p)
{
	((QRect *)handle)->setTopLeft(*(const QPoint*)p);
}

C_EXPORT void QRect_setBottomRight(QRectH handle, const QPointH p)
{
	((QRect *)handle)->setBottomRight(*(const QPoint*)p);
}

C_EXPORT void QRect_setTopRight(QRectH handle, const QPointH p)
{
	((QRect *)handle)->setTopRight(*(const QPoint*)p);
}

C_EXPORT void QRect_setBottomLeft(QRectH handle, const QPointH p)
{
	((QRect *)handle)->setBottomLeft(*(const QPoint*)p);
}

C_EXPORT void QRect_topLeft(QRectH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QRect *)handle)->topLeft();
}

C_EXPORT void QRect_bottomRight(QRectH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QRect *)handle)->bottomRight();
}

C_EXPORT void QRect_topRight(QRectH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QRect *)handle)->topRight();
}

C_EXPORT void QRect_bottomLeft(QRectH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QRect *)handle)->bottomLeft();
}

C_EXPORT void QRect_center(QRectH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QRect *)handle)->center();
}

C_EXPORT void QRect_moveLeft(QRectH handle, int pos)
{
	((QRect *)handle)->moveLeft(pos);
}

C_EXPORT void QRect_moveTop(QRectH handle, int pos)
{
	((QRect *)handle)->moveTop(pos);
}

C_EXPORT void QRect_moveRight(QRectH handle, int pos)
{
	((QRect *)handle)->moveRight(pos);
}

C_EXPORT void QRect_moveBottom(QRectH handle, int pos)
{
	((QRect *)handle)->moveBottom(pos);
}

C_EXPORT void QRect_moveTopLeft(QRectH handle, const QPointH p)
{
	((QRect *)handle)->moveTopLeft(*(const QPoint*)p);
}

C_EXPORT void QRect_moveBottomRight(QRectH handle, const QPointH p)
{
	((QRect *)handle)->moveBottomRight(*(const QPoint*)p);
}

C_EXPORT void QRect_moveTopRight(QRectH handle, const QPointH p)
{
	((QRect *)handle)->moveTopRight(*(const QPoint*)p);
}

C_EXPORT void QRect_moveBottomLeft(QRectH handle, const QPointH p)
{
	((QRect *)handle)->moveBottomLeft(*(const QPoint*)p);
}

C_EXPORT void QRect_moveCenter(QRectH handle, const QPointH p)
{
	((QRect *)handle)->moveCenter(*(const QPoint*)p);
}

C_EXPORT void QRect_translate(QRectH handle, int dx, int dy)
{
	((QRect *)handle)->translate(dx, dy);
}

C_EXPORT void QRect_translate2(QRectH handle, const QPointH p)
{
	((QRect *)handle)->translate(*(const QPoint*)p);
}

C_EXPORT void QRect_translated(QRectH handle, PRect retval, int dx, int dy)
{
	QRect t_retval;
	t_retval = ((QRect *)handle)->translated(dx, dy);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRect_translated2(QRectH handle, PRect retval, const QPointH p)
{
	QRect t_retval;
	t_retval = ((QRect *)handle)->translated(*(const QPoint*)p);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRect_moveTo(QRectH handle, int x, int t)
{
	((QRect *)handle)->moveTo(x, t);
}

C_EXPORT void QRect_moveTo2(QRectH handle, const QPointH p)
{
	((QRect *)handle)->moveTo(*(const QPoint*)p);
}

C_EXPORT void QRect_setRect(QRectH handle, int x, int y, int w, int h)
{
	((QRect *)handle)->setRect(x, y, w, h);
}

C_EXPORT void QRect_getRect(QRectH handle, int* x, int* y, int* w, int* h)
{
	((QRect *)handle)->getRect(x, y, w, h);
}

C_EXPORT void QRect_setCoords(QRectH handle, int x1, int y1, int x2, int y2)
{
	((QRect *)handle)->setCoords(x1, y1, x2, y2);
}

C_EXPORT void QRect_getCoords(QRectH handle, int* x1, int* y1, int* x2, int* y2)
{
	((QRect *)handle)->getCoords(x1, y1, x2, y2);
}

C_EXPORT void QRect_adjust(QRectH handle, int x1, int y1, int x2, int y2)
{
	((QRect *)handle)->adjust(x1, y1, x2, y2);
}

C_EXPORT void QRect_adjusted(QRectH handle, PRect retval, int x1, int y1, int x2, int y2)
{
	QRect t_retval;
	t_retval = ((QRect *)handle)->adjusted(x1, y1, x2, y2);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRect_size(QRectH handle, PSize retval)
{
	*(QSize *)retval = ((QRect *)handle)->size();
}

C_EXPORT int QRect_width(QRectH handle)
{
	return (int) ((QRect *)handle)->width();
}

C_EXPORT int QRect_height(QRectH handle)
{
	return (int) ((QRect *)handle)->height();
}

C_EXPORT void QRect_setWidth(QRectH handle, int w)
{
	((QRect *)handle)->setWidth(w);
}

C_EXPORT void QRect_setHeight(QRectH handle, int h)
{
	((QRect *)handle)->setHeight(h);
}

C_EXPORT void QRect_setSize(QRectH handle, const QSizeH s)
{
	((QRect *)handle)->setSize(*(const QSize*)s);
}

C_EXPORT bool QRect_contains(QRectH handle, const QPointH p, bool proper)
{
	return (bool) ((QRect *)handle)->contains(*(const QPoint*)p, proper);
}

C_EXPORT bool QRect_contains2(QRectH handle, int x, int y)
{
	return (bool) ((QRect *)handle)->contains(x, y);
}

C_EXPORT bool QRect_contains3(QRectH handle, int x, int y, bool proper)
{
	return (bool) ((QRect *)handle)->contains(x, y, proper);
}

C_EXPORT bool QRect_contains4(QRectH handle, PRect r, bool proper)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	return (bool) ((QRect *)handle)->contains(t_r, proper);
}

C_EXPORT void QRect_unite(QRectH handle, PRect retval, PRect r)
{
	QRect t_retval;
	QRect t_r;
	copyPRectToQRect(r, t_r);
	t_retval = ((QRect *)handle)->unite(t_r);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRect_united(QRectH handle, PRect retval, PRect other)
{
	QRect t_retval;
	QRect t_other;
	copyPRectToQRect(other, t_other);
	t_retval = ((QRect *)handle)->united(t_other);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRect_intersect(QRectH handle, PRect retval, PRect r)
{
	QRect t_retval;
	QRect t_r;
	copyPRectToQRect(r, t_r);
	t_retval = ((QRect *)handle)->intersect(t_r);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRect_intersected(QRectH handle, PRect retval, PRect other)
{
	QRect t_retval;
	QRect t_other;
	copyPRectToQRect(other, t_other);
	t_retval = ((QRect *)handle)->intersected(t_other);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT bool QRect_intersects(QRectH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	return (bool) ((QRect *)handle)->intersects(t_r);
}

C_EXPORT QRectFH QRectF_create()
{
	return (QRectFH) new QRectF();
}

C_EXPORT void QRectF_destroy(QRectFH handle)
{
	delete (QRectF *)handle;
}

C_EXPORT QRectFH QRectF_create2(const QPointFH topleft, const QSizeFH size)
{
	return (QRectFH) new QRectF(*(const QPointF*)topleft, *(const QSizeF*)size);
}

C_EXPORT QRectFH QRectF_create3(const QPointFH topleft, const QPointFH bottomRight)
{
	return (QRectFH) new QRectF(*(const QPointF*)topleft, *(const QPointF*)bottomRight);
}

C_EXPORT QRectFH QRectF_create4(qreal left, qreal top, qreal width, qreal height)
{
	return (QRectFH) new QRectF(left, top, width, height);
}

C_EXPORT QRectFH QRectF_create5(PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	return (QRectFH) new QRectF(t_rect);
}

C_EXPORT bool QRectF_isNull(QRectFH handle)
{
	return (bool) ((QRectF *)handle)->isNull();
}

C_EXPORT bool QRectF_isEmpty(QRectFH handle)
{
	return (bool) ((QRectF *)handle)->isEmpty();
}

C_EXPORT bool QRectF_isValid(QRectFH handle)
{
	return (bool) ((QRectF *)handle)->isValid();
}

C_EXPORT void QRectF_normalized(QRectFH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QRectF *)handle)->normalized();
}

C_EXPORT qreal QRectF_left(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->left();
}

C_EXPORT qreal QRectF_top(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->top();
}

C_EXPORT qreal QRectF_right(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->right();
}

C_EXPORT qreal QRectF_bottom(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->bottom();
}

C_EXPORT qreal QRectF_x(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->x();
}

C_EXPORT qreal QRectF_y(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->y();
}

C_EXPORT void QRectF_setLeft(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->setLeft(pos);
}

C_EXPORT void QRectF_setTop(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->setTop(pos);
}

C_EXPORT void QRectF_setRight(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->setRight(pos);
}

C_EXPORT void QRectF_setBottom(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->setBottom(pos);
}

C_EXPORT void QRectF_setX(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->setX(pos);
}

C_EXPORT void QRectF_setY(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->setY(pos);
}

C_EXPORT void QRectF_topLeft(QRectFH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRectF *)handle)->topLeft();
}

C_EXPORT void QRectF_bottomRight(QRectFH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRectF *)handle)->bottomRight();
}

C_EXPORT void QRectF_topRight(QRectFH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRectF *)handle)->topRight();
}

C_EXPORT void QRectF_bottomLeft(QRectFH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRectF *)handle)->bottomLeft();
}

C_EXPORT void QRectF_center(QRectFH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QRectF *)handle)->center();
}

C_EXPORT void QRectF_setTopLeft(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->setTopLeft(*(const QPointF*)p);
}

C_EXPORT void QRectF_setBottomRight(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->setBottomRight(*(const QPointF*)p);
}

C_EXPORT void QRectF_setTopRight(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->setTopRight(*(const QPointF*)p);
}

C_EXPORT void QRectF_setBottomLeft(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->setBottomLeft(*(const QPointF*)p);
}

C_EXPORT void QRectF_moveLeft(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->moveLeft(pos);
}

C_EXPORT void QRectF_moveTop(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->moveTop(pos);
}

C_EXPORT void QRectF_moveRight(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->moveRight(pos);
}

C_EXPORT void QRectF_moveBottom(QRectFH handle, qreal pos)
{
	((QRectF *)handle)->moveBottom(pos);
}

C_EXPORT void QRectF_moveTopLeft(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->moveTopLeft(*(const QPointF*)p);
}

C_EXPORT void QRectF_moveBottomRight(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->moveBottomRight(*(const QPointF*)p);
}

C_EXPORT void QRectF_moveTopRight(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->moveTopRight(*(const QPointF*)p);
}

C_EXPORT void QRectF_moveBottomLeft(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->moveBottomLeft(*(const QPointF*)p);
}

C_EXPORT void QRectF_moveCenter(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->moveCenter(*(const QPointF*)p);
}

C_EXPORT void QRectF_translate(QRectFH handle, qreal dx, qreal dy)
{
	((QRectF *)handle)->translate(dx, dy);
}

C_EXPORT void QRectF_translate2(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->translate(*(const QPointF*)p);
}

C_EXPORT void QRectF_translated(QRectFH handle, QRectFH retval, qreal dx, qreal dy)
{
	*(QRectF *)retval = ((QRectF *)handle)->translated(dx, dy);
}

C_EXPORT void QRectF_translated2(QRectFH handle, QRectFH retval, const QPointFH p)
{
	*(QRectF *)retval = ((QRectF *)handle)->translated(*(const QPointF*)p);
}

C_EXPORT void QRectF_moveTo(QRectFH handle, qreal x, qreal t)
{
	((QRectF *)handle)->moveTo(x, t);
}

C_EXPORT void QRectF_moveTo2(QRectFH handle, const QPointFH p)
{
	((QRectF *)handle)->moveTo(*(const QPointF*)p);
}

C_EXPORT void QRectF_setRect(QRectFH handle, qreal x, qreal y, qreal w, qreal h)
{
	((QRectF *)handle)->setRect(x, y, w, h);
}

C_EXPORT void QRectF_getRect(QRectFH handle, qreal* x, qreal* y, qreal* w, qreal* h)
{
	((QRectF *)handle)->getRect(x, y, w, h);
}

C_EXPORT void QRectF_setCoords(QRectFH handle, qreal x1, qreal y1, qreal x2, qreal y2)
{
	((QRectF *)handle)->setCoords(x1, y1, x2, y2);
}

C_EXPORT void QRectF_getCoords(QRectFH handle, qreal* x1, qreal* y1, qreal* x2, qreal* y2)
{
	((QRectF *)handle)->getCoords(x1, y1, x2, y2);
}

C_EXPORT void QRectF_adjust(QRectFH handle, qreal x1, qreal y1, qreal x2, qreal y2)
{
	((QRectF *)handle)->adjust(x1, y1, x2, y2);
}

C_EXPORT void QRectF_adjusted(QRectFH handle, QRectFH retval, qreal x1, qreal y1, qreal x2, qreal y2)
{
	*(QRectF *)retval = ((QRectF *)handle)->adjusted(x1, y1, x2, y2);
}

C_EXPORT void QRectF_size(QRectFH handle, QSizeFH retval)
{
	*(QSizeF *)retval = ((QRectF *)handle)->size();
}

C_EXPORT qreal QRectF_width(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->width();
}

C_EXPORT qreal QRectF_height(QRectFH handle)
{
	return (qreal) ((QRectF *)handle)->height();
}

C_EXPORT void QRectF_setWidth(QRectFH handle, qreal w)
{
	((QRectF *)handle)->setWidth(w);
}

C_EXPORT void QRectF_setHeight(QRectFH handle, qreal h)
{
	((QRectF *)handle)->setHeight(h);
}

C_EXPORT void QRectF_setSize(QRectFH handle, const QSizeFH s)
{
	((QRectF *)handle)->setSize(*(const QSizeF*)s);
}

C_EXPORT bool QRectF_contains(QRectFH handle, const QPointFH p)
{
	return (bool) ((QRectF *)handle)->contains(*(const QPointF*)p);
}

C_EXPORT bool QRectF_contains2(QRectFH handle, qreal x, qreal y)
{
	return (bool) ((QRectF *)handle)->contains(x, y);
}

C_EXPORT bool QRectF_contains3(QRectFH handle, const QRectFH r)
{
	return (bool) ((QRectF *)handle)->contains(*(const QRectF*)r);
}

C_EXPORT void QRectF_unite(QRectFH handle, QRectFH retval, const QRectFH r)
{
	*(QRectF *)retval = ((QRectF *)handle)->unite(*(const QRectF*)r);
}

C_EXPORT void QRectF_united(QRectFH handle, QRectFH retval, const QRectFH other)
{
	*(QRectF *)retval = ((QRectF *)handle)->united(*(const QRectF*)other);
}

C_EXPORT void QRectF_intersect(QRectFH handle, QRectFH retval, const QRectFH r)
{
	*(QRectF *)retval = ((QRectF *)handle)->intersect(*(const QRectF*)r);
}

C_EXPORT void QRectF_intersected(QRectFH handle, QRectFH retval, const QRectFH other)
{
	*(QRectF *)retval = ((QRectF *)handle)->intersected(*(const QRectF*)other);
}

C_EXPORT bool QRectF_intersects(QRectFH handle, const QRectFH r)
{
	return (bool) ((QRectF *)handle)->intersects(*(const QRectF*)r);
}

C_EXPORT void QRectF_toRect(QRectFH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QRectF *)handle)->toRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QRectF_toAlignedRect(QRectFH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QRectF *)handle)->toAlignedRect();
	copyQRectToPRect(t_retval, retval);
}

