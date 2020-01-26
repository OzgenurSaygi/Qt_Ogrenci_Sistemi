#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qstring.h"
#include<QPalette>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap p(":/Resim/resim1.png");//Sayfanın arka planına görsel eklemek için
    QPixmap p2(":/Resim/giris.png");
    ui->label_3->setPixmap(p);
    ui->logo->setPixmap(p2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Butona bastıktan sonra ilgili sayfaların açılmasını sağlıyorum
void MainWindow::on_yonetici_clicked()
{
    git.show();
}

void MainWindow::on_pushButton_clicked()
{
    git_memur.show();
}

void MainWindow::on_akademi_giris_clicked()
{
    git_akademisyen.show();
}

void MainWindow::on_ogrenci_giris_clicked()
{
    git_ogrenci.show();
}





