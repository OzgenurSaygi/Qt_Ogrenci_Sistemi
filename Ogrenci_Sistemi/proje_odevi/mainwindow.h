#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "yonetici.h"
#include"memur_giris.h"
#include"akademisyen.h"
#include"ogrenci.h"
#include"qpixmap.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_yonetici_clicked();

    void on_pushButton_clicked();

    void on_akademi_giris_clicked();

    void on_ogrenci_giris_clicked();

private:
    Ui::MainWindow *ui;
    yonetici git;
    memur_giris git_memur;
    akademisyen git_akademisyen;
    ogrenci git_ogrenci;
public:
    void arkaplan();
};

#endif // MAINWINDOW_H
