#include <QtTest>
#include <QtGui>
#include <QCoreApplication>
#include <QtWidgets>


// add necessary includes here

class Test_table : public QObject
{
    Q_OBJECT

public:
    Test_table();
    ~Test_table();

private slots:
    void test_case1();


};

Test_table::Test_table()
{

}

Test_table::~Test_table()
{

}

void Test_table::test_case1()
{
    QTest::addColumn<QString>("band");
    QTest::addColumn<QString>("songs");

    QTest::newRow("RM") << "BTS" << "Do U";
    QTest::newRow("JK") << "BTS" << "Begin";
    QTest::newRow("Jin") << "BTS" << "SuperTune";
    QFETCH(QString, band);
    QFETCH(QString, songs);
    QCOMPARE(band.toUpper(), songs);
}

QTEST_APPLESS_MAIN(Test_table)

#include "tst_test_table.moc"
