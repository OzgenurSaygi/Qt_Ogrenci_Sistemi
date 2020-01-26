#include "memur.h"
#include "ui_memur.h"
#include"qstring.h"
memur::memur(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::memur)
{
    ui->setupUi(this);
    ui->label_3->setText("<html><head/><body><p align='center'><font color='green' size='15'>MEMUR GİRİŞİ</font></p></body></html>");
}

memur::~memur()
{
    delete ui;

}
int sifre_mem;
QString ad_mem;
void memur::alindi(QString memur_ad_alin ,int memur_sifre_alin)
{
    ad_mem=memur_ad_alin;
    sifre_mem=memur_sifre_alin;
}
void memur::on_memur_giris_clicked()
{


   QString memur_ad2=ui->memur_adi->text();
   int memur_sifre2=ui->memur_sifresi->text().toInt();
   if(bil.memur_adi==memur_ad2&&bil.memur_sifresi==memur_sifre2)
   {
       git_islem.show();

   }

}

