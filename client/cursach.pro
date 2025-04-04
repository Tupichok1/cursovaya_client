QT       += core gui sql network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminswindow.cpp \
    authorization.cpp \
    client.cpp \
    depositwindow.cpp \
    dumpwindow.cpp \
    main.cpp \
    ordersWindow.cpp \
    registr.cpp \
    sqlwindow.cpp \
    userwindow.cpp

HEADERS += \
    adminswindow.h \
    authorization.h \
    client.h \
    depositwindow.h \
    dumpwindow.h \
    ordersWindow.h \
    registr.h \
    sqlwindow.h \
    userwindow.h

FORMS += \
    adminswindow.ui \
    authorization.ui \
    depositwindow.ui \
    dumpwindow.ui \
    ordersWindow.ui \
    registr.ui \
    sqlwindow.ui \
    userwindow.ui

TRANSLATIONS +=
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
