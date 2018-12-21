//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QInputEventH QInputEvent_create(QEvent::Type type, unsigned int modifiers)
{
	return (QInputEventH) new QInputEvent(type, (Qt::KeyboardModifiers)modifiers);
}

C_EXPORT void QInputEvent_destroy(QInputEventH handle)
{
	delete (QInputEvent *)handle;
}

C_EXPORT unsigned int QInputEvent_modifiers(QInputEventH handle)
{
	return (unsigned int) ((QInputEvent *)handle)->modifiers();
}

C_EXPORT QMouseEventH QMouseEvent_create(QEvent::Type type, const QPointH pos, Qt::MouseButton button, unsigned int buttons, unsigned int modifiers)
{
	return (QMouseEventH) new QMouseEvent(type, *(const QPoint*)pos, button, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers);
}

C_EXPORT void QMouseEvent_destroy(QMouseEventH handle)
{
	delete (QMouseEvent *)handle;
}

C_EXPORT QMouseEventH QMouseEvent_create2(QEvent::Type type, const QPointH pos, const QPointH globalPos, Qt::MouseButton button, unsigned int buttons, unsigned int modifiers)
{
	return (QMouseEventH) new QMouseEvent(type, *(const QPoint*)pos, *(const QPoint*)globalPos, button, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers);
}

C_EXPORT const QPointH QMouseEvent_pos(QMouseEventH handle)
{
	return (const QPointH) &((QMouseEvent *)handle)->pos();
}

C_EXPORT const QPointH QMouseEvent_globalPos(QMouseEventH handle)
{
	return (const QPointH) &((QMouseEvent *)handle)->globalPos();
}

C_EXPORT int QMouseEvent_x(QMouseEventH handle)
{
	return (int) ((QMouseEvent *)handle)->x();
}

C_EXPORT int QMouseEvent_y(QMouseEventH handle)
{
	return (int) ((QMouseEvent *)handle)->y();
}

C_EXPORT int QMouseEvent_globalX(QMouseEventH handle)
{
	return (int) ((QMouseEvent *)handle)->globalX();
}

C_EXPORT int QMouseEvent_globalY(QMouseEventH handle)
{
	return (int) ((QMouseEvent *)handle)->globalY();
}

C_EXPORT Qt::MouseButton QMouseEvent_button(QMouseEventH handle)
{
	return (Qt::MouseButton) ((QMouseEvent *)handle)->button();
}

C_EXPORT unsigned int QMouseEvent_buttons(QMouseEventH handle)
{
	return (unsigned int) ((QMouseEvent *)handle)->buttons();
}

C_EXPORT QMouseEventH QMouseEvent_createExtendedMouseEvent(QEvent::Type type, const QPointFH pos, const QPointH globalPos, Qt::MouseButton button, unsigned int buttons, unsigned int modifiers)
{
	return (QMouseEventH) QMouseEvent::createExtendedMouseEvent(type, *(const QPointF*)pos, *(const QPoint*)globalPos, button, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers);
}

C_EXPORT bool QMouseEvent_hasExtendedInfo(QMouseEventH handle)
{
	return (bool) ((QMouseEvent *)handle)->hasExtendedInfo();
}

C_EXPORT void QMouseEvent_posF(QMouseEventH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QMouseEvent *)handle)->posF();
}

C_EXPORT QHoverEventH QHoverEvent_create(QEvent::Type type, const QPointH pos, const QPointH oldPos)
{
	return (QHoverEventH) new QHoverEvent(type, *(const QPoint*)pos, *(const QPoint*)oldPos);
}

C_EXPORT void QHoverEvent_destroy(QHoverEventH handle)
{
	delete (QHoverEvent *)handle;
}

C_EXPORT const QPointH QHoverEvent_pos(QHoverEventH handle)
{
	return (const QPointH) &((QHoverEvent *)handle)->pos();
}

C_EXPORT const QPointH QHoverEvent_oldPos(QHoverEventH handle)
{
	return (const QPointH) &((QHoverEvent *)handle)->oldPos();
}

C_EXPORT QWheelEventH QWheelEvent_create(const QPointH pos, int delta, unsigned int buttons, unsigned int modifiers, Qt::Orientation orient)
{
	return (QWheelEventH) new QWheelEvent(*(const QPoint*)pos, delta, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers, orient);
}

