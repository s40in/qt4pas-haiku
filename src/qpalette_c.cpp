//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPaletteH QPalette_create()
{
	return (QPaletteH) new QPalette();
}

C_EXPORT void QPalette_destroy(QPaletteH handle)
{
	delete (QPalette *)handle;
}

C_EXPORT QPaletteH QPalette_create2(const QColorH button)
{
	return (QPaletteH) new QPalette(*(const QColor*)button);
}

C_EXPORT QPaletteH QPalette_create3(Qt::GlobalColor button)
{
	return (QPaletteH) new QPalette(button);
}

C_EXPORT QPaletteH QPalette_create4(const QColorH button, const QColorH window)
{
	return (QPaletteH) new QPalette(*(const QColor*)button, *(const QColor*)window);
}

C_EXPORT QPaletteH QPalette_create5(const QBrushH windowText, const QBrushH button, const QBrushH light, const QBrushH dark, const QBrushH mid, const QBrushH text, const QBrushH bright_text, const QBrushH base, const QBrushH window)
{
	return (QPaletteH) new QPalette(*(const QBrush*)windowText, *(const QBrush*)button, *(const QBrush*)light, *(const QBrush*)dark, *(const QBrush*)mid, *(const QBrush*)text, *(const QBrush*)bright_text, *(const QBrush*)base, *(const QBrush*)window);
}

C_EXPORT QPaletteH QPalette_create6(const QColorH windowText, const QColorH window, const QColorH light, const QColorH dark, const QColorH mid, const QColorH text, const QColorH base)
{
	return (QPaletteH) new QPalette(*(const QColor*)windowText, *(const QColor*)window, *(const QColor*)light, *(const QColor*)dark, *(const QColor*)mid, *(const QColor*)text, *(const QColor*)base);
}

C_EXPORT QPaletteH QPalette_create7(const QPaletteH palette)
{
	return (QPaletteH) new QPalette(*(const QPalette*)palette);
}

C_EXPORT QPalette::ColorGroup QPalette_currentColorGroup(QPaletteH handle)
{
	return (QPalette::ColorGroup) ((QPalette *)handle)->currentColorGroup();
}

C_EXPORT void QPalette_setCurrentColorGroup(QPaletteH handle, QPalette::ColorGroup cg)
{
	((QPalette *)handle)->setCurrentColorGroup(cg);
}

C_EXPORT const QColorH QPalette_color(QPaletteH handle, QPalette::ColorGroup cg, QPalette::ColorRole cr)
{
	return (const QColorH) &((QPalette *)handle)->color(cg, cr);
}

C_EXPORT const QBrushH QPalette_brush(QPaletteH handle, QPalette::ColorGroup cg, QPalette::ColorRole cr)
{
	return (const QBrushH) &((QPalette *)handle)->brush(cg, cr);
}

C_EXPORT void QPalette_setColor(QPaletteH handle, QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColorH color)
{
	((QPalette *)handle)->setColor(cg, cr, *(const QColor*)color);
}

C_EXPORT void QPalette_setColor2(QPaletteH handle, QPalette::ColorRole cr, const QColorH color)
{
	((QPalette *)handle)->setColor(cr, *(const QColor*)color);
}

C_EXPORT void QPalette_setBrush(QPaletteH handle, QPalette::ColorRole cr, const QBrushH brush)
{
	((QPalette *)handle)->setBrush(cr, *(const QBrush*)brush);
}

C_EXPORT bool QPalette_isBrushSet(QPaletteH handle, QPalette::ColorGroup cg, QPalette::ColorRole cr)
{
	return (bool) ((QPalette *)handle)->isBrushSet(cg, cr);
}

C_EXPORT void QPalette_setBrush2(QPaletteH handle, QPalette::ColorGroup cg, QPalette::ColorRole cr, const QBrushH brush)
{
	((QPalette *)handle)->setBrush(cg, cr, *(const QBrush*)brush);
}

