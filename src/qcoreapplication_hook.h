//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QCOREAPPLICATION_HOOK_H
#define QCOREAPPLICATION_HOOK_H

#include <QtCore>

#include "qobject_hook.h"

class QCoreApplication_hook : public QObject_hook {
  Q_OBJECT
  public:
    QCoreApplication_hook(QObject *handle) : QObject_hook(handle) {
      aboutToQuit_event.func = NULL;
      unixSignal_event.func = NULL;
    }
    void hook_aboutToQuit(QHook &hook) { 
      if ( !aboutToQuit_event.func )
        connect(handle, SIGNAL(aboutToQuit()), this, SLOT(aboutToQuit_hook()));
      aboutToQuit_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(aboutToQuit()), this, SLOT(aboutToQuit_hook()));
    }
    void hook_unixSignal(QHook &hook) { 
      if ( !unixSignal_event.func )
        connect(handle, SIGNAL(unixSignal(int)), this, SLOT(unixSignal_hook(int)));
      unixSignal_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(unixSignal(int)), this, SLOT(unixSignal_hook(int)));
    }

  private slots:
    void aboutToQuit_hook() {
      if ( aboutToQuit_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)aboutToQuit_event.func)(aboutToQuit_event.data);
      }
    }
    void unixSignal_hook(int AnonParam1) {
      if ( unixSignal_event.func ) {
        typedef void (*func_type)(void *data, int AnonParam1);
	(*(func_type)unixSignal_event.func)(unixSignal_event.data, AnonParam1);
      }
    }
  private:
    QHook aboutToQuit_event;
    QHook unixSignal_event;
};


#endif
