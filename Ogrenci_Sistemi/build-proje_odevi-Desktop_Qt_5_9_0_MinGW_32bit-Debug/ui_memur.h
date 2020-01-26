/********************************************************************************
** Form generated from reading UI file 'memur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMUR_H
#define UI_MEMUR_H

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

class Ui_memur
{
public:
    QLineEdit *memur_adi;
    QLineEdit *memur_sifresi;
    QPushButton *memur_giris;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *memur)
    {
        if (memur->objectName().isEmpty())
            memur->setObjectName(QStringLiteral("memur"));
        memur->resize(325, 450);
        memur_adi = new QLineEdit(memur);
        memur_adi->setObjectName(QStringLiteral("memur_adi"));
        memur_adi->setGeometry(QRect(120, 130, 179, 20));
        memur_sifresi = new QLineEdit(memur);
        memur_sifresi->setObjectName(QStringLiteral("memur_sifresi"));
        memur_sifresi->setGeometry(QRect(120, 190, 179, 20));
        memur_giris = new QPushButton(memur);
        memur_giris->setObjectName(QStringLiteral("memur_giris"));
        memur_giris->setGeometry(QRect(120, 240, 81, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        memur_giris->setFont(font);
        label = new QLabel(memur);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 130, 101, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(memur);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 190, 61, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(memur);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 30, 231, 41));

        retranslateUi(memur);

        QMetaObject::connectSlotsByName(memur);
    } // setupUi

    void retranslateUi(QWidget *memur)
    {
        memur->setWindowTitle(QApplication::translate("memur", "Form", Q_NULLPTR));
        memur_giris->setText(QApplication::translate("memur", "Giri\305\237 Yap", Q_NULLPTR));
        label->setText(QApplication::translate("memur", "Kullan\304\261c\304\261 Ad\304\261:", Q_NULLPTR));
        label_2->setText(QApplication::translate("memur", "\305\236\304\260FRE:", Q_NULLPTR));
        label_3->setText(QApplication::translate("memur", "Memur Giri\305\237i", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class memur: public Ui_memur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMUR_H
