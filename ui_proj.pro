#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T14:59:51
#
#-------------------------------------------------
CONFIG += c++11
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ui_proj
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cwater_reading.cpp \
    input_file.cpp \
    drag_drop.cpp \
    manage_wr.cpp \
    progress_bar.cpp \
    connect_map_path.cpp \
    qmymap.cpp

HEADERS  += mainwindow.h \
    cwater_reading.h \
    input_file.h \
    drag_drop.h \
    manage_wr.h \
    progress_bar.h \
    connect_map_path.h \
    qmymap.h

FORMS    += \
    drag_drop.ui \
    mainwindow.ui \
    progress_bar.ui

RESOURCES += \
    imgfile.qrc
