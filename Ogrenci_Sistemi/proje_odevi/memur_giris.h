#ifndef MEMUR_GIRIS_H
#define MEMUR_GIRIS_H
#include<qstring.h>
#include<memur_islem.h>
#include <QWidget>

namespace Ui {
class memur_giris;
}

class memur_giris : public QWidget
{
    Q_OBJECT

public:
    explicit memur_giris(QWidget *parent = 0);
    ~memur_giris();
private slots:
    void on_meur_giris_clicked();
/*public slots:
    void alindi_memur(int sifre_memur,QString ad_memur);*/
private:
    Ui::memur_giris *ui;
    memur_islem*girisi;

};

#endif // MEMUR_GIRIS_H
