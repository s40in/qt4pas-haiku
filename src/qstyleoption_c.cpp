//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT int QStyleOption_version(QStyleOptionH handle)
{
	return (int) ((QStyleOption *)handle)->version;
}

C_EXPORT void QStyleOption_setVersion(QStyleOptionH handle, int version)
{
	((QStyleOption *)handle)->version = version;
}

C_EXPORT int QStyleOption_type(QStyleOptionH handle)
{
	return (int) ((QStyleOption *)handle)->type;
}

C_EXPORT void QStyleOption_setType(QStyleOptionH handle, int type)
{
	((QStyleOption *)handle)->type = type;
}

C_EXPORT unsigned int QStyleOption_state(QStyleOptionH handle)
{
	return (unsigned int) ((QStyleOption *)handle)->state;
}

C_EXPORT void QStyleOption_setState(QStyleOptionH handle, unsigned int state)
{
	((QStyleOption *)handle)->state =(QStyle::State)state;
}

C_EXPORT Qt::LayoutDirection QStyleOption_direction(QStyleOptionH handle)
{
	return (Qt::LayoutDirection) ((QStyleOption *)handle)->direction;
}

C_EXPORT void QStyleOption_setDirection(QStyleOptionH handle, Qt::LayoutDirection direction)
{
	((QStyleOption *)handle)->direction = direction;
}

C_EXPORT void QStyleOption_rect(QStyleOptionH handle, PRect retval)
{
	copyQRectToPRect(((QStyleOption *)handle)->rect,retval);
}

C_EXPORT void QStyleOption_setRect(QStyleOptionH handle, PRect rect)
{
	copyPRectToQRect(rect,((QStyleOption *)handle)->rect);
}

C_EXPORT void QStyleOption_fontMetrics(QStyleOptionH handle, QFontMetricsH retval)
{
	 *(QFontMetrics *)retval = ((QStyleOption *)handle)->fontMetrics;
}

C_EXPORT void QStyleOption_setFontMetrics(QStyleOptionH handle, QFontMetricsH fontMetrics)
{
	((QStyleOption *)handle)->fontMetrics = *(QFontMetrics *)fontMetrics;
}

C_EXPORT void QStyleOption_palette(QStyleOptionH handle, QPaletteH retval)
{
	 *(QPalette *)retval = ((QStyleOption *)handle)->palette;
}

C_EXPORT void QStyleOption_setPalette(QStyleOptionH handle, QPaletteH palette)
{
	((QStyleOption *)handle)->palette = *(QPalette *)palette;
}

C_EXPORT QStyleOptionH QStyleOption_create(int version, int type)
{
	return (QStyleOptionH) new QStyleOption(version, type);
}

C_EXPORT void QStyleOption_destroy(QStyleOptionH handle)
{
	delete (QStyleOption *)handle;
}

C_EXPORT QStyleOptionH QStyleOption_create2(const QStyleOptionH other)
{
	return (QStyleOptionH) new QStyleOption(*(const QStyleOption*)other);
}

C_EXPORT void QStyleOption_init(QStyleOptionH handle, const QWidgetH w)
{
	((QStyleOption *)handle)->init((const QWidget*)w);
}

C_EXPORT void QStyleOption_initFrom(QStyleOptionH handle, const QWidgetH w)
{
	((QStyleOption *)handle)->initFrom((const QWidget*)w);
}

C_EXPORT void QStyleOptionFocusRect_backgroundColor(QStyleOptionFocusRectH handle, PQColor retval)
{
	 *(QColor *)retval = ((QStyleOptionFocusRect *)handle)->backgroundColor;
}

C_EXPORT void QStyleOptionFocusRect_setBackgroundColor(QStyleOptionFocusRectH handle, PQColor backgroundColor)
{
	((QStyleOptionFocusRect *)handle)->backgroundColor = *(QColor *)backgroundColor;
}

C_EXPORT QStyleOptionFocusRectH QStyleOptionFocusRect_create()
{
	return (QStyleOptionFocusRectH) new QStyleOptionFocusRect();
}

C_EXPORT void QStyleOptionFocusRect_destroy(QStyleOptionFocusRectH handle)
{
	delete (QStyleOptionFocusRect *)handle;
}

C_EXPORT QStyleOptionFocusRectH QStyleOptionFocusRect_create2(const QStyleOptionFocusRectH other)
{
	return (QStyleOptionFocusRectH) new QStyleOptionFocusRect(*(const QStyleOptionFocusRect*)other);
}

C_EXPORT int QStyleOptionFrame_lineWidth(QStyleOptionFrameH handle)
{
	return (int) ((QStyleOptionFrame *)handle)->lineWidth;
}

C_EXPORT void QStyleOptionFrame_setLineWidth(QStyleOptionFrameH handle, int lineWidth)
{
	((QStyleOptionFrame *)handle)->lineWidth = lineWidth;
}

C_EXPORT int QStyleOptionFrame_midLineWidth(QStyleOptionFrameH handle)
{
	return (int) ((QStyleOptionFrame *)handle)->midLineWidth;
}

C_EXPORT void QStyleOptionFrame_setMidLineWidth(QStyleOptionFrameH handle, int midLineWidth)
{
	((QStyleOptionFrame *)handle)->midLineWidth = midLineWidth;
}

C_EXPORT QStyleOptionFrameH QStyleOptionFrame_create()
{
	return (QStyleOptionFrameH) new QStyleOptionFrame();
}

C_EXPORT void QStyleOptionFrame_destroy(QStyleOptionFrameH handle)
{
	delete (QStyleOptionFrame *)handle;
}

C_EXPORT QStyleOptionFrameH QStyleOptionFrame_create2(const QStyleOptionFrameH other)
{
	return (QStyleOptionFrameH) new QStyleOptionFrame(*(const QStyleOptionFrame*)other);
}

C_EXPORT unsigned int QStyleOptionFrameV2_features(QStyleOptionFrameV2H handle)
{
	return (unsigned int) ((QStyleOptionFrameV2 *)handle)->features;
}

C_EXPORT void QStyleOptionFrameV2_setFeatures(QStyleOptionFrameV2H handle, unsigned int features)
{
	((QStyleOptionFrameV2 *)handle)->features =(QStyleOptionFrameV2::FrameFeatures)features;
}

C_EXPORT QStyleOptionFrameV2H QStyleOptionFrameV2_create()
{
	return (QStyleOptionFrameV2H) new QStyleOptionFrameV2();
}

C_EXPORT void QStyleOptionFrameV2_destroy(QStyleOptionFrameV2H handle)
{
	delete (QStyleOptionFrameV2 *)handle;
}

C_EXPORT QStyleOptionFrameV2H QStyleOptionFrameV2_create2(const QStyleOptionFrameV2H other)
{
	return (QStyleOptionFrameV2H) new QStyleOptionFrameV2(*(const QStyleOptionFrameV2*)other);
}

C_EXPORT QStyleOptionFrameV2H QStyleOptionFrameV2_create3(const QStyleOptionFrameH other)
{
	return (QStyleOptionFrameV2H) new QStyleOptionFrameV2(*(const QStyleOptionFrame*)other);
}

C_EXPORT QFrame::Shape QStyleOptionFrameV3_frameShape(QStyleOptionFrameV3H handle)
{
	return (QFrame::Shape) ((QStyleOptionFrameV3 *)handle)->frameShape;
}

C_EXPORT void QStyleOptionFrameV3_setFrameShape(QStyleOptionFrameV3H handle, QFrame::Shape frameShape)
{
	((QStyleOptionFrameV3 *)handle)->frameShape = frameShape;
}

C_EXPORT uint QStyleOptionFrameV3_unused(QStyleOptionFrameV3H handle)
{
	return (uint) ((QStyleOptionFrameV3 *)handle)->unused;
}

C_EXPORT void QStyleOptionFrameV3_setUnused(QStyleOptionFrameV3H handle, uint unused)
{
	((QStyleOptionFrameV3 *)handle)->unused = unused;
}

C_EXPORT QStyleOptionFrameV3H QStyleOptionFrameV3_create()
{
	return (QStyleOptionFrameV3H) new QStyleOptionFrameV3();
}

C_EXPORT void QStyleOptionFrameV3_destroy(QStyleOptionFrameV3H handle)
{
	delete (QStyleOptionFrameV3 *)handle;
}

C_EXPORT QStyleOptionFrameV3H QStyleOptionFrameV3_create2(const QStyleOptionFrameV3H other)
{
	return (QStyleOptionFrameV3H) new QStyleOptionFrameV3(*(const QStyleOptionFrameV3*)other);
}

C_EXPORT QStyleOptionFrameV3H QStyleOptionFrameV3_create3(const QStyleOptionFrameH other)
{
	return (QStyleOptionFrameV3H) new QStyleOptionFrameV3(*(const QStyleOptionFrame*)other);
}

C_EXPORT int QStyleOptionTabWidgetFrame_lineWidth(QStyleOptionTabWidgetFrameH handle)
{
	return (int) ((QStyleOptionTabWidgetFrame *)handle)->lineWidth;
}

C_EXPORT void QStyleOptionTabWidgetFrame_setLineWidth(QStyleOptionTabWidgetFrameH handle, int lineWidth)
{
	((QStyleOptionTabWidgetFrame *)handle)->lineWidth = lineWidth;
}

C_EXPORT int QStyleOptionTabWidgetFrame_midLineWidth(QStyleOptionTabWidgetFrameH handle)
{
	return (int) ((QStyleOptionTabWidgetFrame *)handle)->midLineWidth;
}

C_EXPORT void QStyleOptionTabWidgetFrame_setMidLineWidth(QStyleOptionTabWidgetFrameH handle, int midLineWidth)
{
	((QStyleOptionTabWidgetFrame *)handle)->midLineWidth = midLineWidth;
}

C_EXPORT QTabBar::Shape QStyleOptionTabWidgetFrame_shape(QStyleOptionTabWidgetFrameH handle)
{
	return (QTabBar::Shape) ((QStyleOptionTabWidgetFrame *)handle)->shape;
}

C_EXPORT void QStyleOptionTabWidgetFrame_setShape(QStyleOptionTabWidgetFrameH handle, QTabBar::Shape shape)
{
	((QStyleOptionTabWidgetFrame *)handle)->shape = shape;
}

C_EXPORT void QStyleOptionTabWidgetFrame_tabBarSize(QStyleOptionTabWidgetFrameH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionTabWidgetFrame *)handle)->tabBarSize;
}

C_EXPORT void QStyleOptionTabWidgetFrame_setTabBarSize(QStyleOptionTabWidgetFrameH handle, PSize tabBarSize)
{
	((QStyleOptionTabWidgetFrame *)handle)->tabBarSize = *(QSize *)tabBarSize;
}

C_EXPORT void QStyleOptionTabWidgetFrame_rightCornerWidgetSize(QStyleOptionTabWidgetFrameH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionTabWidgetFrame *)handle)->rightCornerWidgetSize;
}

C_EXPORT void QStyleOptionTabWidgetFrame_setRightCornerWidgetSize(QStyleOptionTabWidgetFrameH handle, PSize rightCornerWidgetSize)
{
	((QStyleOptionTabWidgetFrame *)handle)->rightCornerWidgetSize = *(QSize *)rightCornerWidgetSize;
}

C_EXPORT void QStyleOptionTabWidgetFrame_leftCornerWidgetSize(QStyleOptionTabWidgetFrameH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionTabWidgetFrame *)handle)->leftCornerWidgetSize;
}

