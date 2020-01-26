#include "ogrenci_belgesi.h"
#include "ui_ogrenci_belgesi.h"
#include<qstring.h>
#include<QFile>
#include<QTextStream>
QString ad4[100],soyad4[100],bolum4[100],mail4[100],kayit_tarih4[100],ogrenci_ders4[100][2];
int numara4[100],sifre4[100],donem4[100];
ogrenci_belgesi::ogrenci_belgesi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ogrenci_belgesi)
{
    ui->setupUi(this);
    QPixmap resim("://logorgb.png");
    ui->label_3->setPixmap(resim);
    //Öğrencinin güncel bilgilerini not defterinden çekip sırasıyla diziye kaydettim .
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ogrenci_bilgi("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogrenci_kayit.txt");
    if(!ogrenci_bilgi.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream bilgi(&ogrenci_bilgi);
    for(int b=0;b<100;b++)
    {
        bilgi>>ad4[b]>>soyad4[b]>>numara4[b]>>bolum4[b]>>sifre4[b]>>mail4[b]>>donem4[b]>>ogrenci_ders4[b][0]>>ogrenci_ders4[b][1]>>kayit_tarih4[b];
    }

}

ogrenci_belgesi::~ogrenci_belgesi()
{
    delete ui;
}
void ogrenci_belgesi::ogrenci_numara_alindi(int numara_ogr)
{   //Kullanıcının adına otomatik olarak öğrenci belgesi hazırlanıyor.
    for(int i=0;i<100;i++)
    {
        if(numara_ogr==numara4[i])
        {
          ui->numara->setText(QLocale().toString(numara_ogr));
          ui->ad->setText(ad4[i]);
          ui->soyad->setText(soyad4[i]);
          ui->sinif->setText(QLocale().toString(donem4[i]));
          ui->tarih->setText(kayit_tarih4[i]);
          ui->bolum->setText(bolum4[i]);
        }
    }
}
