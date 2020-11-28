#include "dialog5.h"
#include "ui_dialog5.h"
#include "adult.h"
#include "child.h"
#include "linkedlist.h"

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
    // showing the expected salary
    QString qsalary = QString::fromStdString(to_string(a1.salary+a2.salary));
    ui->label_income->setText(qsalary);

    // code for number of adults
    int adult_strength;
    if(a2.salary==0)
    {
        adult_strength =1;
    }
    else{
        adult_strength =2;
    }
    QString qadult_strength = QString::fromStdString(to_string(adult_strength));
    ui->label_numadults->setText(qadult_strength);


    // code for number of children
    QString qchild_strength = QString::fromStdString(to_string(l1.length()));
    ui->label_numchildren->setText(qchild_strength);


    // code for total strength of family
    int total = l1.length()+adult_strength;
    QString qtotal = QString::fromStdString(to_string(total));
    ui->label_total->setText(qtotal);

    // code for loan bracket
    int loancategory;
    if((a1.salary+a2.salary<=20000) && (a1.salary+a2.salary)>0)
    {
        loancategory=1;
        a1.setloanbracket(1);
        a2.setloanbracket(1);
    }
    else if((a1.salary+a2.salary<=35000) && (a1.salary+a2.salary)>20000)
    {
        loancategory=2;
        a1.setloanbracket(2);
        a2.setloanbracket(2);
    }
    else if((a1.salary+a2.salary<=45000) && (a1.salary+a2.salary)>35000)
    {
        loancategory=3;
        a1.setloanbracket(3);
        a2.setloanbracket(3);
    }
    else if((a1.salary+a2.salary)>45000)
    {
        loancategory=0;
        a1.setloanbracket(0);
        a2.setloanbracket(0);
    }


    if(loancategory==0)
    {
        //not eligible
        ui->label_loan->setText("Registered Family Not Eligible For Loan");
    }
    else if(loancategory>0)
    {
        //eligible
        ui->label_loan->setText("Registered Family Eligible For Loan");
        if(loancategory==1)
        {
            ui->label_loan_2->setText("Amount of Rs 40000 at Rate of 2% over 2 Years is available for the Salary Category");
            ui->label_loan_3->setText("OPT FOR GOVT LOAN :");
        }
        else if(loancategory==2)
        {
            ui->label_loan_2->setText("Amount of Rs 75000 at Rate of 3% over 2.5 Years is available for the Salary Category");
            ui->label_loan_3->setText("OPT FOR GOVT LOAN :");
        }
        else if(loancategory==3)
        {
            ui->label_loan_2->setText("Amount of Rs 90000 at Rate of 3.5% over 3 Years is available for the Salary Category");
            ui->label_loan_3->setText("OPT FOR GOVT LOAN :");
        }
    }
}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::on_pushButton_clicked()
{
    QApplication::quit();
}

void Dialog5::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        //loan taken
        a1.setloan(true);
        a2.setloan(true);

    }
    else
    {
        a1.setloan(false);
        a2.setloan(false);
    }
}
