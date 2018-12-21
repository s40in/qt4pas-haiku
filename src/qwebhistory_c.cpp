//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWebHistoryItemH QWebHistoryItem_create(const QWebHistoryItemH other)
{
	return (QWebHistoryItemH) new QWebHistoryItem(*(const QWebHistoryItem*)other);
}

C_EXPORT void QWebHistoryItem_destroy(QWebHistoryItemH handle)
{
	delete (QWebHistoryItem *)handle;
}

C_EXPORT void QWebHistoryItem_originalUrl(QWebHistoryItemH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebHistoryItem *)handle)->originalUrl();
}

C_EXPORT void QWebHistoryItem_url(QWebHistoryItemH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QWebHistoryItem *)handle)->url();
}

C_EXPORT void QWebHistoryItem_title(QWebHistoryItemH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QWebHistoryItem *)handle)->title();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QWebHistoryItem_lastVisited(QWebHistoryItemH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QWebHistoryItem *)handle)->lastVisited();
}

C_EXPORT void QWebHistoryItem_icon(QWebHistoryItemH handle, QIconH retval)
{
	*(QIcon *)retval = ((QWebHistoryItem *)handle)->icon();
}

C_EXPORT void QWebHistoryItem_userData(QWebHistoryItemH handle, QVariantH retval)
{
	*(QVariant *)retval = ((QWebHistoryItem *)handle)->userData();
}

C_EXPORT void QWebHistoryItem_setUserData(QWebHistoryItemH handle, const QVariantH userData)
{
	((QWebHistoryItem *)handle)->setUserData(*(const QVariant*)userData);
}

C_EXPORT bool QWebHistoryItem_isValid(QWebHistoryItemH handle)
{
	return (bool) ((QWebHistoryItem *)handle)->isValid();
}

C_EXPORT void QWebHistory_clear(QWebHistoryH handle)
{
	((QWebHistory *)handle)->clear();
}

C_EXPORT void QWebHistory_items(QWebHistoryH handle, PPtrIntArray retval)
{
	QList<QWebHistoryItem> t_retval;
	t_retval = ((QWebHistory *)handle)->items();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QWebHistory_backItems(QWebHistoryH handle, PPtrIntArray retval, int maxItems)
{
	QList<QWebHistoryItem> t_retval;
	t_retval = ((QWebHistory *)handle)->backItems(maxItems);
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT void QWebHistory_forwardItems(QWebHistoryH handle, PPtrIntArray retval, int maxItems)
{
	QList<QWebHistoryItem> t_retval;
	t_retval = ((QWebHistory *)handle)->forwardItems(maxItems);
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

C_EXPORT bool QWebHistory_canGoBack(QWebHistoryH handle)
{
	return (bool) ((QWebHistory *)handle)->canGoBack();
}

C_EXPORT bool QWebHistory_canGoForward(QWebHistoryH handle)
{
	return (bool) ((QWebHistory *)handle)->canGoForward();
}

C_EXPORT void QWebHistory_back(QWebHistoryH handle)
{
	((QWebHistory *)handle)->back();
}

C_EXPORT void QWebHistory_forward(QWebHistoryH handle)
{
	((QWebHistory *)handle)->forward();
}

C_EXPORT void QWebHistory_goToItem(QWebHistoryH handle, const QWebHistoryItemH item)
{
	((QWebHistory *)handle)->goToItem(*(const QWebHistoryItem*)item);
}

C_EXPORT void QWebHistory_backItem(QWebHistoryH handle, QWebHistoryItemH retval)
{
	*(QWebHistoryItem *)retval = ((QWebHistory *)handle)->backItem();
}

C_EXPORT void QWebHistory_currentItem(QWebHistoryH handle, QWebHistoryItemH retval)
{
	*(QWebHistoryItem *)retval = ((QWebHistory *)handle)->currentItem();
}

C_EXPORT void QWebHistory_forwardItem(QWebHistoryH handle, QWebHistoryItemH retval)
{
	*(QWebHistoryItem *)retval = ((QWebHistory *)handle)->forwardItem();
}

C_EXPORT void QWebHistory_itemAt(QWebHistoryH handle, QWebHistoryItemH retval, int i)
{
	*(QWebHistoryItem *)retval = ((QWebHistory *)handle)->itemAt(i);
}

C_EXPORT int QWebHistory_currentItemIndex(QWebHistoryH handle)
{
	return (int) ((QWebHistory *)handle)->currentItemIndex();
}

C_EXPORT int QWebHistory_count(QWebHistoryH handle)
{
	return (int) ((QWebHistory *)handle)->count();
}

C_EXPORT int QWebHistory_maximumItemCount(QWebHistoryH handle)
{
	return (int) ((QWebHistory *)handle)->maximumItemCount();
}

C_EXPORT void QWebHistory_setMaximumItemCount(QWebHistoryH handle, int count)
{
	((QWebHistory *)handle)->setMaximumItemCount(count);
}