C_EXPORT void QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize(QStyleOptionTabWidgetFrameH handle, PSize leftCornerWidgetSize)
{
	((QStyleOptionTabWidgetFrame *)handle)->leftCornerWidgetSize = *(QSize *)leftCornerWidgetSize;
}

C_EXPORT QStyleOptionTabWidgetFrameH QStyleOptionTabWidgetFrame_create()
{
	return (QStyleOptionTabWidgetFrameH) new QStyleOptionTabWidgetFrame();
}

C_EXPORT void QStyleOptionTabWidgetFrame_destroy(QStyleOptionTabWidgetFrameH handle)
{
	delete (QStyleOptionTabWidgetFrame *)handle;
}

C_EXPORT QStyleOptionTabWidgetFrameH QStyleOptionTabWidgetFrame_create2(const QStyleOptionTabWidgetFrameH other)
{
	return (QStyleOptionTabWidgetFrameH) new QStyleOptionTabWidgetFrame(*(const QStyleOptionTabWidgetFrame*)other);
}

C_EXPORT QTabBar::Shape QStyleOptionTabBarBase_shape(QStyleOptionTabBarBaseH handle)
{
	return (QTabBar::Shape) ((QStyleOptionTabBarBase *)handle)->shape;
}

C_EXPORT void QStyleOptionTabBarBase_setShape(QStyleOptionTabBarBaseH handle, QTabBar::Shape shape)
{
	((QStyleOptionTabBarBase *)handle)->shape = shape;
}

C_EXPORT void QStyleOptionTabBarBase_tabBarRect(QStyleOptionTabBarBaseH handle, PRect retval)
{
	copyQRectToPRect(((QStyleOptionTabBarBase *)handle)->tabBarRect,retval);
}

C_EXPORT void QStyleOptionTabBarBase_setTabBarRect(QStyleOptionTabBarBaseH handle, PRect tabBarRect)
{
	copyPRectToQRect(tabBarRect,((QStyleOptionTabBarBase *)handle)->tabBarRect);
}

C_EXPORT void QStyleOptionTabBarBase_selectedTabRect(QStyleOptionTabBarBaseH handle, PRect retval)
{
	copyQRectToPRect(((QStyleOptionTabBarBase *)handle)->selectedTabRect,retval);
}

C_EXPORT void QStyleOptionTabBarBase_setSelectedTabRect(QStyleOptionTabBarBaseH handle, PRect selectedTabRect)
{
	copyPRectToQRect(selectedTabRect,((QStyleOptionTabBarBase *)handle)->selectedTabRect);
}

C_EXPORT QStyleOptionTabBarBaseH QStyleOptionTabBarBase_create()
{
	return (QStyleOptionTabBarBaseH) new QStyleOptionTabBarBase();
}

C_EXPORT void QStyleOptionTabBarBase_destroy(QStyleOptionTabBarBaseH handle)
{
	delete (QStyleOptionTabBarBase *)handle;
}

C_EXPORT QStyleOptionTabBarBaseH QStyleOptionTabBarBase_create2(const QStyleOptionTabBarBaseH other)
{
	return (QStyleOptionTabBarBaseH) new QStyleOptionTabBarBase(*(const QStyleOptionTabBarBase*)other);
}

C_EXPORT bool QStyleOptionTabBarBaseV2_documentMode(QStyleOptionTabBarBaseV2H handle)
{
	return (bool) ((QStyleOptionTabBarBaseV2 *)handle)->documentMode;
}

C_EXPORT void QStyleOptionTabBarBaseV2_setDocumentMode(QStyleOptionTabBarBaseV2H handle, bool documentMode)
{
	((QStyleOptionTabBarBaseV2 *)handle)->documentMode = documentMode;
}

C_EXPORT QStyleOptionTabBarBaseV2H QStyleOptionTabBarBaseV2_create()
{
	return (QStyleOptionTabBarBaseV2H) new QStyleOptionTabBarBaseV2();
}

C_EXPORT void QStyleOptionTabBarBaseV2_destroy(QStyleOptionTabBarBaseV2H handle)
{
	delete (QStyleOptionTabBarBaseV2 *)handle;
}

C_EXPORT QStyleOptionTabBarBaseV2H QStyleOptionTabBarBaseV2_create2(const QStyleOptionTabBarBaseV2H other)
{
	return (QStyleOptionTabBarBaseV2H) new QStyleOptionTabBarBaseV2(*(const QStyleOptionTabBarBaseV2*)other);
}

C_EXPORT QStyleOptionTabBarBaseV2H QStyleOptionTabBarBaseV2_create3(const QStyleOptionTabBarBaseH other)
{
	return (QStyleOptionTabBarBaseV2H) new QStyleOptionTabBarBaseV2(*(const QStyleOptionTabBarBase*)other);
}

C_EXPORT int QStyleOptionHeader_section(QStyleOptionHeaderH handle)
{
	return (int) ((QStyleOptionHeader *)handle)->section;
}

C_EXPORT void QStyleOptionHeader_setSection(QStyleOptionHeaderH handle, int section)
{
	((QStyleOptionHeader *)handle)->section = section;
}

C_EXPORT void QStyleOptionHeader_text(QStyleOptionHeaderH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionHeader *)handle)->text,retval);
}

C_EXPORT void QStyleOptionHeader_setText(QStyleOptionHeaderH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionHeader *)handle)->text);
}

C_EXPORT unsigned int QStyleOptionHeader_textAlignment(QStyleOptionHeaderH handle)
{
	return (unsigned int) ((QStyleOptionHeader *)handle)->textAlignment;
}

C_EXPORT void QStyleOptionHeader_setTextAlignment(QStyleOptionHeaderH handle, unsigned int textAlignment)
{
	((QStyleOptionHeader *)handle)->textAlignment =(Qt::Alignment)textAlignment;
}

C_EXPORT void QStyleOptionHeader_icon(QStyleOptionHeaderH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionHeader *)handle)->icon;
}

C_EXPORT void QStyleOptionHeader_setIcon(QStyleOptionHeaderH handle, QIconH icon)
{
	((QStyleOptionHeader *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT unsigned int QStyleOptionHeader_iconAlignment(QStyleOptionHeaderH handle)
{
	return (unsigned int) ((QStyleOptionHeader *)handle)->iconAlignment;
}

C_EXPORT void QStyleOptionHeader_setIconAlignment(QStyleOptionHeaderH handle, unsigned int iconAlignment)
{
	((QStyleOptionHeader *)handle)->iconAlignment =(Qt::Alignment)iconAlignment;
}

C_EXPORT QStyleOptionHeader::SectionPosition QStyleOptionHeader_position(QStyleOptionHeaderH handle)
{
	return (QStyleOptionHeader::SectionPosition) ((QStyleOptionHeader *)handle)->position;
}

C_EXPORT void QStyleOptionHeader_setPosition(QStyleOptionHeaderH handle, QStyleOptionHeader::SectionPosition position)
{
	((QStyleOptionHeader *)handle)->position = position;
}

C_EXPORT QStyleOptionHeader::SelectedPosition QStyleOptionHeader_selectedPosition(QStyleOptionHeaderH handle)
{
	return (QStyleOptionHeader::SelectedPosition) ((QStyleOptionHeader *)handle)->selectedPosition;
}

C_EXPORT void QStyleOptionHeader_setSelectedPosition(QStyleOptionHeaderH handle, QStyleOptionHeader::SelectedPosition selectedPosition)
{
	((QStyleOptionHeader *)handle)->selectedPosition = selectedPosition;
}

C_EXPORT QStyleOptionHeader::SortIndicator QStyleOptionHeader_sortIndicator(QStyleOptionHeaderH handle)
{
	return (QStyleOptionHeader::SortIndicator) ((QStyleOptionHeader *)handle)->sortIndicator;
}

C_EXPORT void QStyleOptionHeader_setSortIndicator(QStyleOptionHeaderH handle, QStyleOptionHeader::SortIndicator sortIndicator)
{
	((QStyleOptionHeader *)handle)->sortIndicator = sortIndicator;
}

C_EXPORT Qt::Orientation QStyleOptionHeader_orientation(QStyleOptionHeaderH handle)
{
	return (Qt::Orientation) ((QStyleOptionHeader *)handle)->orientation;
}

C_EXPORT void QStyleOptionHeader_setOrientation(QStyleOptionHeaderH handle, Qt::Orientation orientation)
{
	((QStyleOptionHeader *)handle)->orientation = orientation;
}

C_EXPORT QStyleOptionHeaderH QStyleOptionHeader_create()
{
	return (QStyleOptionHeaderH) new QStyleOptionHeader();
}

C_EXPORT void QStyleOptionHeader_destroy(QStyleOptionHeaderH handle)
{
	delete (QStyleOptionHeader *)handle;
}

C_EXPORT QStyleOptionHeaderH QStyleOptionHeader_create2(const QStyleOptionHeaderH other)
{
	return (QStyleOptionHeaderH) new QStyleOptionHeader(*(const QStyleOptionHeader*)other);
}

C_EXPORT unsigned int QStyleOptionButton_features(QStyleOptionButtonH handle)
{
	return (unsigned int) ((QStyleOptionButton *)handle)->features;
}

C_EXPORT void QStyleOptionButton_setFeatures(QStyleOptionButtonH handle, unsigned int features)
{
	((QStyleOptionButton *)handle)->features =(QStyleOptionButton::ButtonFeatures)features;
}

C_EXPORT void QStyleOptionButton_text(QStyleOptionButtonH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionButton *)handle)->text,retval);
}

C_EXPORT void QStyleOptionButton_setText(QStyleOptionButtonH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionButton *)handle)->text);
}

C_EXPORT void QStyleOptionButton_icon(QStyleOptionButtonH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionButton *)handle)->icon;
}

C_EXPORT void QStyleOptionButton_setIcon(QStyleOptionButtonH handle, QIconH icon)
{
	((QStyleOptionButton *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT void QStyleOptionButton_iconSize(QStyleOptionButtonH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionButton *)handle)->iconSize;
}

C_EXPORT void QStyleOptionButton_setIconSize(QStyleOptionButtonH handle, PSize iconSize)
{
	((QStyleOptionButton *)handle)->iconSize = *(QSize *)iconSize;
}

C_EXPORT QStyleOptionButtonH QStyleOptionButton_create()
{
	return (QStyleOptionButtonH) new QStyleOptionButton();
}

C_EXPORT void QStyleOptionButton_destroy(QStyleOptionButtonH handle)
{
	delete (QStyleOptionButton *)handle;
}

C_EXPORT QStyleOptionButtonH QStyleOptionButton_create2(const QStyleOptionButtonH other)
{
	return (QStyleOptionButtonH) new QStyleOptionButton(*(const QStyleOptionButton*)other);
}

C_EXPORT QTabBar::Shape QStyleOptionTab_shape(QStyleOptionTabH handle)
{
	return (QTabBar::Shape) ((QStyleOptionTab *)handle)->shape;
}

C_EXPORT void QStyleOptionTab_setShape(QStyleOptionTabH handle, QTabBar::Shape shape)
{
	((QStyleOptionTab *)handle)->shape = shape;
}

C_EXPORT void QStyleOptionTab_text(QStyleOptionTabH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionTab *)handle)->text,retval);
}

C_EXPORT void QStyleOptionTab_setText(QStyleOptionTabH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionTab *)handle)->text);
}

