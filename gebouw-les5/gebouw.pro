#-------------------------------------------------
#
# Project created by QtCreator 2017-01-31T22:51:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gebouw
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    deur.cpp \
    draaideur.cpp \
    hallsensor.cpp \
    idkaart.cpp \
    kaartslot.cpp \
        mainwindow.cpp \
    schuifdeur.cpp \
    sensor.cpp \
    sleutelslot.cpp \
    codeslot.cpp \
    herkenningsslot.cpp \
    drukbox.cpp \
    slotexception.cpp

HEADERS  += mainwindow.h \
    deur.h \
    draaideur.h \
    hallsensor.h \
    idkaart.h \
    kaartslot.h \
    schuifdeur.h \
    sensor.h \
    slot.h \
    sleutelslot.h \
    codeslot.h \
    herkenningsslot.h \
    afdrukker.h \
    drukbox.h \
    slotexception.h

FORMS    += mainwindow.ui
