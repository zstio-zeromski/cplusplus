#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_5->setText(QString::number((ui->lineEdit->text()).toDouble() + (ui->lineEdit_2->text()).toDouble()));
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit_6->setText(QString::number((ui->lineEdit_3->text()).toDouble() - (ui->lineEdit_4->text()).toDouble()));
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit_7->setText(QString::number((ui->lineEdit_9->text()).toDouble() * (ui->lineEdit_8->text()).toDouble()));
}

void MainWindow::on_pushButton_4_clicked()
{
    if(((ui->lineEdit_11->text()).toDouble())!=0) ui->lineEdit_10->setText(QString::number((ui->lineEdit_12->text()).toDouble() / (ui->lineEdit_11->text()).toDouble()));
    else;
}


void MainWindow::on_pushButton_5_clicked()
{
    double a = ui->lineEdit_13->text().toDouble();
    double b = ui->lineEdit_14->text().toDouble();
    double c=a;
    if(b!=0)
    {
    double d=b>0?b:-b;
for(int i = 1; i<d;i++)
    {
    c=c*a;
    }
if(b>0)
    ui->lineEdit_15->setText(QString::number(c));
else ui->lineEdit_15->setText(QString::number(1/c));
}
else ui->lineEdit_15->setText(QString::number(1));
}


