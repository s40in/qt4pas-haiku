//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QWEBSETTINGS_HOOK_H
#define QWEBSETTINGS_HOOK_H

#include <QtWebKit>

#include "qobject_hook.h"

class QWebSettings_hook : public QObject_hook {
  Q_OBJECT
  public:
    QWebSettings_hook(QObject *handle) : QObject_hook(handle) {
    }
};


#endif
