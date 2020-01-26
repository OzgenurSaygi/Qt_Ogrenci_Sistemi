/********************************************************************************
** Form generated from reading UI file 'yonetici.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YONETICI_H
#define UI_YONETICI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yonetici
{
public:
    QPushButton *giris;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *yon_ad;
    QLineEdit *yon_sifre;
    QLabel *label;
    QLabel *yanlis;
    QLabel *giris_2;
    QLabel *arka_plan;

    void setupUi(QWidget *yonetici)
    {
        if (yonetici->objectName().isEmpty())
            yonetici->setObjectName(QStringLiteral("yonetici"));
        yonetici->resize(354, 483);
        yonetici->setStyleSheet(QStringLiteral(""));
        giris = new QPushButton(yonetici);
        giris->setObjectName(QStringLiteral("giris"));
        giris->setGeometry(QRect(130, 330, 101, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        giris->setFont(font);
        giris->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_2 = new QLabel(yonetici);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 210, 111, 42));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(yonetici);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 260, 61, 41));
        label_3->setFont(font1);
        yon_ad = new QLineEdit(yonetici);
        yon_ad->setObjectName(QStringLiteral("yon_ad"));
        yon_ad->setGeometry(QRect(130, 220, 179, 21));
        yon_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        yon_sifre = new QLineEdit(yonetici);
        yon_sifre->setObjectName(QStringLiteral("yon_sifre"));
        yon_sifre->setGeometry(QRect(130, 270, 179, 21));
        yon_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        yon_sifre->setEchoMode(QLineEdit::Password);
        label = new QLabel(yonetici);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 189, 71));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:#E67300;"));
        yanlis = new QLabel(yonetici);
        yanlis->setObjectName(QStringLiteral("yanlis"));
        yanlis->setGeometry(QRect(140, 300, 181, 21));
        giris_2 = new QLabel(yonetici);
        giris_2->setObjectName(QStringLiteral("giris_2"));
        giris_2->setGeometry(QRect(110, 70, 133, 111));
        arka_plan = new QLabel(yonetici);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 361, 481));
        arka_plan->raise();
        giris->raise();
        label_2->raise();
        label_3->raise();
        yon_ad->raise();
        yon_sifre->raise();
        label->raise();
        yanlis->raise();
        giris_2->raise();

        retranslateUi(yonetici);

        QMetaObject::connectSlotsByName(yonetici);
    } // setupUi

    void retranslateUi(QWidget *yonetici)
    {
        yonetici->setWindowTitle(QApplication::translate("yonetici", "Form", Q_NULLPTR));
        giris->setText(QApplication::translate("yonetici", "Giri\305\237 Yap", Q_NULLPTR));
        label_2->setText(QApplication::translate("yonetici", "Kullan\304\261c\304\261 Ad\304\261:", Q_NULLPTR));
        label_3->setText(QApplication::translate("yonetici", "\305\236ifre:", Q_NULLPTR));
        label->setText(QApplication::translate("yonetici", "Y\303\226NET\304\260C\304\260 G\304\260R\304\260\305\236\304\260", Q_NULLPTR));
        yanlis->setText(QString());
        giris_2->setText(QString());
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class yonetici: public Ui_yonetici {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YONETICI_H
