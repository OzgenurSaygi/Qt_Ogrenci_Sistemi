#ifndef MEMUR_ISLEM_H
#define MEMUR_ISLEM_H

#include <QWidget>

namespace Ui {
class memur_islem;
}

class memur_islem : public QWidget
{
    Q_OBJECT

public:
    explicit memur_islem(QWidget *parent = 0);
    ~memur_islem();

private slots:
    void on_ogr_bolum_activated(const QString &arg1);

    void on_ders_acma_bolum_activated(const QString &arg1);

    void on_ders_kaydet_clicked();

    void on_comboBox_activated(const QString &arg2);

    void on_ogr__kayit_clicked();
    void on_akademisyen_ders_activated(const QString &arg1);

    void on_ogr_ad_textEdited(const QString &arg1);

private:
    Ui::memur_islem *ui;
public:
    QString biyomedikal_dersler[8]{"Matematik","Fizik","İngilizce","Kimyaya_Giriş","Programlama","Biyomedikal_Giriş","Genel_Biyoloji","İnkilap"};
    QString bilisim_dersler[8]{"Matematik","Fizik","Lineer_Cebir","Programlama","Türk_Dili","İstatistik_ve_Olasılık","İnkilap","Robotik"};
    QString otomativ_dersler[8]{"Matematik","Fizik","İngilizce","Teknik_Resim","Otomotive_Giriş","Termodinamik","Türk_Dili","İnkilap"};
};

#endif // MEMUR_ISLEM_H
