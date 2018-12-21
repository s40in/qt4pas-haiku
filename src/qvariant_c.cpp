//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QVariantH QVariant_create()
{
	return (QVariantH) new QVariant();
}

C_EXPORT void QVariant_destroy(QVariantH handle)
{
	delete (QVariant *)handle;
}

C_EXPORT QVariantH QVariant_create3(int typeOrUserType, const void* copy)
{
	return (QVariantH) new QVariant(typeOrUserType, copy);
}

C_EXPORT QVariantH QVariant_create4(const QVariantH other)
{
	return (QVariantH) new QVariant(*(const QVariant*)other);
}

C_EXPORT QVariantH QVariant_create5(QDataStreamH s)
{
	return (QVariantH) new QVariant(*(QDataStream*)s);
}

C_EXPORT QVariantH QVariant_create6(int i)
{
	return (QVariantH) new QVariant(i);
}

C_EXPORT QVariantH QVariant_create8(qlonglong ll)
{
	return (QVariantH) new QVariant(ll);
}

C_EXPORT QVariantH QVariant_create9(qulonglong ull)
{
	return (QVariantH) new QVariant(ull);
}

C_EXPORT QVariantH QVariant_create10(bool b)
{
	return (QVariantH) new QVariant(b);
}

C_EXPORT QVariantH QVariant_create11(double d)
{
	return (QVariantH) new QVariant(d);
}

C_EXPORT QVariantH QVariant_create12(const char* str)
{
	return (QVariantH) new QVariant(str);
}

C_EXPORT QVariantH QVariant_create13(const QByteArrayH bytearray)
{
	return (QVariantH) new QVariant(*(const QByteArray*)bytearray);
}

C_EXPORT QVariantH QVariant_create14(const QBitArrayH bitarray)
{
	return (QVariantH) new QVariant(*(const QBitArray*)bitarray);
}

C_EXPORT QVariantH QVariant_create15(PWideString string)
{
	QString t_string;
	copyPWideStringToQString(string, t_string);
	return (QVariantH) new QVariant(t_string);
}

C_EXPORT QVariantH QVariant_create16(const QLatin1StringH string)
{
	return (QVariantH) new QVariant(*(const QLatin1String*)string);
}

C_EXPORT QVariantH QVariant_create17(const QStringListH stringlist)
{
	return (QVariantH) new QVariant(*(const QStringList*)stringlist);
}

C_EXPORT QVariantH QVariant_create18(const QCharH qchar)
{
	return (QVariantH) new QVariant(*(const QChar*)qchar);
}

C_EXPORT QVariantH QVariant_create19(const QDateH date)
{
	return (QVariantH) new QVariant(*(const QDate*)date);
}

C_EXPORT QVariantH QVariant_create20(const QTimeH time)
{
	return (QVariantH) new QVariant(*(const QTime*)time);
}

C_EXPORT QVariantH QVariant_create21(const QDateTimeH datetime)
{
	return (QVariantH) new QVariant(*(const QDateTime*)datetime);
}

C_EXPORT QVariantH QVariant_create25(const QPointFH pt)
{
	return (QVariantH) new QVariant(*(const QPointF*)pt);
}

C_EXPORT QVariantH QVariant_create26(const QLineH line)
{
	return (QVariantH) new QVariant(*(const QLine*)line);
}

C_EXPORT QVariantH QVariant_create27(const QLineFH line)
{
	return (QVariantH) new QVariant(*(const QLineF*)line);
}

C_EXPORT QVariantH QVariant_create28(PRect rect)
{
	QRect t_rect;
	copyPRectToQRect(rect, t_rect);
	return (QVariantH) new QVariant(t_rect);
}

C_EXPORT QVariantH QVariant_create29(const QRectFH rect)
{
	return (QVariantH) new QVariant(*(const QRectF*)rect);
}

C_EXPORT QVariantH QVariant_create30(const QUrlH url)
{
	return (QVariantH) new QVariant(*(const QUrl*)url);
}

C_EXPORT QVariantH QVariant_create31(const QLocaleH locale)
{
	return (QVariantH) new QVariant(*(const QLocale*)locale);
}

C_EXPORT QVariantH QVariant_create32(const QRegExpH regExp)
{
	return (QVariantH) new QVariant(*(const QRegExp*)regExp);
}

C_EXPORT QVariantH QVariant_create33(Qt::GlobalColor color)
{
	return (QVariantH) new QVariant(color);
}

C_EXPORT QVariant::Type QVariant_type(QVariantH handle)
{
	return (QVariant::Type) ((QVariant *)handle)->type();
}

C_EXPORT int QVariant_userType(QVariantH handle)
{
	return (int) ((QVariant *)handle)->userType();
}

C_EXPORT const char* QVariant_typeName(QVariantH handle)
{
	return (const char*) ((QVariant *)handle)->typeName();
}

C_EXPORT bool QVariant_canConvert(QVariantH handle, QVariant::Type t)
{
	return (bool) ((QVariant *)handle)->canConvert(t);
}

C_EXPORT bool QVariant_convert(QVariantH handle, QVariant::Type t)
{
	return (bool) ((QVariant *)handle)->convert(t);
}

C_EXPORT bool QVariant_isValid(QVariantH handle)
{
	return (bool) ((QVariant *)handle)->isValid();
}

C_EXPORT bool QVariant_isNull(QVariantH handle)
{
	return (bool) ((QVariant *)handle)->isNull();
}

