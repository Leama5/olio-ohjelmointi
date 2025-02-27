#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->startGame,&QPushButton::clicked, this,&MainWindow::startStopHandler);
    connect(ui->stopGame,&QPushButton::clicked, this,&MainWindow::startStopHandler);
    connect(ui->switch1,&QPushButton::clicked, this,&MainWindow::switcherHandler);
    connect(ui->switch2,&QPushButton::clicked, this,&MainWindow::switcherHandler);
    connect(ui->timer2,&QPushButton::clicked, this,&MainWindow::timerHandler);
    connect(ui->timer5,&QPushButton::clicked, this,&MainWindow::timerHandler);
    pQTimer= new QTimer(this);
    connect(pQTimer,&QTimer::timeout,this,&MainWindow::updateProgressBar);

   setGameInfoText("Select playtime and press start game", 15);
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::startStopHandler()
{
    QPushButton * button= qobject_cast<QPushButton*>(sender());
    QString name=button->objectName();
    qDebug()<<"painettu nappia "<<name;
    if(name== "startGame")
    {
        pQTimer->start(1000);
        setGameInfoText("Game ongoing",14);
        qDebug()<<gameTime;
    }
    else if (name=="stopGame")
    {
        setGameInfoText("New game via start button",14);
        pQTimer->stop();
    }

}
void MainWindow::switcherHandler()
{
    QPushButton * button= qobject_cast<QPushButton*>(sender());
    QString name=button->objectName();
    qDebug()<<"painettu nappia "<<name;
    if(name=="switch1")
    {
        qDebug()<<"pelaaja vaihtuu 1";
        currentPlayer=2;
    }
    else if(name=="switch2")
    {
        qDebug()<<"pelaaja vaihtuu 2";
        currentPlayer=1;
    }
}
void MainWindow::timerHandler()
{
    QPushButton * button= qobject_cast<QPushButton*>(sender());
    QString name=button->objectName();
    qDebug()<<"painettu nappia "<<name;

    if(name=="timer2")
    {
        qDebug()<<"2minuutta";
        gameTime=120;
        player1Time=120;
        player2Time=120;
        ui->progressBar1->setMaximum(120);
        ui->progressBar1->setMinimum(0);
        ui->progressBar2->setMaximum(120);
        ui->progressBar2->setMinimum(0);
        setGameInfoText("Ready to play",13);
    }
    else if (name=="timer5")
    {
        qDebug()<<"5minuuttia";
        gameTime=300;
        player1Time=300;
        player2Time=300;
        ui->progressBar1->setMaximum(300);
        ui->progressBar1->setMinimum(0);
        ui->progressBar2->setMaximum(300);
        ui->progressBar2->setMinimum(0);
        setGameInfoText("Ready to play", 13);
    }
}
void MainWindow::updateProgressBar()
{
    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);
    if(currentPlayer==1)
    {
        player1Time--;
        if (player1Time==0)
        {
            setGameInfoText("Player 1 WON", 17);
        }
    }
    else
    {
        player2Time--;
        if (player2Time==0)
        {
            setGameInfoText("Player 2 WON", 17);
        }
    }
}
void MainWindow::timeout()
{

}
void MainWindow::setGameInfoText(QString t, short k)
{
    ui->label->setText(t);
    QFont font= ui->label->font();
    font.setPointSize(k);
    ui->label->setFont(font);
}


