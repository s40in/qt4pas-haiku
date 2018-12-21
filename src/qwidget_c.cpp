//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWidgetH QWidget_create(QWidgetH parent, unsigned int f)
{
	return (QWidgetH) new QWidget((QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QWidget_destroy(QWidgetH handle)
{
	delete (QWidget *)handle;
}

C_EXPORT int QWidget_devType(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->devType();
}

C_EXPORT unsigned int QWidget_winId(QWidgetH handle)
{
	return (unsigned int) ((QWidget *)handle)->winId();
}

C_EXPORT void QWidget_createWinId(QWidgetH handle)
{
	((QWidget *)handle)->createWinId();
}

C_EXPORT unsigned int QWidget_internalWinId(QWidgetH handle)
{
	return (unsigned int) ((QWidget *)handle)->internalWinId();
}

C_EXPORT unsigned int QWidget_effectiveWinId(QWidgetH handle)
{
	return (unsigned int) ((QWidget *)handle)->effectiveWinId();
}

C_EXPORT QStyleH QWidget_style(QWidgetH handle)
{
	return (QStyleH) ((QWidget *)handle)->style();
}

C_EXPORT void QWidget_setStyle(QWidgetH handle, QStyleH AnonParam1)
{
	((QWidget *)handle)->setStyle((QStyle*)AnonParam1);
}

C_EXPORT bool QWidget_isTopLevel(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isTopLevel();
}

C_EXPORT bool QWidget_isWindow(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isWindow();
}

C_EXPORT bool QWidget_isModal(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isModal();
}

C_EXPORT Qt::WindowModality QWidget_windowModality(QWidgetH handle)
{
	return (Qt::WindowModality) ((QWidget *)handle)->windowModality();
}

C_EXPORT void QWidget_setWindowModality(QWidgetH handle, Qt::WindowModality windowModality)
{
	((QWidget *)handle)->setWindowModality(windowModality);
}

C_EXPORT bool QWidget_isEnabled(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isEnabled();
}

C_EXPORT bool QWidget_isEnabledTo(QWidgetH handle, QWidgetH AnonParam1)
{
	return (bool) ((QWidget *)handle)->isEnabledTo((QWidget*)AnonParam1);
}

C_EXPORT bool QWidget_isEnabledToTLW(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isEnabledToTLW();
}

C_EXPORT void QWidget_setEnabled(QWidgetH handle, bool AnonParam1)
{
	((QWidget *)handle)->setEnabled(AnonParam1);
}

C_EXPORT void QWidget_setDisabled(QWidgetH handle, bool AnonParam1)
{
	((QWidget *)handle)->setDisabled(AnonParam1);
}

C_EXPORT void QWidget_setWindowModified(QWidgetH handle, bool AnonParam1)
{
	((QWidget *)handle)->setWindowModified(AnonParam1);
}

C_EXPORT void QWidget_frameGeometry(QWidgetH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidget *)handle)->frameGeometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QWidget_geometry(QWidgetH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidget *)handle)->geometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QWidget_normalGeometry(QWidgetH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidget *)handle)->normalGeometry();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT int QWidget_x(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->x();
}

C_EXPORT int QWidget_y(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->y();
}

C_EXPORT void QWidget_pos(QWidgetH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QWidget *)handle)->pos();
}

C_EXPORT void QWidget_frameSize(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->frameSize();
}

C_EXPORT void QWidget_size(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->size();
}

C_EXPORT int QWidget_width(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->width();
}

C_EXPORT int QWidget_height(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->height();
}

C_EXPORT void QWidget_rect(QWidgetH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidget *)handle)->rect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QWidget_childrenRect(QWidgetH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidget *)handle)->childrenRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QWidget_childrenRegion(QWidgetH handle, QRegionH retval)
{
	*(QRegion *)retval = ((QWidget *)handle)->childrenRegion();
}

C_EXPORT void QWidget_minimumSize(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->minimumSize();
}

C_EXPORT void QWidget_maximumSize(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->maximumSize();
}

C_EXPORT int QWidget_minimumWidth(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->minimumWidth();
}

C_EXPORT int QWidget_minimumHeight(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->minimumHeight();
}

C_EXPORT int QWidget_maximumWidth(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->maximumWidth();
}

C_EXPORT int QWidget_maximumHeight(QWidgetH handle)
{
	return (int) ((QWidget *)handle)->maximumHeight();
}

C_EXPORT void QWidget_setMinimumSize(QWidgetH handle, const QSizeH AnonParam1)
{
	((QWidget *)handle)->setMinimumSize(*(const QSize*)AnonParam1);
}

