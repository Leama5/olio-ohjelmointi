#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    state=1;
    ui->setupUi(this);
    connect(ui->N0,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N1,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N2,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N3,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N4,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N5,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N6,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N7,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N8,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N9,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);

    connect(ui->enter,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
    connect(ui->clear,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);

    connect(ui->add,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);
    connect(ui->sub,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);
    connect(ui->mul,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);
    connect(ui->div,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);

    //connect(ui->result,&QPushButton::clicked,this,&MainWindow::resetLineEdits);
    /*connect(ui->result,&QPushButton::clicked,this,&MainWindow::resetLineEdits);
    connect(ui->result,&QPushButton::clicked,this,&MainWindow::resetLineEdits);*/
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::numberClickedHandler()
{
    QPushButton * button=qobject_cast<QPushButton*>(sender());
    QString name= button->objectName();
    if (state==1)
    {
        if (name=="N0")
        {
            float n0=0;
            number1= number1 + QString::number(n0);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N1")
        {
            float n1=1;
            number1= number1 + QString::number(n1);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N2")
        {
            float n2=2;
            number1= number1 + QString::number(n2);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N3")
        {
            float n3=3;
            number1= number1 + QString::number(n3);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;


        }
        else if (name=="N4")
        {
            float n4=4;
            number1= number1 + QString::number(n4);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;


        }
        else if (name=="N5")
        {
            float n5=5;
            number1= number1 + QString::number(n5);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N6")
        {
            float n6=6;
            number1= number1 + QString::number(n6);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N7")
        {
            float n7=7;
            number1= number1 + QString::number(n7);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N8")
        {
            float n8=8;
            number1= number1 + QString::number(n8);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N9")
        {
            float n9=9;
            number1= number1 + QString::number(n9);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;
        }
        ui->num1->setText(number1);
    }
    else if (state==2)
    {

        if (name=="N0")
            {
            float n0=0;
            number2= number2 + QString::number(n0);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

            }
        else if (name=="N1")
        {
            float n1=1;
            number2= number2 + QString::number(n1);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N2")
        {
            float n2=2;
            number2= number2 + QString::number(n2);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N3")
        {
            float n3=3;
            number2= number2 + QString::number(n3);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;


        }
        else if (name=="N4")
            {
            float n4=4;
            number2= number2 + QString::number(n4);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;


            }
        else if (name=="N5")
            {
            float n5=5;
            number2= number2 + QString::number(n5);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

            }
        else if (name=="N6")
            {
            float n6=6;
            number2= number2 + QString::number(n6);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

            }
        else if (name=="N7")
        {
            float n7=7;
            number2= number2 + QString::number(n7);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N8")
        {
            float n8=8;
            number2= number2 + QString::number(n8);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;

        }
        else if (name=="N9")
        {
            float n9=9;
            number2= number2 + QString::number(n9);

            qDebug()<< "button name: " << name;
            qDebug()<< "numero 1: "<< number1;
            qDebug()<< "numero 2: "<< number2;
            }

        ui->num2->setText(number2);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button=qobject_cast<QPushButton*>(sender());
    QString name= button->objectName();

    if (name=="enter")
    {
        qDebug()<< "button name: " << name;
        float n1=number1.toFloat();
        float n2=number2.toFloat();

        switch (operand)
        {
            case 0:
            {
                qDebug()<< "added ";
                result= n1+n2;
                ui->result->setText(QString::number(result));
                break;

            }
            case 1:
            {
                qDebug()<< "subtracted ";
                result= n1-n2;
                ui->result->setText(QString::number(result));
                break;

            }
            case 2:
            {
                qDebug()<< "multiplied";
                result= n1*n2;
                ui->result->setText(QString::number(result));
                break;

            }
            case 3:
            {
                qDebug()<< "divided ";
                result= n1/n2;
                ui->result->setText(QString::number(result));

            }

        }
    qDebug()<< "entered";
    }
    else if (name== "clear")
    {
        state=1;
        number1= " ";
        number2=" ";
        ui->num1->setText(" ");
        ui->num2->setText(" ");
        ui->result->setText(" ");
        qDebug()<< "cleared";
    }

}
void MainWindow::addSubMulDivHandler()
{
    QPushButton * button=qobject_cast<QPushButton*>(sender());
    QString name= button->objectName();

    if(name=="add")
    {
        qDebug()<< "button name: " << name;
        operand=0;
        qDebug()<< "add";
        state=2;

    }
    else if (name=="sub")
    {
        qDebug()<< "button name: " << name;
        operand=1;
        qDebug()<< "subtract";
        state=2;
    }
    else if (name=="mul")
    {
        qDebug()<< "button name: " << name;
        operand=2;
        qDebug()<< "multiply";
        state=2;
    }
    else if (name=="div")
    {
        qDebug()<< "button name: " << name;
        operand=3;

        qDebug()<< "divide";
        state=2;
    }

}
void MainWindow::resetLineEdits()
{
    state=1;
    number1= " ";
    number2=" ";
    ui->num1->setText(" ");
    ui->num2->setText(" ");
    ui->result->setText(" ");
}



