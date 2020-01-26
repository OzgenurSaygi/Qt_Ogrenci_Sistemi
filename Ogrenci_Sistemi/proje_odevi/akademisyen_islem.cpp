#include "akademisyen_islem.h"
#include "ui_akademisyen_islem.h"
#include"qstring.h"
#include<QFile>
#include<QTextStream>
QString ogrenci_adi,ders_ad,akademisyen_ad,akademisyen_ad2[40],akademisyen_ders2[40],akademisyen_bolum2[40],akademisyen_soyad2[40],ders_adi_not;
int vize_not,final_not,ortalama,ogrenci_numara,b=0;
QString ogrenci_adlar[100],ogrenci_soyadlar[100],ogrenci_bolumler[100],ogrenci_mail[100],ogrenci_ders[100][2];
int ogrenci_numaralar[100],ogrenci_sifreler[100],ogrenci_donem[100],ogrenci_kayit5[100];
akademisyen_islem::akademisyen_islem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::akademisyen_islem) 
{   ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1.png");//Sayfanın arka planına görsel eklemek için
    ui->arka_plan->setPixmap(arka_plani);
    /*Akademisyenlerin bilgilerinin kayıtlı olduğu dosyadan bilgileri çekip akademisyen_ad2 vb. gibi dizilerin içine
    bilgileri sırasıyla atıyorum */
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ders_kayit2("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogretmen_ders_secim_kayit.txt");
    if(!ders_kayit2.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream oku(&ders_kayit2);
    for(int c=0;c<40;c++)
    {
       oku>>akademisyen_ad2[c]>>akademisyen_soyad2[c]>>akademisyen_bolum2[c]>>akademisyen_ders2[c];
    }
    //Öğrenci bilgilerini dosyadan çekiyorum
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ogrenci_bilgi_oku("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogrenci_kayit.txt");
    if(!ogrenci_bilgi_oku.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream oku2(&ogrenci_bilgi_oku);
    for(int d=0;d<100;d++)
    {
        oku2>>ogrenci_adlar[d]>>ogrenci_soyadlar[d]>>ogrenci_numaralar[d]>>ogrenci_bolumler[d]>>ogrenci_sifreler[d]>>ogrenci_mail[d]>>ogrenci_donem[d]>>ogrenci_ders[d][0]>>ogrenci_ders[d][1]>>ogrenci_kayit5[d];
    }
}

akademisyen_islem::~akademisyen_islem()
{
    delete ui;
}
void akademisyen_islem::alindi(QString ad)
{  /*Akademisyen.cpp de kullanıcını girdiği ad ve şifre bilgisinden ,ad bilgisini çekip
    ve o akademiyenin verdiği dersleri kıyaslayıp list menüye verdiği yazdırıyorum  */
    akademisyen_ad=ad;
    for(int i=0;i<40;++i)
    {
        if(akademisyen_ad==akademisyen_ad2[i])
        {
            ui->ders_adi->addItem(akademisyen_ders2[i]);
        }
    }
}
void akademisyen_islem::on_ders_adi_activated(const QString &arg1)
{    /*Bilgileri girilen öğrencinin o dersi hangi hocadan alıyorsa o hocanın not girmesi için kontrol yaptırdım.
      Eğer öğrencinin aldığı ders ile hocanın verdiği ders eşleşmiyorsa "Seçili olan ders için not girişi yapamazsınız
      diye uyarı vermektedir */
     b=0;
     ders_adi_not=ui->ders_adi->currentText();
     ogrenci_numara=ui->ogrenci_numara->text().toInt();
     while(b<100)
     {
     if(ogrenci_numaralar[b]==ogrenci_numara)
     {
     for(int i=0;i<2;i++){

              if(ders_adi_not==ogrenci_ders[b][i])
              {
                  ui->label_9->setText(" ");
                  break;
              }
            else{
             ui->label_9->setText("Seçili olan ders için not girişi yapamazsınız çünkü \n bu öğrenci seçmiş olduğunuz dersi almıyor!!");
               }
           }
     }
         b++;
     }
}
//Öğrencinin not bilgileri girilirken ortalamasını otomatik hesaplamak için
void akademisyen_islem::ortalama_hesapla(){
    vize_not=ui->vize_not->text().toInt();
    final_not=ui->final_not->text().toInt();
    ortalama=(vize_not*40)/100+(final_not*60)/100;
    ui->not_ortalamasi->setText(QLocale().toString(ortalama));

}
void akademisyen_islem::on_vize_not_textEdited(const QString &arg1)
{
    ortalama_hesapla();
}

void akademisyen_islem::on_final_not_textEdited(const QString &arg1)
{
    ortalama_hesapla();
}
//Öğrencinin vize ve final notlarını not defterine yazdırıyorum.
void akademisyen_islem::on_not_kaydet_clicked()
{
    ogrenci_adi=ui->ogrenci_ad->text();
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile ogrenci_not_kayit("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/ogrenci_not_kayit.txt");
    if(!ogrenci_not_kayit.open(QFile::WriteOnly|QFile::Text|QFile::Append)){}
    QTextStream not_kayit(&ogrenci_not_kayit);
    not_kayit<<ogrenci_adi<<" "<<ogrenci_numara<<" "<<ders_adi_not<<" "<<vize_not<<" "<<final_not<<" "<<ogrenci_donem[b-1]<<'\n';
}
//Yeni öğrenciye bilgi girmek için bir önceki öğrencinin bilgilerini text kutularından silmek için
void akademisyen_islem::on_temizle_clicked()
{
    ui->ogrenci_ad->setText("");ui->ogrenci_numara->setText("");ui->vize_not->setText("");ui->final_not->setText("");ui->not_ortalamasi->setText("");ui->label_9->setText("");
}