C_EXPORT void QWidget_setMinimumSize2(QWidgetH handle, int minw, int minh)
{
	((QWidget *)handle)->setMinimumSize(minw, minh);
}

C_EXPORT void QWidget_setMaximumSize(QWidgetH handle, const QSizeH AnonParam1)
{
	((QWidget *)handle)->setMaximumSize(*(const QSize*)AnonParam1);
}

C_EXPORT void QWidget_setMaximumSize2(QWidgetH handle, int maxw, int maxh)
{
	((QWidget *)handle)->setMaximumSize(maxw, maxh);
}

C_EXPORT void QWidget_setMinimumWidth(QWidgetH handle, int minw)
{
	((QWidget *)handle)->setMinimumWidth(minw);
}

C_EXPORT void QWidget_setMinimumHeight(QWidgetH handle, int minh)
{
	((QWidget *)handle)->setMinimumHeight(minh);
}

C_EXPORT void QWidget_setMaximumWidth(QWidgetH handle, int maxw)
{
	((QWidget *)handle)->setMaximumWidth(maxw);
}

C_EXPORT void QWidget_setMaximumHeight(QWidgetH handle, int maxh)
{
	((QWidget *)handle)->setMaximumHeight(maxh);
}

C_EXPORT void QWidget_sizeIncrement(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->sizeIncrement();
}

C_EXPORT void QWidget_setSizeIncrement(QWidgetH handle, const QSizeH AnonParam1)
{
	((QWidget *)handle)->setSizeIncrement(*(const QSize*)AnonParam1);
}

C_EXPORT void QWidget_setSizeIncrement2(QWidgetH handle, int w, int h)
{
	((QWidget *)handle)->setSizeIncrement(w, h);
}

C_EXPORT void QWidget_baseSize(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->baseSize();
}

C_EXPORT void QWidget_setBaseSize(QWidgetH handle, const QSizeH AnonParam1)
{
	((QWidget *)handle)->setBaseSize(*(const QSize*)AnonParam1);
}

C_EXPORT void QWidget_setBaseSize2(QWidgetH handle, int basew, int baseh)
{
	((QWidget *)handle)->setBaseSize(basew, baseh);
}

C_EXPORT void QWidget_setFixedSize(QWidgetH handle, const QSizeH AnonParam1)
{
	((QWidget *)handle)->setFixedSize(*(const QSize*)AnonParam1);
}

C_EXPORT void QWidget_setFixedSize2(QWidgetH handle, int w, int h)
{
	((QWidget *)handle)->setFixedSize(w, h);
}

C_EXPORT void QWidget_setFixedWidth(QWidgetH handle, int w)
{
	((QWidget *)handle)->setFixedWidth(w);
}

C_EXPORT void QWidget_setFixedHeight(QWidgetH handle, int h)
{
	((QWidget *)handle)->setFixedHeight(h);
}

C_EXPORT void QWidget_mapToGlobal(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1)
{
	*(QPoint *)retval = ((QWidget *)handle)->mapToGlobal(*(const QPoint*)AnonParam1);
}

C_EXPORT void QWidget_mapFromGlobal(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1)
{
	*(QPoint *)retval = ((QWidget *)handle)->mapFromGlobal(*(const QPoint*)AnonParam1);
}

C_EXPORT void QWidget_mapToParent(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1)
{
	*(QPoint *)retval = ((QWidget *)handle)->mapToParent(*(const QPoint*)AnonParam1);
}

C_EXPORT void QWidget_mapFromParent(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1)
{
	*(QPoint *)retval = ((QWidget *)handle)->mapFromParent(*(const QPoint*)AnonParam1);
}

C_EXPORT void QWidget_mapTo(QWidgetH handle, PQtPoint retval, QWidgetH AnonParam1, const QPointH AnonParam2)
{
	*(QPoint *)retval = ((QWidget *)handle)->mapTo((QWidget*)AnonParam1, *(const QPoint*)AnonParam2);
}

C_EXPORT void QWidget_mapFrom(QWidgetH handle, PQtPoint retval, QWidgetH AnonParam1, const QPointH AnonParam2)
{
	*(QPoint *)retval = ((QWidget *)handle)->mapFrom((QWidget*)AnonParam1, *(const QPoint*)AnonParam2);
}

C_EXPORT QWidgetH QWidget_window(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->window();
}

C_EXPORT QWidgetH QWidget_nativeParentWidget(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->nativeParentWidget();
}

C_EXPORT QWidgetH QWidget_topLevelWidget(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->topLevelWidget();
}

C_EXPORT const QPaletteH QWidget_palette(QWidgetH handle)
{
	return (const QPaletteH) &((QWidget *)handle)->palette();
}

