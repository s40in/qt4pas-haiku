//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QColorH QColor_create()
{
	return (QColorH) new QColor();
}

C_EXPORT void QColor_destroy(QColorH handle)
{
	delete (QColor *)handle;
}

C_EXPORT QColorH QColor_create2(Qt::GlobalColor color)
{
	return (QColorH) new QColor(color);
}

C_EXPORT QColorH QColor_create3(int r, int g, int b, int a)
{
	return (QColorH) new QColor(r, g, b, a);
}

C_EXPORT QColorH QColor_create4(QRgb rgb)
{
	return (QColorH) new QColor(rgb);
}

C_EXPORT QColorH QColor_create5(PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	return (QColorH) new QColor(t_name);
}

C_EXPORT QColorH QColor_create6(const char* name)
{
	return (QColorH) new QColor(name);
}

C_EXPORT QColorH QColor_create7(const QColorH color)
{
	return (QColorH) new QColor(*(const QColor*)color);
}

C_EXPORT QColorH QColor_create8(QColor::Spec spec)
{
	return (QColorH) new QColor(spec);
}

C_EXPORT bool QColor_isValid(QColorH handle)
{
	return (bool) ((QColor *)handle)->isValid();
}

C_EXPORT void QColor_name(QColorH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QColor *)handle)->name();
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QColor_setNamedColor(QColorH handle, PWideString name)
{
	QString t_name;
	copyPWideStringToQString(name, t_name);
	((QColor *)handle)->setNamedColor(t_name);
}

C_EXPORT void QColor_colorNames(QStringListH retval)
{
	*(QStringList *)retval = QColor::colorNames();
}

C_EXPORT QColor::Spec QColor_spec(QColorH handle)
{
	return (QColor::Spec) ((QColor *)handle)->spec();
}

C_EXPORT int QColor_alpha(QColorH handle)
{
	return (int) ((QColor *)handle)->alpha();
}

C_EXPORT void QColor_setAlpha(QColorH handle, int alpha)
{
	((QColor *)handle)->setAlpha(alpha);
}

C_EXPORT qreal QColor_alphaF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->alphaF();
}

C_EXPORT void QColor_setAlphaF(QColorH handle, qreal alpha)
{
	((QColor *)handle)->setAlphaF(alpha);
}

C_EXPORT int QColor_red(QColorH handle)
{
	return (int) ((QColor *)handle)->red();
}

C_EXPORT int QColor_green(QColorH handle)
{
	return (int) ((QColor *)handle)->green();
}

C_EXPORT int QColor_blue(QColorH handle)
{
	return (int) ((QColor *)handle)->blue();
}

C_EXPORT void QColor_setRed(QColorH handle, int red)
{
	((QColor *)handle)->setRed(red);
}

C_EXPORT void QColor_setGreen(QColorH handle, int green)
{
	((QColor *)handle)->setGreen(green);
}

C_EXPORT void QColor_setBlue(QColorH handle, int blue)
{
	((QColor *)handle)->setBlue(blue);
}

C_EXPORT qreal QColor_redF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->redF();
}

C_EXPORT qreal QColor_greenF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->greenF();
}

C_EXPORT qreal QColor_blueF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->blueF();
}

C_EXPORT void QColor_setRedF(QColorH handle, qreal red)
{
	((QColor *)handle)->setRedF(red);
}

C_EXPORT void QColor_setGreenF(QColorH handle, qreal green)
{
	((QColor *)handle)->setGreenF(green);
}

C_EXPORT void QColor_setBlueF(QColorH handle, qreal blue)
{
	((QColor *)handle)->setBlueF(blue);
}

C_EXPORT void QColor_getRgb(QColorH handle, int* r, int* g, int* b, int* a)
{
	((QColor *)handle)->getRgb(r, g, b, a);
}

C_EXPORT void QColor_setRgb(QColorH handle, int r, int g, int b, int a)
{
	((QColor *)handle)->setRgb(r, g, b, a);
}

C_EXPORT void QColor_getRgbF(QColorH handle, qreal* r, qreal* g, qreal* b, qreal* a)
{
	((QColor *)handle)->getRgbF(r, g, b, a);
}

C_EXPORT void QColor_setRgbF(QColorH handle, qreal r, qreal g, qreal b, qreal a)
{
	((QColor *)handle)->setRgbF(r, g, b, a);
}

C_EXPORT QRgb QColor_rgba(QColorH handle)
{
	return (QRgb) ((QColor *)handle)->rgba();
}

C_EXPORT void QColor_setRgba(QColorH handle, QRgb rgba)
{
	((QColor *)handle)->setRgba(rgba);
}

C_EXPORT QRgb QColor_rgb(QColorH handle)
{
	return (QRgb) ((QColor *)handle)->rgb();
}

C_EXPORT void QColor_setRgb2(QColorH handle, QRgb rgb)
{
	((QColor *)handle)->setRgb(rgb);
}

C_EXPORT int QColor_hue(QColorH handle)
{
	return (int) ((QColor *)handle)->hue();
}

C_EXPORT int QColor_saturation(QColorH handle)
{
	return (int) ((QColor *)handle)->saturation();
}

C_EXPORT int QColor_value(QColorH handle)
{
	return (int) ((QColor *)handle)->value();
}

C_EXPORT qreal QColor_hueF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->hueF();
}

C_EXPORT qreal QColor_saturationF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->saturationF();
}

C_EXPORT qreal QColor_valueF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->valueF();
}

