//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QApplicationH QApplication_create(int* argc, char** argv, int AnonParam3)
{
	return (QApplicationH) new QApplication(*(int*)argc, argv, AnonParam3);
}

C_EXPORT void QApplication_destroy(QApplicationH handle)
{
	delete (QApplication *)handle;
}

C_EXPORT QApplicationH QApplication_create2(int* argc, char** argv, bool GUIenabled, int AnonParam4)
{
	return (QApplicationH) new QApplication(*(int*)argc, argv, GUIenabled, AnonParam4);
}

C_EXPORT QApplicationH QApplication_create3(int* argc, char** argv, QApplication::Type AnonParam3, int AnonParam4)
{
	return (QApplicationH) new QApplication(*(int*)argc, argv, AnonParam3, AnonParam4);
}

#if defined BINUX
C_EXPORT QApplicationH QApplication_create4(Display* dpy, Qt::HANDLE visual, Qt::HANDLE cmap, int AnonParam4)
{
	return (QApplicationH) new QApplication(dpy, visual, cmap, AnonParam4);
}

C_EXPORT QApplicationH QApplication_create5(Display* dpy, int* argc, char** argv, Qt::HANDLE visual, Qt::HANDLE cmap, int AnonParam6)
{
	return (QApplicationH) new QApplication(dpy, *(int*)argc, argv, visual, cmap, AnonParam6);
}

#endif
C_EXPORT QApplication::Type QApplication_type()
{
	return (QApplication::Type) QApplication::type();
}

C_EXPORT QStyleH QApplication_style()
{
	return (QStyleH) QApplication::style();
}

C_EXPORT void QApplication_setStyle(QStyleH AnonParam1)
{
	QApplication::setStyle((QStyle*)AnonParam1);
}

C_EXPORT QStyleH QApplication_setStyle2(PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	return (QStyleH) QApplication::setStyle(t_AnonParam1);
}

C_EXPORT int QApplication_colorSpec()
{
	return (int) QApplication::colorSpec();
}

C_EXPORT void QApplication_setColorSpec(int AnonParam1)
{
	QApplication::setColorSpec(AnonParam1);
}

C_EXPORT void QApplication_setGraphicsSystem(PWideString AnonParam1)
{
	QString t_AnonParam1;
	copyPWideStringToQString(AnonParam1, t_AnonParam1);
	QApplication::setGraphicsSystem(t_AnonParam1);
}

C_EXPORT QCursorH QApplication_overrideCursor()
{
	return (QCursorH) QApplication::overrideCursor();
}

C_EXPORT void QApplication_setOverrideCursor(const QCursorH AnonParam1)
{
	QApplication::setOverrideCursor(*(const QCursor*)AnonParam1);
}

C_EXPORT void QApplication_changeOverrideCursor(const QCursorH AnonParam1)
{
	QApplication::changeOverrideCursor(*(const QCursor*)AnonParam1);
}

C_EXPORT void QApplication_restoreOverrideCursor()
{
	QApplication::restoreOverrideCursor();
}

C_EXPORT void QApplication_palette(QPaletteH retval)
{
	*(QPalette *)retval = QApplication::palette();
}

C_EXPORT void QApplication_palette2(QPaletteH retval, const QWidgetH AnonParam1)
{
	*(QPalette *)retval = QApplication::palette((const QWidget*)AnonParam1);
}

C_EXPORT void QApplication_palette3(QPaletteH retval, const char* className)
{
	*(QPalette *)retval = QApplication::palette(className);
}

C_EXPORT void QApplication_setPalette(const QPaletteH AnonParam1, const char* className)
{
	QApplication::setPalette(*(const QPalette*)AnonParam1, className);
}

C_EXPORT void QApplication_font(QFontH retval)
{
	*(QFont *)retval = QApplication::font();
}

C_EXPORT void QApplication_font2(QFontH retval, const QWidgetH AnonParam1)
{
	*(QFont *)retval = QApplication::font((const QWidget*)AnonParam1);
}

C_EXPORT void QApplication_font3(QFontH retval, const char* className)
{
	*(QFont *)retval = QApplication::font(className);
}

C_EXPORT void QApplication_setFont(const QFontH AnonParam1, const char* className)
{
	QApplication::setFont(*(const QFont*)AnonParam1, className);
}

C_EXPORT void QApplication_fontMetrics(QFontMetricsH retval)
{
	*(QFontMetrics *)retval = QApplication::fontMetrics();
}

C_EXPORT void QApplication_setWindowIcon(const QIconH icon)
{
	QApplication::setWindowIcon(*(const QIcon*)icon);
}

C_EXPORT void QApplication_windowIcon(QIconH retval)
{
	*(QIcon *)retval = QApplication::windowIcon();
}

C_EXPORT QDesktopWidgetH QApplication_desktop()
{
	return (QDesktopWidgetH) QApplication::desktop();
}

C_EXPORT QWidgetH QApplication_activePopupWidget()
{
	return (QWidgetH) QApplication::activePopupWidget();
}

C_EXPORT QWidgetH QApplication_activeModalWidget()
{
	return (QWidgetH) QApplication::activeModalWidget();
}

