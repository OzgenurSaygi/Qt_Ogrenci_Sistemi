#ifndef YONETICI_H
#define YONETICI_H
#include "yonetici_islem.h"
#include <QWidget>

namespace Ui {
class yonetici;
}

class yonetici : public QWidget
{
    Q_OBJECT

public:
    explicit yonetici(QWidget *parent = 0);
    ~yonetici();

private slots:
    void on_giris_clicked();

private:
    Ui::yonetici *ui;
    yonetici_islem yongit;
};

#endif // YONETICI_H
