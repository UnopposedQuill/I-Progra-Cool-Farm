#-------------------------------------------------
#
# Project created by QtCreator 2017-05-05T20:05:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CoolFarm
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
        ventanaprincipal.cpp \
    hilointerfazcuervo.cpp \
    interfazcolocarobjetos.cpp \
    hilointerfaz.cpp \
    interfazmercado.cpp \
    interfazconfiguracion.cpp \
    interfazgraficas.cpp \
    hilocasillatablero.cpp

HEADERS  += ventanaprincipal.h \
    hilointerfazcuervo.h \
    interfazcolocarobjetos.h \
    hilointerfaz.h \
    interfazmercado.h \
    interfazconfiguracion.h \
    interfazgraficas.h \
    hilocasillatablero.h

FORMS    += ventanaprincipal.ui \
    interfazcolocarobjetos.ui \
    interfazmercado.ui \
    interfazconfiguracion.ui \
    interfazgraficas.ui

RESOURCES += \
    resources.qrc
