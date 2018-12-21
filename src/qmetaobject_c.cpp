//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QMetaMethodH QMetaMethod_create()
{
	return (QMetaMethodH) new QMetaMethod();
}

C_EXPORT void QMetaMethod_destroy(QMetaMethodH handle)
{
	delete (QMetaMethod *)handle;
}

C_EXPORT const char* QMetaMethod_signature(QMetaMethodH handle)
{
	return (const char*) ((QMetaMethod *)handle)->signature();
}

C_EXPORT const char* QMetaMethod_typeName(QMetaMethodH handle)
{
	return (const char*) ((QMetaMethod *)handle)->typeName();
}

C_EXPORT const char* QMetaMethod_tag(QMetaMethodH handle)
{
	return (const char*) ((QMetaMethod *)handle)->tag();
}

C_EXPORT QMetaMethod::Access QMetaMethod_access(QMetaMethodH handle)
{
	return (QMetaMethod::Access) ((QMetaMethod *)handle)->access();
}

C_EXPORT QMetaMethod::MethodType QMetaMethod_methodType(QMetaMethodH handle)
{
	return (QMetaMethod::MethodType) ((QMetaMethod *)handle)->methodType();
}

C_EXPORT int QMetaMethod_attributes(QMetaMethodH handle)
{
	return (int) ((QMetaMethod *)handle)->attributes();
}

C_EXPORT const QMetaObjectH QMetaMethod_enclosingMetaObject(QMetaMethodH handle)
{
	return (const QMetaObjectH) ((QMetaMethod *)handle)->enclosingMetaObject();
}

C_EXPORT QMetaEnumH QMetaEnum_create()
{
	return (QMetaEnumH) new QMetaEnum();
}

C_EXPORT void QMetaEnum_destroy(QMetaEnumH handle)
{
	delete (QMetaEnum *)handle;
}

C_EXPORT const char* QMetaEnum_name(QMetaEnumH handle)
{
	return (const char*) ((QMetaEnum *)handle)->name();
}

C_EXPORT bool QMetaEnum_isFlag(QMetaEnumH handle)
{
	return (bool) ((QMetaEnum *)handle)->isFlag();
}

C_EXPORT int QMetaEnum_keyCount(QMetaEnumH handle)
{
	return (int) ((QMetaEnum *)handle)->keyCount();
}

C_EXPORT const char* QMetaEnum_key(QMetaEnumH handle, int index)
{
	return (const char*) ((QMetaEnum *)handle)->key(index);
}

C_EXPORT int QMetaEnum_value(QMetaEnumH handle, int index)
{
	return (int) ((QMetaEnum *)handle)->value(index);
}

C_EXPORT const char* QMetaEnum_scope(QMetaEnumH handle)
{
	return (const char*) ((QMetaEnum *)handle)->scope();
}

C_EXPORT int QMetaEnum_keyToValue(QMetaEnumH handle, const char* key)
{
	return (int) ((QMetaEnum *)handle)->keyToValue(key);
}

C_EXPORT const char* QMetaEnum_valueToKey(QMetaEnumH handle, int value)
{
	return (const char*) ((QMetaEnum *)handle)->valueToKey(value);
}

C_EXPORT int QMetaEnum_keysToValue(QMetaEnumH handle, const char* keys)
{
	return (int) ((QMetaEnum *)handle)->keysToValue(keys);
}

C_EXPORT void QMetaEnum_valueToKeys(QMetaEnumH handle, QByteArrayH retval, int value)
{
	*(QByteArray *)retval = ((QMetaEnum *)handle)->valueToKeys(value);
}

C_EXPORT const QMetaObjectH QMetaEnum_enclosingMetaObject(QMetaEnumH handle)
{
	return (const QMetaObjectH) ((QMetaEnum *)handle)->enclosingMetaObject();
}

C_EXPORT bool QMetaEnum_isValid(QMetaEnumH handle)
{
	return (bool) ((QMetaEnum *)handle)->isValid();
}

C_EXPORT QMetaPropertyH QMetaProperty_create()
{
	return (QMetaPropertyH) new QMetaProperty();
}

C_EXPORT void QMetaProperty_destroy(QMetaPropertyH handle)
{
	delete (QMetaProperty *)handle;
}

C_EXPORT const char* QMetaProperty_name(QMetaPropertyH handle)
{
	return (const char*) ((QMetaProperty *)handle)->name();
}

C_EXPORT const char* QMetaProperty_typeName(QMetaPropertyH handle)
{
	return (const char*) ((QMetaProperty *)handle)->typeName();
}