C_EXPORT void QWheelEvent_destroy(QWheelEventH handle)
{
	delete (QWheelEvent *)handle;
}

C_EXPORT QWheelEventH QWheelEvent_create2(const QPointH pos, const QPointH globalPos, int delta, unsigned int buttons, unsigned int modifiers, Qt::Orientation orient)
{
	return (QWheelEventH) new QWheelEvent(*(const QPoint*)pos, *(const QPoint*)globalPos, delta, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers, orient);
}

C_EXPORT int QWheelEvent_delta(QWheelEventH handle)
{
	return (int) ((QWheelEvent *)handle)->delta();
}

C_EXPORT const QPointH QWheelEvent_pos(QWheelEventH handle)
{
	return (const QPointH) &((QWheelEvent *)handle)->pos();
}

C_EXPORT const QPointH QWheelEvent_globalPos(QWheelEventH handle)
{
	return (const QPointH) &((QWheelEvent *)handle)->globalPos();
}

C_EXPORT int QWheelEvent_x(QWheelEventH handle)
{
	return (int) ((QWheelEvent *)handle)->x();
}

C_EXPORT int QWheelEvent_y(QWheelEventH handle)
{
	return (int) ((QWheelEvent *)handle)->y();
}

C_EXPORT int QWheelEvent_globalX(QWheelEventH handle)
{
	return (int) ((QWheelEvent *)handle)->globalX();
}

C_EXPORT int QWheelEvent_globalY(QWheelEventH handle)
{
	return (int) ((QWheelEvent *)handle)->globalY();
}

C_EXPORT unsigned int QWheelEvent_buttons(QWheelEventH handle)
{
	return (unsigned int) ((QWheelEvent *)handle)->buttons();
}

C_EXPORT Qt::Orientation QWheelEvent_orientation(QWheelEventH handle)
{
	return (Qt::Orientation) ((QWheelEvent *)handle)->orientation();
}

C_EXPORT QTabletEventH QTabletEvent_create(QEvent::Type t, const QPointH pos, const QPointH globalPos, const QPointFH hiResGlobalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, unsigned int keyState, qint64 uniqueID)
{
	return (QTabletEventH) new QTabletEvent(t, *(const QPoint*)pos, *(const QPoint*)globalPos, *(const QPointF*)hiResGlobalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, (Qt::KeyboardModifiers)keyState, uniqueID);
}

C_EXPORT void QTabletEvent_destroy(QTabletEventH handle)
{
	delete (QTabletEvent *)handle;
}

C_EXPORT const QPointH QTabletEvent_pos(QTabletEventH handle)
{
	return (const QPointH) &((QTabletEvent *)handle)->pos();
}

C_EXPORT const QPointH QTabletEvent_globalPos(QTabletEventH handle)
{
	return (const QPointH) &((QTabletEvent *)handle)->globalPos();
}

C_EXPORT const QPointFH QTabletEvent_hiResGlobalPos(QTabletEventH handle)
{
	return (const QPointFH) &((QTabletEvent *)handle)->hiResGlobalPos();
}

C_EXPORT int QTabletEvent_x(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->x();
}

C_EXPORT int QTabletEvent_y(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->y();
}

C_EXPORT int QTabletEvent_globalX(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->globalX();
}

C_EXPORT int QTabletEvent_globalY(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->globalY();
}

C_EXPORT qreal QTabletEvent_hiResGlobalX(QTabletEventH handle)
{
	return (qreal) ((QTabletEvent *)handle)->hiResGlobalX();
}

C_EXPORT qreal QTabletEvent_hiResGlobalY(QTabletEventH handle)
{
	return (qreal) ((QTabletEvent *)handle)->hiResGlobalY();
}

C_EXPORT QTabletEvent::TabletDevice QTabletEvent_device(QTabletEventH handle)
{
	return (QTabletEvent::TabletDevice) ((QTabletEvent *)handle)->device();
}

C_EXPORT QTabletEvent::PointerType QTabletEvent_pointerType(QTabletEventH handle)
{
	return (QTabletEvent::PointerType) ((QTabletEvent *)handle)->pointerType();
}

C_EXPORT qint64 QTabletEvent_uniqueId(QTabletEventH handle)
{
	return (qint64) ((QTabletEvent *)handle)->uniqueId();
}

