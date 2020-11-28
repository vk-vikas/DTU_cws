#include "dialog4.h"
#include "ui_dialog4.h"
#include "dialog5.h"
#include"adult.h"
#include "child.h"
#include "linkedlist.h"
#include<QMessageBox>
Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);


}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_horizontalSlider_valueChanged(int value)
{
    switch (value) {
    case 0:ui->groupBox->setEnabled(false);
        ui->groupBox_2->setEnabled(false);
        ui->groupBox_3->setEnabled(false);
        ui->groupBox_4->setEnabled(false);
        break;
    case 1:ui->groupBox->setEnabled(true);
        ui->groupBox_2->setEnabled(false);
        ui->groupBox_3->setEnabled(false);
        ui->groupBox_4->setEnabled(false);
        break;
    case 2:ui->groupBox->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
        ui->groupBox_3->setEnabled(false);
        ui->groupBox_4->setEnabled(false);
        break;
    case 3:ui->groupBox->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
        ui->groupBox_3->setEnabled(true);
        ui->groupBox_4->setEnabled(false);
        break;
    case 4:ui->groupBox->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
        ui->groupBox_3->setEnabled(true);
        ui->groupBox_4->setEnabled(true);
        break;
    }

}

void Dialog4::on_pushButton_clicked()
{
    QString qname = ui->lineEdit->text();
    c1.name = qname.toStdString();
    QString qage = ui->lineEdit_2->text();
    c1.age = qage.toInt();
    QString qgender = ui->lineEdit_3->text();
    c1.gender = qgender.toStdString();
    QString qadhaar = ui->lineEdit_4->text();
    c1.adhaarNumber = qadhaar.toStdString();

    QString qname2 = ui->lineEdit_5->text();
    c2.name = qname.toStdString();
    QString qage2 = ui->lineEdit_6->text();
    c2.age = qage.toInt();
    QString qgender2 = ui->lineEdit_7->text();
    c2.gender = qgender.toStdString();
    QString qadhaa2r = ui->lineEdit_8->text();
    c2.adhaarNumber = qadhaar.toStdString();

    QString qname3 = ui->lineEdit_9->text();
    c3.name = qname.toStdString();
    QString qage3 = ui->lineEdit_10->text();
    c3.age = qage.toInt();
    QString qgender3 = ui->lineEdit_11->text();
    c3.gender = qgender.toStdString();
    QString qadhaar3 = ui->lineEdit_12->text();
    c3.adhaarNumber = qadhaar.toStdString();

    QString qname4 = ui->lineEdit_13->text();
    c4.name = qname.toStdString();
    QString qage4 = ui->lineEdit_14->text();
    c4.age = qage.toInt();
    QString qgender4 = ui->lineEdit_15->text();
    c4.gender = qgender.toStdString();
    QString qadhaar4 = ui->lineEdit_16->text();
    c4.adhaarNumber = qadhaar.toStdString();



    if(ui->groupBox->isEnabled() && ui->groupBox_2->isEnabled() && ui->groupBox_3->isEnabled() && ui->groupBox_4->isEnabled())
    {
        l1.add_node(c1.age);
        l1.add_node(c2.age);
        l1.add_node(c3.age);
        l1.add_node(c4.age);
    }
    else if(ui->groupBox->isEnabled() && ui->groupBox_2->isEnabled() && ui->groupBox_3->isEnabled() && !ui->groupBox_4->isEnabled())
    {
        l1.add_node(c1.age);
        l1.add_node(c2.age);
        l1.add_node(c3.age);
    }
    else if(ui->groupBox->isEnabled() && ui->groupBox_2->isEnabled() && !ui->groupBox_3->isEnabled() && !ui->groupBox_4->isEnabled())
    {
        l1.add_node(c1.age);
        l1.add_node(c2.age);
    }
    else if(ui->groupBox->isEnabled() && !ui->groupBox_2->isEnabled() && !ui->groupBox_3->isEnabled() && !ui->groupBox_4->isEnabled())
    {
        l1.add_node(c1.age);
    }


QMessageBox::warning(this, "" , "<font size = 13 ><B> REGESTRATION SUCCESSFUL !</B> </font> " );

    hide();
    Dialog5 window5;
    window5.setModal(true);
    window5.exec();
}
