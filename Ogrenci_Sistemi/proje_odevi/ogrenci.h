#ifndef OGRENCI_H
#define OGRENCI_H
#include"ogrenci_islem.h"
#include"qstring.h"
#include <QWidget>

namespace Ui {
class ogrenci;
}

class ogrenci : public QWidget
{
    Q_OBJECT

public:
    explicit ogrenci(QWidget *parent = 0);
    ~ogrenci();

private slots:
    void on_ogrenci_giris_clicked();

private:
    Ui::ogrenci *ui;
    ogrenci_islem*git;
    QString ogrenci_ad;
    int numara_gonder;
signals:
    void ogrenci_bilgi_gonder(QString ogrenci_adi,int ogrenci_numarasi);
};

#endif // OGRENCI_H
