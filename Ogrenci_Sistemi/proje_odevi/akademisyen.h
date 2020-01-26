#ifndef AKADEMISYEN_H
#define AKADEMISYEN_H
#include"akademisyen_islem.h"
#include"qstring.h"
#include <QWidget>

namespace Ui {
class akademisyen;
}

class akademisyen : public QWidget
{
    Q_OBJECT
public:
    explicit akademisyen(QWidget *parent = 0);
    ~akademisyen();

private slots:
    void on_akademisyen_giris_clicked();
private:
    Ui::akademisyen *ui;
    akademisyen_islem*islemgit;
    QString ad_gonder;
signals:
    void gonder(QString ad);

};


#endif // AKADEMISYEN_H
