TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ac.cpp \
        finolex.cpp \
        havells.cpp \
        main.cpp \
        polycab.cpp \
        switch.cpp \
        wire.cpp

HEADERS += \
    ac.h \
    finolex.h \
    havells.h \
    polycab.h \
    switch.h \
    wire.h