C_EXPORT void QStyleOptionTab_icon(QStyleOptionTabH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionTab *)handle)->icon;
}

C_EXPORT void QStyleOptionTab_setIcon(QStyleOptionTabH handle, QIconH icon)
{
	((QStyleOptionTab *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT int QStyleOptionTab_row(QStyleOptionTabH handle)
{
	return (int) ((QStyleOptionTab *)handle)->row;
}

C_EXPORT void QStyleOptionTab_setRow(QStyleOptionTabH handle, int row)
{
	((QStyleOptionTab *)handle)->row = row;
}

C_EXPORT QStyleOptionTab::TabPosition QStyleOptionTab_position(QStyleOptionTabH handle)
{
	return (QStyleOptionTab::TabPosition) ((QStyleOptionTab *)handle)->position;
}

C_EXPORT void QStyleOptionTab_setPosition(QStyleOptionTabH handle, QStyleOptionTab::TabPosition position)
{
	((QStyleOptionTab *)handle)->position = position;
}

C_EXPORT QStyleOptionTab::SelectedPosition QStyleOptionTab_selectedPosition(QStyleOptionTabH handle)
{
	return (QStyleOptionTab::SelectedPosition) ((QStyleOptionTab *)handle)->selectedPosition;
}

C_EXPORT void QStyleOptionTab_setSelectedPosition(QStyleOptionTabH handle, QStyleOptionTab::SelectedPosition selectedPosition)
{
	((QStyleOptionTab *)handle)->selectedPosition = selectedPosition;
}

C_EXPORT unsigned int QStyleOptionTab_cornerWidgets(QStyleOptionTabH handle)
{
	return (unsigned int) ((QStyleOptionTab *)handle)->cornerWidgets;
}

C_EXPORT void QStyleOptionTab_setCornerWidgets(QStyleOptionTabH handle, unsigned int cornerWidgets)
{
	((QStyleOptionTab *)handle)->cornerWidgets =(QStyleOptionTab::CornerWidgets)cornerWidgets;
}

C_EXPORT QStyleOptionTabH QStyleOptionTab_create()
{
	return (QStyleOptionTabH) new QStyleOptionTab();
}

C_EXPORT void QStyleOptionTab_destroy(QStyleOptionTabH handle)
{
	delete (QStyleOptionTab *)handle;
}

C_EXPORT QStyleOptionTabH QStyleOptionTab_create2(const QStyleOptionTabH other)
{
	return (QStyleOptionTabH) new QStyleOptionTab(*(const QStyleOptionTab*)other);
}

C_EXPORT void QStyleOptionTabV2_iconSize(QStyleOptionTabV2H handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionTabV2 *)handle)->iconSize;
}

C_EXPORT void QStyleOptionTabV2_setIconSize(QStyleOptionTabV2H handle, PSize iconSize)
{
	((QStyleOptionTabV2 *)handle)->iconSize = *(QSize *)iconSize;
}

C_EXPORT QStyleOptionTabV2H QStyleOptionTabV2_create()
{
	return (QStyleOptionTabV2H) new QStyleOptionTabV2();
}

C_EXPORT void QStyleOptionTabV2_destroy(QStyleOptionTabV2H handle)
{
	delete (QStyleOptionTabV2 *)handle;
}

C_EXPORT QStyleOptionTabV2H QStyleOptionTabV2_create2(const QStyleOptionTabV2H other)
{
	return (QStyleOptionTabV2H) new QStyleOptionTabV2(*(const QStyleOptionTabV2*)other);
}

C_EXPORT QStyleOptionTabV2H QStyleOptionTabV2_create3(const QStyleOptionTabH other)
{
	return (QStyleOptionTabV2H) new QStyleOptionTabV2(*(const QStyleOptionTab*)other);
}

C_EXPORT bool QStyleOptionTabV3_documentMode(QStyleOptionTabV3H handle)
{
	return (bool) ((QStyleOptionTabV3 *)handle)->documentMode;
}

C_EXPORT void QStyleOptionTabV3_setDocumentMode(QStyleOptionTabV3H handle, bool documentMode)
{
	((QStyleOptionTabV3 *)handle)->documentMode = documentMode;
}

C_EXPORT void QStyleOptionTabV3_leftButtonSize(QStyleOptionTabV3H handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionTabV3 *)handle)->leftButtonSize;
}

C_EXPORT void QStyleOptionTabV3_setLeftButtonSize(QStyleOptionTabV3H handle, PSize leftButtonSize)
{
	((QStyleOptionTabV3 *)handle)->leftButtonSize = *(QSize *)leftButtonSize;
}

C_EXPORT void QStyleOptionTabV3_rightButtonSize(QStyleOptionTabV3H handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionTabV3 *)handle)->rightButtonSize;
}

C_EXPORT void QStyleOptionTabV3_setRightButtonSize(QStyleOptionTabV3H handle, PSize rightButtonSize)
{
	((QStyleOptionTabV3 *)handle)->rightButtonSize = *(QSize *)rightButtonSize;
}

C_EXPORT QStyleOptionTabV3H QStyleOptionTabV3_create()
{
	return (QStyleOptionTabV3H) new QStyleOptionTabV3();
}

C_EXPORT void QStyleOptionTabV3_destroy(QStyleOptionTabV3H handle)
{
	delete (QStyleOptionTabV3 *)handle;
}

C_EXPORT QStyleOptionTabV3H QStyleOptionTabV3_create2(const QStyleOptionTabV3H other)
{
	return (QStyleOptionTabV3H) new QStyleOptionTabV3(*(const QStyleOptionTabV3*)other);
}

C_EXPORT QStyleOptionTabV3H QStyleOptionTabV3_create3(const QStyleOptionTabV2H other)
{
	return (QStyleOptionTabV3H) new QStyleOptionTabV3(*(const QStyleOptionTabV2*)other);
}

C_EXPORT QStyleOptionTabV3H QStyleOptionTabV3_create4(const QStyleOptionTabH other)
{
	return (QStyleOptionTabV3H) new QStyleOptionTabV3(*(const QStyleOptionTab*)other);
}

C_EXPORT QStyleOptionToolBar::ToolBarPosition QStyleOptionToolBar_positionOfLine(QStyleOptionToolBarH handle)
{
	return (QStyleOptionToolBar::ToolBarPosition) ((QStyleOptionToolBar *)handle)->positionOfLine;
}

C_EXPORT void QStyleOptionToolBar_setPositionOfLine(QStyleOptionToolBarH handle, QStyleOptionToolBar::ToolBarPosition positionOfLine)
{
	((QStyleOptionToolBar *)handle)->positionOfLine = positionOfLine;
}

C_EXPORT QStyleOptionToolBar::ToolBarPosition QStyleOptionToolBar_positionWithinLine(QStyleOptionToolBarH handle)
{
	return (QStyleOptionToolBar::ToolBarPosition) ((QStyleOptionToolBar *)handle)->positionWithinLine;
}

C_EXPORT void QStyleOptionToolBar_setPositionWithinLine(QStyleOptionToolBarH handle, QStyleOptionToolBar::ToolBarPosition positionWithinLine)
{
	((QStyleOptionToolBar *)handle)->positionWithinLine = positionWithinLine;
}

C_EXPORT Qt::ToolBarArea QStyleOptionToolBar_toolBarArea(QStyleOptionToolBarH handle)
{
	return (Qt::ToolBarArea) ((QStyleOptionToolBar *)handle)->toolBarArea;
}

C_EXPORT void QStyleOptionToolBar_setToolBarArea(QStyleOptionToolBarH handle, Qt::ToolBarArea toolBarArea)
{
	((QStyleOptionToolBar *)handle)->toolBarArea = toolBarArea;
}

C_EXPORT unsigned int QStyleOptionToolBar_features(QStyleOptionToolBarH handle)
{
	return (unsigned int) ((QStyleOptionToolBar *)handle)->features;
}

C_EXPORT void QStyleOptionToolBar_setFeatures(QStyleOptionToolBarH handle, unsigned int features)
{
	((QStyleOptionToolBar *)handle)->features =(QStyleOptionToolBar::ToolBarFeatures)features;
}

C_EXPORT int QStyleOptionToolBar_lineWidth(QStyleOptionToolBarH handle)
{
	return (int) ((QStyleOptionToolBar *)handle)->lineWidth;
}

C_EXPORT void QStyleOptionToolBar_setLineWidth(QStyleOptionToolBarH handle, int lineWidth)
{
	((QStyleOptionToolBar *)handle)->lineWidth = lineWidth;
}

C_EXPORT int QStyleOptionToolBar_midLineWidth(QStyleOptionToolBarH handle)
{
	return (int) ((QStyleOptionToolBar *)handle)->midLineWidth;
}

C_EXPORT void QStyleOptionToolBar_setMidLineWidth(QStyleOptionToolBarH handle, int midLineWidth)
{
	((QStyleOptionToolBar *)handle)->midLineWidth = midLineWidth;
}

C_EXPORT QStyleOptionToolBarH QStyleOptionToolBar_create()
{
	return (QStyleOptionToolBarH) new QStyleOptionToolBar();
}

C_EXPORT void QStyleOptionToolBar_destroy(QStyleOptionToolBarH handle)
{
	delete (QStyleOptionToolBar *)handle;
}

C_EXPORT QStyleOptionToolBarH QStyleOptionToolBar_create2(const QStyleOptionToolBarH other)
{
	return (QStyleOptionToolBarH) new QStyleOptionToolBar(*(const QStyleOptionToolBar*)other);
}

C_EXPORT int QStyleOptionProgressBar_minimum(QStyleOptionProgressBarH handle)
{
	return (int) ((QStyleOptionProgressBar *)handle)->minimum;
}

C_EXPORT void QStyleOptionProgressBar_setMinimum(QStyleOptionProgressBarH handle, int minimum)
{
	((QStyleOptionProgressBar *)handle)->minimum = minimum;
}

C_EXPORT int QStyleOptionProgressBar_maximum(QStyleOptionProgressBarH handle)
{
	return (int) ((QStyleOptionProgressBar *)handle)->maximum;
}

C_EXPORT void QStyleOptionProgressBar_setMaximum(QStyleOptionProgressBarH handle, int maximum)
{
	((QStyleOptionProgressBar *)handle)->maximum = maximum;
}

C_EXPORT int QStyleOptionProgressBar_progress(QStyleOptionProgressBarH handle)
{
	return (int) ((QStyleOptionProgressBar *)handle)->progress;
}

C_EXPORT void QStyleOptionProgressBar_setProgress(QStyleOptionProgressBarH handle, int progress)
{
	((QStyleOptionProgressBar *)handle)->progress = progress;
}

C_EXPORT void QStyleOptionProgressBar_text(QStyleOptionProgressBarH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionProgressBar *)handle)->text,retval);
}

C_EXPORT void QStyleOptionProgressBar_setText(QStyleOptionProgressBarH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionProgressBar *)handle)->text);
}

C_EXPORT unsigned int QStyleOptionProgressBar_textAlignment(QStyleOptionProgressBarH handle)
{
	return (unsigned int) ((QStyleOptionProgressBar *)handle)->textAlignment;
}

C_EXPORT void QStyleOptionProgressBar_setTextAlignment(QStyleOptionProgressBarH handle, unsigned int textAlignment)
{
	((QStyleOptionProgressBar *)handle)->textAlignment =(Qt::Alignment)textAlignment;
}

