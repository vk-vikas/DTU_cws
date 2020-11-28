#include "dialog3.h"
#include "ui_dialog3.h"
#include"dialog4.h"

#include "adult.h"

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);

    ui->comboBox->addItem("cook");
    ui->comboBox->addItem("Driver");
    ui->comboBox->addItem("Carpenter");
    ui->comboBox->addItem("Painter");
    ui->comboBox->addItem("Electrician");
    ui->comboBox->addItem("Registered Nurse");

    ui->comboBox_2->addItem("Janitor");
    ui->comboBox_2->addItem("Vegetable Vender");
    ui->comboBox_2->addItem("Crop Field Worker");
    ui->comboBox_2->addItem("Newspaper vender");
    ui->comboBox_2->addItem("Construction Labour");

    ui->comboBox_3->addItem("cook");
    ui->comboBox_3->addItem("Driver");
    ui->comboBox_3->addItem("Carpenter");
    ui->comboBox_3->addItem("Painter");
    ui->comboBox_3->addItem("Electrician");
    ui->comboBox_3->addItem("Registered Nurse");

    ui->comboBox_4->addItem("Janitor");
    ui->comboBox_4->addItem("Vegetable Vender");
    ui->comboBox_4->addItem("Crop Field Worker");
    ui->comboBox_4->addItem("Newspaper Vender");
    ui->comboBox_4->addItem("Construction Labour");
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->groupBox_2->setEnabled(false);
    }
    else
    {
        ui->groupBox_2->setEnabled(true);
    }
}



void Dialog3::on_radioButton_clicked()
{
    ui->comboBox->setEnabled(true);
    ui->comboBox_2->setEnabled(false);
}

void Dialog3::on_radioButton_2_clicked()
{
    ui->comboBox->setEnabled(false);
    ui->comboBox_2->setEnabled(true);
}

void Dialog3::on_radioButton_3_clicked()
{
    ui->comboBox_3->setEnabled(true);
    ui->comboBox_4->setEnabled(false);
}

void Dialog3::on_radioButton_4_clicked()
{
    ui->comboBox_3->setEnabled(false);
    ui->comboBox_4->setEnabled(true);
}

void Dialog3::on_pushButton_clicked()
{
    if(ui->comboBox->isEnabled())
    {
        QString qjob = ui->comboBox->currentText();
        a1.job = qjob.toStdString();
        a1.setsalary();
    }
    else if(ui->comboBox_2->isEnabled())
    {
        QString qjob2 = ui->comboBox_2->currentText();
        a1.job = qjob2.toStdString();
        a1.setsalary();
    }

    if(ui->comboBox_3->isEnabled())
    {
        QString qjob3 = ui->comboBox_3->currentText();
        a2.job = qjob3.toStdString();
        a2.setsalary();
    }
    else if(ui->comboBox_4->isEnabled())
    {
        QString qjob4 = ui->comboBox_4->currentText();
        a2.job = qjob4.toStdString();
        a2.setsalary();
    }


    hide();
    Dialog4 window4;
    window4.setModal(true);
    window4.exec();


}
