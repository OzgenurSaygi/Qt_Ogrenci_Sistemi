#include "yonetici_islem.h"
#include "ui_yonetici_islem.h"
#include "qstring.h"
#include"QDate"
#include<QFile>
#include"QTextStream"
yonetici_islem::yonetici_islem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::yonetici_islem)
{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1_4.png");
    ui->arka_plan->setPixmap(arka_plani);
}

yonetici_islem::~yonetici_islem()
{
    delete ui;
}
int akad_sifre,akad_kayit=1;
QString akad_ad,akad_soyad,akad_meslek_unvan;
//Eğitim görevlilerini not defterine kaydediyorum.
void yonetici_islem::on_egitim_gorev_btn_clicked()
{   if(akad_kayit<=4)
    {
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile kayit("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/memur_akademisyen_kayit.txt");
    if(!kayit.open(QFile::WriteOnly|QFile::Text|QFile::Append)){}
    akad_sifre=ui->egitim_gorev_sifre->text().toInt();
    akad_ad=ui->egitim_gorev_ad->text();
    akad_soyad=ui->egitim_gorev_soyad->text();
    akad_meslek_unvan=ui->egitim_gorev_unvan->text();
    QTextStream yazdir(&kayit);
    yazdir<<akad_ad<<" "<<akad_soyad<<" "<<akad_sifre<<" "<<akad_meslek_unvan<<'\n';
    kayit.flush();
    kayit.close();
    ui->egitim_gorev_sifre->setText("");
    ui->egitim_gorev_ad->setText("");
    ui->egitim_gorev_soyad->setText("");
    ui->egitim_gorev_unvan->setText("");

   }
   else{
        ui->tamamlandi->setText("4 eğitim görevlisi \n başarıyla kaydedilmiştir");
    }
    akad_kayit++;
}
//Memuru not defterine kaydettim.
void yonetici_islem::on_memur_btn_clicked()
{   //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile kayit("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/memur_akademisyen_kayit.txt");
    if(!kayit.open(QFile::WriteOnly|QFile::Text|QFile::Append)){}
    QTextStream yazdir(&kayit);
    QString memur_ad=ui->memur_ad->text();
    QString memur_soyad=ui->memur_soyad->text();
    int memur_sifre=ui->memur_sifre->text().toInt();
    yazdir<<memur_ad<<" "<<memur_soyad<<" "<<memur_sifre<<'\n';
}
