#include "ogrenci_islem.h"
#include "ui_ogrenci_islem.h"
#include"qstring.h"
#include"QTextStream"
#include<QFile>
#include<QMessageBox>
#include<QPixmap>
QString ogrenci_adlar3[100],ogrenci_ders_adlari3[100],kalinan_dersler[100];
int ogrenci_numaralar3[100],ogrenci_notlar3[100][2],not_ortalama,ogrenci_donem3[100], alttan_ders_sayisi=0,akts=0,donem_arttir=0,son;
ogrenci_islem::ogrenci_islem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ogrenci_islem)
{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1_3png.png");
    ui->arka_plan->setPixmap(arka_plani);
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ogrenci_not_oku("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogrenci_not_kayit.txt");
    if(!ogrenci_not_oku.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream not_oku(&ogrenci_not_oku);
    for(int b=0;b<100;b++)
    {
    not_oku>>ogrenci_adlar3[b]>>ogrenci_numaralar3[b]>>ogrenci_ders_adlari3[b]>>ogrenci_notlar3[b][0]>>ogrenci_notlar3[b][1]>>ogrenci_donem3[b];
    }

}

ogrenci_islem::~ogrenci_islem()
{
    delete ui;
}
//Öğrencinin sisteme girerken girmiş olduğu bilgileri çekip ,ogrenci_not_kayıt da ki o ad ve numara ile eşleşen derslerin notlarını ekrana yazdırmak için.
void ogrenci_islem::ogrenci_bilgi_alindi(QString ogrenci_adi, int ogrenci_numarasi)
{   alttan_ders_sayisi=0;
    numara_gonder2=ogrenci_numarasi;
    ui->label_2->setText(ogrenci_adi);
    ui->label_4->setText(QLocale().toString(ogrenci_numarasi));
    for(int i=0;i<100;i++){
        if(ogrenci_adi==ogrenci_adlar3[i]&&ogrenci_numarasi==ogrenci_numaralar3[i])
        {
             ui->yaz->append(ogrenci_ders_adlari3[i]+"\t"+QLocale().toString(ogrenci_notlar3[i][0])+"\t"+QLocale().toString(ogrenci_notlar3[i][1])+"\n");
             not_ortalama=(ogrenci_notlar3[i][0]*40)/100+(ogrenci_notlar3[i][1]*60)/100;
            /*Her derse sırasıyla bakıyor ve eğer o dersin ortlaması alınıp 65 den büyükse akts yi 5 arttırıyorum.
             Eğer 65 den küçük ise o dersin adını kalinan dersler dizisine atıyorum ve alttan alınması gereken dersi 1 arttırıyorum*/
             if(not_ortalama<65)
             {
                 kalinan_dersler[i]=ogrenci_ders_adlari3[i];
                 alttan_ders_sayisi=alttan_ders_sayisi+1;

             }
             else{akts=akts+5;}
             if(not_ortalama>65||not_ortalama<65){
                 //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
                 QFile yeni_donem("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/yeni_donem_kayit.txt");
                 if(!yeni_donem.open(QFile::WriteOnly|QFile::Text|QFile::Append)){}
                 QTextStream donem_yazdir(&yeni_donem);
                 /*En az iki dersin notu sisteme girilmişse dönem_arttir'ı "1" arttırıyorum.
                 Arttıktan sonra yeni dönemi koşul sağlandıktan sonra not defterine yazdırıyorum.*/
                 donem_arttir=donem_arttir+1;
                 if(donem_arttir==2){
                     donem_yazdir<<ogrenci_numaralar3[i]<<" "<<ogrenci_adlar3[i]<<" "<<2<<"\n";
                 }
                 else if(donem_arttir==4)
                 {
                     donem_yazdir<<ogrenci_numaralar3[i]<<" "<<ogrenci_adlar3[i]<<" "<<3<<"\n";
                 }
                 else if(donem_arttir==8){
                      donem_yazdir<<ogrenci_numaralar3[i]<<" "<<ogrenci_adlar3[i]<<" "<<4<<"\n";
                      son=4;
                 }
             }

        }

        if(alttan_ders_sayisi>0){
            ui->label_9->setText("Alttan almanız gereken dersler:");
            ui->kalinan_ders_yaz->setText("Kalmış olduğunuz dersler vardır");
        }
        else{
            ui->kalinan_ders_yaz->setText("Kalmış olduğunuz dersler yok");
        }
    }
}

void ogrenci_islem::on_ogrenci_belgesi_clicked()
{   ogr_belge=new ogrenci_belgesi();
    connect(this,SIGNAL(ogrenci_numara_gonder(int)),ogr_belge,SLOT(ogrenci_numara_alindi(int)));
    emit ogrenci_numara_gonder(this->numara_gonder2);
    ogr_belge->show();

}

void ogrenci_islem::on_mezun_clicked()
{
    int ort=0;
    for(int f=0;f<100;f++)
    {
       for(int g=0;g<100;g++)
        {   if(numara_gonder2==ogrenci_numaralar3[g]){
            if(kalinan_dersler[f]==ogrenci_ders_adlari3[g])
            {
               ort=(ogrenci_notlar3[g][0]*40)/100+(ogrenci_notlar3[g][1]*60)/100;
               if(ort>65)
               {
                   alttan_ders_sayisi=alttan_ders_sayisi-1;
                   break;
               }
            }
           }
        }
    }
    if(alttan_ders_sayisi==0&&akts==40){
        ui->kalinan_ders_yaz->setText("Kalmış olduğunuz dersler yok");
        QMessageBox mezun;
        mezun.setText("Tebrikler Mezun oldunuz ");
        mezun.exec();
    }
    else if(alttan_ders_sayisi>0&&son==4){
         QMessageBox kalan;
        kalan.setText("5. Ve 6. donemde alttan almış olduğunuz dersleri veremediğiniz için öğrenciliğiniz bitmiştir ");
        kalan.exec();
    }

}
