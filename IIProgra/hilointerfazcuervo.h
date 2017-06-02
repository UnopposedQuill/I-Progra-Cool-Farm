#ifndef HILOINTERFAZCUERVO_H
#define HILOINTERFAZCUERVO_H

#include <QtCore>

#include "ventanaprincipal.h"
class VentanaPrincipal;
#include "ui_ventanaprincipal.h"

class HiloInterfazCuervo : public QThread
{
public:
    bool activo;
    bool pausa;
    VentanaPrincipal* ventana;
    QLabel* labelCuervo;
    QPixmap pixmap;

    HiloInterfazCuervo(VentanaPrincipal* pVentana, int posX, int posY, int pModificadorSleep);

    void run();
    void modificarPos(int posX, int posY);
private:
    int posX;
    int posY;
    int modificadorSleep;
};

#endif // HILOINTERFAZCUERVO_H