C_EXPORT bool QStyleOptionProgressBar_textVisible(QStyleOptionProgressBarH handle)
{
	return (bool) ((QStyleOptionProgressBar *)handle)->textVisible;
}

C_EXPORT void QStyleOptionProgressBar_setTextVisible(QStyleOptionProgressBarH handle, bool textVisible)
{
	((QStyleOptionProgressBar *)handle)->textVisible = textVisible;
}

C_EXPORT QStyleOptionProgressBarH QStyleOptionProgressBar_create()
{
	return (QStyleOptionProgressBarH) new QStyleOptionProgressBar();
}

C_EXPORT void QStyleOptionProgressBar_destroy(QStyleOptionProgressBarH handle)
{
	delete (QStyleOptionProgressBar *)handle;
}

C_EXPORT QStyleOptionProgressBarH QStyleOptionProgressBar_create2(const QStyleOptionProgressBarH other)
{
	return (QStyleOptionProgressBarH) new QStyleOptionProgressBar(*(const QStyleOptionProgressBar*)other);
}

C_EXPORT Qt::Orientation QStyleOptionProgressBarV2_orientation(QStyleOptionProgressBarV2H handle)
{
	return (Qt::Orientation) ((QStyleOptionProgressBarV2 *)handle)->orientation;
}

C_EXPORT void QStyleOptionProgressBarV2_setOrientation(QStyleOptionProgressBarV2H handle, Qt::Orientation orientation)
{
	((QStyleOptionProgressBarV2 *)handle)->orientation = orientation;
}

C_EXPORT bool QStyleOptionProgressBarV2_invertedAppearance(QStyleOptionProgressBarV2H handle)
{
	return (bool) ((QStyleOptionProgressBarV2 *)handle)->invertedAppearance;
}

C_EXPORT void QStyleOptionProgressBarV2_setInvertedAppearance(QStyleOptionProgressBarV2H handle, bool invertedAppearance)
{
	((QStyleOptionProgressBarV2 *)handle)->invertedAppearance = invertedAppearance;
}

C_EXPORT bool QStyleOptionProgressBarV2_bottomToTop(QStyleOptionProgressBarV2H handle)
{
	return (bool) ((QStyleOptionProgressBarV2 *)handle)->bottomToTop;
}

C_EXPORT void QStyleOptionProgressBarV2_setBottomToTop(QStyleOptionProgressBarV2H handle, bool bottomToTop)
{
	((QStyleOptionProgressBarV2 *)handle)->bottomToTop = bottomToTop;
}

C_EXPORT QStyleOptionProgressBarV2H QStyleOptionProgressBarV2_create()
{
	return (QStyleOptionProgressBarV2H) new QStyleOptionProgressBarV2();
}

C_EXPORT void QStyleOptionProgressBarV2_destroy(QStyleOptionProgressBarV2H handle)
{
	delete (QStyleOptionProgressBarV2 *)handle;
}

C_EXPORT QStyleOptionProgressBarV2H QStyleOptionProgressBarV2_create2(const QStyleOptionProgressBarH other)
{
	return (QStyleOptionProgressBarV2H) new QStyleOptionProgressBarV2(*(const QStyleOptionProgressBar*)other);
}

C_EXPORT QStyleOptionProgressBarV2H QStyleOptionProgressBarV2_create3(const QStyleOptionProgressBarV2H other)
{
	return (QStyleOptionProgressBarV2H) new QStyleOptionProgressBarV2(*(const QStyleOptionProgressBarV2*)other);
}

C_EXPORT QStyleOptionMenuItem::MenuItemType QStyleOptionMenuItem_menuItemType(QStyleOptionMenuItemH handle)
{
	return (QStyleOptionMenuItem::MenuItemType) ((QStyleOptionMenuItem *)handle)->menuItemType;
}

C_EXPORT void QStyleOptionMenuItem_setMenuItemType(QStyleOptionMenuItemH handle, QStyleOptionMenuItem::MenuItemType menuItemType)
{
	((QStyleOptionMenuItem *)handle)->menuItemType = menuItemType;
}

C_EXPORT QStyleOptionMenuItem::CheckType QStyleOptionMenuItem_checkType(QStyleOptionMenuItemH handle)
{
	return (QStyleOptionMenuItem::CheckType) ((QStyleOptionMenuItem *)handle)->checkType;
}

C_EXPORT void QStyleOptionMenuItem_setCheckType(QStyleOptionMenuItemH handle, QStyleOptionMenuItem::CheckType checkType)
{
	((QStyleOptionMenuItem *)handle)->checkType = checkType;
}

C_EXPORT bool QStyleOptionMenuItem_checked(QStyleOptionMenuItemH handle)
{
	return (bool) ((QStyleOptionMenuItem *)handle)->checked;
}

C_EXPORT void QStyleOptionMenuItem_setChecked(QStyleOptionMenuItemH handle, bool checked)
{
	((QStyleOptionMenuItem *)handle)->checked = checked;
}

C_EXPORT bool QStyleOptionMenuItem_menuHasCheckableItems(QStyleOptionMenuItemH handle)
{
	return (bool) ((QStyleOptionMenuItem *)handle)->menuHasCheckableItems;
}

C_EXPORT void QStyleOptionMenuItem_setMenuHasCheckableItems(QStyleOptionMenuItemH handle, bool menuHasCheckableItems)
{
	((QStyleOptionMenuItem *)handle)->menuHasCheckableItems = menuHasCheckableItems;
}

C_EXPORT void QStyleOptionMenuItem_menuRect(QStyleOptionMenuItemH handle, PRect retval)
{
	copyQRectToPRect(((QStyleOptionMenuItem *)handle)->menuRect,retval);
}

C_EXPORT void QStyleOptionMenuItem_setMenuRect(QStyleOptionMenuItemH handle, PRect menuRect)
{
	copyPRectToQRect(menuRect,((QStyleOptionMenuItem *)handle)->menuRect);
}

C_EXPORT void QStyleOptionMenuItem_text(QStyleOptionMenuItemH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionMenuItem *)handle)->text,retval);
}

C_EXPORT void QStyleOptionMenuItem_setText(QStyleOptionMenuItemH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionMenuItem *)handle)->text);
}

C_EXPORT void QStyleOptionMenuItem_icon(QStyleOptionMenuItemH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionMenuItem *)handle)->icon;
}

C_EXPORT void QStyleOptionMenuItem_setIcon(QStyleOptionMenuItemH handle, QIconH icon)
{
	((QStyleOptionMenuItem *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT int QStyleOptionMenuItem_maxIconWidth(QStyleOptionMenuItemH handle)
{
	return (int) ((QStyleOptionMenuItem *)handle)->maxIconWidth;
}

C_EXPORT void QStyleOptionMenuItem_setMaxIconWidth(QStyleOptionMenuItemH handle, int maxIconWidth)
{
	((QStyleOptionMenuItem *)handle)->maxIconWidth = maxIconWidth;
}

C_EXPORT int QStyleOptionMenuItem_tabWidth(QStyleOptionMenuItemH handle)
{
	return (int) ((QStyleOptionMenuItem *)handle)->tabWidth;
}

C_EXPORT void QStyleOptionMenuItem_setTabWidth(QStyleOptionMenuItemH handle, int tabWidth)
{
	((QStyleOptionMenuItem *)handle)->tabWidth = tabWidth;
}

C_EXPORT void QStyleOptionMenuItem_font(QStyleOptionMenuItemH handle, QFontH retval)
{
	 *(QFont *)retval = ((QStyleOptionMenuItem *)handle)->font;
}

C_EXPORT void QStyleOptionMenuItem_setFont(QStyleOptionMenuItemH handle, QFontH font)
{
	((QStyleOptionMenuItem *)handle)->font = *(QFont *)font;
}

C_EXPORT QStyleOptionMenuItemH QStyleOptionMenuItem_create()
{
	return (QStyleOptionMenuItemH) new QStyleOptionMenuItem();
}

C_EXPORT void QStyleOptionMenuItem_destroy(QStyleOptionMenuItemH handle)
{
	delete (QStyleOptionMenuItem *)handle;
}

C_EXPORT QStyleOptionMenuItemH QStyleOptionMenuItem_create2(const QStyleOptionMenuItemH other)
{
	return (QStyleOptionMenuItemH) new QStyleOptionMenuItem(*(const QStyleOptionMenuItem*)other);
}

C_EXPORT unsigned int QStyleOptionQ3ListViewItem_features(QStyleOptionQ3ListViewItemH handle)
{
	return (unsigned int) ((QStyleOptionQ3ListViewItem *)handle)->features;
}

C_EXPORT void QStyleOptionQ3ListViewItem_setFeatures(QStyleOptionQ3ListViewItemH handle, unsigned int features)
{
	((QStyleOptionQ3ListViewItem *)handle)->features =(QStyleOptionQ3ListViewItem::Q3ListViewItemFeatures)features;
}

C_EXPORT int QStyleOptionQ3ListViewItem_height(QStyleOptionQ3ListViewItemH handle)
{
	return (int) ((QStyleOptionQ3ListViewItem *)handle)->height;
}

C_EXPORT void QStyleOptionQ3ListViewItem_setHeight(QStyleOptionQ3ListViewItemH handle, int height)
{
	((QStyleOptionQ3ListViewItem *)handle)->height = height;
}

C_EXPORT int QStyleOptionQ3ListViewItem_totalHeight(QStyleOptionQ3ListViewItemH handle)
{
	return (int) ((QStyleOptionQ3ListViewItem *)handle)->totalHeight;
}

C_EXPORT void QStyleOptionQ3ListViewItem_setTotalHeight(QStyleOptionQ3ListViewItemH handle, int totalHeight)
{
	((QStyleOptionQ3ListViewItem *)handle)->totalHeight = totalHeight;
}

C_EXPORT int QStyleOptionQ3ListViewItem_itemY(QStyleOptionQ3ListViewItemH handle)
{
	return (int) ((QStyleOptionQ3ListViewItem *)handle)->itemY;
}

C_EXPORT void QStyleOptionQ3ListViewItem_setItemY(QStyleOptionQ3ListViewItemH handle, int itemY)
{
	((QStyleOptionQ3ListViewItem *)handle)->itemY = itemY;
}

C_EXPORT int QStyleOptionQ3ListViewItem_childCount(QStyleOptionQ3ListViewItemH handle)
{
	return (int) ((QStyleOptionQ3ListViewItem *)handle)->childCount;
}

C_EXPORT void QStyleOptionQ3ListViewItem_setChildCount(QStyleOptionQ3ListViewItemH handle, int childCount)
{
	((QStyleOptionQ3ListViewItem *)handle)->childCount = childCount;
}

C_EXPORT QStyleOptionQ3ListViewItemH QStyleOptionQ3ListViewItem_create()
{
	return (QStyleOptionQ3ListViewItemH) new QStyleOptionQ3ListViewItem();
}

C_EXPORT void QStyleOptionQ3ListViewItem_destroy(QStyleOptionQ3ListViewItemH handle)
{
	delete (QStyleOptionQ3ListViewItem *)handle;
}

C_EXPORT QStyleOptionQ3ListViewItemH QStyleOptionQ3ListViewItem_create2(const QStyleOptionQ3ListViewItemH other)
{
	return (QStyleOptionQ3ListViewItemH) new QStyleOptionQ3ListViewItem(*(const QStyleOptionQ3ListViewItem*)other);
}

C_EXPORT bool QStyleOptionQ3DockWindow_docked(QStyleOptionQ3DockWindowH handle)
{
	return (bool) ((QStyleOptionQ3DockWindow *)handle)->docked;
}

C_EXPORT void QStyleOptionQ3DockWindow_setDocked(QStyleOptionQ3DockWindowH handle, bool docked)
{
	((QStyleOptionQ3DockWindow *)handle)->docked = docked;
}

C_EXPORT bool QStyleOptionQ3DockWindow_closeEnabled(QStyleOptionQ3DockWindowH handle)
{
	return (bool) ((QStyleOptionQ3DockWindow *)handle)->closeEnabled;
}

C_EXPORT void QStyleOptionQ3DockWindow_setCloseEnabled(QStyleOptionQ3DockWindowH handle, bool closeEnabled)
{
	((QStyleOptionQ3DockWindow *)handle)->closeEnabled = closeEnabled;
}

C_EXPORT QStyleOptionQ3DockWindowH QStyleOptionQ3DockWindow_create()
{
	return (QStyleOptionQ3DockWindowH) new QStyleOptionQ3DockWindow();
}

C_EXPORT void QStyleOptionQ3DockWindow_destroy(QStyleOptionQ3DockWindowH handle)
{
	delete (QStyleOptionQ3DockWindow *)handle;
}

C_EXPORT QStyleOptionQ3DockWindowH QStyleOptionQ3DockWindow_create2(const QStyleOptionQ3DockWindowH other)
{
	return (QStyleOptionQ3DockWindowH) new QStyleOptionQ3DockWindow(*(const QStyleOptionQ3DockWindow*)other);
}

C_EXPORT void QStyleOptionDockWidget_title(QStyleOptionDockWidgetH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionDockWidget *)handle)->title,retval);
}

