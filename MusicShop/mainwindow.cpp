#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondpage.h"
#include "registration.h"
#include "thirdpage.h"
#include <QMessageBox>
#include<iostream>
#include<fstream>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>



using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//enter
void MainWindow::on_pushButton_clicked()
{
   login =ui->lineEdit->text();
   pass =ui->lineEdit_2->text();

    if (login=="Anna"&& pass=="1234")
    {
        hide();
        SecondPage w;
        w.setModal(true);
        w.exec();

    }
    else
    {
        QMessageBox::information(this,tr("Ошибка"),tr("пароль или логин неверен"));
        return;
    }

}

void MainWindow::onButtonSend()
{
    emit sendData(ui->lineEdit->text());
}
//registration
void MainWindow::on_pushButton_2_clicked()
{
    hide();
    Registration window2;
    window2.setModal(true);
    window2.exec();
}

//gest
void MainWindow::on_pushButton_3_clicked()
{
    hide();
    ThirdPage window2;
    window2.setModal(true);
    window2.exec();
}