C_EXPORT QVariant::Type QMetaProperty_type(QMetaPropertyH handle)
{
	return (QVariant::Type) ((QMetaProperty *)handle)->type();
}

C_EXPORT int QMetaProperty_userType(QMetaPropertyH handle)
{
	return (int) ((QMetaProperty *)handle)->userType();
}

C_EXPORT bool QMetaProperty_isReadable(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->isReadable();
}

C_EXPORT bool QMetaProperty_isWritable(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->isWritable();
}

C_EXPORT bool QMetaProperty_isResettable(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->isResettable();
}

C_EXPORT bool QMetaProperty_isDesignable(QMetaPropertyH handle, const QObjectH obj)
{
	return (bool) ((QMetaProperty *)handle)->isDesignable((const QObject*)obj);
}

C_EXPORT bool QMetaProperty_isScriptable(QMetaPropertyH handle, const QObjectH obj)
{
	return (bool) ((QMetaProperty *)handle)->isScriptable((const QObject*)obj);
}

C_EXPORT bool QMetaProperty_isStored(QMetaPropertyH handle, const QObjectH obj)
{
	return (bool) ((QMetaProperty *)handle)->isStored((const QObject*)obj);
}

C_EXPORT bool QMetaProperty_isEditable(QMetaPropertyH handle, const QObjectH obj)
{
	return (bool) ((QMetaProperty *)handle)->isEditable((const QObject*)obj);
}

C_EXPORT bool QMetaProperty_isUser(QMetaPropertyH handle, const QObjectH obj)
{
	return (bool) ((QMetaProperty *)handle)->isUser((const QObject*)obj);
}

C_EXPORT bool QMetaProperty_isFlagType(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->isFlagType();
}

C_EXPORT bool QMetaProperty_isEnumType(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->isEnumType();
}

C_EXPORT void QMetaProperty_enumerator(QMetaPropertyH handle, QMetaEnumH retval)
{
	*(QMetaEnum *)retval = ((QMetaProperty *)handle)->enumerator();
}

C_EXPORT bool QMetaProperty_hasNotifySignal(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->hasNotifySignal();
}

C_EXPORT void QMetaProperty_notifySignal(QMetaPropertyH handle, QMetaMethodH retval)
{
	*(QMetaMethod *)retval = ((QMetaProperty *)handle)->notifySignal();
}

C_EXPORT int QMetaProperty_notifySignalIndex(QMetaPropertyH handle)
{
	return (int) ((QMetaProperty *)handle)->notifySignalIndex();
}

C_EXPORT void QMetaProperty_read(QMetaPropertyH handle, QVariantH retval, const QObjectH obj)
{
	*(QVariant *)retval = ((QMetaProperty *)handle)->read((const QObject*)obj);
}

C_EXPORT bool QMetaProperty_write(QMetaPropertyH handle, QObjectH obj, const QVariantH value)
{
	return (bool) ((QMetaProperty *)handle)->write((QObject*)obj, *(const QVariant*)value);
}

C_EXPORT bool QMetaProperty_reset(QMetaPropertyH handle, QObjectH obj)
{
	return (bool) ((QMetaProperty *)handle)->reset((QObject*)obj);
}

C_EXPORT bool QMetaProperty_hasStdCppSet(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->hasStdCppSet();
}

C_EXPORT bool QMetaProperty_isValid(QMetaPropertyH handle)
{
	return (bool) ((QMetaProperty *)handle)->isValid();
}

C_EXPORT const QMetaObjectH QMetaProperty_enclosingMetaObject(QMetaPropertyH handle)
{
	return (const QMetaObjectH) ((QMetaProperty *)handle)->enclosingMetaObject();
}

C_EXPORT QMetaClassInfoH QMetaClassInfo_create()
{
	return (QMetaClassInfoH) new QMetaClassInfo();
}

C_EXPORT void QMetaClassInfo_destroy(QMetaClassInfoH handle)
{
	delete (QMetaClassInfo *)handle;
}

C_EXPORT const char* QMetaClassInfo_name(QMetaClassInfoH handle)
{
	return (const char*) ((QMetaClassInfo *)handle)->name();
}

C_EXPORT const char* QMetaClassInfo_value(QMetaClassInfoH handle)
{
	return (const char*) ((QMetaClassInfo *)handle)->value();
}

C_EXPORT const QMetaObjectH QMetaClassInfo_enclosingMetaObject(QMetaClassInfoH handle)
{
	return (const QMetaObjectH) ((QMetaClassInfo *)handle)->enclosingMetaObject();
}

