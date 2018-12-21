//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QGRAPHICSSCENE_HOOK_H
#define QGRAPHICSSCENE_HOOK_H

#include <QtGui>

#include "qobject_hook.h"

class QGraphicsScene_hook : public QObject_hook {
  Q_OBJECT
  public:
    QGraphicsScene_hook(QObject *handle) : QObject_hook(handle) {
      sceneRectChanged_event.func = NULL;
      selectionChanged_event.func = NULL;
    }
    void hook_sceneRectChanged(QHook &hook) { 
      if ( !sceneRectChanged_event.func )
        connect(handle, SIGNAL(sceneRectChanged(const QRectF&)), this, SLOT(sceneRectChanged_hook(const QRectF&)));
      sceneRectChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(sceneRectChanged(const QRectF&)), this, SLOT(sceneRectChanged_hook(const QRectF&)));
    }
    void hook_selectionChanged(QHook &hook) { 
      if ( !selectionChanged_event.func )
        connect(handle, SIGNAL(selectionChanged()), this, SLOT(selectionChanged_hook()));
      selectionChanged_event = hook;
      if ( !hook.func )
        disconnect(handle, SIGNAL(selectionChanged()), this, SLOT(selectionChanged_hook()));
    }

  private slots:
    void sceneRectChanged_hook(const QRectF& rect) {
      if ( sceneRectChanged_event.func ) {
        typedef void (*func_type)(void *data, const QRectFH rect);
	(*(func_type)sceneRectChanged_event.func)(sceneRectChanged_event.data, (const QRectFH)&rect);
      }
    }
    void selectionChanged_hook() {
      if ( selectionChanged_event.func ) {
        typedef void (*func_type)(void *data);
	(*(func_type)selectionChanged_event.func)(selectionChanged_event.data);
      }
    }
  private:
    QHook sceneRectChanged_event;
    QHook selectionChanged_event;
};


#endif
