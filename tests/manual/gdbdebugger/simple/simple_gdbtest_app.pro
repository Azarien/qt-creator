TEMPLATE = app
TARGET = simple_gdbtest_app
DEPENDPATH += .
DESTDIR = .

SOURCES +=  simple_gdbtest_app.cpp

QT += network
unix: QMAKE_CXXFLAGS += -msse2

message("this says <foo & bar>")
