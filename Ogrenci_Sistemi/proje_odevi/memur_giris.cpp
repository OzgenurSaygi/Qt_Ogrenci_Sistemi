#include "memur_giris.h"
#include "ui_memur_giris.h"
#include<qstring.h>
#include<QFile>
#include<QTextStream>
#include<QPixmap>
int akademisyen_sifre_kayit2[4],memur_sifre_gelen;
QString akademisyen_ad_kayit2[4],akademisyen_soyad_kayit2[4],akademisyen_unvan_kayit2[4],memur_ad_gelen,memur_soyad_gelen;
memur_giris::memur_giris(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::memur_giris)
{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1.png");//Sayfanın arka planına görsel eklemek için
    ui->arka_plan->setPixmap(arka_plani);
    QPixmap giris(":/Resim/giris.png");
    ui->giris->setPixmap(giris);
    /*Akademisyenlerin ve memur bilgilerinin kayıtlı olduğu dosyadan bilgileri çekip akademisyen_ad_kayit vb. gibi dizilerin içine
     bilgileri sırasıyla atıyorum.Memur birtane olduğu için diziye değil değikene atıyorum */
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile kayit("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/memur_akademisyen_kayit.txt");
    if(!kayit.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream oku(&kayit);
    oku>>akademisyen_ad_kayit2[0]>>akademisyen_soyad_kayit2[0]>>akademisyen_sifre_kayit2[0]>>akademisyen_unvan_kayit2[0];oku>>akademisyen_ad_kayit2[1]>>akademisyen_soyad_kayit2[1]>>akademisyen_sifre_kayit2[1]>>akademisyen_unvan_kayit2[1]; oku>>akademisyen_ad_kayit2[2]>>akademisyen_soyad_kayit2[2]>>akademisyen_sifre_kayit2[2]>>akademisyen_unvan_kayit2[2];oku>>akademisyen_ad_kayit2[3]>>akademisyen_soyad_kayit2[3]>>akademisyen_sifre_kayit2[3]>>akademisyen_unvan_kayit2[3];
    oku>>memur_ad_gelen>>memur_soyad_gelen>>memur_sifre_gelen;
    kayit.close();
}

memur_giris::~memur_giris()
{
    delete ui;
}
void memur_giris::on_meur_giris_clicked()
{  //Kullanıcının girdiği bilgi ile kayıtlı olan memurun bilgilerini kıyaslıyorum.Eğer doğru ise memur_islem sayfasına gitmesini istiyorum.
   girisi=new memur_islem();
   QString memur_adi=ui->memur_ad->text();
   int memur_sifre=ui->memur_sifre->text().toInt();
   if((memur_adi==memur_ad_gelen)&&(memur_sifre==memur_sifre_gelen))
   {
       girisi->show();

   }


}
