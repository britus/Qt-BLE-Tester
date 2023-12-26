#-------------------------------------------------
#
# Project created by QtCreator 2016-03-22T07:38:29
#
#-------------------------------------------------
QT += core
QT += gui
QT += widgets
QT += concurrent
QT += bluetooth

###
TEMPLATE = app
TARGET = BLETester

###
CONFIG += c++11
CONFIG += sdk_no_version_check
CONFIG += nostrip
CONFIG += debug
#CONFIG += lrelease
CONFIG += embed_translations
CONFIG += create_prl

mac:{
	## Mac OSX info.plist file with bluetooth keys
	MacBundleFiles.files = $$PWD/info.plist
	MacBundleFiles.path	= Contents
	QMAKE_BUNDLE_DATA += MacBundleFiles
	QMAKE_CFLAGS += -mmacosx-version-min=12.0
	QMAKE_CXXFLAGS += -mmacosx-version-min=12.0
}

SOURCES += main.cpp\
		mainwindow.cpp \
	bleinterface.cpp

HEADERS  += mainwindow.h \
	bleinterface.h \
	lib-qt-qml-tricks/src/qqmlhelpers.h

FORMS    += mainwindow.ui

RESOURCES += \
	resources.qrc

DISTFILES += \
	info.plist
