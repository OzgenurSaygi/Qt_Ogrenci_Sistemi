#ifndef OGRENCI_ISLEM_H
#define OGRENCI_ISLEM_H
#include<ogrenci_belgesi.h>
#include <QWidget>

namespace Ui {
class ogrenci_islem;
}

class ogrenci_islem : public QWidget
{
    Q_OBJECT

public:
    explicit ogrenci_islem(QWidget *parent = 0);
    ~ogrenci_islem();

private:
    Ui::ogrenci_islem *ui;
    ogrenci_belgesi*ogr_belge;
    int numara_gonder2;
public slots:
    void ogrenci_bilgi_alindi(QString ogrenci_adi,int ogrenci_numarasi);

private slots:
    void on_ogrenci_belgesi_clicked();

    void on_mezun_clicked();

signals:
    void ogrenci_numara_gonder(int numara_ogr);
};

#endif // OGRENCI_ISLEM_H
