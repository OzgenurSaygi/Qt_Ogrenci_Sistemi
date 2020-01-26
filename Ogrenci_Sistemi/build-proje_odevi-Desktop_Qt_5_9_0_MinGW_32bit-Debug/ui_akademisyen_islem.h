/********************************************************************************
** Form generated from reading UI file 'akademisyen_islem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AKADEMISYEN_ISLEM_H
#define UI_AKADEMISYEN_ISLEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_akademisyen_islem
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ogrenci_numara;
    QLineEdit *ogrenci_ad;
    QLineEdit *vize_not;
    QLineEdit *final_not;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *not_ortalamasi;
    QLabel *label_7;
    QPushButton *not_kaydet;
    QLabel *label_8;
    QComboBox *ders_adi;
    QLabel *label_9;
    QPushButton *temizle;
    QLabel *arka_plan;

    void setupUi(QWidget *akademisyen_islem)
    {
        if (akademisyen_islem->objectName().isEmpty())
            akademisyen_islem->setObjectName(QStringLiteral("akademisyen_islem"));
        akademisyen_islem->resize(354, 483);
        label = new QLabel(akademisyen_islem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(akademisyen_islem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 101, 16));
        label_2->setFont(font);
        label_3 = new QLabel(akademisyen_islem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 270, 61, 16));
        label_3->setFont(font);
        label_4 = new QLabel(akademisyen_islem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 61, 21));
        label_4->setFont(font);
        ogrenci_numara = new QLineEdit(akademisyen_islem);
        ogrenci_numara->setObjectName(QStringLiteral("ogrenci_numara"));
        ogrenci_numara->setGeometry(QRect(130, 110, 141, 20));
        ogrenci_numara->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogrenci_ad = new QLineEdit(akademisyen_islem);
        ogrenci_ad->setObjectName(QStringLiteral("ogrenci_ad"));
        ogrenci_ad->setGeometry(QRect(130, 60, 141, 20));
        ogrenci_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        vize_not = new QLineEdit(akademisyen_islem);
        vize_not->setObjectName(QStringLiteral("vize_not"));
        vize_not->setGeometry(QRect(130, 220, 141, 20));
        vize_not->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        final_not = new QLineEdit(akademisyen_islem);
        final_not->setObjectName(QStringLiteral("final_not"));
        final_not->setGeometry(QRect(130, 270, 141, 20));
        final_not->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        label_5 = new QLabel(akademisyen_islem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 150, 161, 16));
        label_5->setFont(font);
        label_6 = new QLabel(akademisyen_islem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 310, 161, 21));
        label_6->setFont(font);
        not_ortalamasi = new QLineEdit(akademisyen_islem);
        not_ortalamasi->setObjectName(QStringLiteral("not_ortalamasi"));
        not_ortalamasi->setGeometry(QRect(130, 350, 141, 20));
        not_ortalamasi->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        label_7 = new QLabel(akademisyen_islem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 350, 61, 21));
        label_7->setFont(font);
        not_kaydet = new QPushButton(akademisyen_islem);
        not_kaydet->setObjectName(QStringLiteral("not_kaydet"));
        not_kaydet->setGeometry(QRect(60, 390, 91, 31));
        not_kaydet->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_8 = new QLabel(akademisyen_islem);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 10, 181, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color:#E67300;"));
        ders_adi = new QComboBox(akademisyen_islem);
        ders_adi->setObjectName(QStringLiteral("ders_adi"));
        ders_adi->setGeometry(QRect(20, 180, 131, 22));
        ders_adi->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(akademisyen_islem);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 440, 331, 31));
        temizle = new QPushButton(akademisyen_islem);
        temizle->setObjectName(QStringLiteral("temizle"));
        temizle->setGeometry(QRect(180, 390, 91, 31));
        temizle->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        arka_plan = new QLabel(akademisyen_islem);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 361, 481));
        arka_plan->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        ogrenci_numara->raise();
        ogrenci_ad->raise();
        vize_not->raise();
        final_not->raise();
        label_5->raise();
        label_6->raise();
        not_ortalamasi->raise();
        label_7->raise();
        not_kaydet->raise();
        label_8->raise();
        ders_adi->raise();
        label_9->raise();
        temizle->raise();

        retranslateUi(akademisyen_islem);

        QMetaObject::connectSlotsByName(akademisyen_islem);
    } // setupUi

    void retranslateUi(QWidget *akademisyen_islem)
    {
        akademisyen_islem->setWindowTitle(QApplication::translate("akademisyen_islem", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("akademisyen_islem", "\303\226\304\237rencinin Ad\304\261:", Q_NULLPTR));
        label_2->setText(QApplication::translate("akademisyen_islem", "Okul  Numaras\304\261 :", Q_NULLPTR));
        label_3->setText(QApplication::translate("akademisyen_islem", "Final Notu:", Q_NULLPTR));
        label_4->setText(QApplication::translate("akademisyen_islem", "Vize Notu:", Q_NULLPTR));
        label_5->setText(QApplication::translate("akademisyen_islem", "Notu Girilecek Dersi Se\303\247iniz.", Q_NULLPTR));
        label_6->setText(QApplication::translate("akademisyen_islem", "\303\226\304\237rencinin Ba\305\237ar\304\261 Durumu:", Q_NULLPTR));
        label_7->setText(QApplication::translate("akademisyen_islem", "Ortalama:", Q_NULLPTR));
        not_kaydet->setText(QApplication::translate("akademisyen_islem", "Kaydet", Q_NULLPTR));
        label_8->setText(QApplication::translate("akademisyen_islem", "\303\226\304\237renci Not Giri\305\237i", Q_NULLPTR));
        label_9->setText(QString());
        temizle->setText(QApplication::translate("akademisyen_islem", "Temizle", Q_NULLPTR));
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class akademisyen_islem: public Ui_akademisyen_islem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AKADEMISYEN_ISLEM_H
