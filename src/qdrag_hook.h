//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QDRAG_HOOK_H
#define QDRAG_HOOK_H

#include <QtGui>

#include "qobject_hook.h"

class QDrag_hook : public QObject_hook {
  Q_OBJECT
  public:
    QDrag_hook(QObject *handle) : QObject_hook(handle) {
      actionChanged_event.func = NULL;
      targetChanged_event.func = NULL;
    }
    void hook_actionChanged(QHook &hook) { 
      if ( !actionChanged_event.func )
        connect(handle, SIGNAL(actionChanged(Qt::DropAction)), this, SLOT(actionChanged_hook(Qt::DropAction)));
      actionChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(actionChanged(Qt::DropAction)), this, SLOT(actionChanged_hook(Qt::DropAction)));
    }
    void hook_targetChanged(QHook &hook) { 
      if ( !targetChanged_event.func )
        connect(handle, SIGNAL(targetChanged(QWidget*)), this, SLOT(targetChanged_hook(QWidget*)));
      targetChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(targetChanged(QWidget*)), this, SLOT(targetChanged_hook(QWidget*)));
    }

  private slots:
    void actionChanged_hook(Qt::DropAction action) {
      if ( actionChanged_event.func ) {
        typedef void (*func_type)(void *data, Qt::DropAction action);
	(*(func_type)actionChanged_event.func)(actionChanged_event.data, action);
      }
    }
    void targetChanged_hook(QWidget* newTarget) {
      if ( targetChanged_event.func ) {
        typedef void (*func_type)(void *data, QWidgetH newTarget);
	(*(func_type)targetChanged_event.func)(targetChanged_event.data, (QWidgetH)newTarget);
      }
    }
  private:
    QHook actionChanged_event;
    QHook targetChanged_event;
};


#endif
