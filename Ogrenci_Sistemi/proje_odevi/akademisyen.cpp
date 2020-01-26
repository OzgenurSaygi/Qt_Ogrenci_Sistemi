#include "akademisyen.h"
#include "ui_akademisyen.h"
#include"qstring.h"
#include"QTextStream"
#include"QFile"
#include<QPixmap>
akademisyen::akademisyen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::akademisyen)
{
    ui->setupUi(this);
    QPixmap arka_plani(":/Resim/resim1.png");
    ui->arka_plan->setPixmap(arka_plani);
    QPixmap giris(":/Resim/giris.png");
    ui->giris->setPixmap(giris);
}

akademisyen::~akademisyen()
{
    delete ui;
}
int akademisyen_sifre_kayit[4],a;
QString akademisyen_ad_kayit[4],akademisyen_soyad_kayit[4],akademisyen_unvan_kayit[4];
void akademisyen::on_akademisyen_giris_clicked()
{   /*Akademisyenlerin bilgilerinin kayıtlı olduğu dosyadan bilgileri çekip akademisyen_ad_kayit vb. gibi dizilerin içine
     bilgileri sırasıyla atıyorum */
    islemgit=new akademisyen_islem();
    int akad_sifre2=ui->akademisyen_sifre->text().toInt();//Kullanıcının text kutularına girdiği bilgiyi değişkene atıyorum.
    QString akad_ad2=ui->akademisyen_adi->text();
    //Programın çalışabilmesi için dosyanın yolunu kendi bilgisayarınızda dosyanın yolunu değiştiriniz
    QFile kayit("C:/Users/Lenovo/Desktop/Ozgenur_Saygi_171307024/build-proje_odevi-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/proje_kayit/memur_akademisyen_kayit.txt");
    if(!kayit.open(QFile::ReadOnly|QFile::Text)){}
    QTextStream oku(&kayit);
    oku>>akademisyen_ad_kayit[0]>>akademisyen_soyad_kayit[0]>>akademisyen_sifre_kayit[0]>>akademisyen_unvan_kayit[0];
    oku>>akademisyen_ad_kayit[1]>>akademisyen_soyad_kayit[1]>>akademisyen_sifre_kayit[1]>>akademisyen_unvan_kayit[1];
    oku>>akademisyen_ad_kayit[2]>>akademisyen_soyad_kayit[2]>>akademisyen_sifre_kayit[2]>>akademisyen_unvan_kayit[2];
    oku>>akademisyen_ad_kayit[3]>>akademisyen_soyad_kayit[3]>>akademisyen_sifre_kayit[3]>>akademisyen_unvan_kayit[3];
    kayit.close();
    /* İlgili Dosyadan bilgileri çektikten sonra kullanıcının girdiği bilgilerle kıyaslayıp akademisyen_islem
     sayfasına gitmesini sağlıyorum*/
    for(a=0;a<4;a++)
    {
        if(akademisyen_sifre_kayit[a]==akad_sifre2&&akademisyen_ad_kayit[a]==akad_ad2)
        {
            ad_gonder=akademisyen_ad_kayit[a];
            /*Connect ile bulunduğum sayfadan diğer ilgili sayfaya sinyal gönderiyorum .Daha sonra emit fonksiyonu
            ile sinyali alacak olan sayfaya göndermek istediğim bilgileri gönderiyorum.*/
            connect(this,SIGNAL(gonder(QString)),islemgit,SLOT(alindi(QString)));
            emit gonder(this->ad_gonder);
            islemgit->show();
        }
    }



}