C_EXPORT void QPalette_setColorGroup(QPaletteH handle, QPalette::ColorGroup cr, const QBrushH windowText, const QBrushH button, const QBrushH light, const QBrushH dark, const QBrushH mid, const QBrushH text, const QBrushH bright_text, const QBrushH base, const QBrushH window)
{
	((QPalette *)handle)->setColorGroup(cr, *(const QBrush*)windowText, *(const QBrush*)button, *(const QBrush*)light, *(const QBrush*)dark, *(const QBrush*)mid, *(const QBrush*)text, *(const QBrush*)bright_text, *(const QBrush*)base, *(const QBrush*)window);
}

C_EXPORT bool QPalette_isEqual(QPaletteH handle, QPalette::ColorGroup cr1, QPalette::ColorGroup cr2)
{
	return (bool) ((QPalette *)handle)->isEqual(cr1, cr2);
}

C_EXPORT const QColorH QPalette_color2(QPaletteH handle, QPalette::ColorRole cr)
{
	return (const QColorH) &((QPalette *)handle)->color(cr);
}

C_EXPORT const QBrushH QPalette_brush2(QPaletteH handle, QPalette::ColorRole cr)
{
	return (const QBrushH) &((QPalette *)handle)->brush(cr);
}

C_EXPORT const QBrushH QPalette_foreground(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->foreground();
}

C_EXPORT const QBrushH QPalette_windowText(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->windowText();
}

C_EXPORT const QBrushH QPalette_button(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->button();
}

C_EXPORT const QBrushH QPalette_light(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->light();
}

C_EXPORT const QBrushH QPalette_dark(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->dark();
}

C_EXPORT const QBrushH QPalette_mid(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->mid();
}

C_EXPORT const QBrushH QPalette_text(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->text();
}

C_EXPORT const QBrushH QPalette_base(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->base();
}

C_EXPORT const QBrushH QPalette_alternateBase(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->alternateBase();
}

C_EXPORT const QBrushH QPalette_toolTipBase(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->toolTipBase();
}

C_EXPORT const QBrushH QPalette_toolTipText(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->toolTipText();
}

C_EXPORT const QBrushH QPalette_background(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->background();
}

C_EXPORT const QBrushH QPalette_window(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->window();
}

C_EXPORT const QBrushH QPalette_midlight(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->midlight();
}

C_EXPORT const QBrushH QPalette_brightText(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->brightText();
}

C_EXPORT const QBrushH QPalette_buttonText(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->buttonText();
}

C_EXPORT const QBrushH QPalette_shadow(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->shadow();
}

C_EXPORT const QBrushH QPalette_highlight(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->highlight();
}

C_EXPORT const QBrushH QPalette_highlightedText(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->highlightedText();
}

C_EXPORT const QBrushH QPalette_link(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->link();
}

C_EXPORT const QBrushH QPalette_linkVisited(QPaletteH handle)
{
	return (const QBrushH) &((QPalette *)handle)->linkVisited();
}

C_EXPORT bool QPalette_isCopyOf(QPaletteH handle, const QPaletteH p)
{
	return (bool) ((QPalette *)handle)->isCopyOf(*(const QPalette*)p);
}

C_EXPORT int QPalette_serialNumber(QPaletteH handle)
{
	return (int) ((QPalette *)handle)->serialNumber();
}

C_EXPORT qint64 QPalette_cacheKey(QPaletteH handle)
{
	return (qint64) ((QPalette *)handle)->cacheKey();
}

C_EXPORT void QPalette_resolve(QPaletteH handle, QPaletteH retval, const QPaletteH AnonParam1)
{
	*(QPalette *)retval = ((QPalette *)handle)->resolve(*(const QPalette*)AnonParam1);
}

C_EXPORT uint QPalette_resolve2(QPaletteH handle)
{
	return (uint) ((QPalette *)handle)->resolve();
}

C_EXPORT void QPalette_resolve3(QPaletteH handle, uint mask)
{
	((QPalette *)handle)->resolve(mask);
}