C_EXPORT void QVariant_clear(QVariantH handle)
{
	((QVariant *)handle)->clear();
}

C_EXPORT void QVariant_detach(QVariantH handle)
{
	((QVariant *)handle)->detach();
}

C_EXPORT bool QVariant_isDetached(QVariantH handle)
{
	return (bool) ((QVariant *)handle)->isDetached();
}

C_EXPORT int QVariant_toInt(QVariantH handle, bool* ok)
{
	return (int) ((QVariant *)handle)->toInt(ok);
}

C_EXPORT uint QVariant_toUInt(QVariantH handle, bool* ok)
{
	return (uint) ((QVariant *)handle)->toUInt(ok);
}

C_EXPORT qlonglong QVariant_toLongLong(QVariantH handle, bool* ok)
{
	return (qlonglong) ((QVariant *)handle)->toLongLong(ok);
}

C_EXPORT qulonglong QVariant_toULongLong(QVariantH handle, bool* ok)
{
	return (qulonglong) ((QVariant *)handle)->toULongLong(ok);
}

C_EXPORT bool QVariant_toBool(QVariantH handle)
{
	return (bool) ((QVariant *)handle)->toBool();
}

C_EXPORT double QVariant_toDouble(QVariantH handle, bool* ok)
{
	return (double) ((QVariant *)handle)->toDouble(ok);
}

C_EXPORT void QVariant_toByteArray(QVariantH handle, QByteArrayH retval)
{
	*(QByteArray *)retval = ((QVariant *)handle)->toByteArray();
}

C_EXPORT void QVariant_toBitArray(QVariantH handle, QBitArrayH retval)
{
	*(QBitArray *)retval = ((QVariant *)handle)->toBitArray();
}

C_EXPORT void QVariant_toString(QVariantH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QVariant *)handle)->toString();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QVariant_toStringList(QVariantH handle, QStringListH retval)
{
	*(QStringList *)retval = ((QVariant *)handle)->toStringList();
}

C_EXPORT void QVariant_toChar(QVariantH handle, PWideChar retval)
{
	*(QChar *)retval = ((QVariant *)handle)->toChar();
}

C_EXPORT void QVariant_toDate(QVariantH handle, QDateH retval)
{
	*(QDate *)retval = ((QVariant *)handle)->toDate();
}

C_EXPORT void QVariant_toTime(QVariantH handle, QTimeH retval)
{
	*(QTime *)retval = ((QVariant *)handle)->toTime();
}

C_EXPORT void QVariant_toDateTime(QVariantH handle, QDateTimeH retval)
{
	*(QDateTime *)retval = ((QVariant *)handle)->toDateTime();
}

C_EXPORT void QVariant_toPoint(QVariantH handle, PQtPoint retval)
{
	*(QPoint *)retval = ((QVariant *)handle)->toPoint();
}

C_EXPORT void QVariant_toPointF(QVariantH handle, PQtPointF retval)
{
	*(QPointF *)retval = ((QVariant *)handle)->toPointF();
}

C_EXPORT void QVariant_toRect(QVariantH handle, PRect retval)
{
	QRect t_retval;
	t_retval = ((QVariant *)handle)->toRect();
	copyQRectToPRect(t_retval, retval);
}

C_EXPORT void QVariant_toSize(QVariantH handle, PSize retval)
{
	*(QSize *)retval = ((QVariant *)handle)->toSize();
}

C_EXPORT void QVariant_toSizeF(QVariantH handle, QSizeFH retval)
{
	*(QSizeF *)retval = ((QVariant *)handle)->toSizeF();
}

C_EXPORT void QVariant_toLine(QVariantH handle, QLineH retval)
{
	*(QLine *)retval = ((QVariant *)handle)->toLine();
}

C_EXPORT void QVariant_toLineF(QVariantH handle, QLineFH retval)
{
	*(QLineF *)retval = ((QVariant *)handle)->toLineF();
}

C_EXPORT void QVariant_toRectF(QVariantH handle, QRectFH retval)
{
	*(QRectF *)retval = ((QVariant *)handle)->toRectF();
}

C_EXPORT void QVariant_toUrl(QVariantH handle, QUrlH retval)
{
	*(QUrl *)retval = ((QVariant *)handle)->toUrl();
}

C_EXPORT void QVariant_toLocale(QVariantH handle, QLocaleH retval)
{
	*(QLocale *)retval = ((QVariant *)handle)->toLocale();
}

C_EXPORT void QVariant_toRegExp(QVariantH handle, QRegExpH retval)
{
	*(QRegExp *)retval = ((QVariant *)handle)->toRegExp();
}

C_EXPORT void QVariant_load(QVariantH handle, QDataStreamH ds)
{
	((QVariant *)handle)->load(*(QDataStream*)ds);
}

C_EXPORT void QVariant_save(QVariantH handle, QDataStreamH ds)
{
	((QVariant *)handle)->save(*(QDataStream*)ds);
}

C_EXPORT const char* QVariant_typeToName(QVariant::Type type)
{
	return (const char*) QVariant::typeToName(type);
}

C_EXPORT QVariant::Type QVariant_nameToType(const char* name)
{
	return (QVariant::Type) QVariant::nameToType(name);
}

C_EXPORT const void* QVariant_constData(QVariantH handle)
{
	return (const void*) ((QVariant *)handle)->constData();
}

