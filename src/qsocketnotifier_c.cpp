//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QSocketNotifierH QSocketNotifier_create(int socket, QSocketNotifier::Type AnonParam2, QObjectH parent)
{
	return (QSocketNotifierH) new QSocketNotifier(socket, AnonParam2, (QObject*)parent);
}

C_EXPORT void QSocketNotifier_destroy(QSocketNotifierH handle)
{
	delete (QSocketNotifier *)handle;
}

C_EXPORT int QSocketNotifier_socket(QSocketNotifierH handle)
{
	return (int) ((QSocketNotifier *)handle)->socket();
}

C_EXPORT QSocketNotifier::Type QSocketNotifier_type(QSocketNotifierH handle)
{
	return (QSocketNotifier::Type) ((QSocketNotifier *)handle)->type();
}

C_EXPORT bool QSocketNotifier_isEnabled(QSocketNotifierH handle)
{
	return (bool) ((QSocketNotifier *)handle)->isEnabled();
}

C_EXPORT void QSocketNotifier_setEnabled(QSocketNotifierH handle, bool AnonParam1)
{
	((QSocketNotifier *)handle)->setEnabled(AnonParam1);
}

