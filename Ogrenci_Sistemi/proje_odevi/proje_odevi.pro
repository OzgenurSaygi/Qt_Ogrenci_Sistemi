#-------------------------------------------------
#
# Project created by QtCreator 2018-04-11T18:05:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proje_odevi
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    yonetici.cpp \
    yonetici_islem.cpp \
    ogrenci.cpp \
    akademisyen.cpp \
    akademisyen_islem.cpp \
    memur_giris.cpp \
    memur_islem.cpp \
    ogrenci_islem.cpp \
    ogrenci_belgesi.cpp

HEADERS += \
        mainwindow.h \
    yonetici.h \
    yonetici_islem.h \
    ogrenci.h \
    akademisyen.h \
    akademisyen_islem.h \
    memur_giris.h \
    memur_islem.h \
    ogrenci_islem.h \
    ogrenci_belgesi.h

FORMS += \
        mainwindow.ui \
    yonetici.ui \
    yonetici_islem.ui \
    ogrenci.ui \
    akademisyen.ui \
    akademisyen_islem.ui \
    memur_giris.ui \
    memur_islem.ui \
    ogrenci_islem.ui \
    ogrenci_belgesi.ui

RESOURCES += \
    resimler/resim.qrc