C_EXPORT qreal QTabletEvent_pressure(QTabletEventH handle)
{
	return (qreal) ((QTabletEvent *)handle)->pressure();
}

C_EXPORT int QTabletEvent_z(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->z();
}

C_EXPORT qreal QTabletEvent_tangentialPressure(QTabletEventH handle)
{
	return (qreal) ((QTabletEvent *)handle)->tangentialPressure();
}

C_EXPORT qreal QTabletEvent_rotation(QTabletEventH handle)
{
	return (qreal) ((QTabletEvent *)handle)->rotation();
}

C_EXPORT int QTabletEvent_xTilt(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->xTilt();
}

C_EXPORT int QTabletEvent_yTilt(QTabletEventH handle)
{
	return (int) ((QTabletEvent *)handle)->yTilt();
}

C_EXPORT QKeyEventH QKeyEvent_create(QEvent::Type type, int key, unsigned int modifiers, PWideString text, bool autorep, ushort count)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QKeyEventH) new QKeyEvent(type, key, (Qt::KeyboardModifiers)modifiers, t_text, autorep, count);
}

C_EXPORT void QKeyEvent_destroy(QKeyEventH handle)
{
	delete (QKeyEvent *)handle;
}

C_EXPORT int QKeyEvent_key(QKeyEventH handle)
{
	return (int) ((QKeyEvent *)handle)->key();
}

C_EXPORT bool QKeyEvent_matches(QKeyEventH handle, QKeySequence::StandardKey key)
{
	return (bool) ((QKeyEvent *)handle)->matches(key);
}

C_EXPORT unsigned int QKeyEvent_modifiers(QKeyEventH handle)
{
	return (unsigned int) ((QKeyEvent *)handle)->modifiers();
}

C_EXPORT void QKeyEvent_text(QKeyEventH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QKeyEvent *)handle)->text();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QKeyEvent_isAutoRepeat(QKeyEventH handle)
{
	return (bool) ((QKeyEvent *)handle)->isAutoRepeat();
}

C_EXPORT int QKeyEvent_count(QKeyEventH handle)
{
	return (int) ((QKeyEvent *)handle)->count();
}

C_EXPORT QKeyEventH QKeyEvent_createExtendedKeyEvent(QEvent::Type type, int key, unsigned int modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, PWideString text, bool autorep, ushort count)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QKeyEventH) QKeyEvent::createExtendedKeyEvent(type, key, (Qt::KeyboardModifiers)modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, t_text, autorep, count);
}

C_EXPORT bool QKeyEvent_hasExtendedInfo(QKeyEventH handle)
{
	return (bool) ((QKeyEvent *)handle)->hasExtendedInfo();
}

C_EXPORT quint32 QKeyEvent_nativeScanCode(QKeyEventH handle)
{
	return (quint32) ((QKeyEvent *)handle)->nativeScanCode();
}

C_EXPORT quint32 QKeyEvent_nativeVirtualKey(QKeyEventH handle)
{
	return (quint32) ((QKeyEvent *)handle)->nativeVirtualKey();
}

C_EXPORT quint32 QKeyEvent_nativeModifiers(QKeyEventH handle)
{
	return (quint32) ((QKeyEvent *)handle)->nativeModifiers();
}

C_EXPORT QFocusEventH QFocusEvent_create(QEvent::Type type, Qt::FocusReason reason)
{
	return (QFocusEventH) new QFocusEvent(type, reason);
}

C_EXPORT void QFocusEvent_destroy(QFocusEventH handle)
{
	delete (QFocusEvent *)handle;
}

C_EXPORT bool QFocusEvent_gotFocus(QFocusEventH handle)
{
	return (bool) ((QFocusEvent *)handle)->gotFocus();
}

C_EXPORT bool QFocusEvent_lostFocus(QFocusEventH handle)
{
	return (bool) ((QFocusEvent *)handle)->lostFocus();
}

C_EXPORT Qt::FocusReason QFocusEvent_reason(QFocusEventH handle)
{
	return (Qt::FocusReason) ((QFocusEvent *)handle)->reason();
}

C_EXPORT QPaintEventH QPaintEvent_create(const QRegionH paintRegion)
{
	return (QPaintEventH) new QPaintEvent(*(const QRegion*)paintRegion);
}

