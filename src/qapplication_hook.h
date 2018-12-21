//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QAPPLICATION_HOOK_H
#define QAPPLICATION_HOOK_H

#include <QtGui>

#include "qcoreapplication_hook.h"

class QApplication_hook : public QCoreApplication_hook {
  Q_OBJECT
  public:
    QApplication_hook(QObject *handle) : QCoreApplication_hook(handle) {
      lastWindowClosed_event.func = NULL;
      focusChanged_event.func = NULL;
      fontDatabaseChanged_event.func = NULL;
#if defined BINUX || MSWINDOWS || DARWIN
      commitDataRequest_event.func = NULL;
      saveStateRequest_event.func = NULL;
#endif
    }
    void hook_lastWindowClosed(QHook &hook) { 
      if ( !lastWindowClosed_event.func )
        connect(handle, SIGNAL(lastWindowClosed()), this, SLOT(lastWindowClosed_hook()));
      lastWindowClosed_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(lastWindowClosed()), this, SLOT(lastWindowClosed_hook()));
    }
    void hook_focusChanged(QHook &hook) { 
      if ( !focusChanged_event.func )
        connect(handle, SIGNAL(focusChanged(QWidget*, QWidget*)), this, SLOT(focusChanged_hook(QWidget*, QWidget*)));
      focusChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(focusChanged(QWidget*, QWidget*)), this, SLOT(focusChanged_hook(QWidget*, QWidget*)));
    }
    void hook_fontDatabaseChanged(QHook &hook) { 
      if ( !fontDatabaseChanged_event.func )
        connect(handle, SIGNAL(fontDatabaseChanged()), this, SLOT(fontDatabaseChanged_hook()));
      fontDatabaseChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(fontDatabaseChanged()), this, SLOT(fontDatabaseChanged_hook()));
    }
#if defined BINUX || MSWINDOWS || DARWIN
    void hook_commitDataRequest(QHook &hook) { 
      if ( !commitDataRequest_event.func )
        connect(handle, SIGNAL(commitDataRequest(QSessionManager&)), this, SLOT(commitDataRequest_hook(QSessionManager&)));
      commitDataRequest_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(commitDataRequest(QSessionManager&)), this, SLOT(commitDataRequest_hook(QSessionManager&)));
    }
    void hook_saveStateRequest(QHook &hook) { 
      if ( !saveStateRequest_event.func )
        connect(handle, SIGNAL(saveStateRequest(QSessionManager&)), this, SLOT(saveStateRequest_hook(QSessionManager&)));
      saveStateRequest_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(saveStateRequest(QSessionManager&)), this, SLOT(saveStateRequest_hook(QSessionManager&)));
    }
#endif

  private slots:
    void lastWindowClosed_hook() {
      if ( lastWindowClosed_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)lastWindowClosed_event.func)(lastWindowClosed_event.data);
      }
    }
    void focusChanged_hook(QWidget* old, QWidget* now) {
      if ( focusChanged_event.func ) {
        typedef void (*func_type)(void *data, QWidgetH old, QWidgetH now);
	(*(func_type)focusChanged_event.func)(focusChanged_event.data, (QWidgetH)old, (QWidgetH)now);
      }
    }
    void fontDatabaseChanged_hook() {
      if ( fontDatabaseChanged_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)fontDatabaseChanged_event.func)(fontDatabaseChanged_event.data);
      }
    }
#if defined BINUX || MSWINDOWS || DARWIN
    void commitDataRequest_hook(QSessionManager& sessionManager) {
      if ( commitDataRequest_event.func ) {
        typedef void (*func_type)(void *data, QSessionManagerH sessionManager);
	(*(func_type)commitDataRequest_event.func)(commitDataRequest_event.data, (QSessionManagerH)&sessionManager);
      }
    }
    void saveStateRequest_hook(QSessionManager& sessionManager) {
      if ( saveStateRequest_event.func ) {
        typedef void (*func_type)(void *data, QSessionManagerH sessionManager);
	(*(func_type)saveStateRequest_event.func)(saveStateRequest_event.data, (QSessionManagerH)&sessionManager);
      }
    }
#endif
  private:
    QHook lastWindowClosed_event;
    QHook focusChanged_event;
    QHook fontDatabaseChanged_event;
#if defined BINUX || MSWINDOWS || DARWIN
    QHook commitDataRequest_event;
    QHook saveStateRequest_event;
#endif
};


#endif
