#ifndef MEMUR_H
#define MEMUR_H
#include"memur_islem.h"
#include<yonetici_islem.h>
#include <QWidget>

namespace Ui {
class memur;
}

class memur : public QWidget
{
    Q_OBJECT

public:
    explicit memur(QWidget *parent = 0);
    ~memur();

private slots:
    void on_memur_giris_clicked();

private:
    Ui::memur *ui;

public slots:
};

#endif // MEMUR_H
