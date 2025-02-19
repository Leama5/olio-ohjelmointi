#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Count,&QPushButton::clicked,this,&MainWindow::HandleClick);
    connect(ui->Reset,&QPushButton::clicked,this,&MainWindow::HandleClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HandleClick()
{
    QPushButton * button=qobject_cast<QPushButton*>(sender());
    QString name= button->objectName();
    if (button==ui->Count){

    QString Count=button->objectName();
    qDebug()<< "button name:" << name;
    QString text=ui->lineEdit->text();
    float n1= text.toFloat();
    n1++;
    ui->lineEdit->setText(QString::number(n1));
    qDebug()<< "counted";
    }
    else if (button==ui->Reset)
    {
    qDebug()<< "button name:" << name;
    ui->lineEdit->setText("0");
    }

}
