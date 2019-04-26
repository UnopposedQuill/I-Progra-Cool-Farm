/********************************************************************************
** Form generated from reading UI file 'interfazcolocarobjetos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZCOLOCAROBJETOS_H
#define UI_INTERFAZCOLOCAROBJETOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InterfazColocarObjetos
{
public:
    QPushButton *bColocarABB;
    QPushButton *bColocarHeap;
    QPushButton *bColocarAVL;
    QPushButton *bColocarBonus;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelCantidadABB;
    QLabel *labelCantidadHeap;
    QLabel *labelCantidadAVL;
    QLabel *labelCantidadBonus;
    QLabel *label_5;
    QPushButton *bColocarEspanta;
    QLabel *labelCantidadEspanta;

    void setupUi(QDialog *InterfazColocarObjetos)
    {
        if (InterfazColocarObjetos->objectName().isEmpty())
            InterfazColocarObjetos->setObjectName(QString::fromUtf8("InterfazColocarObjetos"));
        InterfazColocarObjetos->resize(170, 602);
        bColocarABB = new QPushButton(InterfazColocarObjetos);
        bColocarABB->setObjectName(QString::fromUtf8("bColocarABB"));
        bColocarABB->setGeometry(QRect(40, 40, 91, 61));
        bColocarABB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid black"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arbol/binario_ordenado/Images/ABB/ABB_00.png"), QSize(), QIcon::Normal, QIcon::Off);
        bColocarABB->setIcon(icon);
        bColocarABB->setIconSize(QSize(83, 53));
        bColocarABB->setFlat(false);
        bColocarHeap = new QPushButton(InterfazColocarObjetos);
        bColocarHeap->setObjectName(QString::fromUtf8("bColocarHeap"));
        bColocarHeap->setGeometry(QRect(40, 150, 91, 61));
        bColocarHeap->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid black"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arbol/heap/Images/HEAP/HEAP_00.png"), QSize(), QIcon::Normal, QIcon::Off);
        bColocarHeap->setIcon(icon1);
        bColocarHeap->setIconSize(QSize(60, 57));
        bColocarHeap->setFlat(false);
        bColocarAVL = new QPushButton(InterfazColocarObjetos);
        bColocarAVL->setObjectName(QString::fromUtf8("bColocarAVL"));
        bColocarAVL->setGeometry(QRect(40, 260, 91, 61));
        bColocarAVL->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid black"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arbol/avl/Images/AVL/AVL_03.png"), QSize(), QIcon::Normal, QIcon::Off);
        bColocarAVL->setIcon(icon2);
        bColocarAVL->setIconSize(QSize(63, 57));
        bColocarAVL->setFlat(false);
        bColocarBonus = new QPushButton(InterfazColocarObjetos);
        bColocarBonus->setObjectName(QString::fromUtf8("bColocarBonus"));
        bColocarBonus->setGeometry(QRect(40, 370, 91, 61));
        bColocarBonus->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid black"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arbol/bonus/Images/BONUS/BonusTree_00.png"), QSize(), QIcon::Normal, QIcon::Off);
        bColocarBonus->setIcon(icon3);
        bColocarBonus->setIconSize(QSize(63, 63));
        bColocarBonus->setFlat(false);
        label = new QLabel(InterfazColocarObjetos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 111, 21));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(InterfazColocarObjetos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 91, 21));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(InterfazColocarObjetos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 240, 91, 21));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(InterfazColocarObjetos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 350, 91, 21));
        label_4->setAlignment(Qt::AlignCenter);
        labelCantidadABB = new QLabel(InterfazColocarObjetos);
        labelCantidadABB->setObjectName(QString::fromUtf8("labelCantidadABB"));
        labelCantidadABB->setGeometry(QRect(40, 100, 91, 20));
        labelCantidadHeap = new QLabel(InterfazColocarObjetos);
        labelCantidadHeap->setObjectName(QString::fromUtf8("labelCantidadHeap"));
        labelCantidadHeap->setGeometry(QRect(40, 210, 91, 20));
        labelCantidadAVL = new QLabel(InterfazColocarObjetos);
        labelCantidadAVL->setObjectName(QString::fromUtf8("labelCantidadAVL"));
        labelCantidadAVL->setGeometry(QRect(40, 320, 91, 20));
        labelCantidadBonus = new QLabel(InterfazColocarObjetos);
        labelCantidadBonus->setObjectName(QString::fromUtf8("labelCantidadBonus"));
        labelCantidadBonus->setGeometry(QRect(40, 430, 91, 20));
        label_5 = new QLabel(InterfazColocarObjetos);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 480, 91, 21));
        label_5->setAlignment(Qt::AlignCenter);
        bColocarEspanta = new QPushButton(InterfazColocarObjetos);
        bColocarEspanta->setObjectName(QString::fromUtf8("bColocarEspanta"));
        bColocarEspanta->setGeometry(QRect(40, 500, 91, 61));
        bColocarEspanta->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border: 1px solid black"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/misc/Images/Scarecrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        bColocarEspanta->setIcon(icon4);
        bColocarEspanta->setIconSize(QSize(63, 63));
        bColocarEspanta->setFlat(false);
        labelCantidadEspanta = new QLabel(InterfazColocarObjetos);
        labelCantidadEspanta->setObjectName(QString::fromUtf8("labelCantidadEspanta"));
        labelCantidadEspanta->setGeometry(QRect(40, 560, 91, 20));

        retranslateUi(InterfazColocarObjetos);

        QMetaObject::connectSlotsByName(InterfazColocarObjetos);
    } // setupUi

    void retranslateUi(QDialog *InterfazColocarObjetos)
    {
        InterfazColocarObjetos->setWindowTitle(QApplication::translate("InterfazColocarObjetos", "Dialog", nullptr));
        bColocarABB->setText(QString());
        bColocarHeap->setText(QString());
        bColocarAVL->setText(QString());
        bColocarBonus->setText(QString());
        label->setText(QApplication::translate("InterfazColocarObjetos", "Binario de B\303\272squeda", nullptr));
        label_2->setText(QApplication::translate("InterfazColocarObjetos", "Heap", nullptr));
        label_3->setText(QApplication::translate("InterfazColocarObjetos", "AVL", nullptr));
        label_4->setText(QApplication::translate("InterfazColocarObjetos", "Bonus", nullptr));
        labelCantidadABB->setText(QApplication::translate("InterfazColocarObjetos", "Cantidad: ", nullptr));
        labelCantidadHeap->setText(QApplication::translate("InterfazColocarObjetos", "Cantidad: ", nullptr));
        labelCantidadAVL->setText(QApplication::translate("InterfazColocarObjetos", "Cantidad: ", nullptr));
        labelCantidadBonus->setText(QApplication::translate("InterfazColocarObjetos", "Cantidad: ", nullptr));
        label_5->setText(QApplication::translate("InterfazColocarObjetos", "Espanta P\303\241jaros", nullptr));
        bColocarEspanta->setText(QString());
        labelCantidadEspanta->setText(QApplication::translate("InterfazColocarObjetos", "Cantidad: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfazColocarObjetos: public Ui_InterfazColocarObjetos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZCOLOCAROBJETOS_H
