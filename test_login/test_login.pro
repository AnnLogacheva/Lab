QT += testlib
QT += gui widgets sql
CONFIG += qt warn_on depend_includepath testcase c++11

TEMPLATE = app

SOURCES +=  tst_testlogin.cpp ../MusicShop/mainwindow.cpp ../MusicShop/secondpage.cpp ../MusicShop/thirdpage.cpp ../MusicShop/registration.cpp
HEADERS +=../MusicShop/mainwindow.h  ../MusicShop/secondpage.h ../MusicShop/thirdpage.h ../MusicShop/registration.h
FORMS += ../MusicShop/mainwindow.ui ../MusicShop/secondpage.ui ../MusicShop/thirdpage.ui ../MusicShop/registration.ui