C_EXPORT void QPaintEvent_destroy(QPaintEventH handle)
{
	delete (QPaintEvent *)handle;
}

C_EXPORT QPaintEventH QPaintEvent_create2(PRect paintRect)
{
	QRect t_paintRect;
	copyPRectToQRect(paintRect, t_paintRect);
	return (QPaintEventH) new QPaintEvent(t_paintRect);
}

C_EXPORT void QPaintEvent_rect(QPaintEventH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QPaintEvent *)handle)->rect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT const QRegionH QPaintEvent_region(QPaintEventH handle)
{
	return (const QRegionH) &((QPaintEvent *)handle)->region();
}

C_EXPORT QMoveEventH QMoveEvent_create(const QPointH pos, const QPointH oldPos)
{
	return (QMoveEventH) new QMoveEvent(*(const QPoint*)pos, *(const QPoint*)oldPos);
}

C_EXPORT void QMoveEvent_destroy(QMoveEventH handle)
{
	delete (QMoveEvent *)handle;
}

C_EXPORT const QPointH QMoveEvent_pos(QMoveEventH handle)
{
	return (const QPointH) &((QMoveEvent *)handle)->pos();
}

C_EXPORT const QPointH QMoveEvent_oldPos(QMoveEventH handle)
{
	return (const QPointH) &((QMoveEvent *)handle)->oldPos();
}

C_EXPORT QResizeEventH QResizeEvent_create(const QSizeH size, const QSizeH oldSize)
{
	return (QResizeEventH) new QResizeEvent(*(const QSize*)size, *(const QSize*)oldSize);
}

C_EXPORT void QResizeEvent_destroy(QResizeEventH handle)
{
	delete (QResizeEvent *)handle;
}

C_EXPORT const QSizeH QResizeEvent_size(QResizeEventH handle)
{
	return (const QSizeH) &((QResizeEvent *)handle)->size();
}

C_EXPORT const QSizeH QResizeEvent_oldSize(QResizeEventH handle)
{
	return (const QSizeH) &((QResizeEvent *)handle)->oldSize();
}

C_EXPORT QCloseEventH QCloseEvent_create()
{
	return (QCloseEventH) new QCloseEvent();
}

C_EXPORT void QCloseEvent_destroy(QCloseEventH handle)
{
	delete (QCloseEvent *)handle;
}

C_EXPORT QIconDragEventH QIconDragEvent_create()
{
	return (QIconDragEventH) new QIconDragEvent();
}

C_EXPORT void QIconDragEvent_destroy(QIconDragEventH handle)
{
	delete (QIconDragEvent *)handle;
}

C_EXPORT QShowEventH QShowEvent_create()
{
	return (QShowEventH) new QShowEvent();
}

C_EXPORT void QShowEvent_destroy(QShowEventH handle)
{
	delete (QShowEvent *)handle;
}

C_EXPORT QHideEventH QHideEvent_create()
{
	return (QHideEventH) new QHideEvent();
}

C_EXPORT void QHideEvent_destroy(QHideEventH handle)
{
	delete (QHideEvent *)handle;
}

C_EXPORT QContextMenuEventH QContextMenuEvent_create(QContextMenuEvent::Reason reason, const QPointH pos, const QPointH globalPos, unsigned int modifiers)
{
	return (QContextMenuEventH) new QContextMenuEvent(reason, *(const QPoint*)pos, *(const QPoint*)globalPos, (Qt::KeyboardModifiers)modifiers);
}

C_EXPORT void QContextMenuEvent_destroy(QContextMenuEventH handle)
{
	delete (QContextMenuEvent *)handle;
}

C_EXPORT QContextMenuEventH QContextMenuEvent_create2(QContextMenuEvent::Reason reason, const QPointH pos, const QPointH globalPos)
{
	return (QContextMenuEventH) new QContextMenuEvent(reason, *(const QPoint*)pos, *(const QPoint*)globalPos);
}

C_EXPORT QContextMenuEventH QContextMenuEvent_create3(QContextMenuEvent::Reason reason, const QPointH pos)
{
	return (QContextMenuEventH) new QContextMenuEvent(reason, *(const QPoint*)pos);
}

C_EXPORT int QContextMenuEvent_x(QContextMenuEventH handle)
{
	return (int) ((QContextMenuEvent *)handle)->x();
}

