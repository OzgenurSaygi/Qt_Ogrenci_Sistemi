/********************************************************************************
** Form generated from reading UI file 'memur_giris.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMUR_GIRIS_H
#define UI_MEMUR_GIRIS_H

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

class Ui_memur_giris
{
public:
    QLineEdit *memur_ad;
    QLineEdit *memur_sifre;
    QLabel *label;
    QLabel *label_2;
    QPushButton *meur_giris;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *giris;
    QLabel *arka_plan;

    void setupUi(QWidget *memur_giris)
    {
        if (memur_giris->objectName().isEmpty())
            memur_giris->setObjectName(QStringLiteral("memur_giris"));
        memur_giris->resize(354, 483);
        QFont font;
        font.setPointSize(11);
        memur_giris->setFont(font);
        memur_ad = new QLineEdit(memur_giris);
        memur_ad->setObjectName(QStringLiteral("memur_ad"));
        memur_ad->setGeometry(QRect(140, 220, 179, 21));
        memur_ad->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        memur_sifre = new QLineEdit(memur_giris);
        memur_sifre->setObjectName(QStringLiteral("memur_sifre"));
        memur_sifre->setGeometry(QRect(140, 270, 179, 21));
        memur_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        memur_sifre->setEchoMode(QLineEdit::Password);
        label = new QLabel(memur_giris);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(26, 220, 101, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(memur_giris);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(26, 270, 71, 31));
        label_2->setFont(font1);
        meur_giris = new QPushButton(memur_giris);
        meur_giris->setObjectName(QStringLiteral("meur_giris"));
        meur_giris->setGeometry(QRect(140, 320, 91, 31));
        meur_giris->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_3 = new QLabel(memur_giris);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 0, 141, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color:#E67300;"));
        label_4 = new QLabel(memur_giris);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 370, 151, 71));
        giris = new QLabel(memur_giris);
        giris->setObjectName(QStringLiteral("giris"));
        giris->setGeometry(QRect(110, 70, 133, 111));
        arka_plan = new QLabel(memur_giris);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 361, 491));
        arka_plan->raise();
        memur_ad->raise();
        memur_sifre->raise();
        label->raise();
        label_2->raise();
        meur_giris->raise();
        label_3->raise();
        label_4->raise();
        giris->raise();

        retranslateUi(memur_giris);

        QMetaObject::connectSlotsByName(memur_giris);
    } // setupUi

    void retranslateUi(QWidget *memur_giris)
    {
        memur_giris->setWindowTitle(QApplication::translate("memur_giris", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("memur_giris", "Kullanc\304\261 Ad\304\261:", Q_NULLPTR));
        label_2->setText(QApplication::translate("memur_giris", "\305\236iFRE:", Q_NULLPTR));
        meur_giris->setText(QApplication::translate("memur_giris", "Giri\305\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("memur_giris", "MEMUR G\304\260R\304\260\305\236", Q_NULLPTR));
        label_4->setText(QString());
        giris->setText(QString());
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memur_giris: public Ui_memur_giris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMUR_GIRIS_H
