#include "yonetici.h"
#include "ui_yonetici.h"
#include "qstring.h"
#include"iostream"
using namespace std;

yonetici::yonetici(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::yonetici)
{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1.png");
    ui->arka_plan->setPixmap(arka_plani);
    QPixmap giris(":/Resim/giris.png");
    ui->giris_2->setPixmap(giris);
}

yonetici::~yonetici()
{
    delete ui;
}
/*Yöneticiyi sisteme kaydettim ve yönetici_islem sayfasına girebilmesi için girilen bilgileri
ve kayıtlı olan bilgiyi kontrol ettirdim*/
void yonetici::on_giris_clicked()
{
    int yon_sifre=345;
    QString yon_ad="özge";
    int yon_sifre_text=ui->yon_sifre->text().toInt();
    QString yon_ad_text=ui->yon_ad->text();
    if(yon_ad==yon_ad_text&&yon_sifre==yon_sifre_text)
    {
        yongit.show();
    }
    else
    {
        ui->yanlis->setText("Kullanıcı adı veya şifre yanlış");
        ui->yon_sifre->setText("");
        ui->yon_ad->setText("");
    }
    ui->yon_sifre->setText("");
    ui->yon_ad->setText("");
}
