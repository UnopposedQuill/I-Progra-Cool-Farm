#include <QDebug>
#include "ventanaprincipal.h"
#include <QtCore/QCoreApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaPrincipal w;
    w.show();

    return a.exec();
}
