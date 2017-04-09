#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include <QStatusBar>
#include <QtGui>
#include <QtCore>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <QFileDialog>

QString one_wins="PLAYER 1 WINS!";
QString two_wins="PLAYER 2 WINS!";
QString tied_game="TIED GAME!";


QString init[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
QString s[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
int turns = 1;

bool check(QString s[])
{
    if (    (s[0] == s[1] && s[1] == s[2]) ||
            (s[0] == s[3] && s[3] == s[6]) ||
            (s[0] == s[4] && s[4] == s[8]) ||
            (s[2] == s[4] && s[4] == s[6]) ||
            (s[2] == s[5] && s[5] == s[8]) ||
            (s[6] == s[7] && s[7] == s[8]) ||
            (s[1] == s[4] && s[4] == s[7]) ||
            (s[3] == s[4] && s[4] == s[5])
            )
        return true;
    else
        return false;
}

QString display(int n)
{
    if ((turns%2) == 0)
        s[n] = "O";
    else
        s[n] = "X";

    QString qstr = s[n];

    turns++;
    return qstr;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("c:\\Users\\Ilyas\\Documents\\CS Projects\\TicTacToe GUI\\img\\ilyas igoudala.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int n = 0;
    ui->pushButton->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    int n = 1;
    ui->pushButton_2->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    int n = 2;
    ui->pushButton_3->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    int n = 3;
    ui->pushButton_4->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    int n = 4;
    ui->pushButton_5->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    int n = 5;
    ui->pushButton_6->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    int n = 6;
    ui->pushButton_7->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    int n = 7;
    ui->pushButton_8->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    int n = 8;
    ui->pushButton_9->setText(display(n));
    if (check(s) == true)
    {
        QString message;
        if(turns %2==1)
            message=two_wins;
        else
            message=one_wins;
        QMessageBox msg;
        msg.setText(message);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }
    if ((turns == 10) && (check(s) == false))
    {
        QMessageBox msg;
        msg.setText(tied_game);
        msg.exec();
        for(int i=0;i<9;++i)
            s[i]=init[i];
        turns = 1;
        ui->pushButton->setText(" ");
        ui->pushButton_2->setText(" ");
        ui->pushButton_3->setText(" ");
        ui->pushButton_4->setText(" ");
        ui->pushButton_5->setText(" ");
        ui->pushButton_6->setText(" ");
        ui->pushButton_7->setText(" ");
        ui->pushButton_8->setText(" ");
        ui->pushButton_9->setText(" ");
    }

}