C_EXPORT void QColor_getHsv(QColorH handle, int* h, int* s, int* v, int* a)
{
	((QColor *)handle)->getHsv(h, s, v, a);
}

C_EXPORT void QColor_setHsv(QColorH handle, int h, int s, int v, int a)
{
	((QColor *)handle)->setHsv(h, s, v, a);
}

C_EXPORT void QColor_getHsvF(QColorH handle, qreal* h, qreal* s, qreal* v, qreal* a)
{
	((QColor *)handle)->getHsvF(h, s, v, a);
}

C_EXPORT void QColor_setHsvF(QColorH handle, qreal h, qreal s, qreal v, qreal a)
{
	((QColor *)handle)->setHsvF(h, s, v, a);
}

C_EXPORT int QColor_cyan(QColorH handle)
{
	return (int) ((QColor *)handle)->cyan();
}

C_EXPORT int QColor_magenta(QColorH handle)
{
	return (int) ((QColor *)handle)->magenta();
}

C_EXPORT int QColor_yellow(QColorH handle)
{
	return (int) ((QColor *)handle)->yellow();
}

C_EXPORT int QColor_black(QColorH handle)
{
	return (int) ((QColor *)handle)->black();
}

C_EXPORT qreal QColor_cyanF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->cyanF();
}

C_EXPORT qreal QColor_magentaF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->magentaF();
}

C_EXPORT qreal QColor_yellowF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->yellowF();
}

C_EXPORT qreal QColor_blackF(QColorH handle)
{
	return (qreal) ((QColor *)handle)->blackF();
}

C_EXPORT void QColor_getCmyk(QColorH handle, int* c, int* m, int* y, int* k, int* a)
{
	((QColor *)handle)->getCmyk(c, m, y, k, a);
}

C_EXPORT void QColor_setCmyk(QColorH handle, int c, int m, int y, int k, int a)
{
	((QColor *)handle)->setCmyk(c, m, y, k, a);
}

C_EXPORT void QColor_getCmykF(QColorH handle, qreal* c, qreal* m, qreal* y, qreal* k, qreal* a)
{
	((QColor *)handle)->getCmykF(c, m, y, k, a);
}

C_EXPORT void QColor_setCmykF(QColorH handle, qreal c, qreal m, qreal y, qreal k, qreal a)
{
	((QColor *)handle)->setCmykF(c, m, y, k, a);
}

C_EXPORT void QColor_toRgb(QColorH handle, PQColor retval)
{
	*(QColor *)retval = ((QColor *)handle)->toRgb();
}

C_EXPORT void QColor_toHsv(QColorH handle, PQColor retval)
{
	*(QColor *)retval = ((QColor *)handle)->toHsv();
}

C_EXPORT void QColor_toCmyk(QColorH handle, PQColor retval)
{
	*(QColor *)retval = ((QColor *)handle)->toCmyk();
}

C_EXPORT void QColor_convertTo(QColorH handle, PQColor retval, QColor::Spec colorSpec)
{
	*(QColor *)retval = ((QColor *)handle)->convertTo(colorSpec);
}

C_EXPORT void QColor_fromRgb(PQColor retval, QRgb rgb)
{
	*(QColor *)retval = QColor::fromRgb(rgb);
}

C_EXPORT void QColor_fromRgba(PQColor retval, QRgb rgba)
{
	*(QColor *)retval = QColor::fromRgba(rgba);
}

C_EXPORT void QColor_fromRgb2(PQColor retval, int r, int g, int b, int a)
{
	*(QColor *)retval = QColor::fromRgb(r, g, b, a);
}

C_EXPORT void QColor_fromRgbF(PQColor retval, qreal r, qreal g, qreal b, qreal a)
{
	*(QColor *)retval = QColor::fromRgbF(r, g, b, a);
}

C_EXPORT void QColor_fromHsv(PQColor retval, int h, int s, int v, int a)
{
	*(QColor *)retval = QColor::fromHsv(h, s, v, a);
}

C_EXPORT void QColor_fromHsvF(PQColor retval, qreal h, qreal s, qreal v, qreal a)
{
	*(QColor *)retval = QColor::fromHsvF(h, s, v, a);
}

C_EXPORT void QColor_fromCmyk(PQColor retval, int c, int m, int y, int k, int a)
{
	*(QColor *)retval = QColor::fromCmyk(c, m, y, k, a);
}

C_EXPORT void QColor_fromCmykF(PQColor retval, qreal c, qreal m, qreal y, qreal k, qreal a)
{
	*(QColor *)retval = QColor::fromCmykF(c, m, y, k, a);
}

C_EXPORT void QColor_light(QColorH handle, PQColor retval, int f)
{
	*(QColor *)retval = ((QColor *)handle)->light(f);
}

C_EXPORT void QColor_lighter(QColorH handle, PQColor retval, int f)
{
	*(QColor *)retval = ((QColor *)handle)->lighter(f);
}

C_EXPORT void QColor_dark(QColorH handle, PQColor retval, int f)
{
	*(QColor *)retval = ((QColor *)handle)->dark(f);
}

C_EXPORT void QColor_darker(QColorH handle, PQColor retval, int f)
{
	*(QColor *)retval = ((QColor *)handle)->darker(f);
}

#if defined BINUX
C_EXPORT bool QColor_allowX11ColorNames()
{
	return (bool) QColor::allowX11ColorNames();
}

C_EXPORT void QColor_setAllowX11ColorNames(bool enabled)
{
	QColor::setAllowX11ColorNames(enabled);
}

#endif
