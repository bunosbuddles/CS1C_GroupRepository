QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    contactus.cpp \
    dynamicarray.cpp \
    filehandler.cpp \
    help.cpp \
    list.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    team.cpp

HEADERS += \
    contactus.h \
    dynamicarray.h \
    filehandler.h \
    help.h \
    list.h \
    maintenance.h \
    mainwindow.h \
    team.h

FORMS += \
    contactus.ui \
    help.ui \
    list.ui \
    maintenance.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourceFiles.qrc
