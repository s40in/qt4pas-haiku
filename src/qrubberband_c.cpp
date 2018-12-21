//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QRubberBandH QRubberBand_create(QRubberBand::Shape AnonParam1, QWidgetH AnonParam2)
{
	return (QRubberBandH) new QRubberBand(AnonParam1, (QWidget*)AnonParam2);
}

C_EXPORT void QRubberBand_destroy(QRubberBandH handle)
{
	delete (QRubberBand *)handle;
}

C_EXPORT QRubberBand::Shape QRubberBand_shape(QRubberBandH handle)
{
	return (QRubberBand::Shape) ((QRubberBand *)handle)->shape();
}

C_EXPORT void QRubberBand_setGeometry(QRubberBandH handle, PRect r)
{
	QRect t_r;
	copyPRectToQRect(r, t_r);
	((QRubberBand *)handle)->setGeometry(t_r);
}

C_EXPORT void QRubberBand_setGeometry2(QRubberBandH handle, int x, int y, int w, int h)
{
	((QRubberBand *)handle)->setGeometry(x, y, w, h);
}

C_EXPORT void QRubberBand_move(QRubberBandH handle, int x, int y)
{
	((QRubberBand *)handle)->move(x, y);
}

C_EXPORT void QRubberBand_move2(QRubberBandH handle, const QPointH p)
{
	((QRubberBand *)handle)->move(*(const QPoint*)p);
}

C_EXPORT void QRubberBand_resize(QRubberBandH handle, int w, int h)
{
	((QRubberBand *)handle)->resize(w, h);
}

C_EXPORT void QRubberBand_resize2(QRubberBandH handle, const QSizeH s)
{
	((QRubberBand *)handle)->resize(*(const QSize*)s);
}

