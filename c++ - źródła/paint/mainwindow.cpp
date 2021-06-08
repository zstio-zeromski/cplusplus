#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    maluj=QPixmap(600,400);
    maluj.fill(QColor(255,0,255));
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseReleaseEvent( QMouseEvent *e )
{

pkt2=e->pos();
QPainter obojetnie(&maluj);
obojetnie.setPen (jakos);
obojetnie.drawLine(pkt1,pkt2);
repaint();
}
void MainWindow::mousePressEvent( QMouseEvent *e )
{
pkt1=e->pos();
}
void MainWindow::mouseMoveEvent( QMouseEvent *e )
{
pkt2=e->pos();
QPainter obojetnie(&maluj);
obojetnie.setPen (jakos);
obojetnie.drawLine(pkt1,pkt2);
pkt1=pkt2;
repaint();
}
void MainWindow::paintEvent(QPaintEvent *event)

{
QPainter p1(this);
p1.drawPixmap(0,0,maluj);

}



void MainWindow::on_pushButton_clicked()
{
    jakos=QPen ( QColor(Qt::red));

}

void MainWindow::czysc()
{
  maluj.fill(QColor(0,0,0));
  repaint();
}

void MainWindow::on_pushButton_3_clicked()
{
    QPainter bbb(&maluj);
    bbb.setPen(QColor(0,0,0));
    QRect aaa(23,34,20,20);
    bbb.drawEllipse(10,10,20,20);
    repaint();
}
