/********************************************************************************
** Form generated from reading UI file 'ogrenci_islem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OGRENCI_ISLEM_H
#define UI_OGRENCI_ISLEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ogrenci_islem
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *ogrenci_belgesi;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextBrowser *yaz;
    QPushButton *mezun;
    QLabel *label_9;
    QTextBrowser *kalinan_ders_yaz;
    QLabel *arka_plan;

    void setupUi(QWidget *ogrenci_islem)
    {
        if (ogrenci_islem->objectName().isEmpty())
            ogrenci_islem->setObjectName(QStringLiteral("ogrenci_islem"));
        ogrenci_islem->resize(364, 559);
        label = new QLabel(ogrenci_islem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 41, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(ogrenci_islem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 20, 101, 31));
        label_3 = new QLabel(ogrenci_islem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 81, 21));
        label_3->setFont(font);
        label_4 = new QLabel(ogrenci_islem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 60, 101, 21));
        label_5 = new QLabel(ogrenci_islem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 331, 16));
        label_5->setFont(font);
        ogrenci_belgesi = new QPushButton(ogrenci_islem);
        ogrenci_belgesi->setObjectName(QStringLiteral("ogrenci_belgesi"));
        ogrenci_belgesi->setGeometry(QRect(20, 130, 321, 31));
        ogrenci_belgesi->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_6 = new QLabel(ogrenci_islem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 200, 61, 31));
        label_6->setFont(font);
        label_7 = new QLabel(ogrenci_islem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 200, 47, 31));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_8 = new QLabel(ogrenci_islem);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 200, 47, 31));
        label_8->setFont(font);
        yaz = new QTextBrowser(ogrenci_islem);
        yaz->setObjectName(QStringLiteral("yaz"));
        yaz->setGeometry(QRect(20, 230, 321, 241));
        yaz->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        mezun = new QPushButton(ogrenci_islem);
        mezun->setObjectName(QStringLiteral("mezun"));
        mezun->setGeometry(QRect(20, 170, 321, 31));
        mezun->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_9 = new QLabel(ogrenci_islem);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 480, 321, 16));
        kalinan_ders_yaz = new QTextBrowser(ogrenci_islem);
        kalinan_ders_yaz->setObjectName(QStringLiteral("kalinan_ders_yaz"));
        kalinan_ders_yaz->setGeometry(QRect(20, 500, 321, 51));
        kalinan_ders_yaz->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        arka_plan = new QLabel(ogrenci_islem);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 371, 561));
        arka_plan->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        ogrenci_belgesi->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        yaz->raise();
        mezun->raise();
        label_9->raise();
        kalinan_ders_yaz->raise();

        retranslateUi(ogrenci_islem);

        QMetaObject::connectSlotsByName(ogrenci_islem);
    } // setupUi

    void retranslateUi(QWidget *ogrenci_islem)
    {
        ogrenci_islem->setWindowTitle(QApplication::translate("ogrenci_islem", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ogrenci_islem", "Ad\304\261:", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("ogrenci_islem", "Okul Numaras\304\261:", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("ogrenci_islem", "\303\226\304\237renci belgesi \303\247\304\261karmak i\303\247in asa\304\237\304\261daki butona t\304\261klay\304\261n\304\261z.", Q_NULLPTR));
        ogrenci_belgesi->setText(QApplication::translate("ogrenci_islem", "\303\226\304\237renci Belgesi", Q_NULLPTR));
        label_6->setText(QApplication::translate("ogrenci_islem", "DERS ADI:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ogrenci_islem", "V\304\260ZE:", Q_NULLPTR));
        label_8->setText(QApplication::translate("ogrenci_islem", "F\304\260NAL:", Q_NULLPTR));
        mezun->setText(QApplication::translate("ogrenci_islem", "Mezuniyet Durumu", Q_NULLPTR));
        label_9->setText(QString());
        arka_plan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ogrenci_islem: public Ui_ogrenci_islem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OGRENCI_ISLEM_H
