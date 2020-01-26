#include "memur_islem.h"
#include "ui_memur_islem.h"
#include<qstring.h>
#include<QMessageBox>
#include<QTextStream>
#include<QFile>
#include<QDate>
#include<QPixmap>
QString ogr_bolum_kayit,ogr_ad_kayit,ogr_soyad_kayit,ogr_posta_kayit,donem_dersler[2],ogrenci_ad_son[100];
int ogr_numara_kayit,ogr_sifre_kayit,donem,kayit_tarihi,ogrenci_donem_son[100],ogrenci_numara_son[100];
QString ogretmen_ad,ogretmen_soyad,ders_acma_bolumler,ders_secim_kayit;
memur_islem::memur_islem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::memur_islem)
{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1_2.png");//Sayfanın arka planına görsel eklemek için
    ui->arka_plan->setPixmap(arka_plani);
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile yeni_donemler("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/yeni_donem_kayit.txt");
    if(!yeni_donemler.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream donem_oku(&yeni_donemler);
    for(int b=0;b<100;b++)
    {
        donem_oku>>ogrenci_numara_son[b]>>ogrenci_ad_son[b]>>ogrenci_donem_son[b];
    }

}
memur_islem::~memur_islem()
{
    delete ui;
}

void memur_islem::on_ogr_bolum_activated(const QString &arg1)
{   QMessageBox tanit;
    ogr_bolum_kayit=ui->ogr_bolum->currentText();
    //Öğrencinin kayıt olurken seçtiği bölümü tanıtmak için QMessabox ile bölüm hakkında bilgiler yazdım.
    if(ogr_bolum_kayit=="Bilişim_Sis_Müh")
    {
       tanit.setText("<html><body><font color='dark blue'>Öğrencilerin, Bilişim Sistemleri Mühendisliği Lisans/Lisansüstü Programı ile hızlı değişim gösteren bilişim sektörüne,teknik altyapıya ve çözüm üretme yeteneğine sahip geleceğin liderlerinin hazırlanması amaçlanmaktadır.</font></body></html>");
       tanit.exec();
    }
    else if(ogr_bolum_kayit=="Biyomedikal_Müh")
    {
       tanit.setText("<html><bkody><font color='dark blue'>Öğrencilerin, biyomedikal mühendisliği alanının temel prensiplerini öğrenmeleri ve bu alanda uygulama becerisi kazanmaları için fırsat sağlamak.Sağlık sektöründeki mevcut tıbbi cihaz ve teknolojilerinin kullanım becerisini ve yeni tıbbi cihaz geliştirmek için ilgili alt yapıyı kazandırmak. </font></body></html>");
       tanit.exec();
    }
    else
    {
       tanit.setText("<html><body><font color='dark blue'>Öğrencilerin, endüstrinin ve ticari kurumların ihtiyaç duyabileceği otomotiv ürünlerinin tasarım,analiz,üretim ve imalatını  bir süreç içinde gerçekleştirme kabiliyitine sahip uygulama ağırlıklı mühendisleri yetiştirmeyi amaçlar. </font></body></html>");
       tanit.exec();
    }
}
int tik=0;
void memur_islem::on_ders_acma_bolum_activated(const QString &arg1)
{   //Akademisyene ders açarken seçmiş olduğu bölümün derslerini listelemek için kontrol yaptırdım.
    ders_acma_bolumler=ui->ders_acma_bolum->currentText();
    if(ders_acma_bolumler=="Bilişim_Sis_Müh")
    {    /*Bir önceki seçilmiş olan bölümün derslerini silip yeni seçilen
         bölümün derslerini yazdırmak için kontrol yaptırıyorum*/
        if(tik==1)
        {
            ui->akademisyen_ders->clear();
        }
        for(int i=0;i<8;i++)
        {
            ui->akademisyen_ders->addItem(bilisim_dersler[i]);

        }
    }
    else if(ders_acma_bolumler=="Biyomedikal_Müh")
    {
        ui->akademisyen_ders->clear();
        for(int i=0;i<8;i++)
        {
            ui->akademisyen_ders->addItem(biyomedikal_dersler[i]);
            tik=1;
        }
    }
    else
    {
        ui->akademisyen_ders->clear();
        for(int i=0;i<8;i++)
        {
            ui->akademisyen_ders->addItem(otomativ_dersler[i]);
            tik=1;
        }
    }

}
void memur_islem::on_akademisyen_ders_activated(const QString &arg1)
{
    ders_secim_kayit=ui->akademisyen_ders->currentText();
}
//AKADEMİSYEN DERS SEÇİMİNİ DOSYAYA KAYDETME
void memur_islem::on_ders_kaydet_clicked()
{   ogretmen_ad=ui->egitim_gor_ad->text();
    ogretmen_soyad=ui->egitim_gor_soyad->text();
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ders_kayit("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogretmen_ders_secim_kayit.txt");
    if(!ders_kayit.open(QFile::WriteOnly|QFile::Text|QIODevice::Append)){}
    QTextStream ders_kaydet(&ders_kayit);
    ders_kaydet<<ogretmen_ad<<" "<<ogretmen_soyad<<" "<<ders_acma_bolumler<<" "<<ders_secim_kayit<<'\n';
}
void memur_islem::on_ogr_ad_textEdited(const QString &arg1)
{
     ogr_ad_kayit=arg1;
}
//ÖĞRENCİNİN BULUNDUĞU DÖNEME GÖRE ALACAĞI DERSLER
void memur_islem::on_comboBox_activated(const QString &arg2)
{
    donem=ui->comboBox->currentText().toInt();

    if((donem==1)&&(ogr_bolum_kayit=="Bilişim_Sis_Müh"))
    {
        donem_dersler[0]="Matematik";
        donem_dersler[1]="Programlama";
    }
    for(int a=0;a<100;a++)
    {
    if(ogrenci_ad_son[a]==ogr_ad_kayit)
    {
    if((2==ogrenci_donem_son[a])&&(ogr_bolum_kayit=="Bilişim_Sis_Müh"))
    {
        donem_dersler[0]="İnkilap";
        donem_dersler[1]="Lineer_Cebir";
    }
    else if((3==ogrenci_donem_son[a])&&(ogr_bolum_kayit=="Bilişim_Sis_Müh"))
    {
        donem_dersler[0]="Fizik";
        donem_dersler[1]="Türk_Dili";
    }
    else if((4==ogrenci_donem_son[a])&&(ogr_bolum_kayit=="Bilişim_Sis_Müh"))
    {
        donem_dersler[0]="Robotik";
        donem_dersler[1]="İstatistik_ve_olasılık";
    }
    }
    }
    if((donem==1)&&(ogr_bolum_kayit=="Biyomedikal_Müh"))
    {
        donem_dersler[0]="Matematik";
        donem_dersler[1]="Kimyaya_Giriş";
    }
    for(int b=0;b<100;b++){
    if(ogrenci_ad_son[b]==ogr_ad_kayit){
    if((2==ogrenci_donem_son[b])&&(ogr_bolum_kayit=="Biyomedikal_Müh"))
    {
        donem_dersler[0]="İngilizce";
        donem_dersler[1]="Programlama";
    }
    else if((3==ogrenci_donem_son[b])&&(ogr_bolum_kayit=="Biyomedikal_Müh"))
    {
        donem_dersler[0]="Fizik";
        donem_dersler[1]="İnkilap";
    }
    else if((4==ogrenci_donem_son[b])&&(ogr_bolum_kayit=="Biyomedikal_Müh"))
    {
        donem_dersler[0]="Biyomedikal_Müh_Giriş";
        donem_dersler[1]="Genel_Biyoloji";
    }  
    }
    }
    if((donem==1)&&(ogr_bolum_kayit=="Otomotiv_Müh"))
    {
        donem_dersler[0]="Matematik";
        donem_dersler[1]="Fizik";
    }
    for(int c=0;c<100;c++)
    {
    if(ogrenci_ad_son[c]==ogr_ad_kayit){
    if((2==ogrenci_donem_son[c])&&(ogr_bolum_kayit=="Otomotiv_Müh"))
    {
        donem_dersler[0]="İngilizce";
        donem_dersler[1]="Teknik_Resim";
    }
    else if((3==ogrenci_donem_son[c])&&(ogr_bolum_kayit=="Otomotiv_Müh"))
    {
        donem_dersler[0]="Otomotive_Giriş ";
        donem_dersler[1]="İnkilap";
    }
    else if((4==ogrenci_donem_son[c])&&(ogr_bolum_kayit=="Otomotiv_Müh"))
    {
        donem_dersler[0]="Termodinamik";
        donem_dersler[1]="Türk_Dili";
    }

    }
    }
}

void memur_islem::on_ogr__kayit_clicked()
{   QString dates;
    dates=ui->dateEdit->text();
    ogr_soyad_kayit=ui->ogr_soyad->text();
    ogr_numara_kayit=ui->ogr_numara->text().toInt();
    ogr_sifre_kayit=ui->ogr_sifre->text().toInt();
    ogr_posta_kayit=ui->ogr_e_posta->text();
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ogrenci_kaydet("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogrenci_kayit.txt");
    if(!ogrenci_kaydet.open(QFile::WriteOnly|QFile::Text|QIODevice::Append)){}
    QTextStream ogrenci_bilgi_oku(&ogrenci_kaydet);
    /* Öğrenci ilk defa kayıt oluyorsa onun bilgilerini kaydetmek için*/
    if(donem==1){
        ogrenci_bilgi_oku<<ogr_ad_kayit<<" "<<ogr_soyad_kayit<<" "<<ogr_numara_kayit<<" "<<ogr_bolum_kayit<<" "<<ogr_sifre_kayit<<" "<<ogr_posta_kayit<<" "<<donem<<" "<<donem_dersler[0]<<" "<<donem_dersler[1]<<" "<<dates<<'\n';
        ogrenci_kaydet.close();
    }
    /*Öğrenci daha önceden kayıtlıysa ve bulunduğu dönemin derslerini geçip sonraki döneme geçmiş ise o öğrenciyi
     o dönemin deslerini alabilmesi için tekrardan kayıt yapıyorum aldığı yeni dersleri kaydetmek için.
     Eğer yeni döneme geçememişse not defterine yeni derslerin kaydını yaptırmıyor*/
    for(int f=0;f<100;f++)
    {  if(ogr_ad_kayit==ogrenci_ad_son[f]){
        if(ogrenci_donem_son[f]==donem){
            ogrenci_bilgi_oku<<ogr_ad_kayit<<" "<<ogr_soyad_kayit<<" "<<ogr_numara_kayit<<" "<<ogr_bolum_kayit<<" "<<ogr_sifre_kayit<<" "<<ogr_posta_kayit<<" "<<donem<<" "<<donem_dersler[0]<<" "<<donem_dersler[1]<<" "<<dates<<'\n';
            ogrenci_kaydet.close();
            break;
       }
        }
    }

}




