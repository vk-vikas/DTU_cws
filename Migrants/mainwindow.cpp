#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog2.h"
#include "adult.h"
#include "child.h"
#include "linkedlist.h"
#include<QMessageBox>
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


// our 2 variables for the adult class
Adult a1;
Adult a2;

// 4 child variables
Child c1;
Child c2;
Child c3;
Child c4;

// creating the linkedlist for child school class
linkedlist l1;


void MainWindow::on_pushButton_clicked()
{
    QString qusername = ui->lineEdit_username->text();
    QString qpassword = ui->lineEdit_password->text();
    if(qpassword=="1234")
    {
        hide();
        Dialog2 window2;
        window2.setModal(true);
        window2.exec();
    }
    else
    {
        QMessageBox::warning(this,"ERROR","<font size = 13 ><B> Wrong Password !</B> </font> ");
    }
}