C_EXPORT int QContextMenuEvent_y(QContextMenuEventH handle)
{
	return (int) ((QContextMenuEvent *)handle)->y();
}

C_EXPORT int QContextMenuEvent_globalX(QContextMenuEventH handle)
{
	return (int) ((QContextMenuEvent *)handle)->globalX();
}

C_EXPORT int QContextMenuEvent_globalY(QContextMenuEventH handle)
{
	return (int) ((QContextMenuEvent *)handle)->globalY();
}

C_EXPORT const QPointH QContextMenuEvent_pos(QContextMenuEventH handle)
{
	return (const QPointH) &((QContextMenuEvent *)handle)->pos();
}

C_EXPORT const QPointH QContextMenuEvent_globalPos(QContextMenuEventH handle)
{
	return (const QPointH) &((QContextMenuEvent *)handle)->globalPos();
}

C_EXPORT QContextMenuEvent::Reason QContextMenuEvent_reason(QContextMenuEventH handle)
{
	return (QContextMenuEvent::Reason) ((QContextMenuEvent *)handle)->reason();
}

C_EXPORT QInputMethodEventH QInputMethodEvent_create()
{
	return (QInputMethodEventH) new QInputMethodEvent();
}

C_EXPORT void QInputMethodEvent_destroy(QInputMethodEventH handle)
{
	delete (QInputMethodEvent *)handle;
}

C_EXPORT void QInputMethodEvent_setCommitString(QInputMethodEventH handle, PWideString commitString, int replaceFrom, int replaceLength)
{
	QString t_commitString;
	copyPWideStringToQString(commitString, t_commitString);
	((QInputMethodEvent *)handle)->setCommitString(t_commitString, replaceFrom, replaceLength);
}

C_EXPORT void QInputMethodEvent_preeditString(QInputMethodEventH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QInputMethodEvent *)handle)->preeditString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QInputMethodEvent_commitString(QInputMethodEventH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QInputMethodEvent *)handle)->commitString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QInputMethodEvent_replacementStart(QInputMethodEventH handle)
{
	return (int) ((QInputMethodEvent *)handle)->replacementStart();
}

C_EXPORT int QInputMethodEvent_replacementLength(QInputMethodEventH handle)
{
	return (int) ((QInputMethodEvent *)handle)->replacementLength();
}

C_EXPORT QInputMethodEventH QInputMethodEvent_create3(const QInputMethodEventH other)
{
	return (QInputMethodEventH) new QInputMethodEvent(*(const QInputMethodEvent*)other);
}

C_EXPORT QDropEventH QDropEvent_create(const QPointH pos, unsigned int actions, const QMimeDataH data, unsigned int buttons, unsigned int modifiers, QEvent::Type type)
{
	return (QDropEventH) new QDropEvent(*(const QPoint*)pos, (Qt::DropActions)actions, (const QMimeData*)data, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers, type);
}

C_EXPORT void QDropEvent_destroy(QDropEventH handle)
{
	delete (QDropEvent *)handle;
}

C_EXPORT const QPointH QDropEvent_pos(QDropEventH handle)
{
	return (const QPointH) &((QDropEvent *)handle)->pos();
}

C_EXPORT unsigned int QDropEvent_mouseButtons(QDropEventH handle)
{
	return (unsigned int) ((QDropEvent *)handle)->mouseButtons();
}

C_EXPORT unsigned int QDropEvent_keyboardModifiers(QDropEventH handle)
{
	return (unsigned int) ((QDropEvent *)handle)->keyboardModifiers();
}

C_EXPORT unsigned int QDropEvent_possibleActions(QDropEventH handle)
{
	return (unsigned int) ((QDropEvent *)handle)->possibleActions();
}

C_EXPORT Qt::DropAction QDropEvent_proposedAction(QDropEventH handle)
{
	return (Qt::DropAction) ((QDropEvent *)handle)->proposedAction();
}

C_EXPORT void QDropEvent_acceptProposedAction(QDropEventH handle)
{
	((QDropEvent *)handle)->acceptProposedAction();
}

C_EXPORT Qt::DropAction QDropEvent_dropAction(QDropEventH handle)
{
	return (Qt::DropAction) ((QDropEvent *)handle)->dropAction();
}

C_EXPORT void QDropEvent_setDropAction(QDropEventH handle, Qt::DropAction action)
{
	((QDropEvent *)handle)->setDropAction(action);
}

