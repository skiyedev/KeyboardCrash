QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Key1.cpp \
    Key2.cpp \
    Key3.cpp \
    Key4.cpp \
    Note1.cpp \
    Note2.cpp \
    Note3.cpp \
    Note4.cpp \
    Score.cpp \
    main.cpp

HEADERS += \
    Key1.h \
    Key2.h \
    Key3.h \
    Key4.h \
    Note1.h \
    Note2.h \
    Note3.h \
    Note4.h \
    Score.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    keyboardcrash_en_US.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