C_EXPORT QClipboardH QApplication_clipboard()
{
	return (QClipboardH) QApplication::clipboard();
}

C_EXPORT QWidgetH QApplication_focusWidget()
{
	return (QWidgetH) QApplication::focusWidget();
}

C_EXPORT QWidgetH QApplication_activeWindow()
{
	return (QWidgetH) QApplication::activeWindow();
}

C_EXPORT void QApplication_setActiveWindow(QWidgetH act)
{
	QApplication::setActiveWindow((QWidget*)act);
}

C_EXPORT QWidgetH QApplication_widgetAt(const QPointH p)
{
	return (QWidgetH) QApplication::widgetAt(*(const QPoint*)p);
}

C_EXPORT QWidgetH QApplication_widgetAt2(int x, int y)
{
	return (QWidgetH) QApplication::widgetAt(x, y);
}

C_EXPORT QWidgetH QApplication_topLevelAt(const QPointH p)
{
	return (QWidgetH) QApplication::topLevelAt(*(const QPoint*)p);
}

C_EXPORT QWidgetH QApplication_topLevelAt2(int x, int y)
{
	return (QWidgetH) QApplication::topLevelAt(x, y);
}

C_EXPORT void QApplication_syncX()
{
	QApplication::syncX();
}

C_EXPORT void QApplication_beep()
{
	QApplication::beep();
}

C_EXPORT void QApplication_alert(QWidgetH widget, int duration)
{
	QApplication::alert((QWidget*)widget, duration);
}

C_EXPORT unsigned int QApplication_keyboardModifiers()
{
	return (unsigned int) QApplication::keyboardModifiers();
}

C_EXPORT unsigned int QApplication_mouseButtons()
{
	return (unsigned int) QApplication::mouseButtons();
}

C_EXPORT void QApplication_setDesktopSettingsAware(bool AnonParam1)
{
	QApplication::setDesktopSettingsAware(AnonParam1);
}

C_EXPORT bool QApplication_desktopSettingsAware()
{
	return (bool) QApplication::desktopSettingsAware();
}

C_EXPORT void QApplication_setCursorFlashTime(int AnonParam1)
{
	QApplication::setCursorFlashTime(AnonParam1);
}

C_EXPORT int QApplication_cursorFlashTime()
{
	return (int) QApplication::cursorFlashTime();
}

C_EXPORT void QApplication_setDoubleClickInterval(int AnonParam1)
{
	QApplication::setDoubleClickInterval(AnonParam1);
}

C_EXPORT int QApplication_doubleClickInterval()
{
	return (int) QApplication::doubleClickInterval();
}

C_EXPORT void QApplication_setKeyboardInputInterval(int AnonParam1)
{
	QApplication::setKeyboardInputInterval(AnonParam1);
}

C_EXPORT int QApplication_keyboardInputInterval()
{
	return (int) QApplication::keyboardInputInterval();
}

C_EXPORT void QApplication_setWheelScrollLines(int AnonParam1)
{
	QApplication::setWheelScrollLines(AnonParam1);
}

C_EXPORT int QApplication_wheelScrollLines()
{
	return (int) QApplication::wheelScrollLines();
}

C_EXPORT void QApplication_setGlobalStrut(const QSizeH AnonParam1)
{
	QApplication::setGlobalStrut(*(const QSize*)AnonParam1);
}

C_EXPORT void QApplication_globalStrut(PSize retval)
{
	*(QSize *)retval = QApplication::globalStrut();
}

C_EXPORT void QApplication_setStartDragTime(int ms)
{
	QApplication::setStartDragTime(ms);
}

C_EXPORT int QApplication_startDragTime()
{
	return (int) QApplication::startDragTime();
}

C_EXPORT void QApplication_setStartDragDistance(int l)
{
	QApplication::setStartDragDistance(l);
}

C_EXPORT int QApplication_startDragDistance()
{
	return (int) QApplication::startDragDistance();
}

C_EXPORT void QApplication_setLayoutDirection(Qt::LayoutDirection direction)
{
	QApplication::setLayoutDirection(direction);
}

C_EXPORT Qt::LayoutDirection QApplication_layoutDirection()
{
	return (Qt::LayoutDirection) QApplication::layoutDirection();
}

C_EXPORT bool QApplication_isRightToLeft()
{
	return (bool) QApplication::isRightToLeft();
}

C_EXPORT bool QApplication_isLeftToRight()
{
	return (bool) QApplication::isLeftToRight();
}

C_EXPORT bool QApplication_isEffectEnabled(Qt::UIEffect AnonParam1)
{
	return (bool) QApplication::isEffectEnabled(AnonParam1);
}

C_EXPORT void QApplication_setEffectEnabled(Qt::UIEffect AnonParam1, bool enable)
{
	QApplication::setEffectEnabled(AnonParam1, enable);
}

#if defined BINUX
C_EXPORT bool QApplication_x11EventFilter(QApplicationH handle, XEvent* AnonParam1)
{
	return (bool) ((QApplication *)handle)->x11EventFilter(AnonParam1);
}

