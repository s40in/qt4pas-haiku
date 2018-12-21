//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclnetworkcookie.h"

C_EXPORT QLCLNetworkCookieJarH QLCLNetworkCookieJar_create(QObjectH parent)
{
	return (QLCLNetworkCookieJarH) new QLCLNetworkCookieJar((QObject*)parent);
}

C_EXPORT void QLCLNetworkCookieJar_destroy(QLCLNetworkCookieJarH handle)
{
	delete (QLCLNetworkCookieJar *)handle;
}

C_EXPORT void QLCLNetworkCookieJar_setRawCookies(QLCLNetworkCookieJarH handle, const char* rawCookies)
{
	((QLCLNetworkCookieJar *)handle)->setRawCookies(rawCookies);
}

C_EXPORT void QLCLNetworkCookieJar_getRawCookies(QLCLNetworkCookieJarH handle, QByteArrayH rawCookies)
{
	((QLCLNetworkCookieJar *)handle)->getRawCookies((QByteArray*)rawCookies);
}

