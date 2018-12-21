//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTextOptionH QTextOption_create()
{
	return (QTextOptionH) new QTextOption();
}

C_EXPORT void QTextOption_destroy(QTextOptionH handle)
{
	delete (QTextOption *)handle;
}

C_EXPORT QTextOptionH QTextOption_create2(unsigned int alignment)
{
	return (QTextOptionH) new QTextOption((Qt::Alignment)alignment);
}

C_EXPORT QTextOptionH QTextOption_create3(const QTextOptionH o)
{
	return (QTextOptionH) new QTextOption(*(const QTextOption*)o);
}

C_EXPORT void QTextOption_setAlignment(QTextOptionH handle, unsigned int alignment)
{
	((QTextOption *)handle)->setAlignment((Qt::Alignment)alignment);
}

C_EXPORT unsigned int QTextOption_alignment(QTextOptionH handle)
{
	return (unsigned int) ((QTextOption *)handle)->alignment();
}

C_EXPORT void QTextOption_setTextDirection(QTextOptionH handle, Qt::LayoutDirection aDirection)
{
	((QTextOption *)handle)->setTextDirection(aDirection);
}

C_EXPORT Qt::LayoutDirection QTextOption_textDirection(QTextOptionH handle)
{
	return (Qt::LayoutDirection) ((QTextOption *)handle)->textDirection();
}

C_EXPORT void QTextOption_setWrapMode(QTextOptionH handle, QTextOption::WrapMode wrap)
{
	((QTextOption *)handle)->setWrapMode(wrap);
}

C_EXPORT QTextOption::WrapMode QTextOption_wrapMode(QTextOptionH handle)
{
	return (QTextOption::WrapMode) ((QTextOption *)handle)->wrapMode();
}

C_EXPORT void QTextOption_setFlags(QTextOptionH handle, unsigned int flags)
{
	((QTextOption *)handle)->setFlags((QTextOption::Flags)flags);
}

C_EXPORT unsigned int QTextOption_flags(QTextOptionH handle)
{
	return (unsigned int) ((QTextOption *)handle)->flags();
}

C_EXPORT void QTextOption_setTabStop(QTextOptionH handle, qreal tabStop)
{
	((QTextOption *)handle)->setTabStop(tabStop);
}

C_EXPORT qreal QTextOption_tabStop(QTextOptionH handle)
{
	return (qreal) ((QTextOption *)handle)->tabStop();
}

C_EXPORT void QTextOption_setTabArray(QTextOptionH handle, PPtrIntArray tabStops)
{
	QList<qreal> t_tabStops;
	copyPtrIntArrayToQListTemplate(tabStops, t_tabStops);
	((QTextOption *)handle)->setTabArray(t_tabStops);
}

C_EXPORT void QTextOption_tabArray(QTextOptionH handle, PPtrIntArray retval)
{
	QList<qreal> t_retval;
	t_retval = ((QTextOption *)handle)->tabArray();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QTextOption_setUseDesignMetrics(QTextOptionH handle, bool b)
{
	((QTextOption *)handle)->setUseDesignMetrics(b);
}

C_EXPORT bool QTextOption_useDesignMetrics(QTextOptionH handle)
{
	return (bool) ((QTextOption *)handle)->useDesignMetrics();
}