C_EXPORT void QStyleOptionDockWidget_setTitle(QStyleOptionDockWidgetH handle, PWideString title)
{
	copyPWideStringToQString(title,((QStyleOptionDockWidget *)handle)->title);
}

C_EXPORT bool QStyleOptionDockWidget_closable(QStyleOptionDockWidgetH handle)
{
	return (bool) ((QStyleOptionDockWidget *)handle)->closable;
}

C_EXPORT void QStyleOptionDockWidget_setClosable(QStyleOptionDockWidgetH handle, bool closable)
{
	((QStyleOptionDockWidget *)handle)->closable = closable;
}

C_EXPORT bool QStyleOptionDockWidget_movable(QStyleOptionDockWidgetH handle)
{
	return (bool) ((QStyleOptionDockWidget *)handle)->movable;
}

C_EXPORT void QStyleOptionDockWidget_setMovable(QStyleOptionDockWidgetH handle, bool movable)
{
	((QStyleOptionDockWidget *)handle)->movable = movable;
}

C_EXPORT bool QStyleOptionDockWidget_floatable(QStyleOptionDockWidgetH handle)
{
	return (bool) ((QStyleOptionDockWidget *)handle)->floatable;
}

C_EXPORT void QStyleOptionDockWidget_setFloatable(QStyleOptionDockWidgetH handle, bool floatable)
{
	((QStyleOptionDockWidget *)handle)->floatable = floatable;
}

C_EXPORT QStyleOptionDockWidgetH QStyleOptionDockWidget_create()
{
	return (QStyleOptionDockWidgetH) new QStyleOptionDockWidget();
}

C_EXPORT void QStyleOptionDockWidget_destroy(QStyleOptionDockWidgetH handle)
{
	delete (QStyleOptionDockWidget *)handle;
}

C_EXPORT QStyleOptionDockWidgetH QStyleOptionDockWidget_create2(const QStyleOptionDockWidgetH other)
{
	return (QStyleOptionDockWidgetH) new QStyleOptionDockWidget(*(const QStyleOptionDockWidget*)other);
}

C_EXPORT unsigned int QStyleOptionViewItem_displayAlignment(QStyleOptionViewItemH handle)
{
	return (unsigned int) ((QStyleOptionViewItem *)handle)->displayAlignment;
}

C_EXPORT void QStyleOptionViewItem_setDisplayAlignment(QStyleOptionViewItemH handle, unsigned int displayAlignment)
{
	((QStyleOptionViewItem *)handle)->displayAlignment =(Qt::Alignment)displayAlignment;
}

C_EXPORT unsigned int QStyleOptionViewItem_decorationAlignment(QStyleOptionViewItemH handle)
{
	return (unsigned int) ((QStyleOptionViewItem *)handle)->decorationAlignment;
}

C_EXPORT void QStyleOptionViewItem_setDecorationAlignment(QStyleOptionViewItemH handle, unsigned int decorationAlignment)
{
	((QStyleOptionViewItem *)handle)->decorationAlignment =(Qt::Alignment)decorationAlignment;
}

C_EXPORT Qt::TextElideMode QStyleOptionViewItem_textElideMode(QStyleOptionViewItemH handle)
{
	return (Qt::TextElideMode) ((QStyleOptionViewItem *)handle)->textElideMode;
}

C_EXPORT void QStyleOptionViewItem_setTextElideMode(QStyleOptionViewItemH handle, Qt::TextElideMode textElideMode)
{
	((QStyleOptionViewItem *)handle)->textElideMode = textElideMode;
}

C_EXPORT QStyleOptionViewItem::Position QStyleOptionViewItem_decorationPosition(QStyleOptionViewItemH handle)
{
	return (QStyleOptionViewItem::Position) ((QStyleOptionViewItem *)handle)->decorationPosition;
}

C_EXPORT void QStyleOptionViewItem_setDecorationPosition(QStyleOptionViewItemH handle, QStyleOptionViewItem::Position decorationPosition)
{
	((QStyleOptionViewItem *)handle)->decorationPosition = decorationPosition;
}

C_EXPORT void QStyleOptionViewItem_decorationSize(QStyleOptionViewItemH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionViewItem *)handle)->decorationSize;
}

C_EXPORT void QStyleOptionViewItem_setDecorationSize(QStyleOptionViewItemH handle, PSize decorationSize)
{
	((QStyleOptionViewItem *)handle)->decorationSize = *(QSize *)decorationSize;
}

C_EXPORT void QStyleOptionViewItem_font(QStyleOptionViewItemH handle, QFontH retval)
{
	 *(QFont *)retval = ((QStyleOptionViewItem *)handle)->font;
}

C_EXPORT void QStyleOptionViewItem_setFont(QStyleOptionViewItemH handle, QFontH font)
{
	((QStyleOptionViewItem *)handle)->font = *(QFont *)font;
}

C_EXPORT bool QStyleOptionViewItem_showDecorationSelected(QStyleOptionViewItemH handle)
{
	return (bool) ((QStyleOptionViewItem *)handle)->showDecorationSelected;
}

C_EXPORT void QStyleOptionViewItem_setShowDecorationSelected(QStyleOptionViewItemH handle, bool showDecorationSelected)
{
	((QStyleOptionViewItem *)handle)->showDecorationSelected = showDecorationSelected;
}

C_EXPORT QStyleOptionViewItemH QStyleOptionViewItem_create()
{
	return (QStyleOptionViewItemH) new QStyleOptionViewItem();
}

C_EXPORT void QStyleOptionViewItem_destroy(QStyleOptionViewItemH handle)
{
	delete (QStyleOptionViewItem *)handle;
}

C_EXPORT QStyleOptionViewItemH QStyleOptionViewItem_create2(const QStyleOptionViewItemH other)
{
	return (QStyleOptionViewItemH) new QStyleOptionViewItem(*(const QStyleOptionViewItem*)other);
}

C_EXPORT void QStyleOptionViewItemV4_index(QStyleOptionViewItemV4H handle, QModelIndexH retval)
{
	 *(QModelIndex *)retval = ((QStyleOptionViewItemV4 *)handle)->index;
}

C_EXPORT void QStyleOptionViewItemV4_setIndex(QStyleOptionViewItemV4H handle, QModelIndexH index)
{
	((QStyleOptionViewItemV4 *)handle)->index = *(QModelIndex *)index;
}

C_EXPORT Qt::CheckState QStyleOptionViewItemV4_checkState(QStyleOptionViewItemV4H handle)
{
	return (Qt::CheckState) ((QStyleOptionViewItemV4 *)handle)->checkState;
}

C_EXPORT void QStyleOptionViewItemV4_setCheckState(QStyleOptionViewItemV4H handle, Qt::CheckState checkState)
{
	((QStyleOptionViewItemV4 *)handle)->checkState = checkState;
}

C_EXPORT void QStyleOptionViewItemV4_icon(QStyleOptionViewItemV4H handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionViewItemV4 *)handle)->icon;
}

C_EXPORT void QStyleOptionViewItemV4_setIcon(QStyleOptionViewItemV4H handle, QIconH icon)
{
	((QStyleOptionViewItemV4 *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT void QStyleOptionViewItemV4_text(QStyleOptionViewItemV4H handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionViewItemV4 *)handle)->text,retval);
}

C_EXPORT void QStyleOptionViewItemV4_setText(QStyleOptionViewItemV4H handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionViewItemV4 *)handle)->text);
}

C_EXPORT QStyleOptionViewItemV4::ViewItemPosition QStyleOptionViewItemV4_viewItemPosition(QStyleOptionViewItemV4H handle)
{
	return (QStyleOptionViewItemV4::ViewItemPosition) ((QStyleOptionViewItemV4 *)handle)->viewItemPosition;
}

C_EXPORT void QStyleOptionViewItemV4_setViewItemPosition(QStyleOptionViewItemV4H handle, QStyleOptionViewItemV4::ViewItemPosition viewItemPosition)
{
	((QStyleOptionViewItemV4 *)handle)->viewItemPosition = viewItemPosition;
}

C_EXPORT void QStyleOptionViewItemV4_backgroundBrush(QStyleOptionViewItemV4H handle, QBrushH retval)
{
	 *(QBrush *)retval = ((QStyleOptionViewItemV4 *)handle)->backgroundBrush;
}

C_EXPORT void QStyleOptionViewItemV4_setBackgroundBrush(QStyleOptionViewItemV4H handle, QBrushH backgroundBrush)
{
	((QStyleOptionViewItemV4 *)handle)->backgroundBrush = *(QBrush *)backgroundBrush;
}

C_EXPORT QStyleOptionViewItemV4H QStyleOptionViewItemV4_create()
{
	return (QStyleOptionViewItemV4H) new QStyleOptionViewItemV4();
}

C_EXPORT void QStyleOptionViewItemV4_destroy(QStyleOptionViewItemV4H handle)
{
	delete (QStyleOptionViewItemV4 *)handle;
}

C_EXPORT QStyleOptionViewItemV4H QStyleOptionViewItemV4_create2(const QStyleOptionViewItemV4H other)
{
	return (QStyleOptionViewItemV4H) new QStyleOptionViewItemV4(*(const QStyleOptionViewItemV4*)other);
}

C_EXPORT QStyleOptionViewItemV4H QStyleOptionViewItemV4_create3(const QStyleOptionViewItemH other)
{
	return (QStyleOptionViewItemV4H) new QStyleOptionViewItemV4(*(const QStyleOptionViewItem*)other);
}

C_EXPORT void QStyleOptionToolBox_text(QStyleOptionToolBoxH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionToolBox *)handle)->text,retval);
}

C_EXPORT void QStyleOptionToolBox_setText(QStyleOptionToolBoxH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionToolBox *)handle)->text);
}

C_EXPORT void QStyleOptionToolBox_icon(QStyleOptionToolBoxH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionToolBox *)handle)->icon;
}

