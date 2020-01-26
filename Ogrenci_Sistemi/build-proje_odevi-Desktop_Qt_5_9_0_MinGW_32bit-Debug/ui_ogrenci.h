/********************************************************************************
** Form generated from reading UI file 'ogrenci.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OGRENCI_H
#define UI_OGRENCI_H

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

class Ui_ogrenci
{
public:
    QLineEdit *ogrenci_ad;
    QPushButton *ogrenci_giris;
    QLineEdit *ogrenci_sifre;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *giris;
    QLabel *arka_plan;

    void setupUi(QWidget *ogrenci)
    {
        if (ogrenci->objectName().isEmpty())
            ogrenci->setObjectName(QStringLiteral("ogrenci"));
        ogrenci->resize(354, 483);
        ogrenci_ad = new QLineEdit(ogrenci);
        ogrenci_ad->setObjectName(QStringLiteral("ogrenci_ad"));
        ogrenci_ad->setGeometry(QRect(140, 210, 179, 21));
        ogrenci_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogrenci_giris = new QPushButton(ogrenci);
        ogrenci_giris->setObjectName(QStringLiteral("ogrenci_giris"));
        ogrenci_giris->setGeometry(QRect(130, 330, 101, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        ogrenci_giris->setFont(font);
        ogrenci_giris->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        ogrenci_sifre = new QLineEdit(ogrenci);
        ogrenci_sifre->setObjectName(QStringLiteral("ogrenci_sifre"));
        ogrenci_sifre->setGeometry(QRect(140, 270, 179, 21));
        ogrenci_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        ogrenci_sifre->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(ogrenci);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 200, 111, 42));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(ogrenci);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 260, 61, 41));
        label_3->setFont(font1);
        label = new QLabel(ogrenci);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 189, 61));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:#E67300;"));
        giris = new QLabel(ogrenci);
        giris->setObjectName(QStringLiteral("giris"));
        giris->setGeometry(QRect(110, 80, 133, 111));
        arka_plan = new QLabel(ogrenci);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 351, 481));
        arka_plan->raise();
        ogrenci_ad->raise();
        ogrenci_giris->raise();
        ogrenci_sifre->raise();
        label_2->raise();
        label_3->raise();
        label->raise();
        giris->raise();

        retranslateUi(ogrenci);

        QMetaObject::connectSlotsByName(ogrenci);
    } // setupUi

    void retranslateUi(QWidget *ogrenci)
    {
        ogrenci->setWindowTitle(QApplication::translate("ogrenci", "Form", Q_NULLPTR));
        ogrenci_giris->setText(QApplication::translate("ogrenci", "Giri\305\237 Yap", Q_NULLPTR));
        label_2->setText(QApplication::translate("ogrenci", "Kullan\304\261c\304\261 Ad\304\261:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ogrenci", "\305\236ifre:", Q_NULLPTR));
        label->setText(QApplication::translate("ogrenci", "\303\226\304\236RENC\304\260 G\304\260R\304\260\305\236\304\260", Q_NULLPTR));
        giris->setText(QString());
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ogrenci: public Ui_ogrenci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OGRENCI_H
