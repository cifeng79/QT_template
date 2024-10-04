QT += core network
QT -= gui

CONFIG += c++11

TARGET = tcp_server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    tcpServer.cpp

HEADERS += \
    tcpServer.h
