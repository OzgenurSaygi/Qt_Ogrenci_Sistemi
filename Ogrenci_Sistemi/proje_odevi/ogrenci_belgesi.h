#ifndef OGRENCI_BELGESI_H
#define OGRENCI_BELGESI_H
#include"qpixmap.h"
#include <QWidget>

namespace Ui {
class ogrenci_belgesi;
}

class ogrenci_belgesi : public QWidget
{
    Q_OBJECT

public:
    explicit ogrenci_belgesi(QWidget *parent = 0);
    ~ogrenci_belgesi();

private:
    Ui::ogrenci_belgesi *ui;
public slots:
    void ogrenci_numara_alindi(int numara_ogr);
};

#endif // OGRENCI_BELGESI_H
