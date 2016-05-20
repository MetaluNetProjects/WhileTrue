#-------------------------------------------------
#
# Project created by QtCreator 2013-10-06T09:35:23
#
#-------------------------------------------------

QT       += core network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qatemserver
TEMPLATE = app

LIBS += -lqatemcontrol


SOURCES += main.cpp myserver.cpp mythread.cpp 

HEADERS  += myserver.hpp mythread.hpp


