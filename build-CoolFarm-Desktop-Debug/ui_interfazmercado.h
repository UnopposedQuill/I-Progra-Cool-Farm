/********************************************************************************
** Form generated from reading UI file 'interfazmercado.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZMERCADO_H
#define UI_INTERFAZMERCADO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfazMercado
{
public:
    QTableWidget *tableWidget;
    QPushButton *bComprarABB;
    QLabel *labelPoseeABB;
    QLabel *label_2;
    QLabel *labelDinero;
    QLabel *label_4;
    QLabel *labelPoseeHeap;
    QPushButton *bComprarHeap;
    QLabel *label_6;
    QLabel *labelPoseeAVL;
    QPushButton *bComprarAVL;
    QLabel *label_8;
    QLabel *labelPoseeBonus;
    QPushButton *bComprarBonus;
    QLabel *label_10;
    QLabel *labelPoseeEspanta;
    QPushButton *bComprarEspanta;
    QPushButton *bVenderTodosFrutos;
    QLabel *labelCostoABB;
    QLabel *labelCrecimientoABB;
    QLabel *label_3;
    QLabel *labelPrecioFrutosABB;
    QLabel *labelPrecioFrutosHeap;
    QLabel *labelCrecimientoHeap;
    QLabel *labelCostoHeap;
    QLabel *label_5;
    QLabel *labelPrecioFrutosAVL;
    QLabel *labelCrecimientoAVL;
    QLabel *labelCostoAVL;
    QLabel *label_7;
    QLabel *labelPrecioFrutosBonus;
    QLabel *labelCrecimientoBonus;
    QLabel *labelCostoBonus;
    QLabel *label_9;
    QLabel *labelCostoEspanta;
    QLabel *label;
    QLabel *labelCosechaABB;
    QLabel *labelCosechaHeap;
    QLabel *labelCosechaAVL;
    QLabel *labelCosechaBonus;
    QLabel *labelPrecioActualABB;
    QLabel *labelPrecioActualHeap;
    QLabel *labelPrecioActualAVL;
    QLabel *labelPrecioActualBonus;
    QLabel *labelCantidadMaxEspanta;

    void setupUi(QDialog *InterfazMercado)
    {
        if (InterfazMercado->objectName().isEmpty())
            InterfazMercado->setObjectName(QString::fromUtf8("InterfazMercado"));
        InterfazMercado->resize(763, 637);
        InterfazMercado->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 231, 243);"));
        tableWidget = new QTableWidget(InterfazMercado);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 721, 291));
        bComprarABB = new QPushButton(InterfazMercado);
        bComprarABB->setObjectName(QString::fromUtf8("bComprarABB"));
        bComprarABB->setGeometry(QRect(30, 400, 80, 80));
        bComprarABB->setAutoFillBackground(false);
        bComprarABB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arbol/binario_ordenado/Images/ABB/ABB_00.png"), QSize(), QIcon::Normal, QIcon::Off);
        bComprarABB->setIcon(icon);
        bComprarABB->setIconSize(QSize(80, 80));
        labelPoseeABB = new QLabel(InterfazMercado);
        labelPoseeABB->setObjectName(QString::fromUtf8("labelPoseeABB"));
        labelPoseeABB->setGeometry(QRect(30, 490, 81, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        labelPoseeABB->setFont(font);
        label_2 = new QLabel(InterfazMercado);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 380, 81, 20));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        labelDinero = new QLabel(InterfazMercado);
        labelDinero->setObjectName(QString::fromUtf8("labelDinero"));
        labelDinero->setGeometry(QRect(20, 10, 181, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        labelDinero->setFont(font1);
        labelDinero->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(InterfazMercado);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(186, 380, 71, 20));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        labelPoseeHeap = new QLabel(InterfazMercado);
        labelPoseeHeap->setObjectName(QString::fromUtf8("labelPoseeHeap"));
        labelPoseeHeap->setGeometry(QRect(180, 490, 71, 16));
        labelPoseeHeap->setFont(font);
        bComprarHeap = new QPushButton(InterfazMercado);
        bComprarHeap->setObjectName(QString::fromUtf8("bComprarHeap"));
        bComprarHeap->setGeometry(QRect(180, 400, 80, 80));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arbol/heap/Images/HEAP/HEAP_00.png"), QSize(), QIcon::Normal, QIcon::Off);
        bComprarHeap->setIcon(icon1);
        bComprarHeap->setIconSize(QSize(80, 80));
        label_6 = new QLabel(InterfazMercado);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 380, 81, 20));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        labelPoseeAVL = new QLabel(InterfazMercado);
        labelPoseeAVL->setObjectName(QString::fromUtf8("labelPoseeAVL"));
        labelPoseeAVL->setGeometry(QRect(330, 490, 71, 16));
        labelPoseeAVL->setFont(font);
        bComprarAVL = new QPushButton(InterfazMercado);
        bComprarAVL->setObjectName(QString::fromUtf8("bComprarAVL"));
        bComprarAVL->setGeometry(QRect(330, 400, 80, 80));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arbol/avl/Images/AVL/AVL_03.png"), QSize(), QIcon::Normal, QIcon::Off);
        bComprarAVL->setIcon(icon2);
        bComprarAVL->setIconSize(QSize(80, 80));
        label_8 = new QLabel(InterfazMercado);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(480, 380, 81, 20));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        labelPoseeBonus = new QLabel(InterfazMercado);
        labelPoseeBonus->setObjectName(QString::fromUtf8("labelPoseeBonus"));
        labelPoseeBonus->setGeometry(QRect(480, 490, 71, 16));
        labelPoseeBonus->setFont(font);
        bComprarBonus = new QPushButton(InterfazMercado);
        bComprarBonus->setObjectName(QString::fromUtf8("bComprarBonus"));
        bComprarBonus->setGeometry(QRect(480, 400, 80, 80));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arbol/bonus/Images/BONUS/BonusTree_03.png"), QSize(), QIcon::Normal, QIcon::Off);
        bComprarBonus->setIcon(icon3);
        bComprarBonus->setIconSize(QSize(80, 80));
        label_10 = new QLabel(InterfazMercado);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(630, 380, 81, 20));
        label_10->setFont(font);
        labelPoseeEspanta = new QLabel(InterfazMercado);
        labelPoseeEspanta->setObjectName(QString::fromUtf8("labelPoseeEspanta"));
        labelPoseeEspanta->setGeometry(QRect(630, 490, 91, 16));
        labelPoseeEspanta->setFont(font);
        bComprarEspanta = new QPushButton(InterfazMercado);
        bComprarEspanta->setObjectName(QString::fromUtf8("bComprarEspanta"));
        bComprarEspanta->setGeometry(QRect(630, 400, 80, 80));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/misc/Images/Scarecrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        bComprarEspanta->setIcon(icon4);
        bComprarEspanta->setIconSize(QSize(80, 80));
        bVenderTodosFrutos = new QPushButton(InterfazMercado);
        bVenderTodosFrutos->setObjectName(QString::fromUtf8("bVenderTodosFrutos"));
        bVenderTodosFrutos->setGeometry(QRect(600, 350, 141, 23));
        labelCostoABB = new QLabel(InterfazMercado);
        labelCostoABB->setObjectName(QString::fromUtf8("labelCostoABB"));
        labelCostoABB->setGeometry(QRect(30, 510, 81, 16));
        labelCostoABB->setFont(font);
        labelCrecimientoABB = new QLabel(InterfazMercado);
        labelCrecimientoABB->setObjectName(QString::fromUtf8("labelCrecimientoABB"));
        labelCrecimientoABB->setGeometry(QRect(30, 530, 81, 16));
        labelCrecimientoABB->setFont(font);
        label_3 = new QLabel(InterfazMercado);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 570, 81, 16));
        label_3->setFont(font);
        labelPrecioFrutosABB = new QLabel(InterfazMercado);
        labelPrecioFrutosABB->setObjectName(QString::fromUtf8("labelPrecioFrutosABB"));
        labelPrecioFrutosABB->setGeometry(QRect(30, 590, 81, 16));
        labelPrecioFrutosABB->setFont(font);
        labelPrecioFrutosABB->setAlignment(Qt::AlignCenter);
        labelPrecioFrutosHeap = new QLabel(InterfazMercado);
        labelPrecioFrutosHeap->setObjectName(QString::fromUtf8("labelPrecioFrutosHeap"));
        labelPrecioFrutosHeap->setGeometry(QRect(180, 590, 81, 16));
        labelPrecioFrutosHeap->setFont(font);
        labelPrecioFrutosHeap->setAlignment(Qt::AlignCenter);
        labelCrecimientoHeap = new QLabel(InterfazMercado);
        labelCrecimientoHeap->setObjectName(QString::fromUtf8("labelCrecimientoHeap"));
        labelCrecimientoHeap->setGeometry(QRect(180, 530, 81, 16));
        labelCrecimientoHeap->setFont(font);
        labelCostoHeap = new QLabel(InterfazMercado);
        labelCostoHeap->setObjectName(QString::fromUtf8("labelCostoHeap"));
        labelCostoHeap->setGeometry(QRect(180, 510, 81, 16));
        labelCostoHeap->setFont(font);
        label_5 = new QLabel(InterfazMercado);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 570, 81, 16));
        label_5->setFont(font);
        labelPrecioFrutosAVL = new QLabel(InterfazMercado);
        labelPrecioFrutosAVL->setObjectName(QString::fromUtf8("labelPrecioFrutosAVL"));
        labelPrecioFrutosAVL->setGeometry(QRect(330, 590, 81, 16));
        labelPrecioFrutosAVL->setFont(font);
        labelPrecioFrutosAVL->setAlignment(Qt::AlignCenter);
        labelCrecimientoAVL = new QLabel(InterfazMercado);
        labelCrecimientoAVL->setObjectName(QString::fromUtf8("labelCrecimientoAVL"));
        labelCrecimientoAVL->setGeometry(QRect(330, 530, 81, 16));
        labelCrecimientoAVL->setFont(font);
        labelCostoAVL = new QLabel(InterfazMercado);
        labelCostoAVL->setObjectName(QString::fromUtf8("labelCostoAVL"));
        labelCostoAVL->setGeometry(QRect(330, 510, 81, 16));
        labelCostoAVL->setFont(font);
        label_7 = new QLabel(InterfazMercado);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 570, 81, 16));
        label_7->setFont(font);
        labelPrecioFrutosBonus = new QLabel(InterfazMercado);
        labelPrecioFrutosBonus->setObjectName(QString::fromUtf8("labelPrecioFrutosBonus"));
        labelPrecioFrutosBonus->setGeometry(QRect(480, 590, 81, 16));
        labelPrecioFrutosBonus->setFont(font);
        labelPrecioFrutosBonus->setAlignment(Qt::AlignCenter);
        labelCrecimientoBonus = new QLabel(InterfazMercado);
        labelCrecimientoBonus->setObjectName(QString::fromUtf8("labelCrecimientoBonus"));
        labelCrecimientoBonus->setGeometry(QRect(480, 530, 81, 16));
        labelCrecimientoBonus->setFont(font);
        labelCostoBonus = new QLabel(InterfazMercado);
        labelCostoBonus->setObjectName(QString::fromUtf8("labelCostoBonus"));
        labelCostoBonus->setGeometry(QRect(480, 510, 81, 16));
        labelCostoBonus->setFont(font);
        label_9 = new QLabel(InterfazMercado);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(480, 570, 81, 16));
        label_9->setFont(font);
        labelCostoEspanta = new QLabel(InterfazMercado);
        labelCostoEspanta->setObjectName(QString::fromUtf8("labelCostoEspanta"));
        labelCostoEspanta->setGeometry(QRect(630, 530, 81, 16));
        labelCostoEspanta->setFont(font);
        label = new QLabel(InterfazMercado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(630, 590, 121, 41));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        labelCosechaABB = new QLabel(InterfazMercado);
        labelCosechaABB->setObjectName(QString::fromUtf8("labelCosechaABB"));
        labelCosechaABB->setGeometry(QRect(30, 550, 81, 16));
        labelCosechaABB->setFont(font);
        labelCosechaHeap = new QLabel(InterfazMercado);
        labelCosechaHeap->setObjectName(QString::fromUtf8("labelCosechaHeap"));
        labelCosechaHeap->setGeometry(QRect(180, 550, 81, 16));
        labelCosechaHeap->setFont(font);
        labelCosechaAVL = new QLabel(InterfazMercado);
        labelCosechaAVL->setObjectName(QString::fromUtf8("labelCosechaAVL"));
        labelCosechaAVL->setGeometry(QRect(330, 550, 81, 16));
        labelCosechaAVL->setFont(font);
        labelCosechaBonus = new QLabel(InterfazMercado);
        labelCosechaBonus->setObjectName(QString::fromUtf8("labelCosechaBonus"));
        labelCosechaBonus->setGeometry(QRect(480, 550, 81, 16));
        labelCosechaBonus->setFont(font);
        labelPrecioActualABB = new QLabel(InterfazMercado);
        labelPrecioActualABB->setObjectName(QString::fromUtf8("labelPrecioActualABB"));
        labelPrecioActualABB->setGeometry(QRect(10, 610, 121, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setBold(true);
        font3.setWeight(75);
        labelPrecioActualABB->setFont(font3);
        labelPrecioActualHeap = new QLabel(InterfazMercado);
        labelPrecioActualHeap->setObjectName(QString::fromUtf8("labelPrecioActualHeap"));
        labelPrecioActualHeap->setGeometry(QRect(160, 610, 121, 20));
        labelPrecioActualHeap->setFont(font3);
        labelPrecioActualAVL = new QLabel(InterfazMercado);
        labelPrecioActualAVL->setObjectName(QString::fromUtf8("labelPrecioActualAVL"));
        labelPrecioActualAVL->setGeometry(QRect(310, 610, 121, 20));
        labelPrecioActualAVL->setFont(font3);
        labelPrecioActualBonus = new QLabel(InterfazMercado);
        labelPrecioActualBonus->setObjectName(QString::fromUtf8("labelPrecioActualBonus"));
        labelPrecioActualBonus->setGeometry(QRect(460, 610, 121, 20));
        labelPrecioActualBonus->setFont(font3);
        labelCantidadMaxEspanta = new QLabel(InterfazMercado);
        labelCantidadMaxEspanta->setObjectName(QString::fromUtf8("labelCantidadMaxEspanta"));
        labelCantidadMaxEspanta->setGeometry(QRect(630, 510, 111, 16));

        retranslateUi(InterfazMercado);

        QMetaObject::connectSlotsByName(InterfazMercado);
    } // setupUi

    void retranslateUi(QDialog *InterfazMercado)
    {
        InterfazMercado->setWindowTitle(QApplication::translate("InterfazMercado", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("InterfazMercado", "Arbol", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("InterfazMercado", "Ubicaci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("InterfazMercado", "Frutos en el arbol", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("InterfazMercado", "Monto Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("InterfazMercado", "Vendidos", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("InterfazMercado", "Perdidos", nullptr));
        bComprarABB->setText(QString());
        labelPoseeABB->setText(QApplication::translate("InterfazMercado", "Posee: ", nullptr));
        label_2->setText(QApplication::translate("InterfazMercado", "Arbol Binario", nullptr));
        labelDinero->setText(QApplication::translate("InterfazMercado", "Dinero: $500", nullptr));
        label_4->setText(QApplication::translate("InterfazMercado", "Heap", nullptr));
        labelPoseeHeap->setText(QApplication::translate("InterfazMercado", "Posee: ", nullptr));
        bComprarHeap->setText(QString());
        label_6->setText(QApplication::translate("InterfazMercado", "AVL", nullptr));
        labelPoseeAVL->setText(QApplication::translate("InterfazMercado", "Posee: ", nullptr));
        bComprarAVL->setText(QString());
        label_8->setText(QApplication::translate("InterfazMercado", "Bonus", nullptr));
        labelPoseeBonus->setText(QApplication::translate("InterfazMercado", "Posee: ", nullptr));
        bComprarBonus->setText(QString());
        label_10->setText(QApplication::translate("InterfazMercado", "Espanta Pajaros", nullptr));
        labelPoseeEspanta->setText(QApplication::translate("InterfazMercado", "Posee: ", nullptr));
        bComprarEspanta->setText(QString());
        bVenderTodosFrutos->setText(QApplication::translate("InterfazMercado", "Vender todos los frutos", nullptr));
        labelCostoABB->setText(QApplication::translate("InterfazMercado", "Costo: $100", nullptr));
        labelCrecimientoABB->setText(QApplication::translate("InterfazMercado", "Crece: 200 seg", nullptr));
        label_3->setText(QApplication::translate("InterfazMercado", "Precio de frutos", nullptr));
        labelPrecioFrutosABB->setText(QApplication::translate("InterfazMercado", "$0 - $5", nullptr));
        labelPrecioFrutosHeap->setText(QApplication::translate("InterfazMercado", "$0 - $5", nullptr));
        labelCrecimientoHeap->setText(QApplication::translate("InterfazMercado", "Crece: 150 seg", nullptr));
        labelCostoHeap->setText(QApplication::translate("InterfazMercado", "Costo: $130", nullptr));
        label_5->setText(QApplication::translate("InterfazMercado", "Precio de frutos", nullptr));
        labelPrecioFrutosAVL->setText(QApplication::translate("InterfazMercado", "$2 - $20", nullptr));
        labelCrecimientoAVL->setText(QApplication::translate("InterfazMercado", "Crece: 500 seg", nullptr));
        labelCostoAVL->setText(QApplication::translate("InterfazMercado", "Costo: $350", nullptr));
        label_7->setText(QApplication::translate("InterfazMercado", "Precio de frutos", nullptr));
        labelPrecioFrutosBonus->setText(QApplication::translate("InterfazMercado", "$5 - $50", nullptr));
        labelCrecimientoBonus->setText(QApplication::translate("InterfazMercado", "Crece: 500 seg", nullptr));
        labelCostoBonus->setText(QApplication::translate("InterfazMercado", "Costo: $600", nullptr));
        label_9->setText(QApplication::translate("InterfazMercado", "Precio de frutos", nullptr));
        labelCostoEspanta->setText(QApplication::translate("InterfazMercado", "Costo:", nullptr));
        label->setText(QApplication::translate("InterfazMercado", "La cosecha se da en frutos por segundo ", nullptr));
        labelCosechaABB->setText(QApplication::translate("InterfazMercado", "Cosecha: 1/20", nullptr));
        labelCosechaHeap->setText(QApplication::translate("InterfazMercado", "Cosecha: 2/35", nullptr));
        labelCosechaAVL->setText(QApplication::translate("InterfazMercado", "Cosecha: 1/60", nullptr));
        labelCosechaBonus->setText(QApplication::translate("InterfazMercado", "Cosecha: 2/60", nullptr));
        labelPrecioActualABB->setText(QApplication::translate("InterfazMercado", "Precio Actual: $5", nullptr));
        labelPrecioActualHeap->setText(QApplication::translate("InterfazMercado", "Precio Actual: $5", nullptr));
        labelPrecioActualAVL->setText(QApplication::translate("InterfazMercado", "Precio Actual: $20", nullptr));
        labelPrecioActualBonus->setText(QApplication::translate("InterfazMercado", "Precio Actual: $50", nullptr));
        labelCantidadMaxEspanta->setText(QApplication::translate("InterfazMercado", "Cantidad Maxima:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfazMercado: public Ui_InterfazMercado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZMERCADO_H
