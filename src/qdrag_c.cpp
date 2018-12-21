//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QDragH QDrag_create(QWidgetH dragSource)
{
	return (QDragH) new QDrag((QWidget*)dragSource);
}

C_EXPORT void QDrag_destroy(QDragH handle)
{
	delete (QDrag *)handle;
}

C_EXPORT void QDrag_setMimeData(QDragH handle, QMimeDataH data)
{
	((QDrag *)handle)->setMimeData((QMimeData*)data);
}

C_EXPORT QMimeDataH QDrag_mimeData(QDragH handle)
{
	return (QMimeDataH) ((QDrag *)handle)->mimeData();
}

C_EXPORT void QDrag_setPixmap(QDragH handle, const QPixmapH AnonParam1)
{
	((QDrag *)handle)->setPixmap(*(const QPixmap*)AnonParam1);
}

C_EXPORT void QDrag_pixmap(QDragH handle, QPixmapH retval)
{
	*(QPixmap *)retval = ((QDrag *)handle)->pixmap();
}

C_EXPORT void QDrag_setHotSpot(QDragH handle, const QPointH hotspot)
{
	((QDrag *)handle)->setHotSpot(*(const QPoint*)hotspot);
}

C_EXPORT void QDrag_hotSpot(QDragH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QDrag *)handle)->hotSpot();
}

C_EXPORT QWidgetH QDrag_source(QDragH handle)
{
	return (QWidgetH) ((QDrag *)handle)->source();
}

C_EXPORT QWidgetH QDrag_target(QDragH handle)
{
	return (QWidgetH) ((QDrag *)handle)->target();
}

C_EXPORT Qt::DropAction QDrag_start(QDragH handle, unsigned int supportedActions)
{
	return (Qt::DropAction) ((QDrag *)handle)->start((Qt::DropActions)supportedActions);
}

C_EXPORT Qt::DropAction QDrag_exec(QDragH handle, unsigned int supportedActions)
{
	return (Qt::DropAction) ((QDrag *)handle)->exec((Qt::DropActions)supportedActions);
}

C_EXPORT Qt::DropAction QDrag_exec2(QDragH handle, unsigned int supportedActions, Qt::DropAction defaultAction)
{
	return (Qt::DropAction) ((QDrag *)handle)->exec((Qt::DropActions)supportedActions, defaultAction);
}

C_EXPORT void QDrag_setDragCursor(QDragH handle, const QPixmapH cursor, Qt::DropAction action)
{
	((QDrag *)handle)->setDragCursor(*(const QPixmap*)cursor, action);
}

