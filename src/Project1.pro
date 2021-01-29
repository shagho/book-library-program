#-------------------------------------------------
#
# Project created by QtCreator 2019-05-13T09:11:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Library
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    nash_books.cpp \
    nash_userinfo.cpp \
    nash_books_table.cpp \
    nash_userinfo_table.cpp \
    nash_borrowing.cpp \
    nash_dialog1.cpp \
    nash_dialog2.cpp \
    nash_dialog3.cpp

HEADERS += \
        mainwindow.h \
    nash_books.h \
    nash_userinfo.h \
    nash_books_table.h \
    nash_userinfo_table.h \
    nash_borrowing.h \
    nash_dialog1.h \
    nash_dialog2.h \
    nash_dialog3.h

FORMS += \
        mainwindow.ui \
    nash_dialog1.ui \
    nash_dialog2.ui \
    nash_dialog3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
