/********************************************************************************
** Form generated from reading UI file 'interfazgraficas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZGRAFICAS_H
#define UI_INTERFAZGRAFICAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfazGraficas
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *InterfazGraficas)
    {
        if (InterfazGraficas->objectName().isEmpty())
            InterfazGraficas->setObjectName(QString::fromUtf8("InterfazGraficas"));
        InterfazGraficas->resize(641, 141);
        InterfazGraficas->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(InterfazGraficas);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 641, 141));

        retranslateUi(InterfazGraficas);

        QMetaObject::connectSlotsByName(InterfazGraficas);
    } // setupUi

    void retranslateUi(QDialog *InterfazGraficas)
    {
        InterfazGraficas->setWindowTitle(QApplication::translate("InterfazGraficas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfazGraficas: public Ui_InterfazGraficas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZGRAFICAS_H