C_EXPORT void QStyleOptionToolBox_setIcon(QStyleOptionToolBoxH handle, QIconH icon)
{
	((QStyleOptionToolBox *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT QStyleOptionToolBoxH QStyleOptionToolBox_create()
{
	return (QStyleOptionToolBoxH) new QStyleOptionToolBox();
}

C_EXPORT void QStyleOptionToolBox_destroy(QStyleOptionToolBoxH handle)
{
	delete (QStyleOptionToolBox *)handle;
}

C_EXPORT QStyleOptionToolBoxH QStyleOptionToolBox_create2(const QStyleOptionToolBoxH other)
{
	return (QStyleOptionToolBoxH) new QStyleOptionToolBox(*(const QStyleOptionToolBox*)other);
}

C_EXPORT QStyleOptionToolBoxV2::TabPosition QStyleOptionToolBoxV2_position(QStyleOptionToolBoxV2H handle)
{
	return (QStyleOptionToolBoxV2::TabPosition) ((QStyleOptionToolBoxV2 *)handle)->position;
}

C_EXPORT void QStyleOptionToolBoxV2_setPosition(QStyleOptionToolBoxV2H handle, QStyleOptionToolBoxV2::TabPosition position)
{
	((QStyleOptionToolBoxV2 *)handle)->position = position;
}

C_EXPORT QStyleOptionToolBoxV2::SelectedPosition QStyleOptionToolBoxV2_selectedPosition(QStyleOptionToolBoxV2H handle)
{
	return (QStyleOptionToolBoxV2::SelectedPosition) ((QStyleOptionToolBoxV2 *)handle)->selectedPosition;
}

C_EXPORT void QStyleOptionToolBoxV2_setSelectedPosition(QStyleOptionToolBoxV2H handle, QStyleOptionToolBoxV2::SelectedPosition selectedPosition)
{
	((QStyleOptionToolBoxV2 *)handle)->selectedPosition = selectedPosition;
}

C_EXPORT QStyleOptionToolBoxV2H QStyleOptionToolBoxV2_create()
{
	return (QStyleOptionToolBoxV2H) new QStyleOptionToolBoxV2();
}

C_EXPORT void QStyleOptionToolBoxV2_destroy(QStyleOptionToolBoxV2H handle)
{
	delete (QStyleOptionToolBoxV2 *)handle;
}

C_EXPORT QStyleOptionToolBoxV2H QStyleOptionToolBoxV2_create2(const QStyleOptionToolBoxV2H other)
{
	return (QStyleOptionToolBoxV2H) new QStyleOptionToolBoxV2(*(const QStyleOptionToolBoxV2*)other);
}

C_EXPORT QStyleOptionToolBoxV2H QStyleOptionToolBoxV2_create3(const QStyleOptionToolBoxH other)
{
	return (QStyleOptionToolBoxV2H) new QStyleOptionToolBoxV2(*(const QStyleOptionToolBox*)other);
}

C_EXPORT QRubberBand::Shape QStyleOptionRubberBand_shape(QStyleOptionRubberBandH handle)
{
	return (QRubberBand::Shape) ((QStyleOptionRubberBand *)handle)->shape;
}

C_EXPORT void QStyleOptionRubberBand_setShape(QStyleOptionRubberBandH handle, QRubberBand::Shape shape)
{
	((QStyleOptionRubberBand *)handle)->shape = shape;
}

C_EXPORT bool QStyleOptionRubberBand_opaque(QStyleOptionRubberBandH handle)
{
	return (bool) ((QStyleOptionRubberBand *)handle)->opaque;
}

C_EXPORT void QStyleOptionRubberBand_setOpaque(QStyleOptionRubberBandH handle, bool opaque)
{
	((QStyleOptionRubberBand *)handle)->opaque = opaque;
}

C_EXPORT QStyleOptionRubberBandH QStyleOptionRubberBand_create()
{
	return (QStyleOptionRubberBandH) new QStyleOptionRubberBand();
}

C_EXPORT void QStyleOptionRubberBand_destroy(QStyleOptionRubberBandH handle)
{
	delete (QStyleOptionRubberBand *)handle;
}

C_EXPORT QStyleOptionRubberBandH QStyleOptionRubberBand_create2(const QStyleOptionRubberBandH other)
{
	return (QStyleOptionRubberBandH) new QStyleOptionRubberBand(*(const QStyleOptionRubberBand*)other);
}

C_EXPORT unsigned int QStyleOptionComplex_subControls(QStyleOptionComplexH handle)
{
	return (unsigned int) ((QStyleOptionComplex *)handle)->subControls;
}

C_EXPORT void QStyleOptionComplex_setSubControls(QStyleOptionComplexH handle, unsigned int subControls)
{
	((QStyleOptionComplex *)handle)->subControls =(QStyle::SubControls)subControls;
}

C_EXPORT unsigned int QStyleOptionComplex_activeSubControls(QStyleOptionComplexH handle)
{
	return (unsigned int) ((QStyleOptionComplex *)handle)->activeSubControls;
}

C_EXPORT void QStyleOptionComplex_setActiveSubControls(QStyleOptionComplexH handle, unsigned int activeSubControls)
{
	((QStyleOptionComplex *)handle)->activeSubControls =(QStyle::SubControls)activeSubControls;
}

C_EXPORT QStyleOptionComplexH QStyleOptionComplex_create(int version, int type)
{
	return (QStyleOptionComplexH) new QStyleOptionComplex(version, type);
}

C_EXPORT void QStyleOptionComplex_destroy(QStyleOptionComplexH handle)
{
	delete (QStyleOptionComplex *)handle;
}

C_EXPORT QStyleOptionComplexH QStyleOptionComplex_create2(const QStyleOptionComplexH other)
{
	return (QStyleOptionComplexH) new QStyleOptionComplex(*(const QStyleOptionComplex*)other);
}

C_EXPORT Qt::Orientation QStyleOptionSlider_orientation(QStyleOptionSliderH handle)
{
	return (Qt::Orientation) ((QStyleOptionSlider *)handle)->orientation;
}

C_EXPORT void QStyleOptionSlider_setOrientation(QStyleOptionSliderH handle, Qt::Orientation orientation)
{
	((QStyleOptionSlider *)handle)->orientation = orientation;
}

C_EXPORT int QStyleOptionSlider_minimum(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->minimum;
}

C_EXPORT void QStyleOptionSlider_setMinimum(QStyleOptionSliderH handle, int minimum)
{
	((QStyleOptionSlider *)handle)->minimum = minimum;
}

C_EXPORT int QStyleOptionSlider_maximum(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->maximum;
}

C_EXPORT void QStyleOptionSlider_setMaximum(QStyleOptionSliderH handle, int maximum)
{
	((QStyleOptionSlider *)handle)->maximum = maximum;
}

C_EXPORT QSlider::TickPosition QStyleOptionSlider_tickPosition(QStyleOptionSliderH handle)
{
	return (QSlider::TickPosition) ((QStyleOptionSlider *)handle)->tickPosition;
}

C_EXPORT void QStyleOptionSlider_setTickPosition(QStyleOptionSliderH handle, QSlider::TickPosition tickPosition)
{
	((QStyleOptionSlider *)handle)->tickPosition = tickPosition;
}

C_EXPORT int QStyleOptionSlider_tickInterval(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->tickInterval;
}

C_EXPORT void QStyleOptionSlider_setTickInterval(QStyleOptionSliderH handle, int tickInterval)
{
	((QStyleOptionSlider *)handle)->tickInterval = tickInterval;
}

C_EXPORT bool QStyleOptionSlider_upsideDown(QStyleOptionSliderH handle)
{
	return (bool) ((QStyleOptionSlider *)handle)->upsideDown;
}

C_EXPORT void QStyleOptionSlider_setUpsideDown(QStyleOptionSliderH handle, bool upsideDown)
{
	((QStyleOptionSlider *)handle)->upsideDown = upsideDown;
}

C_EXPORT int QStyleOptionSlider_sliderPosition(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->sliderPosition;
}

C_EXPORT void QStyleOptionSlider_setSliderPosition(QStyleOptionSliderH handle, int sliderPosition)
{
	((QStyleOptionSlider *)handle)->sliderPosition = sliderPosition;
}

C_EXPORT int QStyleOptionSlider_sliderValue(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->sliderValue;
}

C_EXPORT void QStyleOptionSlider_setSliderValue(QStyleOptionSliderH handle, int sliderValue)
{
	((QStyleOptionSlider *)handle)->sliderValue = sliderValue;
}

C_EXPORT int QStyleOptionSlider_singleStep(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->singleStep;
}

C_EXPORT void QStyleOptionSlider_setSingleStep(QStyleOptionSliderH handle, int singleStep)
{
	((QStyleOptionSlider *)handle)->singleStep = singleStep;
}

C_EXPORT int QStyleOptionSlider_pageStep(QStyleOptionSliderH handle)
{
	return (int) ((QStyleOptionSlider *)handle)->pageStep;
}

C_EXPORT void QStyleOptionSlider_setPageStep(QStyleOptionSliderH handle, int pageStep)
{
	((QStyleOptionSlider *)handle)->pageStep = pageStep;
}

C_EXPORT qreal QStyleOptionSlider_notchTarget(QStyleOptionSliderH handle)
{
	return (qreal) ((QStyleOptionSlider *)handle)->notchTarget;
}

C_EXPORT void QStyleOptionSlider_setNotchTarget(QStyleOptionSliderH handle, qreal notchTarget)
{
	((QStyleOptionSlider *)handle)->notchTarget = notchTarget;
}

C_EXPORT bool QStyleOptionSlider_dialWrapping(QStyleOptionSliderH handle)
{
	return (bool) ((QStyleOptionSlider *)handle)->dialWrapping;
}

C_EXPORT void QStyleOptionSlider_setDialWrapping(QStyleOptionSliderH handle, bool dialWrapping)
{
	((QStyleOptionSlider *)handle)->dialWrapping = dialWrapping;
}

C_EXPORT QStyleOptionSliderH QStyleOptionSlider_create()
{
	return (QStyleOptionSliderH) new QStyleOptionSlider();
}

C_EXPORT void QStyleOptionSlider_destroy(QStyleOptionSliderH handle)
{
	delete (QStyleOptionSlider *)handle;
}

C_EXPORT QStyleOptionSliderH QStyleOptionSlider_create2(const QStyleOptionSliderH other)
{
	return (QStyleOptionSliderH) new QStyleOptionSlider(*(const QStyleOptionSlider*)other);
}

C_EXPORT QAbstractSpinBox::ButtonSymbols QStyleOptionSpinBox_buttonSymbols(QStyleOptionSpinBoxH handle)
{
	return (QAbstractSpinBox::ButtonSymbols) ((QStyleOptionSpinBox *)handle)->buttonSymbols;
}

C_EXPORT void QStyleOptionSpinBox_setButtonSymbols(QStyleOptionSpinBoxH handle, QAbstractSpinBox::ButtonSymbols buttonSymbols)
{
	((QStyleOptionSpinBox *)handle)->buttonSymbols = buttonSymbols;
}

C_EXPORT unsigned int QStyleOptionSpinBox_stepEnabled(QStyleOptionSpinBoxH handle)
{
	return (unsigned int) ((QStyleOptionSpinBox *)handle)->stepEnabled;
}

C_EXPORT void QStyleOptionSpinBox_setStepEnabled(QStyleOptionSpinBoxH handle, unsigned int stepEnabled)
{
	((QStyleOptionSpinBox *)handle)->stepEnabled =(QAbstractSpinBox::StepEnabled)stepEnabled;
}

C_EXPORT bool QStyleOptionSpinBox_frame(QStyleOptionSpinBoxH handle)
{
	return (bool) ((QStyleOptionSpinBox *)handle)->frame;
}

C_EXPORT void QStyleOptionSpinBox_setFrame(QStyleOptionSpinBoxH handle, bool frame)
{
	((QStyleOptionSpinBox *)handle)->frame = frame;
}

C_EXPORT QStyleOptionSpinBoxH QStyleOptionSpinBox_create()
{
	return (QStyleOptionSpinBoxH) new QStyleOptionSpinBox();
}

C_EXPORT void QStyleOptionSpinBox_destroy(QStyleOptionSpinBoxH handle)
{
	delete (QStyleOptionSpinBox *)handle;
}

C_EXPORT QStyleOptionSpinBoxH QStyleOptionSpinBox_create2(const QStyleOptionSpinBoxH other)
{
	return (QStyleOptionSpinBoxH) new QStyleOptionSpinBox(*(const QStyleOptionSpinBox*)other);
}

C_EXPORT void QStyleOptionQ3ListView_viewportPalette(QStyleOptionQ3ListViewH handle, QPaletteH retval)
{
	 *(QPalette *)retval = ((QStyleOptionQ3ListView *)handle)->viewportPalette;
}

C_EXPORT void QStyleOptionQ3ListView_setViewportPalette(QStyleOptionQ3ListViewH handle, QPaletteH viewportPalette)
{
	((QStyleOptionQ3ListView *)handle)->viewportPalette = *(QPalette *)viewportPalette;
}

C_EXPORT QPalette::ColorRole QStyleOptionQ3ListView_viewportBGRole(QStyleOptionQ3ListViewH handle)
{
	return (QPalette::ColorRole) ((QStyleOptionQ3ListView *)handle)->viewportBGRole;
}

C_EXPORT void QStyleOptionQ3ListView_setViewportBGRole(QStyleOptionQ3ListViewH handle, QPalette::ColorRole viewportBGRole)
{
	((QStyleOptionQ3ListView *)handle)->viewportBGRole = viewportBGRole;
}

C_EXPORT int QStyleOptionQ3ListView_sortColumn(QStyleOptionQ3ListViewH handle)
{
	return (int) ((QStyleOptionQ3ListView *)handle)->sortColumn;
}

C_EXPORT void QStyleOptionQ3ListView_setSortColumn(QStyleOptionQ3ListViewH handle, int sortColumn)
{
	((QStyleOptionQ3ListView *)handle)->sortColumn = sortColumn;
}

C_EXPORT int QStyleOptionQ3ListView_itemMargin(QStyleOptionQ3ListViewH handle)
{
	return (int) ((QStyleOptionQ3ListView *)handle)->itemMargin;
}

C_EXPORT void QStyleOptionQ3ListView_setItemMargin(QStyleOptionQ3ListViewH handle, int itemMargin)
{
	((QStyleOptionQ3ListView *)handle)->itemMargin = itemMargin;
}

C_EXPORT int QStyleOptionQ3ListView_treeStepSize(QStyleOptionQ3ListViewH handle)
{
	return (int) ((QStyleOptionQ3ListView *)handle)->treeStepSize;
}

C_EXPORT void QStyleOptionQ3ListView_setTreeStepSize(QStyleOptionQ3ListViewH handle, int treeStepSize)
{
	((QStyleOptionQ3ListView *)handle)->treeStepSize = treeStepSize;
}

C_EXPORT bool QStyleOptionQ3ListView_rootIsDecorated(QStyleOptionQ3ListViewH handle)
{
	return (bool) ((QStyleOptionQ3ListView *)handle)->rootIsDecorated;
}

C_EXPORT void QStyleOptionQ3ListView_setRootIsDecorated(QStyleOptionQ3ListViewH handle, bool rootIsDecorated)
{
	((QStyleOptionQ3ListView *)handle)->rootIsDecorated = rootIsDecorated;
}

C_EXPORT QStyleOptionQ3ListViewH QStyleOptionQ3ListView_create()
{
	return (QStyleOptionQ3ListViewH) new QStyleOptionQ3ListView();
}

C_EXPORT void QStyleOptionQ3ListView_destroy(QStyleOptionQ3ListViewH handle)
{
	delete (QStyleOptionQ3ListView *)handle;
}

C_EXPORT QStyleOptionQ3ListViewH QStyleOptionQ3ListView_create2(const QStyleOptionQ3ListViewH other)
{
	return (QStyleOptionQ3ListViewH) new QStyleOptionQ3ListView(*(const QStyleOptionQ3ListView*)other);
}

C_EXPORT unsigned int QStyleOptionToolButton_features(QStyleOptionToolButtonH handle)
{
	return (unsigned int) ((QStyleOptionToolButton *)handle)->features;
}

C_EXPORT void QStyleOptionToolButton_setFeatures(QStyleOptionToolButtonH handle, unsigned int features)
{
	((QStyleOptionToolButton *)handle)->features =(QStyleOptionToolButton::ToolButtonFeatures)features;
}

C_EXPORT void QStyleOptionToolButton_icon(QStyleOptionToolButtonH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionToolButton *)handle)->icon;
}

C_EXPORT void QStyleOptionToolButton_setIcon(QStyleOptionToolButtonH handle, QIconH icon)
{
	((QStyleOptionToolButton *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT void QStyleOptionToolButton_iconSize(QStyleOptionToolButtonH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionToolButton *)handle)->iconSize;
}

C_EXPORT void QStyleOptionToolButton_setIconSize(QStyleOptionToolButtonH handle, PSize iconSize)
{
	((QStyleOptionToolButton *)handle)->iconSize = *(QSize *)iconSize;
}

C_EXPORT void QStyleOptionToolButton_text(QStyleOptionToolButtonH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionToolButton *)handle)->text,retval);
}

