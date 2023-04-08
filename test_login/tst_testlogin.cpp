#include <QtWidgets>
#include <QWidget>
#include <QApplication>
#include <QtTest>
#include <QtGui>
#include <QCoreApplication>



// add necessary includes here

class TestLogin : public QObject
{
    Q_OBJECT

public:
    TestLogin();
    ~TestLogin();

private slots:
    void test_case1();


};

TestLogin::TestLogin()
{

}

TestLogin::~TestLogin()
{

}

void TestLogin::test_case1()
{
    QLineEdit linelog;
    QLineEdit linepass;

    QTest::keyClicks(&linelog,"Anna");
    QTest::keyClicks(&linepass,"123");

    QCOMPARE(linelog.text(),QString("Anna"));
    QCOMPARE(linepass.text(),QString("1234"));

}

QTEST_APPLESS_MAIN(TestLogin)

#include "tst_testlogin.moc"
