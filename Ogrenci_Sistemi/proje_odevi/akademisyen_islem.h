#ifndef AKADEMISYEN_ISLEM_H
#define AKADEMISYEN_ISLEM_H
#include<qstring.h>
#include <QWidget>

namespace Ui {
class akademisyen_islem;
}

class akademisyen_islem : public QWidget
{
    Q_OBJECT

public:
    explicit akademisyen_islem(QWidget *parent = 0);
    ~akademisyen_islem();

private:
    Ui::akademisyen_islem *ui;
public slots:
    void alindi(QString ad);
private slots:
    void on_not_kaydet_clicked();
    void on_ders_adi_activated(const QString &arg1);

    void on_vize_not_textEdited(const QString &arg1);
    void on_final_not_textEdited(const QString &arg1);
    void on_temizle_clicked();

public:
    void ortalama_hesapla();
};

#endif // AKADEMISYEN_ISLEM_H