C_EXPORT void QStyleOptionToolButton_setText(QStyleOptionToolButtonH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionToolButton *)handle)->text);
}

C_EXPORT Qt::ArrowType QStyleOptionToolButton_arrowType(QStyleOptionToolButtonH handle)
{
	return (Qt::ArrowType) ((QStyleOptionToolButton *)handle)->arrowType;
}

C_EXPORT void QStyleOptionToolButton_setArrowType(QStyleOptionToolButtonH handle, Qt::ArrowType arrowType)
{
	((QStyleOptionToolButton *)handle)->arrowType = arrowType;
}

C_EXPORT Qt::ToolButtonStyle QStyleOptionToolButton_toolButtonStyle(QStyleOptionToolButtonH handle)
{
	return (Qt::ToolButtonStyle) ((QStyleOptionToolButton *)handle)->toolButtonStyle;
}

C_EXPORT void QStyleOptionToolButton_setToolButtonStyle(QStyleOptionToolButtonH handle, Qt::ToolButtonStyle toolButtonStyle)
{
	((QStyleOptionToolButton *)handle)->toolButtonStyle = toolButtonStyle;
}

C_EXPORT void QStyleOptionToolButton_pos(QStyleOptionToolButtonH handle, PQtPoint retval)
{
	 *(QPoint *)retval = ((QStyleOptionToolButton *)handle)->pos;
}

C_EXPORT void QStyleOptionToolButton_setPos(QStyleOptionToolButtonH handle, PQtPoint pos)
{
	((QStyleOptionToolButton *)handle)->pos = *(QPoint *)pos;
}

C_EXPORT void QStyleOptionToolButton_font(QStyleOptionToolButtonH handle, QFontH retval)
{
	 *(QFont *)retval = ((QStyleOptionToolButton *)handle)->font;
}

C_EXPORT void QStyleOptionToolButton_setFont(QStyleOptionToolButtonH handle, QFontH font)
{
	((QStyleOptionToolButton *)handle)->font = *(QFont *)font;
}

C_EXPORT QStyleOptionToolButtonH QStyleOptionToolButton_create()
{
	return (QStyleOptionToolButtonH) new QStyleOptionToolButton();
}

C_EXPORT void QStyleOptionToolButton_destroy(QStyleOptionToolButtonH handle)
{
	delete (QStyleOptionToolButton *)handle;
}

C_EXPORT QStyleOptionToolButtonH QStyleOptionToolButton_create2(const QStyleOptionToolButtonH other)
{
	return (QStyleOptionToolButtonH) new QStyleOptionToolButton(*(const QStyleOptionToolButton*)other);
}

C_EXPORT bool QStyleOptionComboBox_editable(QStyleOptionComboBoxH handle)
{
	return (bool) ((QStyleOptionComboBox *)handle)->editable;
}

C_EXPORT void QStyleOptionComboBox_setEditable(QStyleOptionComboBoxH handle, bool editable)
{
	((QStyleOptionComboBox *)handle)->editable = editable;
}

C_EXPORT void QStyleOptionComboBox_popupRect(QStyleOptionComboBoxH handle, PRect retval)
{
	copyQRectToPRect(((QStyleOptionComboBox *)handle)->popupRect,retval);
}

C_EXPORT void QStyleOptionComboBox_setPopupRect(QStyleOptionComboBoxH handle, PRect popupRect)
{
	copyPRectToQRect(popupRect,((QStyleOptionComboBox *)handle)->popupRect);
}

C_EXPORT bool QStyleOptionComboBox_frame(QStyleOptionComboBoxH handle)
{
	return (bool) ((QStyleOptionComboBox *)handle)->frame;
}

C_EXPORT void QStyleOptionComboBox_setFrame(QStyleOptionComboBoxH handle, bool frame)
{
	((QStyleOptionComboBox *)handle)->frame = frame;
}

C_EXPORT void QStyleOptionComboBox_currentText(QStyleOptionComboBoxH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionComboBox *)handle)->currentText,retval);
}

C_EXPORT void QStyleOptionComboBox_setCurrentText(QStyleOptionComboBoxH handle, PWideString currentText)
{
	copyPWideStringToQString(currentText,((QStyleOptionComboBox *)handle)->currentText);
}

C_EXPORT void QStyleOptionComboBox_currentIcon(QStyleOptionComboBoxH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionComboBox *)handle)->currentIcon;
}

C_EXPORT void QStyleOptionComboBox_setCurrentIcon(QStyleOptionComboBoxH handle, QIconH currentIcon)
{
	((QStyleOptionComboBox *)handle)->currentIcon = *(QIcon *)currentIcon;
}

C_EXPORT void QStyleOptionComboBox_iconSize(QStyleOptionComboBoxH handle, PSize retval)
{
	 *(QSize *)retval = ((QStyleOptionComboBox *)handle)->iconSize;
}

C_EXPORT void QStyleOptionComboBox_setIconSize(QStyleOptionComboBoxH handle, PSize iconSize)
{
	((QStyleOptionComboBox *)handle)->iconSize = *(QSize *)iconSize;
}

C_EXPORT QStyleOptionComboBoxH QStyleOptionComboBox_create()
{
	return (QStyleOptionComboBoxH) new QStyleOptionComboBox();
}

C_EXPORT void QStyleOptionComboBox_destroy(QStyleOptionComboBoxH handle)
{
	delete (QStyleOptionComboBox *)handle;
}

C_EXPORT QStyleOptionComboBoxH QStyleOptionComboBox_create2(const QStyleOptionComboBoxH other)
{
	return (QStyleOptionComboBoxH) new QStyleOptionComboBox(*(const QStyleOptionComboBox*)other);
}

