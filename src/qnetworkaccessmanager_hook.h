//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QNETWORKACCESSMANAGER_HOOK_H
#define QNETWORKACCESSMANAGER_HOOK_H

#include <QtNetwork>

#include "qobject_hook.h"

class QNetworkAccessManager_hook : public QObject_hook {
  Q_OBJECT
  public:
    QNetworkAccessManager_hook(QObject *handle) : QObject_hook(handle) {
      proxyAuthenticationRequired_event.func = NULL;
      authenticationRequired_event.func = NULL;
      finished_event.func = NULL;
    }
    void hook_proxyAuthenticationRequired(QHook &hook) { 
      if ( !proxyAuthenticationRequired_event.func )
        connect(handle, SIGNAL(proxyAuthenticationRequired(const QNetworkProxy&, QAuthenticator*)), this, SLOT(proxyAuthenticationRequired_hook(const QNetworkProxy&, QAuthenticator*)));
      proxyAuthenticationRequired_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(proxyAuthenticationRequired(const QNetworkProxy&, QAuthenticator*)), this, SLOT(proxyAuthenticationRequired_hook(const QNetworkProxy&, QAuthenticator*)));
    }
    void hook_authenticationRequired(QHook &hook) { 
      if ( !authenticationRequired_event.func )
        connect(handle, SIGNAL(authenticationRequired(QNetworkReply*, QAuthenticator*)), this, SLOT(authenticationRequired_hook(QNetworkReply*, QAuthenticator*)));
      authenticationRequired_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(authenticationRequired(QNetworkReply*, QAuthenticator*)), this, SLOT(authenticationRequired_hook(QNetworkReply*, QAuthenticator*)));
    }
    void hook_finished(QHook &hook) { 
      if ( !finished_event.func )
        connect(handle, SIGNAL(finished(QNetworkReply*)), this, SLOT(finished_hook(QNetworkReply*)));
      finished_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(finished(QNetworkReply*)), this, SLOT(finished_hook(QNetworkReply*)));
    }

  private slots:
    void proxyAuthenticationRequired_hook(const QNetworkProxy& proxy, QAuthenticator* authenticator) {
      if ( proxyAuthenticationRequired_event.func ) {
        typedef void (*func_type)(void *data, const QNetworkProxyH proxy, QAuthenticatorH authenticator);
	(*(func_type)proxyAuthenticationRequired_event.func)(proxyAuthenticationRequired_event.data, (const QNetworkProxyH)&proxy, (QAuthenticatorH)authenticator);
      }
    }
    void authenticationRequired_hook(QNetworkReply* reply, QAuthenticator* authenticator) {
      if ( authenticationRequired_event.func ) {
        typedef void (*func_type)(void *data, QNetworkReplyH reply, QAuthenticatorH authenticator);
	(*(func_type)authenticationRequired_event.func)(authenticationRequired_event.data, (QNetworkReplyH)reply, (QAuthenticatorH)authenticator);
      }
    }
    void finished_hook(QNetworkReply* reply) {
      if ( finished_event.func ) {
        typedef void (*func_type)(void *data, QNetworkReplyH reply);
	(*(func_type)finished_event.func)(finished_event.data, (QNetworkReplyH)reply);
      }
    }
  private:
    QHook proxyAuthenticationRequired_event;
    QHook authenticationRequired_event;
    QHook finished_event;
};


#endif
