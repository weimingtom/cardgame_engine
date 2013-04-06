#-------------------------------------------------
#
# Project created by QtCreator 2013-04-06T12:22:22
#
#-------------------------------------------------

QT       += core gui

TARGET = qcard
TEMPLATE = app

INCLUDEPATH += engine
DEPENDPATH += engine


SOURCES += main.cpp \
    engine/engine.cpp \
    engine/card.cpp \
    engine/player.cpp \
    engine/cardgenerator.cpp

HEADERS  += \
    engine.h \
    engine/engine.h \
    engine/card.h \
    engine/player.h \
    engine/cardgenerator.h