C_EXPORT void QWidget_setPalette(QWidgetH handle, const QPaletteH AnonParam1)
{
	((QWidget *)handle)->setPalette(*(const QPalette*)AnonParam1);
}

C_EXPORT void QWidget_setBackgroundRole(QWidgetH handle, QPalette::ColorRole AnonParam1)
{
	((QWidget *)handle)->setBackgroundRole(AnonParam1);
}

C_EXPORT QPalette::ColorRole QWidget_backgroundRole(QWidgetH handle)
{
	return (QPalette::ColorRole) ((QWidget *)handle)->backgroundRole();
}

C_EXPORT void QWidget_setForegroundRole(QWidgetH handle, QPalette::ColorRole AnonParam1)
{
	((QWidget *)handle)->setForegroundRole(AnonParam1);
}

C_EXPORT QPalette::ColorRole QWidget_foregroundRole(QWidgetH handle)
{
	return (QPalette::ColorRole) ((QWidget *)handle)->foregroundRole();
}

C_EXPORT const QFontH QWidget_font(QWidgetH handle)
{
	return (const QFontH) &((QWidget *)handle)->font();
}

C_EXPORT void QWidget_setFont(QWidgetH handle, const QFontH AnonParam1)
{
	((QWidget *)handle)->setFont(*(const QFont*)AnonParam1);
}

C_EXPORT void QWidget_fontMetrics(QWidgetH handle, QFontMetricsH retval)
{
	*(QFontMetrics *)retval = ((QWidget *)handle)->fontMetrics();
}

C_EXPORT void QWidget_fontInfo(QWidgetH handle, QFontInfoH retval)
{
	*(QFontInfo *)retval = ((QWidget *)handle)->fontInfo();
}

C_EXPORT void QWidget_cursor(QWidgetH handle, QCursorH retval)
{
	*(QCursor *)retval = ((QWidget *)handle)->cursor();
}

C_EXPORT void QWidget_setCursor(QWidgetH handle, const QCursorH AnonParam1)
{
	((QWidget *)handle)->setCursor(*(const QCursor*)AnonParam1);
}

C_EXPORT void QWidget_unsetCursor(QWidgetH handle)
{
	((QWidget *)handle)->unsetCursor();
}

C_EXPORT void QWidget_setMouseTracking(QWidgetH handle, bool enable)
{
	((QWidget *)handle)->setMouseTracking(enable);
}

C_EXPORT bool QWidget_hasMouseTracking(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->hasMouseTracking();
}

C_EXPORT bool QWidget_underMouse(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->underMouse();
}

C_EXPORT void QWidget_setMask(QWidgetH handle, const QBitmapH AnonParam1)
{
	((QWidget *)handle)->setMask(*(const QBitmap*)AnonParam1);
}

C_EXPORT void QWidget_setMask2(QWidgetH handle, const QRegionH AnonParam1)
{
	((QWidget *)handle)->setMask(*(const QRegion*)AnonParam1);
}

C_EXPORT void QWidget_mask(QWidgetH handle, QRegionH retval)
{
	*(QRegion *)retval = ((QWidget *)handle)->mask();
}

C_EXPORT void QWidget_clearMask(QWidgetH handle)
{
	((QWidget *)handle)->clearMask();
}

C_EXPORT void QWidget_render(QWidgetH handle, QPaintDeviceH target, const QPointH targetOffset, const QRegionH sourceRegion, unsigned int renderFlags)
{
	((QWidget *)handle)->render((QPaintDevice*)target, *(const QPoint*)targetOffset, *(const QRegion*)sourceRegion, (QWidget::RenderFlags)renderFlags);
}

C_EXPORT void QWidget_render2(QWidgetH handle, QPainterH painter, const QPointH targetOffset, const QRegionH sourceRegion, unsigned int renderFlags)
{
	((QWidget *)handle)->render((QPainter*)painter, *(const QPoint*)targetOffset, *(const QRegion*)sourceRegion, (QWidget::RenderFlags)renderFlags);
}

C_EXPORT void QWidget_setWindowTitle(QWidgetH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setWindowTitle(t_AnonParam1);
}

C_EXPORT void QWidget_setStyleSheet(QWidgetH handle, PWideString styleSheet)
{
	QString t_styleSheet;
	copyPWideStringToQString(styleSheet, t_styleSheet);
	((QWidget *)handle)->setStyleSheet(t_styleSheet);
}

