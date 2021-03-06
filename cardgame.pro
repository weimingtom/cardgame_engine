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
    engine/cardgenerator.cpp \
    cardwidget.cpp \
    gameworkspace.cpp \
    assengine.cpp \
    engine/humanplayer.cpp \
    engine/computerplayer.cpp \
    carddeck.cpp

HEADERS  += \
    engine/engine.h \
    engine/card.h \
    engine/player.h \
    engine/cardgenerator.h \
    cardwidget.h \
    gameworkspace.h \
    assengine.h \
    engine/assengine.h \
    engine/humanplayer.h \
    engine/computerplayer.h \
    carddeck.h


