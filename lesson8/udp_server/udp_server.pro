QT += core network
QT -= gui

CONFIG += c++11

TARGET = udp_server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    udpServer.cpp

HEADERS += \
    udpServer.h