C_EXPORT int QApplication_x11ClientMessage(QApplicationH handle, QWidgetH AnonParam1, XEvent* AnonParam2, bool passive_only)
{
	return (int) ((QApplication *)handle)->x11ClientMessage((QWidget*)AnonParam1, AnonParam2, passive_only);
}

C_EXPORT int QApplication_x11ProcessEvent(QApplicationH handle, XEvent* AnonParam1)
{
	return (int) ((QApplication *)handle)->x11ProcessEvent(AnonParam1);
}

#endif
#if defined BINUX || MSWINDOWS || DARWIN
C_EXPORT bool QApplication_isSessionRestored(QApplicationH handle)
{
	return (bool) ((QApplication *)handle)->isSessionRestored();
}

C_EXPORT void QApplication_sessionId(QApplicationH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QApplication *)handle)->sessionId();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QApplication_sessionKey(QApplicationH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QApplication *)handle)->sessionKey();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QApplication_commitData(QApplicationH handle, QSessionManagerH sm)
{
	((QApplication *)handle)->commitData(*(QSessionManager*)sm);
}

C_EXPORT void QApplication_saveState(QApplicationH handle, QSessionManagerH sm)
{
	((QApplication *)handle)->saveState(*(QSessionManager*)sm);
}

#endif
C_EXPORT void QApplication_setInputContext(QApplicationH handle, QInputContextH AnonParam1)
{
	((QApplication *)handle)->setInputContext((QInputContext*)AnonParam1);
}

C_EXPORT QInputContextH QApplication_inputContext(QApplicationH handle)
{
	return (QInputContextH) ((QApplication *)handle)->inputContext();
}

C_EXPORT void QApplication_keyboardInputLocale(QLocaleH retval)
{
	*(QLocale *)retval = QApplication::keyboardInputLocale();
}

C_EXPORT Qt::LayoutDirection QApplication_keyboardInputDirection()
{
	return (Qt::LayoutDirection) QApplication::keyboardInputDirection();
}

C_EXPORT int QApplication_exec()
{
	return (int) QApplication::exec();
}

C_EXPORT bool QApplication_notify(QApplicationH handle, QObjectH AnonParam1, QEventH AnonParam2)
{
	return (bool) ((QApplication *)handle)->notify((QObject*)AnonParam1, (QEvent*)AnonParam2);
}

C_EXPORT void QApplication_setQuitOnLastWindowClosed(bool quit)
{
	QApplication::setQuitOnLastWindowClosed(quit);
}

C_EXPORT bool QApplication_quitOnLastWindowClosed()
{
	return (bool) QApplication::quitOnLastWindowClosed();
}

C_EXPORT void QApplication_styleSheet(QApplicationH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QApplication *)handle)->styleSheet();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QApplication_setStyleSheet(QApplicationH handle, PWideString sheet)
{
	QString t_sheet;
	copyPWideStringToQString(sheet, t_sheet);
	((QApplication *)handle)->setStyleSheet(t_sheet);
}

C_EXPORT void QApplication_closeAllWindows()
{
	QApplication::closeAllWindows();
}

C_EXPORT void QApplication_aboutQt()
{
	QApplication::aboutQt();
}

#if defined MSWINDOWS
C_EXPORT void QApplication_winFocus(QApplicationH handle, QWidgetH AnonParam1, bool AnonParam2)
{
	((QApplication *)handle)->winFocus((QWidget*)AnonParam1, AnonParam2);
}

C_EXPORT void QApplication_winMouseButtonUp()
{
	QApplication::winMouseButtonUp();
}

#endif
#if defined DARWIN
C_EXPORT bool QApplication_macEventFilter(QApplicationH handle, EventHandlerCallRef AnonParam1, EventRef AnonParam2)
{
	return (bool) ((QApplication *)handle)->macEventFilter(AnonParam1, AnonParam2);
}

#endif
#if defined QTOPIA
C_EXPORT bool QApplication_qwsEventFilter(QApplicationH handle, QWSEventH AnonParam1)
{
	return (bool) ((QApplication *)handle)->qwsEventFilter((QWSEvent*)AnonParam1);
}

C_EXPORT int QApplication_qwsProcessEvent(QApplicationH handle, QWSEventH AnonParam1)
{
	return (int) ((QApplication *)handle)->qwsProcessEvent((QWSEvent*)AnonParam1);
}

C_EXPORT void QApplication_qwsSetCustomColors(QApplicationH handle, QRgb * colortable, int start, int numColors)
{
	((QApplication *)handle)->qwsSetCustomColors((QRgb*)colortable, start, numColors);
}

C_EXPORT QDecorationH QApplication_qwsDecoration()
{
	return (QDecorationH) &QApplication::qwsDecoration();
}

C_EXPORT void QApplication_qwsSetDecoration(QDecorationH AnonParam1)
{
	QApplication::qwsSetDecoration((QDecoration*)AnonParam1);
}

C_EXPORT QDecorationH QApplication_qwsSetDecoration2(PWideString decoration)
{
	QString t_decoration;
	copyPWideStringToQString(decoration, t_decoration);
	return (QDecorationH) QApplication::qwsSetDecoration(t_decoration);
}

#endif
