/********************************************************************************
** Form generated from reading UI file 'yonetici_islem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YONETICI_ISLEM_H
#define UI_YONETICI_ISLEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yonetici_islem
{
public:
    QLabel *baslik;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *egitim_gorev_btn;
    QLineEdit *egitim_gorev_ad;
    QLineEdit *egitim_gorev_sifre;
    QLineEdit *egitim_gorev_soyad;
    QLineEdit *egitim_gorev_unvan;
    QLabel *tamamlandi;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *memur_btn;
    QLineEdit *memur_ad;
    QLineEdit *memur_soyad;
    QLineEdit *memur_sifre;
    QLabel *label_10;
    QLabel *arka_plan;

    void setupUi(QWidget *yonetici_islem)
    {
        if (yonetici_islem->objectName().isEmpty())
            yonetici_islem->setObjectName(QStringLiteral("yonetici_islem"));
        yonetici_islem->resize(423, 483);
        baslik = new QLabel(yonetici_islem);
        baslik->setObjectName(QStringLiteral("baslik"));
        baslik->setGeometry(QRect(130, 10, 171, 31));
        QFont font;
        font.setPointSize(16);
        baslik->setFont(font);
        baslik->setStyleSheet(QStringLiteral("color:#E67300;"));
        label = new QLabel(yonetici_islem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 211, 16));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        groupBox = new QGroupBox(yonetici_islem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 401, 161));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 41, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 41, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 80, 81, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 30, 47, 16));
        egitim_gorev_btn = new QPushButton(groupBox);
        egitim_gorev_btn->setObjectName(QStringLiteral("egitim_gorev_btn"));
        egitim_gorev_btn->setGeometry(QRect(150, 120, 75, 23));
        egitim_gorev_btn->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        egitim_gorev_ad = new QLineEdit(groupBox);
        egitim_gorev_ad->setObjectName(QStringLiteral("egitim_gorev_ad"));
        egitim_gorev_ad->setGeometry(QRect(50, 30, 121, 20));
        egitim_gorev_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        egitim_gorev_sifre = new QLineEdit(groupBox);
        egitim_gorev_sifre->setObjectName(QStringLiteral("egitim_gorev_sifre"));
        egitim_gorev_sifre->setGeometry(QRect(280, 30, 113, 20));
        egitim_gorev_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        egitim_gorev_soyad = new QLineEdit(groupBox);
        egitim_gorev_soyad->setObjectName(QStringLiteral("egitim_gorev_soyad"));
        egitim_gorev_soyad->setGeometry(QRect(50, 80, 121, 20));
        egitim_gorev_soyad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        egitim_gorev_unvan = new QLineEdit(groupBox);
        egitim_gorev_unvan->setObjectName(QStringLiteral("egitim_gorev_unvan"));
        egitim_gorev_unvan->setGeometry(QRect(280, 80, 113, 20));
        egitim_gorev_unvan->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        tamamlandi = new QLabel(groupBox);
        tamamlandi->setObjectName(QStringLiteral("tamamlandi"));
        tamamlandi->setGeometry(QRect(240, 120, 151, 31));
        groupBox_2 = new QGroupBox(yonetici_islem);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 280, 401, 161));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 47, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 90, 47, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 30, 47, 16));
        memur_btn = new QPushButton(groupBox_2);
        memur_btn->setObjectName(QStringLiteral("memur_btn"));
        memur_btn->setGeometry(QRect(160, 120, 75, 23));
        memur_btn->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        memur_ad = new QLineEdit(groupBox_2);
        memur_ad->setObjectName(QStringLiteral("memur_ad"));
        memur_ad->setGeometry(QRect(70, 30, 113, 20));
        memur_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        memur_soyad = new QLineEdit(groupBox_2);
        memur_soyad->setObjectName(QStringLiteral("memur_soyad"));
        memur_soyad->setGeometry(QRect(70, 90, 113, 20));
        memur_soyad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        memur_sifre = new QLineEdit(groupBox_2);
        memur_sifre->setObjectName(QStringLiteral("memur_sifre"));
        memur_sifre->setGeometry(QRect(280, 30, 113, 20));
        memur_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 80, 121, 16));
        arka_plan = new QLabel(yonetici_islem);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 431, 481));
        arka_plan->raise();
        baslik->raise();
        label->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(yonetici_islem);

        QMetaObject::connectSlotsByName(yonetici_islem);
    } // setupUi

    void retranslateUi(QWidget *yonetici_islem)
    {
        yonetici_islem->setWindowTitle(QApplication::translate("yonetici_islem", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        baslik->setToolTip(QApplication::translate("yonetici_islem", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        baslik->setText(QApplication::translate("yonetici_islem", "Y\303\266netici \304\260\305\237lemleri", Q_NULLPTR));
        label->setText(QApplication::translate("yonetici_islem", "Yapmak istedi\304\237iniz i\305\237lemi se\303\247iniz.", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("yonetici_islem", "E\304\237itim G\303\266revlisi Kay\304\261t", Q_NULLPTR));
        label_2->setText(QApplication::translate("yonetici_islem", "Ad:", Q_NULLPTR));
        label_3->setText(QApplication::translate("yonetici_islem", "Soyad:", Q_NULLPTR));
        label_4->setText(QApplication::translate("yonetici_islem", "Meslek  \303\234nvan\304\261:", Q_NULLPTR));
        label_5->setText(QApplication::translate("yonetici_islem", "\305\236ifre:", Q_NULLPTR));
        egitim_gorev_btn->setText(QApplication::translate("yonetici_islem", "Kaydet", Q_NULLPTR));
        tamamlandi->setText(QString());
        groupBox_2->setTitle(QApplication::translate("yonetici_islem", "Memur Kay\304\261t", Q_NULLPTR));
        label_6->setText(QApplication::translate("yonetici_islem", "Ad:", Q_NULLPTR));
        label_7->setText(QApplication::translate("yonetici_islem", "Soyad:", Q_NULLPTR));
        label_8->setText(QApplication::translate("yonetici_islem", "\305\236ifre:", Q_NULLPTR));
        memur_btn->setText(QApplication::translate("yonetici_islem", "Kaydet", Q_NULLPTR));
        label_10->setText(QString());
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class yonetici_islem: public Ui_yonetici_islem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YONETICI_ISLEM_H
