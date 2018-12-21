//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWebPageH QWebPage_create(QObjectH parent)
{
	return (QWebPageH) new QWebPage((QObject*)parent);
}

C_EXPORT void QWebPage_destroy(QWebPageH handle)
{
	delete (QWebPage *)handle;
}

C_EXPORT QWebFrameH QWebPage_mainFrame(QWebPageH handle)
{
	return (QWebFrameH) ((QWebPage *)handle)->mainFrame();
}

C_EXPORT QWebFrameH QWebPage_currentFrame(QWebPageH handle)
{
	return (QWebFrameH) ((QWebPage *)handle)->currentFrame();
}

C_EXPORT QWebHistoryH QWebPage_history(QWebPageH handle)
{
	return (QWebHistoryH) ((QWebPage *)handle)->history();
}

C_EXPORT QWebSettingsH QWebPage_settings(QWebPageH handle)
{
	return (QWebSettingsH) ((QWebPage *)handle)->settings();
}

C_EXPORT void QWebPage_setView(QWebPageH handle, QWidgetH view)
{
	((QWebPage *)handle)->setView((QWidget*)view);
}

C_EXPORT QWidgetH QWebPage_view(QWebPageH handle)
{
	return (QWidgetH) ((QWebPage *)handle)->view();
}

C_EXPORT bool QWebPage_isModified(QWebPageH handle)
{
	return (bool) ((QWebPage *)handle)->isModified();
}

C_EXPORT QUndoStackH QWebPage_undoStack(QWebPageH handle)
{
	return (QUndoStackH) ((QWebPage *)handle)->undoStack();
}

C_EXPORT void QWebPage_setNetworkAccessManager(QWebPageH handle, QNetworkAccessManagerH manager)
{
	((QWebPage *)handle)->setNetworkAccessManager((QNetworkAccessManager*)manager);
}

C_EXPORT QNetworkAccessManagerH QWebPage_networkAccessManager(QWebPageH handle)
{
	return (QNetworkAccessManagerH) ((QWebPage *)handle)->networkAccessManager();
}

C_EXPORT void QWebPage_setPluginFactory(QWebPageH handle, QWebPluginFactoryH factory)
{
	((QWebPage *)handle)->setPluginFactory((QWebPluginFactory*)factory);
}

C_EXPORT QWebPluginFactoryH QWebPage_pluginFactory(QWebPageH handle)
{
	return (QWebPluginFactoryH) ((QWebPage *)handle)->pluginFactory();
}

C_EXPORT quint64 QWebPage_totalBytes(QWebPageH handle)
{
	return (quint64) ((QWebPage *)handle)->totalBytes();
}

C_EXPORT quint64 QWebPage_bytesReceived(QWebPageH handle)
{
	return (quint64) ((QWebPage *)handle)->bytesReceived();
}

C_EXPORT void QWebPage_selectedText(QWebPageH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebPage *)handle)->selectedText();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT QActionH QWebPage_action(QWebPageH handle, QWebPage::WebAction action)
{
	return (QActionH) ((QWebPage *)handle)->action(action);
}

C_EXPORT void QWebPage_triggerAction(QWebPageH handle, QWebPage::WebAction action, bool checked)
{
	((QWebPage *)handle)->triggerAction(action, checked);
}

C_EXPORT void QWebPage_viewportSize(QWebPageH handle, PSize retval)
{
	*(QSize *)retval = ((QWebPage *)handle)->viewportSize();
}

C_EXPORT void QWebPage_setViewportSize(QWebPageH handle, const QSizeH size)
{
	((QWebPage *)handle)->setViewportSize(*(const QSize*)size);
}

C_EXPORT bool QWebPage_event(QWebPageH handle, QEventH AnonParam1)
{
	return (bool) ((QWebPage *)handle)->event((QEvent*)AnonParam1);
}

C_EXPORT bool QWebPage_focusNextPrevChild(QWebPageH handle, bool next)
{
	return (bool) ((QWebPage *)handle)->focusNextPrevChild(next);
}

C_EXPORT void QWebPage_inputMethodQuery(QWebPageH handle, QVariantH retval, Qt::InputMethodQuery property)
{
	*(QVariant *)retval = ((QWebPage *)handle)->inputMethodQuery(property);
}

C_EXPORT bool QWebPage_findText(QWebPageH handle, PWideString subString, unsigned int options)
{
	QString t_subString;
	copyPWideStringToQString(subString, t_subString);
	return (bool) ((QWebPage *)handle)->findText(t_subString, (QWebPage::FindFlags)options);
}

C_EXPORT void QWebPage_setForwardUnsupportedContent(QWebPageH handle, bool forward)
{
	((QWebPage *)handle)->setForwardUnsupportedContent(forward);
}

C_EXPORT bool QWebPage_forwardUnsupportedContent(QWebPageH handle)
{
	return (bool) ((QWebPage *)handle)->forwardUnsupportedContent();
}

C_EXPORT void QWebPage_setLinkDelegationPolicy(QWebPageH handle, QWebPage::LinkDelegationPolicy policy)
{
	((QWebPage *)handle)->setLinkDelegationPolicy(policy);
}

C_EXPORT QWebPage::LinkDelegationPolicy QWebPage_linkDelegationPolicy(QWebPageH handle)
{
	return (QWebPage::LinkDelegationPolicy) ((QWebPage *)handle)->linkDelegationPolicy();
}

C_EXPORT void QWebPage_setPalette(QWebPageH handle, const QPaletteH palette)
{
	((QWebPage *)handle)->setPalette(*(const QPalette*)palette);
}

C_EXPORT void QWebPage_palette(QWebPageH handle, QPaletteH retval)
{
	*(QPalette *)retval = ((QWebPage *)handle)->palette();
}

C_EXPORT void QWebPage_setContentEditable(QWebPageH handle, bool editable)
{
	((QWebPage *)handle)->setContentEditable(editable);
}

C_EXPORT bool QWebPage_isContentEditable(QWebPageH handle)
{
	return (bool) ((QWebPage *)handle)->isContentEditable();
}

C_EXPORT bool QWebPage_swallowContextMenuEvent(QWebPageH handle, QContextMenuEventH event)
{
	return (bool) ((QWebPage *)handle)->swallowContextMenuEvent((QContextMenuEvent*)event);
}

C_EXPORT void QWebPage_updatePositionDependentActions(QWebPageH handle, const QPointH pos)
{
	((QWebPage *)handle)->updatePositionDependentActions(*(const QPoint*)pos);
}

C_EXPORT QMenuH QWebPage_createStandardContextMenu(QWebPageH handle)
{
	return (QMenuH) ((QWebPage *)handle)->createStandardContextMenu();
}

C_EXPORT bool QWebPage_supportsExtension(QWebPageH handle, QWebPage::Extension extension)
{
	return (bool) ((QWebPage *)handle)->supportsExtension(extension);
}

