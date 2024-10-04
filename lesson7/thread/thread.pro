#-------------------------------------------------
#
# Project created by QtCreator 2024-10-04T00:07:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = thread
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    myThread1.cpp \
    myThread2.cpp

HEADERS  += widget.h \
    myThread1.h \
    myThread2.h
