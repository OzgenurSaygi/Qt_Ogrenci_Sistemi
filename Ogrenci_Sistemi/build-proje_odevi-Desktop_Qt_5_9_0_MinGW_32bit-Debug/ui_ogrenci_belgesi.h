/********************************************************************************
** Form generated from reading UI file 'ogrenci_belgesi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OGRENCI_BELGESI_H
#define UI_OGRENCI_BELGESI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ogrenci_belgesi
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *numara;
    QLabel *ad;
    QLabel *soyad;
    QLabel *sinif;
    QLabel *tarih;
    QLabel *bolum;
    QLabel *label_12;

    void setupUi(QWidget *ogrenci_belgesi)
    {
        if (ogrenci_belgesi->objectName().isEmpty())
            ogrenci_belgesi->setObjectName(QStringLiteral("ogrenci_belgesi"));
        ogrenci_belgesi->resize(655, 538);
        ogrenci_belgesi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(ogrenci_belgesi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 20, 61, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(ogrenci_belgesi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 40, 391, 41));
        label_2->setFont(font);
        label_3 = new QLabel(ogrenci_belgesi);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 98, 98));
        label_4 = new QLabel(ogrenci_belgesi);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 41, 21));
        label_5 = new QLabel(ogrenci_belgesi);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 220, 41, 21));
        label_6 = new QLabel(ogrenci_belgesi);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 120, 51, 21));
        label_7 = new QLabel(ogrenci_belgesi);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 330, 81, 21));
        label_8 = new QLabel(ogrenci_belgesi);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 280, 47, 13));
        label_9 = new QLabel(ogrenci_belgesi);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 380, 51, 21));
        label_10 = new QLabel(ogrenci_belgesi);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 420, 101, 16));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        label_11 = new QLabel(ogrenci_belgesi);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 460, 461, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        label_11->setFont(font2);
        numara = new QLabel(ogrenci_belgesi);
        numara->setObjectName(QStringLiteral("numara"));
        numara->setGeometry(QRect(80, 120, 141, 21));
        ad = new QLabel(ogrenci_belgesi);
        ad->setObjectName(QStringLiteral("ad"));
        ad->setGeometry(QRect(50, 170, 151, 21));
        soyad = new QLabel(ogrenci_belgesi);
        soyad->setObjectName(QStringLiteral("soyad"));
        soyad->setGeometry(QRect(70, 220, 141, 21));
        sinif = new QLabel(ogrenci_belgesi);
        sinif->setObjectName(QStringLiteral("sinif"));
        sinif->setGeometry(QRect(60, 270, 131, 31));
        tarih = new QLabel(ogrenci_belgesi);
        tarih->setObjectName(QStringLiteral("tarih"));
        tarih->setGeometry(QRect(100, 330, 141, 21));
        bolum = new QLabel(ogrenci_belgesi);
        bolum->setObjectName(QStringLiteral("bolum"));
        bolum->setGeometry(QRect(70, 380, 141, 21));
        label_12 = new QLabel(ogrenci_belgesi);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, 80, 111, 16));
        label_12->setFont(font1);

        retranslateUi(ogrenci_belgesi);

        QMetaObject::connectSlotsByName(ogrenci_belgesi);
    } // setupUi

    void retranslateUi(QWidget *ogrenci_belgesi)
    {
        ogrenci_belgesi->setWindowTitle(QApplication::translate("ogrenci_belgesi", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ogrenci_belgesi", "T.C", Q_NULLPTR));
        label_2->setText(QApplication::translate("ogrenci_belgesi", "Y\303\234KSEK\303\226\304\236RET\304\260M KURULU BA\305\236KANLI\304\236I", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("ogrenci_belgesi", "AD:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ogrenci_belgesi", "SOYAD:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ogrenci_belgesi", "NUMARA:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ogrenci_belgesi", "KAYIT TAR\304\260H\304\260:", Q_NULLPTR));
        label_8->setText(QApplication::translate("ogrenci_belgesi", "SINIF:", Q_NULLPTR));
        label_9->setText(QApplication::translate("ogrenci_belgesi", "B\303\226L\303\234M\303\234:", Q_NULLPTR));
        label_10->setText(QApplication::translate("ogrenci_belgesi", "\304\260LG\304\260L\304\260 MAKAMA", Q_NULLPTR));
        label_11->setText(QApplication::translate("ogrenci_belgesi", "Yukar\304\261daki kimlik bilgileri verilen \303\266\304\237renci KOCAEL\304\260 \303\234N\304\260VERS\304\260TES\304\260 \303\266\304\237rencisidir.", Q_NULLPTR));
        numara->setText(QString());
        ad->setText(QString());
        soyad->setText(QString());
        sinif->setText(QString());
        tarih->setText(QString());
        bolum->setText(QString());
        label_12->setText(QApplication::translate("ogrenci_belgesi", "\303\226\304\236RENC\304\260 BELGES\304\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ogrenci_belgesi: public Ui_ogrenci_belgesi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OGRENCI_BELGESI_H
