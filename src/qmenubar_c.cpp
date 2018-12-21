//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMenuBarH QMenuBar_create(QWidgetH parent)
{
	return (QMenuBarH) new QMenuBar((QWidget*)parent);
}

C_EXPORT void QMenuBar_destroy(QMenuBarH handle)
{
	delete (QMenuBar *)handle;
}

C_EXPORT QActionH QMenuBar_addAction(QMenuBarH handle, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QMenuBar *)handle)->addAction(t_text);
}

C_EXPORT QActionH QMenuBar_addAction2(QMenuBarH handle, PWideString text, const QObjectH receiver, const char* member)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (QActionH) ((QMenuBar *)handle)->addAction(t_text, (const QObject*)receiver, member);
}

C_EXPORT QActionH QMenuBar_addMenu(QMenuBarH handle, QMenuH menu)
{
	return (QActionH) ((QMenuBar *)handle)->addMenu((QMenu*)menu);
}

C_EXPORT QMenuH QMenuBar_addMenu2(QMenuBarH handle, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QMenuH) ((QMenuBar *)handle)->addMenu(t_title);
}

C_EXPORT QMenuH QMenuBar_addMenu3(QMenuBarH handle, const QIconH icon, PWideString title)
{
	QString t_title;
	copyPWideStringToQString(title, t_title);
	return (QMenuH) ((QMenuBar *)handle)->addMenu(*(const QIcon*)icon, t_title);
}

C_EXPORT QActionH QMenuBar_addSeparator(QMenuBarH handle)
{
	return (QActionH) ((QMenuBar *)handle)->addSeparator();
}

C_EXPORT QActionH QMenuBar_insertSeparator(QMenuBarH handle, QActionH before)
{
	return (QActionH) ((QMenuBar *)handle)->insertSeparator((QAction*)before);
}

C_EXPORT QActionH QMenuBar_insertMenu(QMenuBarH handle, QActionH before, QMenuH menu)
{
	return (QActionH) ((QMenuBar *)handle)->insertMenu((QAction*)before, (QMenu*)menu);
}

C_EXPORT void QMenuBar_clear(QMenuBarH handle)
{
	((QMenuBar *)handle)->clear();
}

C_EXPORT QActionH QMenuBar_activeAction(QMenuBarH handle)
{
	return (QActionH) ((QMenuBar *)handle)->activeAction();
}

C_EXPORT void QMenuBar_setActiveAction(QMenuBarH handle, QActionH action)
{
	((QMenuBar *)handle)->setActiveAction((QAction*)action);
}

C_EXPORT void QMenuBar_setDefaultUp(QMenuBarH handle, bool AnonParam1)
{
	((QMenuBar *)handle)->setDefaultUp(AnonParam1);
}

C_EXPORT bool QMenuBar_isDefaultUp(QMenuBarH handle)
{
	return (bool) ((QMenuBar *)handle)->isDefaultUp();
}

C_EXPORT void QMenuBar_sizeHint(QMenuBarH handle, PSize retval)
{
	*(QSize *)retval = ((QMenuBar *)handle)->sizeHint();
}

C_EXPORT void QMenuBar_minimumSizeHint(QMenuBarH handle, PSize retval)
{
	*(QSize *)retval = ((QMenuBar *)handle)->minimumSizeHint();
}

C_EXPORT int QMenuBar_heightForWidth(QMenuBarH handle, int AnonParam1)
{
	return (int) ((QMenuBar *)handle)->heightForWidth(AnonParam1);
}

C_EXPORT void QMenuBar_actionGeometry(QMenuBarH handle, PRect retval, QActionH AnonParam1)
{
	QRect t_retval;
	t_retval = ((QMenuBar *)handle)->actionGeometry((QAction*)AnonParam1);
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT QActionH QMenuBar_actionAt(QMenuBarH handle, const QPointH AnonParam1)
{
	return (QActionH) ((QMenuBar *)handle)->actionAt(*(const QPoint*)AnonParam1);
}

C_EXPORT void QMenuBar_setCornerWidget(QMenuBarH handle, QWidgetH w, Qt::Corner corner)
{
	((QMenuBar *)handle)->setCornerWidget((QWidget*)w, corner);
}

C_EXPORT QWidgetH QMenuBar_cornerWidget(QMenuBarH handle, Qt::Corner corner)
{
	return (QWidgetH) ((QMenuBar *)handle)->cornerWidget(corner);
}

C_EXPORT void QMenuBar_setVisible(QMenuBarH handle, bool visible)
{
	((QMenuBar *)handle)->setVisible(visible);
}

#if defined DARWIN
C_EXPORT void * QMenuBar_macMenu(QMenuBarH handle)
{
	return (void *) ((QMenuBar *)handle)->macMenu();
}

C_EXPORT bool QMenuBar_macUpdateMenuBar()
{
	return (bool) QMenuBar::macUpdateMenuBar();
}

#endif
