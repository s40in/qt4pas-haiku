#******************************************************************************
#  Copyright (c) 2005-2011 by Jan Van hijfte
#
#  See the included file COPYING.TXT for details about the copyright.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#******************************************************************************



VERSION = 5.2.5

QT += network webkit
TARGET = Qt4Pas
TEMPLATE = lib
DEPENDPATH += src
MOC_DIR = tmp
OBJECTS_DIR = tmp
QMAKE_CXXFLAGS += -mstackrealign -mincoming-stack-boundary=2 

# Match Intel x86_64 i686 i586 i386 x86 ...
is86 = $$find(QMAKE_HOST.arch, ".*86")
# Match 64 bit
is64 = $$find(QMAKE_HOST.arch, ".*64")

!mac:!isEmpty(is86):isEmpty(is64) {
  greaterThan(QT_MINOR_VERSION,6) {
    message("Added stack alignment options to CXXFLAGS in support of SSE on arch:" $$QMAKE_HOST.arch)
    QMAKE_CXXFLAGS += -mstackrealign -mincoming-stack-boundary=2 
  }   
}  

!equals(QT_MAJOR_VERSION,4)|!equals(QT_MINOR_VERSION,5) {
  message("Note: This binding version was generated for Qt 4.5.3. Current Qt is" $$QT_VERSION)
  message("Qt documents binary compatibility in each Version Change Note: http://qt.nokia.com/developer/changes")
}

# Available Qt4 Pascal Binding Platforms: see http://wiki.freepascal.org/Qt4_binding#Supported_Platforms  

target.path = $$[QT_INSTALL_LIBS]
win32 : {
  PLATFORM = MSWINDOWS
  target.path = $$[QT_INSTALL_BINS]
  }
                           
embedded:PLATFORM = QTOPIA  

unix:!embedded:!mac:!haiku:PLATFORM = BINUX

mac {
  PLATFORM = DARWIN
  CONFIG += lib_bundle
  }

contains(CONFIG, maemo5): {
  message("Detected Maemo5")
  PLATFORM = MAEMO5
  QT += maemo5
  }
  
CONFIG -= debug_and_release
CONFIG -= debug_and_release_target
CONFIG -= debug
CONFIG -= warn_on
CONFIG -= create_prl
CONFIG -= link_prl

CONFIG += release
CONFIG += dll
CONFIG += warn_off
  
message("Pascal Qt Interface for binding platform:" $$PLATFORM)
DEFINES += $$PLATFORM   
message("Install location:" $$target.path)

INSTALLS += target


HEADERS +=  \
           chandles.h \
           qobject_hook.h \
           pascalbind.h \
           flatfuncs.h \
           qcoreapplication_hook.h \
           qtimer_hook.h \
           qabstractitemmodel_hook.h \
           qsocketnotifier_hook.h \
           qthread_hook.h \
           qiodevice_hook.h \
           qprocess_hook.h \
           qfilesystemwatcher_hook.h \
           qapplication_hook.h \
           qwidget_hook.h \
           qlayout_hook.h \
           qstackedlayout_hook.h \
           qaction_hook.h \
           qactiongroup_hook.h \
           qclipboard_hook.h \
           qdesktopwidget_hook.h \
           qdrag_hook.h \
           qshortcut_hook.h \
           qabstracttextdocumentlayout_hook.h \
           qframe_hook.h \
           qstackedwidget_hook.h \
           qabstractscrollarea_hook.h \
           qabstractslider_hook.h \
           qscrollbar_hook.h \
           qmenu_hook.h \
           qmenubar_hook.h \
           qbuttongroup_hook.h \
           qabstractbutton_hook.h \
           qpushbutton_hook.h \
           qlineedit_hook.h \
           qplaintextedit_hook.h \
           qtextedit_hook.h \
           qtabwidget_hook.h \
           qmainwindow_hook.h \
           qtoolbar_hook.h \
           qlcdnumber_hook.h \
           qabstractspinbox_hook.h \
           qspinbox_hook.h \
           qsplitter_hook.h \
           qcombobox_hook.h \
           qcheckbox_hook.h \
           qslider_hook.h \
           qtextbrowser_hook.h \
           qlabel_hook.h \
           qgroupbox_hook.h \
           qdockwidget_hook.h \
           qtabbar_hook.h \
           qprogressbar_hook.h \
           qstatusbar_hook.h \
           qtoolbox_hook.h \
           qtoolbutton_hook.h \
           qmdiarea_hook.h \
           qmdisubwindow_hook.h \
           qcalendarwidget_hook.h \
           qprintpreviewwidget_hook.h \
           qabstractitemview_hook.h \
           qlistview_hook.h \
           qitemselectionmodel_hook.h \
           qlistwidget_hook.h \
           qtreeview_hook.h \
           qtreewidget_hook.h \
           qheaderview_hook.h \
           qstandarditemmodel_hook.h \
           qabstractitemdelegate_hook.h \
           qtableview_hook.h \
           qtablewidget_hook.h \
           qdialog_hook.h \
           qfiledialog_hook.h \
           qprogressdialog_hook.h \
           qabstractprintdialog_hook.h \
           qprintdialog_hook.h \
           qprintpreviewdialog_hook.h \
           qsystemtrayicon_hook.h \
           qgraphicsscene_hook.h \
           qabstractsocket_hook.h \
           qudpsocket_hook.h \
           qtcpsocket_hook.h \
           qtcpserver_hook.h \
           qnetworkaccessmanager_hook.h \
           qnetworkreply_hook.h \
           qwebframe_hook.h \
           qwebsecurityorigin_hook.h \
           qwebdatabase_hook.h \
           qwebhistory_hook.h \
           qwebhistoryinterface_hook.h \
           qwebpage_hook.h \
           qwebsettings_hook.h \
           qwebview_hook.h

