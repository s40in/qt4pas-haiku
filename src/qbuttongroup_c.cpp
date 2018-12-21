//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QButtonGroupH QButtonGroup_create(QObjectH parent)
{
	return (QButtonGroupH) new QButtonGroup((QObject*)parent);
}

C_EXPORT void QButtonGroup_destroy(QButtonGroupH handle)
{
	delete (QButtonGroup *)handle;
}

C_EXPORT void QButtonGroup_setExclusive(QButtonGroupH handle, bool AnonParam1)
{
	((QButtonGroup *)handle)->setExclusive(AnonParam1);
}

C_EXPORT bool QButtonGroup_exclusive(QButtonGroupH handle)
{
	return (bool) ((QButtonGroup *)handle)->exclusive();
}

C_EXPORT void QButtonGroup_addButton(QButtonGroupH handle, QAbstractButtonH AnonParam1)
{
	((QButtonGroup *)handle)->addButton((QAbstractButton*)AnonParam1);
}

C_EXPORT void QButtonGroup_addButton2(QButtonGroupH handle, QAbstractButtonH AnonParam1, int id)
{
	((QButtonGroup *)handle)->addButton((QAbstractButton*)AnonParam1, id);
}

C_EXPORT void QButtonGroup_removeButton(QButtonGroupH handle, QAbstractButtonH AnonParam1)
{
	((QButtonGroup *)handle)->removeButton((QAbstractButton*)AnonParam1);
}

C_EXPORT void QButtonGroup_buttons(QButtonGroupH handle, PPtrIntArray retval)
{
	QList<QAbstractButton*> t_retval;
	t_retval = ((QButtonGroup *)handle)->buttons();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QAbstractButtonH QButtonGroup_checkedButton(QButtonGroupH handle)
{
	return (QAbstractButtonH) ((QButtonGroup *)handle)->checkedButton();
}

C_EXPORT QAbstractButtonH QButtonGroup_button(QButtonGroupH handle, int id)
{
	return (QAbstractButtonH) ((QButtonGroup *)handle)->button(id);
}

C_EXPORT void QButtonGroup_setId(QButtonGroupH handle, QAbstractButtonH button, int id)
{
	((QButtonGroup *)handle)->setId((QAbstractButton*)button, id);
}

C_EXPORT int QButtonGroup_id(QButtonGroupH handle, QAbstractButtonH button)
{
	return (int) ((QButtonGroup *)handle)->id((QAbstractButton*)button);
}

C_EXPORT int QButtonGroup_checkedId(QButtonGroupH handle)
{
	return (int) ((QButtonGroup *)handle)->checkedId();
}

