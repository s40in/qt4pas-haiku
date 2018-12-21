//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QWEBFRAME_HOOK_H
#define QWEBFRAME_HOOK_H

#include <QtWebKit>

#include "qobject_hook.h"

class QWebHitTestResult_hook : public QObject_hook {
  Q_OBJECT
  public:
    QWebHitTestResult_hook(QObject *handle) : QObject_hook(handle) {
    }
};


#include "qobject_hook.h"

class QWebFrame_hook : public QObject_hook {
  Q_OBJECT
  public:
    QWebFrame_hook(QObject *handle) : QObject_hook(handle) {
      javaScriptWindowObjectCleared_event.func = NULL;
      provisionalLoad_event.func = NULL;
      titleChanged_event.func = NULL;
      urlChanged_event.func = NULL;
      initialLayoutCompleted_event.func = NULL;
      iconChanged_event.func = NULL;
    }
    void hook_javaScriptWindowObjectCleared(QHook &hook) { 
      if ( !javaScriptWindowObjectCleared_event.func )
        connect(handle, SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(javaScriptWindowObjectCleared_hook()));
      javaScriptWindowObjectCleared_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(javaScriptWindowObjectCleared_hook()));
    }
    void hook_provisionalLoad(QHook &hook) { 
      if ( !provisionalLoad_event.func )
        connect(handle, SIGNAL(provisionalLoad()), this, SLOT(provisionalLoad_hook()));
      provisionalLoad_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(provisionalLoad()), this, SLOT(provisionalLoad_hook()));
    }
    void hook_titleChanged(QHook &hook) { 
      if ( !titleChanged_event.func )
        connect(handle, SIGNAL(titleChanged(const QString&)), this, SLOT(titleChanged_hook(const QString&)));
      titleChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(titleChanged(const QString&)), this, SLOT(titleChanged_hook(const QString&)));
    }
    void hook_urlChanged(QHook &hook) { 
      if ( !urlChanged_event.func )
        connect(handle, SIGNAL(urlChanged(const QUrl&)), this, SLOT(urlChanged_hook(const QUrl&)));
      urlChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(urlChanged(const QUrl&)), this, SLOT(urlChanged_hook(const QUrl&)));
    }
    void hook_initialLayoutCompleted(QHook &hook) { 
      if ( !initialLayoutCompleted_event.func )
        connect(handle, SIGNAL(initialLayoutCompleted()), this, SLOT(initialLayoutCompleted_hook()));
      initialLayoutCompleted_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(initialLayoutCompleted()), this, SLOT(initialLayoutCompleted_hook()));
    }
    void hook_iconChanged(QHook &hook) { 
      if ( !iconChanged_event.func )
        connect(handle, SIGNAL(iconChanged()), this, SLOT(iconChanged_hook()));
      iconChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(iconChanged()), this, SLOT(iconChanged_hook()));
    }

  private slots:
    void javaScriptWindowObjectCleared_hook() {
      if ( javaScriptWindowObjectCleared_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)javaScriptWindowObjectCleared_event.func)(javaScriptWindowObjectCleared_event.data);
      }
    }
    void provisionalLoad_hook() {
      if ( provisionalLoad_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)provisionalLoad_event.func)(provisionalLoad_event.data);
      }
    }
    void titleChanged_hook(const QString& title) {
      if ( titleChanged_event.func ) {
        typedef void (*func_type)(void *data, PWideString title);
	PWideString t_title;
	initializePWideString(t_title);
	copyQStringToPWideString(title, t_title);
	(*(func_type)titleChanged_event.func)(titleChanged_event.data, t_title);
	finalizePWideString(t_title);
      }
    }
    void urlChanged_hook(const QUrl& url) {
      if ( urlChanged_event.func ) {
        typedef void (*func_type)(void *data, const QUrlH url);
	(*(func_type)urlChanged_event.func)(urlChanged_event.data, (const QUrlH)&url);
      }
    }
    void initialLayoutCompleted_hook() {
      if ( initialLayoutCompleted_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)initialLayoutCompleted_event.func)(initialLayoutCompleted_event.data);
      }
    }
    void iconChanged_hook() {
      if ( iconChanged_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)iconChanged_event.func)(iconChanged_event.data);
      }
    }
  private:
    QHook javaScriptWindowObjectCleared_event;
    QHook provisionalLoad_event;
    QHook titleChanged_event;
    QHook urlChanged_event;
    QHook initialLayoutCompleted_event;
    QHook iconChanged_event;
};


#endif
