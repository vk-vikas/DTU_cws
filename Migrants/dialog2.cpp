#include "dialog2.h"
#include "ui_dialog2.h"
#include "dialog3.h"
#include "adult.h"
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    QString hometown = ui->lineEdit_4->text();
    QString homestate = ui->lineEdit_5->text();
    ui->lineEdit_9->setText(hometown);
    ui->lineEdit_10->setText(homestate);
}

void Dialog2::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->groupBox_2->setEnabled(false);  // to disable a part of the area

    }
    else
    {
        ui->groupBox_2->setEnabled(true);  // to disable a part of the area
    }
}

void Dialog2::on_pushButton_2_clicked()
{
    QString qname = ui->lineEdit->text();
    a1.name = qname.toStdString();
    QString qage = ui->lineEdit_2->text();
    a1.age = qage.toInt();
    QString qadhaar = ui->lineEdit_3->text();
    a1.adharnumber = qadhaar.toStdString();
    QString qhometown = ui->lineEdit_4->text();
    a1.hometown = qhometown.toStdString();
    QString qhomestate = ui->lineEdit_5->text();
    a1.homestate = qhomestate.toStdString();

    QString qname2 = ui->lineEdit_6->text();
    a2.name = qname.toStdString();
    QString qage2 = ui->lineEdit_7->text();
    a2.age = qage.toInt();
    QString qadhaar2 = ui->lineEdit_8->text();
    a2.adharnumber = qadhaar2.toStdString();
    QString qhometown2 = ui->lineEdit_9->text();
    a2.hometown = qhometown2.toStdString();
    QString qhomestate2 = ui->lineEdit_10->text();
    a2.homestate = qhomestate2.toStdString();





    hide();
    Dialog3 window3;
    window3.setModal(true);
    window3.exec();

}
