/********************************************************************************
** Form generated from reading UI file 'akademisyen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AKADEMISYEN_H
#define UI_AKADEMISYEN_H

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

class Ui_akademisyen
{
public:
    QLineEdit *akademisyen_sifre;
    QPushButton *akademisyen_giris;
    QLabel *label_2;
    QLineEdit *akademisyen_adi;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *arka_plan;
    QLabel *giris;

    void setupUi(QWidget *akademisyen)
    {
        if (akademisyen->objectName().isEmpty())
            akademisyen->setObjectName(QStringLiteral("akademisyen"));
        akademisyen->resize(354, 483);
        akademisyen_sifre = new QLineEdit(akademisyen);
        akademisyen_sifre->setObjectName(QStringLiteral("akademisyen_sifre"));
        akademisyen_sifre->setGeometry(QRect(140, 270, 179, 21));
        akademisyen_sifre->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        akademisyen_sifre->setEchoMode(QLineEdit::Password);
        akademisyen_giris = new QPushButton(akademisyen);
        akademisyen_giris->setObjectName(QStringLiteral("akademisyen_giris"));
        akademisyen_giris->setGeometry(QRect(140, 320, 101, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        akademisyen_giris->setFont(font);
        akademisyen_giris->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(230, 115, 0);"));
        label_2 = new QLabel(akademisyen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 270, 61, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        akademisyen_adi = new QLineEdit(akademisyen);
        akademisyen_adi->setObjectName(QStringLiteral("akademisyen_adi"));
        akademisyen_adi->setGeometry(QRect(140, 220, 179, 21));
        akademisyen_adi->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color: rgb(230, 115, 0);"));
        label = new QLabel(akademisyen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 220, 101, 21));
        label->setFont(font1);
        label_3 = new QLabel(akademisyen);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, -10, 201, 89));
        QFont font2;
        font2.setPointSize(15);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color:#E67300;"));
        label_4 = new QLabel(akademisyen);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 390, 221, 21));
        arka_plan = new QLabel(akademisyen);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 0, 361, 481));
        giris = new QLabel(akademisyen);
        giris->setObjectName(QStringLiteral("giris"));
        giris->setGeometry(QRect(110, 80, 133, 111));
        arka_plan->raise();
        akademisyen_sifre->raise();
        akademisyen_giris->raise();
        label_2->raise();
        akademisyen_adi->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        giris->raise();

        retranslateUi(akademisyen);

        QMetaObject::connectSlotsByName(akademisyen);
    } // setupUi

    void retranslateUi(QWidget *akademisyen)
    {
        akademisyen->setWindowTitle(QApplication::translate("akademisyen", "Form", Q_NULLPTR));
        akademisyen_giris->setText(QApplication::translate("akademisyen", "Giri\305\237 Yap", Q_NULLPTR));
        label_2->setText(QApplication::translate("akademisyen", "\305\236\304\260FRE:", Q_NULLPTR));
        label->setText(QApplication::translate("akademisyen", "Kullan\304\261c\304\261 Ad\304\261:", Q_NULLPTR));
        label_3->setText(QApplication::translate("akademisyen", "AKADEM\304\260SYEN G\304\260R\304\260\305\236\304\260", Q_NULLPTR));
        label_4->setText(QString());
        arka_plan->setText(QString());
        giris->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class akademisyen: public Ui_akademisyen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AKADEMISYEN_H
