//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QCursorH QCursor_create()
{
	return (QCursorH) new QCursor();
}

C_EXPORT void QCursor_destroy(QCursorH handle)
{
	delete (QCursor *)handle;
}

C_EXPORT QCursorH QCursor_create2(Qt::CursorShape shape)
{
	return (QCursorH) new QCursor(shape);
}

C_EXPORT QCursorH QCursor_create3(const QBitmapH bitmap, const QBitmapH mask, int hotX, int hotY)
{
	return (QCursorH) new QCursor(*(const QBitmap*)bitmap, *(const QBitmap*)mask, hotX, hotY);
}

C_EXPORT QCursorH QCursor_create4(const QPixmapH pixmap, int hotX, int hotY)
{
	return (QCursorH) new QCursor(*(const QPixmap*)pixmap, hotX, hotY);
}

C_EXPORT QCursorH QCursor_create5(const QCursorH cursor)
{
	return (QCursorH) new QCursor(*(const QCursor*)cursor);
}

C_EXPORT Qt::CursorShape QCursor_shape(QCursorH handle)
{
	return (Qt::CursorShape) ((QCursor *)handle)->shape();
}

C_EXPORT void QCursor_setShape(QCursorH handle, Qt::CursorShape newShape)
{
	((QCursor *)handle)->setShape(newShape);
}

C_EXPORT const QBitmapH QCursor_bitmap(QCursorH handle)
{
	return (const QBitmapH) ((QCursor *)handle)->bitmap();
}

C_EXPORT const QBitmapH QCursor_mask(QCursorH handle)
{
	return (const QBitmapH) ((QCursor *)handle)->mask();
}

C_EXPORT void QCursor_pixmap(QCursorH handle, QPixmapH retval)
{
	*(QPixmap *)retval = ((QCursor *)handle)->pixmap();
}

C_EXPORT void QCursor_hotSpot(QCursorH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QCursor *)handle)->hotSpot();
}

C_EXPORT void QCursor_pos(PQtPoint retval)
{
	*(QPoint *)retval = QCursor::pos();
}

C_EXPORT void QCursor_setPos(int x, int y)
{
	QCursor::setPos(x, y);
}

C_EXPORT void QCursor_setPos2(const QPointH p)
{
	QCursor::setPos(*(const QPoint*)p);
}

#if defined BINUX || DARWIN
C_EXPORT Qt::HANDLE QCursor_handle(QCursorH handle)
{
	return (Qt::HANDLE) ((QCursor *)handle)->handle();
}

#endif
#if defined BINUX
C_EXPORT QCursorH QCursor_create6(Qt::HANDLE cursor)
{
	return (QCursorH) new QCursor(cursor);
}

C_EXPORT int QCursor_x11Screen()
{
	return (int) QCursor::x11Screen();
}

#endif
#if defined MSWINDOWS
C_EXPORT HCURSOR QCursor_handle2(QCursorH handle)
{
	return (HCURSOR) ((QCursor *)handle)->handle();
}

C_EXPORT QCursorH QCursor_create7(HCURSOR cursor)
{
	return (QCursorH) new QCursor(cursor);
}

#endif
#if defined QTOPIA
C_EXPORT int QCursor_handle3(QCursorH handle)
{
	return (int) ((QCursor *)handle)->handle();
}

#endif