C_EXPORT void QStyleOptionTitleBar_text(QStyleOptionTitleBarH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionTitleBar *)handle)->text,retval);
}

C_EXPORT void QStyleOptionTitleBar_setText(QStyleOptionTitleBarH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionTitleBar *)handle)->text);
}

C_EXPORT void QStyleOptionTitleBar_icon(QStyleOptionTitleBarH handle, QIconH retval)
{
	 *(QIcon *)retval = ((QStyleOptionTitleBar *)handle)->icon;
}

C_EXPORT void QStyleOptionTitleBar_setIcon(QStyleOptionTitleBarH handle, QIconH icon)
{
	((QStyleOptionTitleBar *)handle)->icon = *(QIcon *)icon;
}

C_EXPORT int QStyleOptionTitleBar_titleBarState(QStyleOptionTitleBarH handle)
{
	return (int) ((QStyleOptionTitleBar *)handle)->titleBarState;
}

C_EXPORT void QStyleOptionTitleBar_setTitleBarState(QStyleOptionTitleBarH handle, int titleBarState)
{
	((QStyleOptionTitleBar *)handle)->titleBarState = titleBarState;
}

C_EXPORT unsigned int QStyleOptionTitleBar_titleBarFlags(QStyleOptionTitleBarH handle)
{
	return (unsigned int) ((QStyleOptionTitleBar *)handle)->titleBarFlags;
}

C_EXPORT void QStyleOptionTitleBar_setTitleBarFlags(QStyleOptionTitleBarH handle, unsigned int titleBarFlags)
{
	((QStyleOptionTitleBar *)handle)->titleBarFlags =(Qt::WindowFlags)titleBarFlags;
}

C_EXPORT QStyleOptionTitleBarH QStyleOptionTitleBar_create()
{
	return (QStyleOptionTitleBarH) new QStyleOptionTitleBar();
}

C_EXPORT void QStyleOptionTitleBar_destroy(QStyleOptionTitleBarH handle)
{
	delete (QStyleOptionTitleBar *)handle;
}

C_EXPORT QStyleOptionTitleBarH QStyleOptionTitleBar_create2(const QStyleOptionTitleBarH other)
{
	return (QStyleOptionTitleBarH) new QStyleOptionTitleBar(*(const QStyleOptionTitleBar*)other);
}

C_EXPORT unsigned int QStyleOptionGroupBox_features(QStyleOptionGroupBoxH handle)
{
	return (unsigned int) ((QStyleOptionGroupBox *)handle)->features;
}

C_EXPORT void QStyleOptionGroupBox_setFeatures(QStyleOptionGroupBoxH handle, unsigned int features)
{
	((QStyleOptionGroupBox *)handle)->features =(QStyleOptionFrameV2::FrameFeatures)features;
}

C_EXPORT void QStyleOptionGroupBox_text(QStyleOptionGroupBoxH handle, PWideString retval)
{
	copyQStringToPWideString(((QStyleOptionGroupBox *)handle)->text,retval);
}

C_EXPORT void QStyleOptionGroupBox_setText(QStyleOptionGroupBoxH handle, PWideString text)
{
	copyPWideStringToQString(text,((QStyleOptionGroupBox *)handle)->text);
}

C_EXPORT unsigned int QStyleOptionGroupBox_textAlignment(QStyleOptionGroupBoxH handle)
{
	return (unsigned int) ((QStyleOptionGroupBox *)handle)->textAlignment;
}

C_EXPORT void QStyleOptionGroupBox_setTextAlignment(QStyleOptionGroupBoxH handle, unsigned int textAlignment)
{
	((QStyleOptionGroupBox *)handle)->textAlignment =(Qt::Alignment)textAlignment;
}

C_EXPORT void QStyleOptionGroupBox_textColor(QStyleOptionGroupBoxH handle, PQColor retval)
{
	 *(QColor *)retval = ((QStyleOptionGroupBox *)handle)->textColor;
}

C_EXPORT void QStyleOptionGroupBox_setTextColor(QStyleOptionGroupBoxH handle, PQColor textColor)
{
	((QStyleOptionGroupBox *)handle)->textColor = *(QColor *)textColor;
}

C_EXPORT int QStyleOptionGroupBox_lineWidth(QStyleOptionGroupBoxH handle)
{
	return (int) ((QStyleOptionGroupBox *)handle)->lineWidth;
}

C_EXPORT void QStyleOptionGroupBox_setLineWidth(QStyleOptionGroupBoxH handle, int lineWidth)
{
	((QStyleOptionGroupBox *)handle)->lineWidth = lineWidth;
}

C_EXPORT int QStyleOptionGroupBox_midLineWidth(QStyleOptionGroupBoxH handle)
{
	return (int) ((QStyleOptionGroupBox *)handle)->midLineWidth;
}

C_EXPORT void QStyleOptionGroupBox_setMidLineWidth(QStyleOptionGroupBoxH handle, int midLineWidth)
{
	((QStyleOptionGroupBox *)handle)->midLineWidth = midLineWidth;
}

C_EXPORT QStyleOptionGroupBoxH QStyleOptionGroupBox_create()
{
	return (QStyleOptionGroupBoxH) new QStyleOptionGroupBox();
}

C_EXPORT void QStyleOptionGroupBox_destroy(QStyleOptionGroupBoxH handle)
{
	delete (QStyleOptionGroupBox *)handle;
}

C_EXPORT QStyleOptionGroupBoxH QStyleOptionGroupBox_create2(const QStyleOptionGroupBoxH other)
{
	return (QStyleOptionGroupBoxH) new QStyleOptionGroupBox(*(const QStyleOptionGroupBox*)other);
}

C_EXPORT Qt::Corner QStyleOptionSizeGrip_corner(QStyleOptionSizeGripH handle)
{
	return (Qt::Corner) ((QStyleOptionSizeGrip *)handle)->corner;
}

C_EXPORT void QStyleOptionSizeGrip_setCorner(QStyleOptionSizeGripH handle, Qt::Corner corner)
{
	((QStyleOptionSizeGrip *)handle)->corner = corner;
}

C_EXPORT QStyleOptionSizeGripH QStyleOptionSizeGrip_create()
{
	return (QStyleOptionSizeGripH) new QStyleOptionSizeGrip();
}

C_EXPORT void QStyleOptionSizeGrip_destroy(QStyleOptionSizeGripH handle)
{
	delete (QStyleOptionSizeGrip *)handle;
}

C_EXPORT QStyleOptionSizeGripH QStyleOptionSizeGrip_create2(const QStyleOptionSizeGripH other)
{
	return (QStyleOptionSizeGripH) new QStyleOptionSizeGrip(*(const QStyleOptionSizeGrip*)other);
}

C_EXPORT void QStyleOptionGraphicsItem_exposedRect(QStyleOptionGraphicsItemH handle, QRectFH retval)
{
	 *(QRectF *)retval = ((QStyleOptionGraphicsItem *)handle)->exposedRect;
}

C_EXPORT void QStyleOptionGraphicsItem_setExposedRect(QStyleOptionGraphicsItemH handle, QRectFH exposedRect)
{
	((QStyleOptionGraphicsItem *)handle)->exposedRect = *(QRectF *)exposedRect;
}

C_EXPORT void QStyleOptionGraphicsItem_matrix(QStyleOptionGraphicsItemH handle, QMatrixH retval)
{
	 *(QMatrix *)retval = ((QStyleOptionGraphicsItem *)handle)->matrix;
}

C_EXPORT void QStyleOptionGraphicsItem_setMatrix(QStyleOptionGraphicsItemH handle, QMatrixH matrix)
{
	((QStyleOptionGraphicsItem *)handle)->matrix = *(QMatrix *)matrix;
}

C_EXPORT qreal QStyleOptionGraphicsItem_levelOfDetail(QStyleOptionGraphicsItemH handle)
{
	return (qreal) ((QStyleOptionGraphicsItem *)handle)->levelOfDetail;
}

C_EXPORT void QStyleOptionGraphicsItem_setLevelOfDetail(QStyleOptionGraphicsItemH handle, qreal levelOfDetail)
{
	((QStyleOptionGraphicsItem *)handle)->levelOfDetail = levelOfDetail;
}

C_EXPORT QStyleOptionGraphicsItemH QStyleOptionGraphicsItem_create()
{
	return (QStyleOptionGraphicsItemH) new QStyleOptionGraphicsItem();
}

C_EXPORT void QStyleOptionGraphicsItem_destroy(QStyleOptionGraphicsItemH handle)
{
	delete (QStyleOptionGraphicsItem *)handle;
}

C_EXPORT QStyleOptionGraphicsItemH QStyleOptionGraphicsItem_create2(const QStyleOptionGraphicsItemH other)
{
	return (QStyleOptionGraphicsItemH) new QStyleOptionGraphicsItem(*(const QStyleOptionGraphicsItem*)other);
}

C_EXPORT int QStyleHintReturn_version(QStyleHintReturnH handle)
{
	return (int) ((QStyleHintReturn *)handle)->version;
}

C_EXPORT void QStyleHintReturn_setVersion(QStyleHintReturnH handle, int version)
{
	((QStyleHintReturn *)handle)->version = version;
}

C_EXPORT int QStyleHintReturn_type(QStyleHintReturnH handle)
{
	return (int) ((QStyleHintReturn *)handle)->type;
}

C_EXPORT void QStyleHintReturn_setType(QStyleHintReturnH handle, int type)
{
	((QStyleHintReturn *)handle)->type = type;
}

C_EXPORT QStyleHintReturnH QStyleHintReturn_create(int version, int type)
{
	return (QStyleHintReturnH) new QStyleHintReturn(version, type);
}

C_EXPORT void QStyleHintReturn_destroy(QStyleHintReturnH handle)
{
	delete (QStyleHintReturn *)handle;
}

C_EXPORT void QStyleHintReturnMask_region(QStyleHintReturnMaskH handle, QRegionH retval)
{
	 *(QRegion *)retval = ((QStyleHintReturnMask *)handle)->region;
}

C_EXPORT void QStyleHintReturnMask_setRegion(QStyleHintReturnMaskH handle, QRegionH region)
{
	((QStyleHintReturnMask *)handle)->region = *(QRegion *)region;
}

C_EXPORT QStyleHintReturnMaskH QStyleHintReturnMask_create()
{
	return (QStyleHintReturnMaskH) new QStyleHintReturnMask();
}

C_EXPORT void QStyleHintReturnMask_destroy(QStyleHintReturnMaskH handle)
{
	delete (QStyleHintReturnMask *)handle;
}

C_EXPORT void QStyleHintReturnVariant_variant(QStyleHintReturnVariantH handle, QVariantH retval)
{
	 *(QVariant *)retval = ((QStyleHintReturnVariant *)handle)->variant;
}

C_EXPORT void QStyleHintReturnVariant_setVariant(QStyleHintReturnVariantH handle, QVariantH variant)
{
	((QStyleHintReturnVariant *)handle)->variant = *(QVariant *)variant;
}

C_EXPORT QStyleHintReturnVariantH QStyleHintReturnVariant_create()
{
	return (QStyleHintReturnVariantH) new QStyleHintReturnVariant();
}

C_EXPORT void QStyleHintReturnVariant_destroy(QStyleHintReturnVariantH handle)
{
	delete (QStyleHintReturnVariant *)handle;
}

