//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QDialogH QDialog_create(QWidgetH parent, unsigned int f)
{
	return (QDialogH) new QDialog((QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QDialog_destroy(QDialogH handle)
{
	delete (QDialog *)handle;
}

C_EXPORT int QDialog_result(QDialogH handle)
{
	return (int) ((QDialog *)handle)->result();
}

C_EXPORT void QDialog_setVisible(QDialogH handle, bool visible)
{
	((QDialog *)handle)->setVisible(visible);
}

C_EXPORT void QDialog_setOrientation(QDialogH handle, Qt::Orientation orientation)
{
	((QDialog *)handle)->setOrientation(orientation);
}

C_EXPORT Qt::Orientation QDialog_orientation(QDialogH handle)
{
	return (Qt::Orientation) ((QDialog *)handle)->orientation();
}

C_EXPORT void QDialog_setExtension(QDialogH handle, QWidgetH extension)
{
	((QDialog *)handle)->setExtension((QWidget*)extension);
}

C_EXPORT QWidgetH QDialog_extension(QDialogH handle)
{
	return (QWidgetH) ((QDialog *)handle)->extension();
}

C_EXPORT void QDialog_sizeHint(QDialogH handle, PSize retval)
{
	*(QSize *)retval = ((QDialog *)handle)->sizeHint();
}

C_EXPORT void QDialog_minimumSizeHint(QDialogH handle, PSize retval)
{
	*(QSize *)retval = ((QDialog *)handle)->minimumSizeHint();
}

C_EXPORT void QDialog_setSizeGripEnabled(QDialogH handle, bool AnonParam1)
{
	((QDialog *)handle)->setSizeGripEnabled(AnonParam1);
}

C_EXPORT bool QDialog_isSizeGripEnabled(QDialogH handle)
{
	return (bool) ((QDialog *)handle)->isSizeGripEnabled();
}

C_EXPORT void QDialog_setModal(QDialogH handle, bool modal)
{
	((QDialog *)handle)->setModal(modal);
}

C_EXPORT void QDialog_setResult(QDialogH handle, int r)
{
	((QDialog *)handle)->setResult(r);
}

C_EXPORT void QDialog_open(QDialogH handle)
{
	((QDialog *)handle)->open();
}

C_EXPORT int QDialog_exec(QDialogH handle)
{
	return (int) ((QDialog *)handle)->exec();
}

C_EXPORT void QDialog_done(QDialogH handle, int AnonParam1)
{
	((QDialog *)handle)->done(AnonParam1);
}

C_EXPORT void QDialog_accept(QDialogH handle)
{
	((QDialog *)handle)->accept();
}

C_EXPORT void QDialog_reject(QDialogH handle)
{
	((QDialog *)handle)->reject();
}

C_EXPORT void QDialog_showExtension(QDialogH handle, bool AnonParam1)
{
	((QDialog *)handle)->showExtension(AnonParam1);
}

