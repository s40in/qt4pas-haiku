//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QPrintPreviewWidgetH QPrintPreviewWidget_create(QPrinterH printer, QWidgetH parent, unsigned int flags)
{
	return (QPrintPreviewWidgetH) new QPrintPreviewWidget((QPrinter*)printer, (QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT void QPrintPreviewWidget_destroy(QPrintPreviewWidgetH handle)
{
	delete (QPrintPreviewWidget *)handle;
}

C_EXPORT QPrintPreviewWidgetH QPrintPreviewWidget_create2(QWidgetH parent, unsigned int flags)
{
	return (QPrintPreviewWidgetH) new QPrintPreviewWidget((QWidget*)parent, (Qt::WindowFlags)flags);
}

C_EXPORT qreal QPrintPreviewWidget_zoomFactor(QPrintPreviewWidgetH handle)
{
	return (qreal) ((QPrintPreviewWidget *)handle)->zoomFactor();
}

C_EXPORT QPrinter::Orientation QPrintPreviewWidget_orientation(QPrintPreviewWidgetH handle)
{
	return (QPrinter::Orientation) ((QPrintPreviewWidget *)handle)->orientation();
}

C_EXPORT QPrintPreviewWidget::ViewMode QPrintPreviewWidget_viewMode(QPrintPreviewWidgetH handle)
{
	return (QPrintPreviewWidget::ViewMode) ((QPrintPreviewWidget *)handle)->viewMode();
}

C_EXPORT QPrintPreviewWidget::ZoomMode QPrintPreviewWidget_zoomMode(QPrintPreviewWidgetH handle)
{
	return (QPrintPreviewWidget::ZoomMode) ((QPrintPreviewWidget *)handle)->zoomMode();
}

C_EXPORT int QPrintPreviewWidget_currentPage(QPrintPreviewWidgetH handle)
{
	return (int) ((QPrintPreviewWidget *)handle)->currentPage();
}

C_EXPORT int QPrintPreviewWidget_numPages(QPrintPreviewWidgetH handle)
{
	return (int) ((QPrintPreviewWidget *)handle)->numPages();
}

C_EXPORT void QPrintPreviewWidget_setVisible(QPrintPreviewWidgetH handle, bool visible)
{
	((QPrintPreviewWidget *)handle)->setVisible(visible);
}

C_EXPORT void QPrintPreviewWidget_print(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->print();
}

C_EXPORT void QPrintPreviewWidget_zoomIn(QPrintPreviewWidgetH handle, qreal zoom)
{
	((QPrintPreviewWidget *)handle)->zoomIn(zoom);
}

C_EXPORT void QPrintPreviewWidget_zoomOut(QPrintPreviewWidgetH handle, qreal zoom)
{
	((QPrintPreviewWidget *)handle)->zoomOut(zoom);
}

C_EXPORT void QPrintPreviewWidget_setZoomFactor(QPrintPreviewWidgetH handle, qreal zoomFactor)
{
	((QPrintPreviewWidget *)handle)->setZoomFactor(zoomFactor);
}

C_EXPORT void QPrintPreviewWidget_setOrientation(QPrintPreviewWidgetH handle, QPrinter::Orientation orientation)
{
	((QPrintPreviewWidget *)handle)->setOrientation(orientation);
}

C_EXPORT void QPrintPreviewWidget_setViewMode(QPrintPreviewWidgetH handle, QPrintPreviewWidget::ViewMode viewMode)
{
	((QPrintPreviewWidget *)handle)->setViewMode(viewMode);
}

C_EXPORT void QPrintPreviewWidget_setZoomMode(QPrintPreviewWidgetH handle, QPrintPreviewWidget::ZoomMode zoomMode)
{
	((QPrintPreviewWidget *)handle)->setZoomMode(zoomMode);
}

C_EXPORT void QPrintPreviewWidget_setCurrentPage(QPrintPreviewWidgetH handle, int pageNumber)
{
	((QPrintPreviewWidget *)handle)->setCurrentPage(pageNumber);
}

C_EXPORT void QPrintPreviewWidget_fitToWidth(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->fitToWidth();
}

C_EXPORT void QPrintPreviewWidget_fitInView(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->fitInView();
}

C_EXPORT void QPrintPreviewWidget_setLandscapeOrientation(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->setLandscapeOrientation();
}

C_EXPORT void QPrintPreviewWidget_setPortraitOrientation(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->setPortraitOrientation();
}

C_EXPORT void QPrintPreviewWidget_setSinglePageViewMode(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->setSinglePageViewMode();
}

C_EXPORT void QPrintPreviewWidget_setFacingPagesViewMode(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->setFacingPagesViewMode();
}

C_EXPORT void QPrintPreviewWidget_setAllPagesViewMode(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->setAllPagesViewMode();
}

C_EXPORT void QPrintPreviewWidget_updatePreview(QPrintPreviewWidgetH handle)
{
	((QPrintPreviewWidget *)handle)->updatePreview();
}

