#-------------------------------------------------
#
# Project created by QtCreator 2014-04-21T15:24:32
#
#-------------------------------------------------

QT       -= gui

TARGET = jsonActividad
TEMPLATE = lib

DEFINES += JSONACTIVIDAD_LIBRARY

SOURCES += jsonactividad.cpp \
    jsonerroractividad.cpp

HEADERS += jsonactividad.h\
        jsonactividad_global.h \
    jsonerroractividad.h

DESTDIR = ../libs

unix {
    target.path = /usr/lib
    INSTALLS += target
}
