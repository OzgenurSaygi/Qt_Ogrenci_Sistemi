#ifndef YONETICI_ISLEM_H
#define YONETICI_ISLEM_H
#include"qstring.h"
#include<string>
#include"memur_giris.h"
#include"akademisyen.h"
#include <QWidget>

namespace Ui {
class yonetici_islem;
}

class yonetici_islem : public QWidget
{
    Q_OBJECT


public:


public:
    explicit yonetici_islem(QWidget *parent = 0);
    ~yonetici_islem();

private slots:
    void on_egitim_gorev_btn_clicked();
    void on_memur_btn_clicked();
private:
    Ui::yonetici_islem *ui;

};



#endif // YONETICI_ISLEM_H