C_EXPORT QWidgetH QDropEvent_source(QDropEventH handle)
{
	return (QWidgetH) ((QDropEvent *)handle)->source();
}

C_EXPORT const QMimeDataH QDropEvent_mimeData(QDropEventH handle)
{
	return (const QMimeDataH) ((QDropEvent *)handle)->mimeData();
}

C_EXPORT const char* QDropEvent_format(QDropEventH handle, int n)
{
	return (const char*) ((QDropEvent *)handle)->format(n);
}

C_EXPORT void QDropEvent_encodedData(QDropEventH handle, QByteArrayH retval, const char* AnonParam1)
{
	*(QByteArray *)retval = ((QDropEvent *)handle)->encodedData(AnonParam1);
}

C_EXPORT bool QDropEvent_provides(QDropEventH handle, const char* AnonParam1)
{
	return (bool) ((QDropEvent *)handle)->provides(AnonParam1);
}

C_EXPORT QDragMoveEventH QDragMoveEvent_create(const QPointH pos, unsigned int actions, const QMimeDataH data, unsigned int buttons, unsigned int modifiers, QEvent::Type type)
{
	return (QDragMoveEventH) new QDragMoveEvent(*(const QPoint*)pos, (Qt::DropActions)actions, (const QMimeData*)data, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers, type);
}

C_EXPORT void QDragMoveEvent_destroy(QDragMoveEventH handle)
{
	delete (QDragMoveEvent *)handle;
}

C_EXPORT void QDragMoveEvent_answerRect(QDragMoveEventH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QDragMoveEvent *)handle)->answerRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QDragMoveEvent_accept(QDragMoveEventH handle)
{
	((QDragMoveEvent *)handle)->accept();
}

C_EXPORT void QDragMoveEvent_ignore(QDragMoveEventH handle)
{
	((QDragMoveEvent *)handle)->ignore();
}

C_EXPORT void QDragMoveEvent_accept2(QDragMoveEventH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	((QDragMoveEvent *)handle)->accept(t_r);
}

C_EXPORT void QDragMoveEvent_ignore2(QDragMoveEventH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	((QDragMoveEvent *)handle)->ignore(t_r);
}

C_EXPORT QDragEnterEventH QDragEnterEvent_create(const QPointH pos, unsigned int actions, const QMimeDataH data, unsigned int buttons, unsigned int modifiers)
{
	return (QDragEnterEventH) new QDragEnterEvent(*(const QPoint*)pos, (Qt::DropActions)actions, (const QMimeData*)data, (Qt::MouseButtons)buttons, (Qt::KeyboardModifiers)modifiers);
}

C_EXPORT void QDragEnterEvent_destroy(QDragEnterEventH handle)
{
	delete (QDragEnterEvent *)handle;
}

C_EXPORT QDragLeaveEventH QDragLeaveEvent_create()
{
	return (QDragLeaveEventH) new QDragLeaveEvent();
}

C_EXPORT void QDragLeaveEvent_destroy(QDragLeaveEventH handle)
{
	delete (QDragLeaveEvent *)handle;
}

C_EXPORT QHelpEventH QHelpEvent_create(QEvent::Type type, const QPointH pos, const QPointH globalPos)
{
	return (QHelpEventH) new QHelpEvent(type, *(const QPoint*)pos, *(const QPoint*)globalPos);
}

C_EXPORT void QHelpEvent_destroy(QHelpEventH handle)
{
	delete (QHelpEvent *)handle;
}

C_EXPORT int QHelpEvent_x(QHelpEventH handle)
{
	return (int) ((QHelpEvent *)handle)->x();
}

C_EXPORT int QHelpEvent_y(QHelpEventH handle)
{
	return (int) ((QHelpEvent *)handle)->y();
}

C_EXPORT int QHelpEvent_globalX(QHelpEventH handle)
{
	return (int) ((QHelpEvent *)handle)->globalX();
}

C_EXPORT int QHelpEvent_globalY(QHelpEventH handle)
{
	return (int) ((QHelpEvent *)handle)->globalY();
}

C_EXPORT const QPointH QHelpEvent_pos(QHelpEventH handle)
{
	return (const QPointH) &((QHelpEvent *)handle)->pos();
}