C_EXPORT void QWidget_styleSheet(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->styleSheet();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_windowTitle(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->windowTitle();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setWindowIcon(QWidgetH handle, const QIconH icon)
{
	((QWidget *)handle)->setWindowIcon(*(const QIcon*)icon);
}

C_EXPORT void QWidget_windowIcon(QWidgetH handle, QIconH retval)
{
	*(QIcon *)retval = ((QWidget *)handle)->windowIcon();
}

C_EXPORT void QWidget_setWindowIconText(QWidgetH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setWindowIconText(t_AnonParam1);
}

C_EXPORT void QWidget_windowIconText(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->windowIconText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setWindowRole(QWidgetH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setWindowRole(t_AnonParam1);
}

C_EXPORT void QWidget_windowRole(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->windowRole();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setWindowFilePath(QWidgetH handle, PWideString filePath)
{
	QString t_filePath;
	copyPWideStringToQString(filePath, t_filePath);
	((QWidget *)handle)->setWindowFilePath(t_filePath);
}

C_EXPORT void QWidget_windowFilePath(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->windowFilePath();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setWindowOpacity(QWidgetH handle, qreal level)
{
	((QWidget *)handle)->setWindowOpacity(level);
}

C_EXPORT qreal QWidget_windowOpacity(QWidgetH handle)
{
	return (qreal) ((QWidget *)handle)->windowOpacity();
}

C_EXPORT bool QWidget_isWindowModified(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isWindowModified();
}

C_EXPORT void QWidget_setToolTip(QWidgetH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setToolTip(t_AnonParam1);
}

C_EXPORT void QWidget_toolTip(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->toolTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setStatusTip(QWidgetH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setStatusTip(t_AnonParam1);
}

C_EXPORT void QWidget_statusTip(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->statusTip();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setWhatsThis(QWidgetH handle, PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setWhatsThis(t_AnonParam1);
}

C_EXPORT void QWidget_whatsThis(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->whatsThis();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_accessibleName(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->accessibleName();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setAccessibleName(QWidgetH handle, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QWidget *)handle)->setAccessibleName(t_name);
}

C_EXPORT void QWidget_accessibleDescription(QWidgetH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWidget *)handle)->accessibleDescription();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWidget_setAccessibleDescription(QWidgetH handle, PWideString description)
{
	QString t_description;
	copyPWideStringToQString(description, t_description);
	((QWidget *)handle)->setAccessibleDescription(t_description);
}

C_EXPORT void QWidget_setLayoutDirection(QWidgetH handle, Qt::LayoutDirection direction)
{
	((QWidget *)handle)->setLayoutDirection(direction);
}

C_EXPORT Qt::LayoutDirection QWidget_layoutDirection(QWidgetH handle)
{
	return (Qt::LayoutDirection) ((QWidget *)handle)->layoutDirection();
}

C_EXPORT void QWidget_unsetLayoutDirection(QWidgetH handle)
{
	((QWidget *)handle)->unsetLayoutDirection();
}

C_EXPORT void QWidget_setLocale(QWidgetH handle, const QLocaleH locale)
{
	((QWidget *)handle)->setLocale(*(const QLocale*)locale);
}

C_EXPORT void QWidget_locale(QWidgetH handle, QLocaleH retval)
{
	*(QLocale *)retval = ((QWidget *)handle)->locale();
}

C_EXPORT void QWidget_unsetLocale(QWidgetH handle)
{
	((QWidget *)handle)->unsetLocale();
}

C_EXPORT bool QWidget_isRightToLeft(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isRightToLeft();
}

C_EXPORT bool QWidget_isLeftToRight(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isLeftToRight();
}

C_EXPORT void QWidget_setFocus(QWidgetH handle)
{
	((QWidget *)handle)->setFocus();
}

C_EXPORT bool QWidget_isActiveWindow(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isActiveWindow();
}

C_EXPORT void QWidget_activateWindow(QWidgetH handle)
{
	((QWidget *)handle)->activateWindow();
}

C_EXPORT void QWidget_clearFocus(QWidgetH handle)
{
	((QWidget *)handle)->clearFocus();
}

C_EXPORT void QWidget_setFocus2(QWidgetH handle, Qt::FocusReason reason)
{
	((QWidget *)handle)->setFocus(reason);
}

C_EXPORT Qt::FocusPolicy QWidget_focusPolicy(QWidgetH handle)
{
	return (Qt::FocusPolicy) ((QWidget *)handle)->focusPolicy();
}

C_EXPORT void QWidget_setFocusPolicy(QWidgetH handle, Qt::FocusPolicy policy)
{
	((QWidget *)handle)->setFocusPolicy(policy);
}

C_EXPORT bool QWidget_hasFocus(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->hasFocus();
}

C_EXPORT void QWidget_setTabOrder(QWidgetH AnonParam1, QWidgetH AnonParam2)
{
	QWidget::setTabOrder((QWidget*)AnonParam1, (QWidget*)AnonParam2);
}

C_EXPORT void QWidget_setFocusProxy(QWidgetH handle, QWidgetH AnonParam1)
{
	((QWidget *)handle)->setFocusProxy((QWidget*)AnonParam1);
}

C_EXPORT QWidgetH QWidget_focusProxy(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->focusProxy();
}

C_EXPORT Qt::ContextMenuPolicy QWidget_contextMenuPolicy(QWidgetH handle)
{
	return (Qt::ContextMenuPolicy) ((QWidget *)handle)->contextMenuPolicy();
}

C_EXPORT void QWidget_setContextMenuPolicy(QWidgetH handle, Qt::ContextMenuPolicy policy)
{
	((QWidget *)handle)->setContextMenuPolicy(policy);
}

C_EXPORT void QWidget_grabMouse(QWidgetH handle)
{
	((QWidget *)handle)->grabMouse();
}

C_EXPORT void QWidget_grabMouse2(QWidgetH handle, const QCursorH AnonParam1)
{
	((QWidget *)handle)->grabMouse(*(const QCursor*)AnonParam1);
}

C_EXPORT void QWidget_releaseMouse(QWidgetH handle)
{
	((QWidget *)handle)->releaseMouse();
}

C_EXPORT void QWidget_grabKeyboard(QWidgetH handle)
{
	((QWidget *)handle)->grabKeyboard();
}

C_EXPORT void QWidget_releaseKeyboard(QWidgetH handle)
{
	((QWidget *)handle)->releaseKeyboard();
}

C_EXPORT int QWidget_grabShortcut(QWidgetH handle, const QKeySequenceH key, Qt::ShortcutContext context)
{
	return (int) ((QWidget *)handle)->grabShortcut(*(const QKeySequence*)key, context);
}

C_EXPORT void QWidget_releaseShortcut(QWidgetH handle, int id)
{
	((QWidget *)handle)->releaseShortcut(id);
}

C_EXPORT void QWidget_setShortcutEnabled(QWidgetH handle, int id, bool enable)
{
	((QWidget *)handle)->setShortcutEnabled(id, enable);
}

C_EXPORT void QWidget_setShortcutAutoRepeat(QWidgetH handle, int id, bool enable)
{
	((QWidget *)handle)->setShortcutAutoRepeat(id, enable);
}

C_EXPORT QWidgetH QWidget_mouseGrabber()
{
	return (QWidgetH) QWidget::mouseGrabber();
}

C_EXPORT QWidgetH QWidget_keyboardGrabber()
{
	return (QWidgetH) QWidget::keyboardGrabber();
}

C_EXPORT bool QWidget_updatesEnabled(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->updatesEnabled();
}

C_EXPORT void QWidget_setUpdatesEnabled(QWidgetH handle, bool enable)
{
	((QWidget *)handle)->setUpdatesEnabled(enable);
}

C_EXPORT QGraphicsProxyWidgetH QWidget_graphicsProxyWidget(QWidgetH handle)
{
	return (QGraphicsProxyWidgetH) ((QWidget *)handle)->graphicsProxyWidget();
}

C_EXPORT void QWidget_update(QWidgetH handle)
{
	((QWidget *)handle)->update();
}

C_EXPORT void QWidget_repaint(QWidgetH handle)
{
	((QWidget *)handle)->repaint();
}

C_EXPORT void QWidget_update2(QWidgetH handle, int x, int y, int w, int h)
{
	((QWidget *)handle)->update(x, y, w, h);
}

C_EXPORT void QWidget_update3(QWidgetH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->update(t_AnonParam1);
}

C_EXPORT void QWidget_update4(QWidgetH handle, const QRegionH AnonParam1)
{
	((QWidget *)handle)->update(*(const QRegion*)AnonParam1);
}

C_EXPORT void QWidget_repaint2(QWidgetH handle, int x, int y, int w, int h)
{
	((QWidget *)handle)->repaint(x, y, w, h);
}

C_EXPORT void QWidget_repaint3(QWidgetH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->repaint(t_AnonParam1);
}

C_EXPORT void QWidget_repaint4(QWidgetH handle, const QRegionH AnonParam1)
{
	((QWidget *)handle)->repaint(*(const QRegion*)AnonParam1);
}

C_EXPORT void QWidget_setVisible(QWidgetH handle, bool visible)
{
	((QWidget *)handle)->setVisible(visible);
}

C_EXPORT void QWidget_setHidden(QWidgetH handle, bool hidden)
{
	((QWidget *)handle)->setHidden(hidden);
}

C_EXPORT void QWidget_show(QWidgetH handle)
{
	((QWidget *)handle)->show();
}

C_EXPORT void QWidget_hide(QWidgetH handle)
{
	((QWidget *)handle)->hide();
}

C_EXPORT void QWidget_setShown(QWidgetH handle, bool shown)
{
	((QWidget *)handle)->setShown(shown);
}

C_EXPORT void QWidget_showMinimized(QWidgetH handle)
{
	((QWidget *)handle)->showMinimized();
}

C_EXPORT void QWidget_showMaximized(QWidgetH handle)
{
	((QWidget *)handle)->showMaximized();
}

C_EXPORT void QWidget_showFullScreen(QWidgetH handle)
{
	((QWidget *)handle)->showFullScreen();
}

C_EXPORT void QWidget_showNormal(QWidgetH handle)
{
	((QWidget *)handle)->showNormal();
}

C_EXPORT bool QWidget_close(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->close();
}

C_EXPORT void QWidget_raise(QWidgetH handle)
{
	((QWidget *)handle)->raise();
}

C_EXPORT void QWidget_lower(QWidgetH handle)
{
	((QWidget *)handle)->lower();
}

C_EXPORT void QWidget_stackUnder(QWidgetH handle, QWidgetH AnonParam1)
{
	((QWidget *)handle)->stackUnder((QWidget*)AnonParam1);
}

C_EXPORT void QWidget_move(QWidgetH handle, int x, int y)
{
	((QWidget *)handle)->move(x, y);
}

C_EXPORT void QWidget_move2(QWidgetH handle, const QPointH AnonParam1)
{
	((QWidget *)handle)->move(*(const QPoint*)AnonParam1);
}

C_EXPORT void QWidget_resize(QWidgetH handle, int w, int h)
{
	((QWidget *)handle)->resize(w, h);
}

C_EXPORT void QWidget_resize2(QWidgetH handle, const QSizeH AnonParam1)
{
	((QWidget *)handle)->resize(*(const QSize*)AnonParam1);
}

C_EXPORT void QWidget_setGeometry(QWidgetH handle, int x, int y, int w, int h)
{
	((QWidget *)handle)->setGeometry(x, y, w, h);
}

C_EXPORT void QWidget_setGeometry2(QWidgetH handle, PRect AnonParam1)
{
	QRect t_AnonParam1;
	copyPRectToQRect(AnonParam1, t_AnonParam1);
	((QWidget *)handle)->setGeometry(t_AnonParam1);
}

C_EXPORT void QWidget_saveGeometry(QWidgetH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QWidget *)handle)->saveGeometry();
}

C_EXPORT bool QWidget_restoreGeometry(QWidgetH handle, const QByteArrayH geometry)
{
	return (bool) ((QWidget *)handle)->restoreGeometry(*(const QByteArray*)geometry);
}

C_EXPORT void QWidget_adjustSize(QWidgetH handle)
{
	((QWidget *)handle)->adjustSize();
}

C_EXPORT bool QWidget_isVisible(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isVisible();
}

C_EXPORT bool QWidget_isVisibleTo(QWidgetH handle, QWidgetH AnonParam1)
{
	return (bool) ((QWidget *)handle)->isVisibleTo((QWidget*)AnonParam1);
}

C_EXPORT bool QWidget_isHidden(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isHidden();
}

C_EXPORT bool QWidget_isMinimized(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isMinimized();
}

C_EXPORT bool QWidget_isMaximized(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isMaximized();
}

C_EXPORT bool QWidget_isFullScreen(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->isFullScreen();
}

C_EXPORT unsigned int QWidget_windowState(QWidgetH handle)
{
	return (unsigned int) ((QWidget *)handle)->windowState();
}

C_EXPORT void QWidget_setWindowState(QWidgetH handle, unsigned int state)
{
	((QWidget *)handle)->setWindowState((Qt::WindowStates)state);
}

C_EXPORT void QWidget_overrideWindowState(QWidgetH handle, unsigned int state)
{
	((QWidget *)handle)->overrideWindowState((Qt::WindowStates)state);
}

C_EXPORT void QWidget_sizeHint(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->sizeHint();
}

C_EXPORT void QWidget_minimumSizeHint(QWidgetH handle, PSize retval)
{
	*(QSize *)retval = ((QWidget *)handle)->minimumSizeHint();
}

C_EXPORT void QWidget_sizePolicy(QWidgetH handle, PQSizePolicy retval)
{
	*(QSizePolicy *)retval = ((QWidget *)handle)->sizePolicy();
}

C_EXPORT void QWidget_setSizePolicy(QWidgetH handle, PQSizePolicy AnonParam1)
{
	((QWidget *)handle)->setSizePolicy(*(QSizePolicy *)AnonParam1);
}

C_EXPORT void QWidget_setSizePolicy2(QWidgetH handle, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
{
	((QWidget *)handle)->setSizePolicy(horizontal, vertical);
}

C_EXPORT int QWidget_heightForWidth(QWidgetH handle, int AnonParam1)
{
	return (int) ((QWidget *)handle)->heightForWidth(AnonParam1);
}

C_EXPORT void QWidget_visibleRegion(QWidgetH handle, QRegionH retval)
{
	*(QRegion *)retval = ((QWidget *)handle)->visibleRegion();
}

C_EXPORT void QWidget_setContentsMargins(QWidgetH handle, int left, int top, int right, int bottom)
{
	((QWidget *)handle)->setContentsMargins(left, top, right, bottom);
}

C_EXPORT void QWidget_getContentsMargins(QWidgetH handle, int* left, int* top, int* right, int* bottom)
{
	((QWidget *)handle)->getContentsMargins(left, top, right, bottom);
}

C_EXPORT void QWidget_contentsRect(QWidgetH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QWidget *)handle)->contentsRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT QLayoutH QWidget_layout(QWidgetH handle)
{
	return (QLayoutH) ((QWidget *)handle)->layout();
}

C_EXPORT void QWidget_setLayout(QWidgetH handle, QLayoutH AnonParam1)
{
	((QWidget *)handle)->setLayout((QLayout*)AnonParam1);
}

C_EXPORT void QWidget_updateGeometry(QWidgetH handle)
{
	((QWidget *)handle)->updateGeometry();
}

C_EXPORT void QWidget_setParent(QWidgetH handle, QWidgetH parent)
{
	((QWidget *)handle)->setParent((QWidget*)parent);
}

C_EXPORT void QWidget_setParent2(QWidgetH handle, QWidgetH parent, unsigned int f)
{
	((QWidget *)handle)->setParent((QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QWidget_scroll(QWidgetH handle, int dx, int dy)
{
	((QWidget *)handle)->scroll(dx, dy);
}

C_EXPORT void QWidget_scroll2(QWidgetH handle, int dx, int dy, PRect AnonParam3)
{
	QRect t_AnonParam3;
	copyPRectToQRect(AnonParam3, t_AnonParam3);
	((QWidget *)handle)->scroll(dx, dy, t_AnonParam3);
}

C_EXPORT QWidgetH QWidget_focusWidget(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->focusWidget();
}

C_EXPORT QWidgetH QWidget_nextInFocusChain(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->nextInFocusChain();
}

C_EXPORT bool QWidget_acceptDrops(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->acceptDrops();
}

C_EXPORT void QWidget_setAcceptDrops(QWidgetH handle, bool on)
{
	((QWidget *)handle)->setAcceptDrops(on);
}

C_EXPORT void QWidget_addAction(QWidgetH handle, QActionH action)
{
	((QWidget *)handle)->addAction((QAction*)action);
}

C_EXPORT void QWidget_addActions(QWidgetH handle, PPtrIntArray actions)
{
	QList<QAction*> t_actions;
	copyPtrIntArrayToQListTemplate(actions, t_actions);
	((QWidget *)handle)->addActions(t_actions);
}

C_EXPORT void QWidget_insertAction(QWidgetH handle, QActionH before, QActionH action)
{
	((QWidget *)handle)->insertAction((QAction*)before, (QAction*)action);
}

C_EXPORT void QWidget_insertActions(QWidgetH handle, QActionH before, PPtrIntArray actions)
{
	QList<QAction*> t_actions;
	copyPtrIntArrayToQListTemplate(actions, t_actions);
	((QWidget *)handle)->insertActions((QAction*)before, t_actions);
}

C_EXPORT void QWidget_removeAction(QWidgetH handle, QActionH action)
{
	((QWidget *)handle)->removeAction((QAction*)action);
}

C_EXPORT void QWidget_actions(QWidgetH handle, PPtrIntArray retval)
{
	QList<QAction*> t_retval;
	t_retval = ((QWidget *)handle)->actions();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QWidgetH QWidget_parentWidget(QWidgetH handle)
{
	return (QWidgetH) ((QWidget *)handle)->parentWidget();
}

C_EXPORT void QWidget_setWindowFlags(QWidgetH handle, unsigned int type)
{
	((QWidget *)handle)->setWindowFlags((Qt::WindowFlags)type);
}

C_EXPORT unsigned int QWidget_windowFlags(QWidgetH handle)
{
	return (unsigned int) ((QWidget *)handle)->windowFlags();
}

C_EXPORT void QWidget_overrideWindowFlags(QWidgetH handle, unsigned int type)
{
	((QWidget *)handle)->overrideWindowFlags((Qt::WindowFlags)type);
}

C_EXPORT Qt::WindowType QWidget_windowType(QWidgetH handle)
{
	return (Qt::WindowType) ((QWidget *)handle)->windowType();
}

C_EXPORT QWidgetH QWidget_find(unsigned int AnonParam1)
{
	return (QWidgetH) QWidget::find((WId)AnonParam1);
}

C_EXPORT QWidgetH QWidget_childAt(QWidgetH handle, int x, int y)
{
	return (QWidgetH) ((QWidget *)handle)->childAt(x, y);
}

C_EXPORT QWidgetH QWidget_childAt2(QWidgetH handle, const QPointH p)
{
	return (QWidgetH) ((QWidget *)handle)->childAt(*(const QPoint*)p);
}

#if defined BINUX
C_EXPORT const QX11InfoH QWidget_x11Info(QWidgetH handle)
{
	return (const QX11InfoH) &((QWidget *)handle)->x11Info();
}

C_EXPORT Qt::HANDLE QWidget_x11PictureHandle(QWidgetH handle)
{
	return (Qt::HANDLE) ((QWidget *)handle)->x11PictureHandle();
}

#endif
#if defined BINUX || DARWIN || QTOPIA
C_EXPORT Qt::HANDLE QWidget_handle(QWidgetH handle)
{
	return (Qt::HANDLE) ((QWidget *)handle)->handle();
}

#endif
C_EXPORT void QWidget_setAttribute(QWidgetH handle, Qt::WidgetAttribute AnonParam1, bool on)
{
	((QWidget *)handle)->setAttribute(AnonParam1, on);
}

C_EXPORT bool QWidget_testAttribute(QWidgetH handle, Qt::WidgetAttribute AnonParam1)
{
	return (bool) ((QWidget *)handle)->testAttribute(AnonParam1);
}

C_EXPORT QPaintEngineH QWidget_paintEngine(QWidgetH handle)
{
	return (QPaintEngineH) ((QWidget *)handle)->paintEngine();
}

C_EXPORT void QWidget_ensurePolished(QWidgetH handle)
{
	((QWidget *)handle)->ensurePolished();
}

C_EXPORT QInputContextH QWidget_inputContext(QWidgetH handle)
{
	return (QInputContextH) ((QWidget *)handle)->inputContext();
}

C_EXPORT void QWidget_setInputContext(QWidgetH handle, QInputContextH AnonParam1)
{
	((QWidget *)handle)->setInputContext((QInputContext*)AnonParam1);
}

C_EXPORT bool QWidget_isAncestorOf(QWidgetH handle, const QWidgetH child)
{
	return (bool) ((QWidget *)handle)->isAncestorOf((const QWidget*)child);
}

C_EXPORT bool QWidget_autoFillBackground(QWidgetH handle)
{
	return (bool) ((QWidget *)handle)->autoFillBackground();
}

C_EXPORT void QWidget_setAutoFillBackground(QWidgetH handle, bool enabled)
{
	((QWidget *)handle)->setAutoFillBackground(enabled);
}

C_EXPORT void QWidget_inputMethodQuery(QWidgetH handle, QVariantH retval, Qt::InputMethodQuery AnonParam1)
{
	*(QVariant *)retval = ((QWidget *)handle)->inputMethodQuery(AnonParam1);
}

#if defined MSWINDOWS
C_EXPORT HDC QWidget_getDC(QWidgetH handle)
{
	return (HDC) ((QWidget *)handle)->getDC();
}

C_EXPORT void QWidget_releaseDC(QWidgetH handle, HDC AnonParam1)
{
	((QWidget *)handle)->releaseDC(AnonParam1);
}

#endif
#if defined DARWIN
C_EXPORT Qt::HANDLE QWidget_macQDHandle(QWidgetH handle)
{
	return (Qt::HANDLE) ((QWidget *)handle)->macQDHandle();
}

C_EXPORT Qt::HANDLE QWidget_macCGHandle(QWidgetH handle)
{
	return (Qt::HANDLE) ((QWidget *)handle)->macCGHandle();
}

#endif
C_EXPORT QPaintDeviceH QWidget_to_QPaintDevice(QWidgetH handle)
{
	return (QPaintDeviceH)(QPaintDevice *)(QWidget *)handle;
}

