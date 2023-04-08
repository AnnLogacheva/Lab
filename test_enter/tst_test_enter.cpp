#include <QtTest>
#include <QtGui>
#include <QCoreApplication>
#include <QtWidgets>





// add necessary includes here

class Test_Enter : public QObject
{
    Q_OBJECT

public:
    Test_Enter();
    ~Test_Enter();

private slots:
    void test_case1();

};

Test_Enter::Test_Enter()
{

}

Test_Enter::~Test_Enter()
{

}

void Test_Enter::test_case1()
{

QLineEdit lineName;
QLineEdit lineBand;
QLineEdit lineSong;

QTest::keyClicks(&lineName, "RM");
QTest::keyClicks(&lineBand,"BTS");
QTest::keyClicks(&lineSong, "Do U");
QCOMPARE(lineName.text(),QString( "RM"));
QCOMPARE(lineBand.text(),QString("BTS"));
QCOMPARE(lineSong.text(),QString( "Do U"));
}

QTEST_MAIN(Test_Enter)

#include "tst_test_enter.moc"