C_EXPORT const QPointH QHelpEvent_globalPos(QHelpEventH handle)
{
	return (const QPointH) &((QHelpEvent *)handle)->globalPos();
}

C_EXPORT QStatusTipEventH QStatusTipEvent_create(PWideString tip)
{
	QString t_tip;
	copyPWideStringToQString(tip, t_tip);
	return (QStatusTipEventH) new QStatusTipEvent(t_tip);
}

C_EXPORT void QStatusTipEvent_destroy(QStatusTipEventH handle)
{
	delete (QStatusTipEvent *)handle;
}

C_EXPORT void QStatusTipEvent_tip(QStatusTipEventH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QStatusTipEvent *)handle)->tip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QWhatsThisClickedEventH QWhatsThisClickedEvent_create(PWideString href)
{
	QString t_href;
	copyPWideStringToQString(href, t_href);
	return (QWhatsThisClickedEventH) new QWhatsThisClickedEvent(t_href);
}

C_EXPORT void QWhatsThisClickedEvent_destroy(QWhatsThisClickedEventH handle)
{
	delete (QWhatsThisClickedEvent *)handle;
}

C_EXPORT void QWhatsThisClickedEvent_href(QWhatsThisClickedEventH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWhatsThisClickedEvent *)handle)->href();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QActionEventH QActionEvent_create(int type, QActionH action, QActionH before)
{
	return (QActionEventH) new QActionEvent(type, (QAction*)action, (QAction*)before);
}

C_EXPORT void QActionEvent_destroy(QActionEventH handle)
{
	delete (QActionEvent *)handle;
}

C_EXPORT QActionH QActionEvent_action(QActionEventH handle)
{
	return (QActionH) ((QActionEvent *)handle)->action();
}

C_EXPORT QActionH QActionEvent_before(QActionEventH handle)
{
	return (QActionH) ((QActionEvent *)handle)->before();
}

C_EXPORT QFileOpenEventH QFileOpenEvent_create(PWideString file)
{
	QString t_file;
	copyPWideStringToQString(file, t_file);
	return (QFileOpenEventH) new QFileOpenEvent(t_file);
}

C_EXPORT void QFileOpenEvent_destroy(QFileOpenEventH handle)
{
	delete (QFileOpenEvent *)handle;
}

C_EXPORT void QFileOpenEvent_file(QFileOpenEventH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QFileOpenEvent *)handle)->file();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QShortcutEventH QShortcutEvent_create(const QKeySequenceH key, int id, bool ambiguous)
{
	return (QShortcutEventH) new QShortcutEvent(*(const QKeySequence*)key, id, ambiguous);
}

C_EXPORT void QShortcutEvent_destroy(QShortcutEventH handle)
{
	delete (QShortcutEvent *)handle;
}

C_EXPORT const QKeySequenceH QShortcutEvent_key(QShortcutEventH handle)
{
	return (const QKeySequenceH) &((QShortcutEvent *)handle)->key();
}

C_EXPORT int QShortcutEvent_shortcutId(QShortcutEventH handle)
{
	return (int) ((QShortcutEvent *)handle)->shortcutId();
}

C_EXPORT bool QShortcutEvent_isAmbiguous(QShortcutEventH handle)
{
	return (bool) ((QShortcutEvent *)handle)->isAmbiguous();
}

C_EXPORT QWindowStateChangeEventH QWindowStateChangeEvent_create(unsigned int aOldState)
{
	return (QWindowStateChangeEventH) new QWindowStateChangeEvent((Qt::WindowStates)aOldState);
}

C_EXPORT void QWindowStateChangeEvent_destroy(QWindowStateChangeEventH handle)
{
	delete (QWindowStateChangeEvent *)handle;
}

C_EXPORT QWindowStateChangeEventH QWindowStateChangeEvent_create2(unsigned int aOldState, bool isOverride)
{
	return (QWindowStateChangeEventH) new QWindowStateChangeEvent((Qt::WindowStates)aOldState, isOverride);
}

C_EXPORT unsigned int QWindowStateChangeEvent_oldState(QWindowStateChangeEventH handle)
{
	return (unsigned int) ((QWindowStateChangeEvent *)handle)->oldState();
}

C_EXPORT bool QWindowStateChangeEvent_isOverride(QWindowStateChangeEventH handle)
{
	return (bool) ((QWindowStateChangeEvent *)handle)->isOverride();
}

