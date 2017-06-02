#ifndef HILOINTERFAZ_H
#define HILOINTERFAZ_H

#include <QtCore>

#include "ventanaprincipal.h"
class VentanaPrincipal;

class HiloInterfaz : public QThread
{
public:
    bool activo;
    HiloInterfaz();
};

#endif // HILOINTERFAZ_H
