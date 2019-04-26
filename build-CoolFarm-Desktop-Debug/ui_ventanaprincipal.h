/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QWidget *centralWidget;
    QPushButton *bConfigurarComp;
    QPushButton *bVerColocables;
    QPushButton *bAbrirMercado;
    QLabel *labelMercado;
    QLabel *labelTimerMercado;
    QPushButton *bVerGraficas;
    QLabel *labelMercadoChiva;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(1184, 704);
        VentanaPrincipal->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        bConfigurarComp = new QPushButton(centralWidget);
        bConfigurarComp->setObjectName(QString::fromUtf8("bConfigurarComp"));
        bConfigurarComp->setGeometry(QRect(0, 670, 31, 31));
        bConfigurarComp->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/misc/Images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        bConfigurarComp->setIcon(icon);
        bConfigurarComp->setIconSize(QSize(31, 31));
        bConfigurarComp->setCheckable(true);
        bConfigurarComp->setAutoDefault(false);
        bConfigurarComp->setFlat(false);
        bVerColocables = new QPushButton(centralWidget);
        bVerColocables->setObjectName(QString::fromUtf8("bVerColocables"));
        bVerColocables->setGeometry(QRect(10, 10, 61, 61));
        bVerColocables->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/misc/Images/tree.png"), QSize(), QIcon::Normal, QIcon::Off);
        bVerColocables->setIcon(icon1);
        bVerColocables->setIconSize(QSize(61, 61));
        bVerColocables->setCheckable(true);
        bAbrirMercado = new QPushButton(centralWidget);
        bAbrirMercado->setObjectName(QString::fromUtf8("bAbrirMercado"));
        bAbrirMercado->setGeometry(QRect(1110, 70, 61, 51));
        bAbrirMercado->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/misc/Images/gold.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAbrirMercado->setIcon(icon2);
        bAbrirMercado->setIconSize(QSize(51, 41));
        bAbrirMercado->setCheckable(true);
        labelMercado = new QLabel(centralWidget);
        labelMercado->setObjectName(QString::fromUtf8("labelMercado"));
        labelMercado->setGeometry(QRect(970, 10, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(20);
        labelMercado->setFont(font);
        labelMercado->setAlignment(Qt::AlignCenter);
        labelTimerMercado = new QLabel(centralWidget);
        labelTimerMercado->setObjectName(QString::fromUtf8("labelTimerMercado"));
        labelTimerMercado->setGeometry(QRect(970, 70, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        labelTimerMercado->setFont(font1);
        labelTimerMercado->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelTimerMercado->setAlignment(Qt::AlignCenter);
        bVerGraficas = new QPushButton(centralWidget);
        bVerGraficas->setObjectName(QString::fromUtf8("bVerGraficas"));
        bVerGraficas->setGeometry(QRect(1150, 660, 21, 21));
        bVerGraficas->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/misc/Images/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        bVerGraficas->setIcon(icon3);
        bVerGraficas->setIconSize(QSize(21, 21));
        bVerGraficas->setCheckable(true);
        labelMercadoChiva = new QLabel(centralWidget);
        labelMercadoChiva->setObjectName(QString::fromUtf8("labelMercadoChiva"));
        labelMercadoChiva->setGeometry(QRect(960, 110, 211, 131));
        labelMercadoChiva->setStyleSheet(QString::fromUtf8(""));
        labelMercadoChiva->setPixmap(QPixmap(QString::fromUtf8(":/misc/Images/MercadoChiva.png")));
        labelMercadoChiva->setScaledContents(true);
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 1184, 21));
        VentanaPrincipal->setMenuBar(menuBar);

        retranslateUi(VentanaPrincipal);

        bConfigurarComp->setDefault(false);


        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "Cool Farm", nullptr));
        bConfigurarComp->setText(QString());
        bVerColocables->setText(QString());
        bAbrirMercado->setText(QString());
        labelMercado->setText(QApplication::translate("VentanaPrincipal", "Mercado Cerrado", nullptr));
        labelTimerMercado->setText(QString());
        bVerGraficas->setText(QString());
        labelMercadoChiva->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
