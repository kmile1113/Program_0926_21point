TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pokermanager.cpp \
    poker.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pokermanager.h \
    poker.h

