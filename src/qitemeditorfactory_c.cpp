//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QWidgetH QItemEditorCreatorBase_createWidget(QItemEditorCreatorBaseH handle, QWidgetH parent)
{
	return (QWidgetH) ((QItemEditorCreatorBase *)handle)->createWidget((QWidget*)parent);
}

C_EXPORT void QItemEditorCreatorBase_valuePropertyName(QItemEditorCreatorBaseH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QItemEditorCreatorBase *)handle)->valuePropertyName();
}

C_EXPORT QItemEditorFactoryH QItemEditorFactory_create()
{
	return (QItemEditorFactoryH) new QItemEditorFactory();
}

C_EXPORT void QItemEditorFactory_destroy(QItemEditorFactoryH handle)
{
	delete (QItemEditorFactory *)handle;
}

C_EXPORT QWidgetH QItemEditorFactory_createEditor(QItemEditorFactoryH handle, QVariant::Type type, QWidgetH parent)
{
	return (QWidgetH) ((QItemEditorFactory *)handle)->createEditor(type, (QWidget*)parent);
}

C_EXPORT void QItemEditorFactory_valuePropertyName(QItemEditorFactoryH handle, QByteArrayH retval, QVariant::Type type)
{
	*(QByteArray *)retval = ((QItemEditorFactory *)handle)->valuePropertyName(type);
}

C_EXPORT void QItemEditorFactory_registerEditor(QItemEditorFactoryH handle, QVariant::Type type, QItemEditorCreatorBaseH creator)
{
	((QItemEditorFactory *)handle)->registerEditor(type, (QItemEditorCreatorBase*)creator);
}

C_EXPORT const QItemEditorFactoryH QItemEditorFactory_defaultFactory()
{
	return (const QItemEditorFactoryH) QItemEditorFactory::defaultFactory();
}

C_EXPORT void QItemEditorFactory_setDefaultFactory(QItemEditorFactoryH factory)
{
	QItemEditorFactory::setDefaultFactory((QItemEditorFactory*)factory);
}

