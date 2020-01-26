/********************************************************************************
** Form generated from reading UI file 'memur_islem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMUR_ISLEM_H
#define UI_MEMUR_ISLEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memur_islem
{
public:
    QGroupBox *groupBox;
    QLineEdit *ogr_ad;
    QLineEdit *ogr_soyad;
    QLineEdit *ogr_numara;
    QLineEdit *ogr_e_posta;
    QLineEdit *ogr_sifre;
    QComboBox *ogr_bolum;
    QPushButton *ogr__kayit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_12;
    QDateEdit *dateEdit;
    QLabel *label_14;
    QGroupBox *groupBox_2;
    QLineEdit *egitim_gor_ad;
    QLineEdit *egitim_gor_soyad;
    QComboBox *ders_acma_bolum;
    QPushButton *ders_kaydet;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_8;
    QComboBox *akademisyen_ders;
    QLabel *label_6;
    QLabel *arka_plan;

    void setupUi(QWidget *memur_islem)
    {
        if (memur_islem->objectName().isEmpty())
            memur_islem->setObjectName(QStringLiteral("memur_islem"));
        memur_islem->resize(823, 483);
        groupBox = new QGroupBox(memur_islem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 401, 411));
        ogr_ad = new QLineEdit(groupBox);
        ogr_ad->setObjectName(QStringLiteral("ogr_ad"));
        ogr_ad->setGeometry(QRect(80, 30, 113, 20));
        ogr_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogr_soyad = new QLineEdit(groupBox);
        ogr_soyad->setObjectName(QStringLiteral("ogr_soyad"));
        ogr_soyad->setGeometry(QRect(80, 80, 113, 20));
        ogr_soyad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogr_numara = new QLineEdit(groupBox);
        ogr_numara->setObjectName(QStringLiteral("ogr_numara"));
        ogr_numara->setGeometry(QRect(80, 130, 113, 20));
        ogr_numara->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogr_e_posta = new QLineEdit(groupBox);
        ogr_e_posta->setObjectName(QStringLiteral("ogr_e_posta"));
        ogr_e_posta->setGeometry(QRect(80, 180, 113, 20));
        ogr_e_posta->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogr_e_posta->setEchoMode(QLineEdit::Normal);
        ogr_sifre = new QLineEdit(groupBox);
        ogr_sifre->setObjectName(QStringLiteral("ogr_sifre"));
        ogr_sifre->setGeometry(QRect(280, 30, 113, 20));
        ogr_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogr_bolum = new QComboBox(groupBox);
        ogr_bolum->setObjectName(QStringLiteral("ogr_bolum"));
        ogr_bolum->setGeometry(QRect(280, 80, 111, 22));
        ogr__kayit = new QPushButton(groupBox);
        ogr__kayit->setObjectName(QStringLiteral("ogr__kayit"));
        ogr__kayit->setGeometry(QRect(150, 230, 91, 31));
        ogr__kayit->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 41, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 47, 21));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 61, 21));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 180, 51, 21));
        label_4->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 80, 47, 21));
        label_5->setFont(font);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 30, 41, 21));
        label_7->setFont(font);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 130, 111, 22));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 130, 47, 21));
        label_12->setFont(font);
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(280, 180, 111, 22));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(210, 180, 71, 21));
        label_14->setFont(font);
        groupBox_2 = new QGroupBox(memur_islem);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(420, 50, 391, 411));
        egitim_gor_ad = new QLineEdit(groupBox_2);
        egitim_gor_ad->setObjectName(QStringLiteral("egitim_gor_ad"));
        egitim_gor_ad->setGeometry(QRect(60, 40, 113, 20));
        egitim_gor_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        egitim_gor_soyad = new QLineEdit(groupBox_2);
        egitim_gor_soyad->setObjectName(QStringLiteral("egitim_gor_soyad"));
        egitim_gor_soyad->setGeometry(QRect(60, 100, 113, 20));
        egitim_gor_soyad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ders_acma_bolum = new QComboBox(groupBox_2);
        ders_acma_bolum->setObjectName(QStringLiteral("ders_acma_bolum"));
        ders_acma_bolum->setGeometry(QRect(250, 40, 101, 22));
        ders_kaydet = new QPushButton(groupBox_2);
        ders_kaydet->setObjectName(QStringLiteral("ders_kaydet"));
        ders_kaydet->setGeometry(QRect(160, 170, 91, 31));
        ders_kaydet->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 40, 47, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 100, 47, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 40, 47, 21));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 300, 111, 21));
        akademisyen_ders = new QComboBox(groupBox_2);
        akademisyen_ders->setObjectName(QStringLiteral("akademisyen_ders"));
        akademisyen_ders->setGeometry(QRect(250, 100, 101, 22));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 100, 47, 21));
        arka_plan = new QLabel(memur_islem);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 831, 481));
        arka_plan->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(memur_islem);

        QMetaObject::connectSlotsByName(memur_islem);
    } // setupUi

    void retranslateUi(QWidget *memur_islem)
    {
        memur_islem->setWindowTitle(QApplication::translate("memur_islem", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("memur_islem", "\303\226\304\236RENC\304\260 KAYIT", Q_NULLPTR));
        ogr_bolum->clear();
        ogr_bolum->insertItems(0, QStringList()
         << QApplication::translate("memur_islem", "Bili\305\237im_Sis_M\303\274h", Q_NULLPTR)
         << QApplication::translate("memur_islem", "Biyomedikal_M\303\274h", Q_NULLPTR)
         << QApplication::translate("memur_islem", "Otomotiv_M\303\274h", Q_NULLPTR)
        );
        ogr__kayit->setText(QApplication::translate("memur_islem", "KAYDET", Q_NULLPTR));
        label->setText(QApplication::translate("memur_islem", "AD:", Q_NULLPTR));
        label_2->setText(QApplication::translate("memur_islem", "SOYAD:", Q_NULLPTR));
        label_3->setText(QApplication::translate("memur_islem", "NUMRARA:", Q_NULLPTR));
        label_4->setText(QApplication::translate("memur_islem", "E-POSTA:", Q_NULLPTR));
        label_5->setText(QApplication::translate("memur_islem", "B\303\226L\303\234M:", Q_NULLPTR));
        label_7->setText(QApplication::translate("memur_islem", "\305\236\304\260FRE:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("memur_islem", "1", Q_NULLPTR)
         << QApplication::translate("memur_islem", "2", Q_NULLPTR)
         << QApplication::translate("memur_islem", "3", Q_NULLPTR)
         << QApplication::translate("memur_islem", "4", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("memur_islem", "D\303\266nem:", Q_NULLPTR));
        label_14->setText(QApplication::translate("memur_islem", "Kay\304\261t Tarihi:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("memur_islem", "E\304\236\304\260T\304\260M G\303\226REVL\304\260S\304\260  DERS A\303\207MA", Q_NULLPTR));
        egitim_gor_ad->setText(QString());
        ders_acma_bolum->clear();
        ders_acma_bolum->insertItems(0, QStringList()
         << QApplication::translate("memur_islem", "Bili\305\237im_Sis_M\303\274h", Q_NULLPTR)
         << QApplication::translate("memur_islem", "Biyomedikal_M\303\274h", Q_NULLPTR)
         << QApplication::translate("memur_islem", "Otomotiv_M\303\274h", Q_NULLPTR)
        );
        ders_kaydet->setText(QApplication::translate("memur_islem", "KAYDET", Q_NULLPTR));
        label_9->setText(QApplication::translate("memur_islem", "AD:", Q_NULLPTR));
        label_10->setText(QApplication::translate("memur_islem", "SOYAD:", Q_NULLPTR));
        label_11->setText(QApplication::translate("memur_islem", "B\303\266l\303\274m:", Q_NULLPTR));
        label_8->setText(QString());
        label_6->setText(QApplication::translate("memur_islem", "Ders:", Q_NULLPTR));
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memur_islem: public Ui_memur_islem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMUR_ISLEM_H