SOURCES += qt4pas.cpp \
           qobject_hook_c.cpp \
           pascalbind.cpp \
           flatfuncs.cpp \
           qobject_c.cpp \
           qcoreevent_c.cpp \
           qeventloop_c.cpp \
           qcoreapplication_c.cpp \
           qtranslator_c.cpp \
           qtimer_c.cpp \
           qvariant_c.cpp \
           qmetaobject_c.cpp \
           qabstractitemmodel_c.cpp \
           qabstracteventdispatcher_c.cpp \
           qmimedata_c.cpp \
           qsocketnotifier_c.cpp \
           qthread_c.cpp \
           qlclthread_c.cpp \
           qchar_c.cpp \
           qsize_c.cpp \
           qstring_c.cpp \
           qstringlist_c.cpp \
           qrect_c.cpp \
           qdatetime_c.cpp \
           qbytearray_c.cpp \
           qlocale_c.cpp \
           qiodevice_c.cpp \
           qprocess_c.cpp \
           qfile_c.cpp \
           qfileinfo_c.cpp \
           qdir_c.cpp \
           qurl_c.cpp \
           qfilesystemwatcher_c.cpp \
           qapplication_c.cpp \
           qwhatsthis_c.cpp \
           qpalette_c.cpp \
           qsizepolicy_c.cpp \
           qkeysequence_c.cpp \
           qwidget_c.cpp \
           qlayoutitem_c.cpp \
           qlayout_c.cpp \
           qboxlayout_c.cpp \
           qstackedlayout_c.cpp \
           qaction_c.cpp \
           qactiongroup_c.cpp \
           qevent_c.cpp \
           qlclmessageevent_c.cpp \
           qcursor_c.cpp \
           qgridlayout_c.cpp \
           qclipboard_c.cpp \
           qdesktopwidget_c.cpp \
           qtooltip_c.cpp \
           qx11info_x11_c.cpp \
           qdrag_c.cpp \
           qshortcut_c.cpp \
           qsessionmanager_c.cpp \
           qcolor_c.cpp \
           qmatrix_c.cpp \
           qbrush_c.cpp \
           qpen_c.cpp \
           qpolygon_c.cpp \
           qpainter_c.cpp \
           qpaintengine_c.cpp \
           qpaintdevice_c.cpp \
           qregion_c.cpp \
           qprinter_c.cpp \
           qpainterpath_c.cpp \
           qtransform_c.cpp \
           qprinterinfo_c.cpp \
           qfont_c.cpp \
           qfontdatabase_c.cpp \
           qtextcursor_c.cpp \
           qtextoption_c.cpp \
           qfontmetrics_c.cpp \
           qfontinfo_c.cpp \
           qtextdocument_c.cpp \
           qabstracttextdocumentlayout_c.cpp \
           qtextlayout_c.cpp \
           qtextobject_c.cpp \
           qicon_c.cpp \
           qpixmap_c.cpp \
           qimage_c.cpp \
           qbitmap_c.cpp \
           qpicture_c.cpp \
           qimageiohandler_c.cpp \
           qimagereader_c.cpp \
           qimagewriter_c.cpp \
           qvalidator_c.cpp \
           qframe_c.cpp \
           qstackedwidget_c.cpp \
           qabstractscrollarea_c.cpp \
           qlclabstractscrollarea_c.cpp \
           qabstractslider_c.cpp \
           qscrollbar_c.cpp \
           qmenu_c.cpp \
           qmenubar_c.cpp \
           qbuttongroup_c.cpp \
           qabstractbutton_c.cpp \
           qpushbutton_c.cpp \
           qradiobutton_c.cpp \
           qlineedit_c.cpp \
           qplaintextedit_c.cpp \
           qtextedit_c.cpp \
           qtabwidget_c.cpp \
           qlcltabwidget_c.cpp \
           qmainwindow_c.cpp \
           qtoolbar_c.cpp \
           qsizegrip_c.cpp \
           qlcdnumber_c.cpp \
           qabstractspinbox_c.cpp \
           qlclabstractspinbox_c.cpp \
           qspinbox_c.cpp \
           qsplitter_c.cpp \
           qcombobox_c.cpp \
           qcheckbox_c.cpp \
           qslider_c.cpp \
           qtextbrowser_c.cpp \
           qlabel_c.cpp \
           qgroupbox_c.cpp \
           qdockwidget_c.cpp \
           qtabbar_c.cpp \
           qprogressbar_c.cpp \
           qstatusbar_c.cpp \
           qtoolbox_c.cpp \
           qtoolbutton_c.cpp \
           qscrollarea_c.cpp \
           qmdiarea_c.cpp \
           qmdisubwindow_c.cpp \
           qcalendarwidget_c.cpp \
           qrubberband_c.cpp \
           qprintpreviewwidget_c.cpp \
           qabstractitemview_c.cpp \
           qlistview_c.cpp \
           qitemselectionmodel_c.cpp \
           qlistwidget_c.cpp \
           qtreeview_c.cpp \
           qtreewidget_c.cpp \
           qheaderview_c.cpp \
           qstandarditemmodel_c.cpp \
           qabstractitemdelegate_c.cpp \
           qitemdelegate_c.cpp \
           qlclitemdelegate_c.cpp \
           qtableview_c.cpp \
           qtablewidget_c.cpp \
           qitemeditorfactory_c.cpp \
           qstyleditemdelegate_c.cpp \
           qdialog_c.cpp \
           qfontdialog_c.cpp \
           qmessagebox_c.cpp \
           qinputdialog_c.cpp \
           qcolordialog_c.cpp \
           qfiledialog_c.cpp \
           qprogressdialog_c.cpp \
           qabstractprintdialog_c.cpp \
           qprintdialog_c.cpp \
           qpagesetupdialog_c.cpp \
           qprintpreviewdialog_c.cpp \
           qsystemtrayicon_c.cpp \
           qdesktopservices_c.cpp \
           qstyle_c.cpp \
           qstyleoption_c.cpp \
           qstylefactory_c.cpp \
           qgraphicsscene_c.cpp \
           qgraphicsview_c.cpp \
           qsslcipher_c.cpp \
           qsslkey_c.cpp \
           qsslerror_c.cpp \
           qabstractsocket_c.cpp \
           qudpsocket_c.cpp \
           qtcpsocket_c.cpp \
           qtcpserver_c.cpp \
           qsslconfiguration_c.cpp \
           qsslsocket_c.cpp \
           qnetworkaccessmanager_c.cpp \
           qnetworkrequest_c.cpp \
           qnetworkreply_c.cpp \
           qnetworkcookie_c.cpp \
           qlclnetworkcookie_c.cpp \
           qnetworkproxy_c.cpp \
           qauthenticator_c.cpp \
           qwebframe_c.cpp \
           qwebsecurityorigin_c.cpp \
           qwebdatabase_c.cpp \
           qwebhistory_c.cpp \
           qwebhistoryinterface_c.cpp \
           qwebpage_c.cpp \
           qlclwebpage_c.cpp \
           qwebsettings_c.cpp \
           qwebview_c.cpp \
           qlclwebview_c.cpp \
           qcoreapplication_hook_c.cpp \
           qtimer_hook_c.cpp \
           qabstractitemmodel_hook_c.cpp \
           qsocketnotifier_hook_c.cpp \
           qthread_hook_c.cpp \
           qiodevice_hook_c.cpp \
           qprocess_hook_c.cpp \
           qfilesystemwatcher_hook_c.cpp \
           qapplication_hook_c.cpp \
           qwidget_hook_c.cpp \
           qlayout_hook_c.cpp \
           qstackedlayout_hook_c.cpp \
           qaction_hook_c.cpp \
           qactiongroup_hook_c.cpp \
           qclipboard_hook_c.cpp \
           qdesktopwidget_hook_c.cpp \
           qdrag_hook_c.cpp \
           qshortcut_hook_c.cpp \
           qabstracttextdocumentlayout_hook_c.cpp \
           qframe_hook_c.cpp \
           qstackedwidget_hook_c.cpp \
           qabstractscrollarea_hook_c.cpp \
           qabstractslider_hook_c.cpp \
           qscrollbar_hook_c.cpp \
           qmenu_hook_c.cpp \
           qmenubar_hook_c.cpp \
           qbuttongroup_hook_c.cpp \
           qabstractbutton_hook_c.cpp \
           qpushbutton_hook_c.cpp \
           qlineedit_hook_c.cpp \
           qplaintextedit_hook_c.cpp \
           qtextedit_hook_c.cpp \
           qtabwidget_hook_c.cpp \
           qmainwindow_hook_c.cpp \
           qtoolbar_hook_c.cpp \
           qlcdnumber_hook_c.cpp \
           qabstractspinbox_hook_c.cpp \
           qspinbox_hook_c.cpp \
           qsplitter_hook_c.cpp \
           qcombobox_hook_c.cpp \
           qcheckbox_hook_c.cpp \
           qslider_hook_c.cpp \
           qtextbrowser_hook_c.cpp \
           qlabel_hook_c.cpp \
           qgroupbox_hook_c.cpp \
           qdockwidget_hook_c.cpp \
           qtabbar_hook_c.cpp \
           qprogressbar_hook_c.cpp \
           qstatusbar_hook_c.cpp \
           qtoolbox_hook_c.cpp \
           qtoolbutton_hook_c.cpp \
           qmdiarea_hook_c.cpp \
           qmdisubwindow_hook_c.cpp \
           qcalendarwidget_hook_c.cpp \
           qprintpreviewwidget_hook_c.cpp \
           qabstractitemview_hook_c.cpp \
           qlistview_hook_c.cpp \
           qitemselectionmodel_hook_c.cpp \
           qlistwidget_hook_c.cpp \
           qtreeview_hook_c.cpp \
           qtreewidget_hook_c.cpp \
           qheaderview_hook_c.cpp \
           qstandarditemmodel_hook_c.cpp \
           qabstractitemdelegate_hook_c.cpp \
           qtableview_hook_c.cpp \
           qtablewidget_hook_c.cpp \
           qdialog_hook_c.cpp \
           qfiledialog_hook_c.cpp \
           qprogressdialog_hook_c.cpp \
           qabstractprintdialog_hook_c.cpp \
           qprintdialog_hook_c.cpp \
           qprintpreviewdialog_hook_c.cpp \
           qsystemtrayicon_hook_c.cpp \
           qgraphicsscene_hook_c.cpp \
           qabstractsocket_hook_c.cpp \
           qudpsocket_hook_c.cpp \
           qtcpsocket_hook_c.cpp \
           qtcpserver_hook_c.cpp \
           qnetworkaccessmanager_hook_c.cpp \
           qnetworkreply_hook_c.cpp \
           qwebframe_hook_c.cpp \
           qwebsecurityorigin_hook_c.cpp \
           qwebdatabase_hook_c.cpp \
           qwebhistory_hook_c.cpp \
           qwebhistoryinterface_hook_c.cpp \
           qwebpage_hook_c.cpp \
           qwebsettings_hook_c.cpp \
           qwebview_hook_c.cpp

# end of file
