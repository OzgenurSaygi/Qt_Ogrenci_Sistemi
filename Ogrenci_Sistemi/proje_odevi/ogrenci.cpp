#include "ogrenci.h"
#include "ui_ogrenci.h"
#include"qstring.h"
#include<QTextStream>
#include<QFile>
#include<QPixmap>
int ogrenci_sifre;
QString ogrenci_adlar2[100],ogrenci_soyadlar2[100],ogrenci_bolumler2[100],ogrenci_mail2[100],ogrenci_ders2[100][2],ogrenci_kayit_tarih[100];
int ogrenci_numaralar2[100],ogrenci_sifreler2[100],ogrenci_donem2[100];
ogrenci::ogrenci(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ogrenci)

{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1.png");
    ui->arka_plan->setPixmap(arka_plani);
    QPixmap giris(":/Resim/giris.png");
    ui->giris->setPixmap(giris);
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ogrenci_bilgi_oku("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogrenci_kayit.txt");
    if(!ogrenci_bilgi_oku.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream oku2(&ogrenci_bilgi_oku);
    for(int b=0;b<100;b++)
    {
    oku2>>ogrenci_adlar2[b]>>ogrenci_soyadlar2[b]>>ogrenci_numaralar2[b]>>ogrenci_bolumler2[b]>>ogrenci_sifreler2[b]>>ogrenci_mail2[b]>>ogrenci_donem2[b]>>ogrenci_ders2[b][0]>>ogrenci_ders2[b][1]>>ogrenci_kayit_tarih[b];
    }
    ogrenci_bilgi_oku.close();
}

ogrenci::~ogrenci()
{
    delete ui;
}
//Öğrencinin sisteme girmesi için kontrol yaptırıyorum
void ogrenci::on_ogrenci_giris_clicked()
{   git=new ogrenci_islem();
    ogrenci_ad=ui->ogrenci_ad->text();
    ogrenci_sifre=ui->ogrenci_sifre->text().toInt();
    for(int i=0;i<100;i++)
    {
        if(ogrenci_ad==ogrenci_adlar2[i]&&ogrenci_sifre==ogrenci_sifreler2[i])
        {
            numara_gonder=ogrenci_numaralar2[i];
            /*Eğer öğrenci sisteme girmiş ise o ogrencinin girerken girdiği bilgilerden kullanıcı adını ve
             o öğrenciye ait olan okul numarasını ogrenci_islem.cpp ye gönderiyorum */
            connect(this,SIGNAL(ogrenci_bilgi_gonder(QString,int)),git,SLOT(ogrenci_bilgi_alindi(QString,int)));
            emit ogrenci_bilgi_gonder(this->ogrenci_ad,this->numara_gonder);
            git->show();
            ui->ogrenci_ad->setText("");
            ui->ogrenci_sifre->setText("");
            break;
        }
    }
}
