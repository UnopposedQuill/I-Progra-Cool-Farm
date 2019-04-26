#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QLabel>
#include<QMouseEvent>
#include <QEvent>
#include <QTimer>
#include <QMovie>

#include "hilocasillatablero.h"
#include "hilointerfazcuervo.h"
class HiloInterfazCuervo;

#include "interfazcolocarobjetos.h"
#include "interfazmercado.h"
#include "interfazconfiguracion.h"
#include "interfazgraficas.h"

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();

    InterfazGraficas* interfazGraficas;
    InterfazConfiguracion* interfazConfiguracion;
    //QMovie* movieRaven; TEST

    //Hay 8x8 casillas y por ende no pueden haber más de 64 objetos colocados en la matriz. Además cada uno tiene su "x" y "y"


    //ARBOLES EN LA MATRIZ
    QVector<QVector<QVector<int>>> arbolesEnGranja;//[[TIPO][UBICACION X][UBICACION Y][CANTIDAD FRUTOS][VENDIDOS][PERDIDOS]]

    void setArbolesEnGranja(QVector<QVector<QVector<int> > > pArbolesEnGranja);
    //INFO ARBOLES
    int crecimientoABB, frutosCosechaABB, cantSegCosechaABB;
    double costoABB, menorVentaFrutosABB, mayorVentaFrutosABB;

    int crecimientoHeap, frutosCosechaHeap, cantSegCosechaHeap;
    double costoHeap, menorVentaFrutosHeap, mayorVentaFrutosHeap;

    int crecimientoAVL, frutosCosechaAVL, cantSegCosechaAVL;
    double costoAVL, menorVentaFrutosAVL, mayorVentaFrutosAVL;

    int crecimientoBonus, frutosCosechaBonus, cantSegCosechaBonus;
    double costoBonus, menorVentaFrutosBonus, mayorVentaFrutosBonus;

    //Info de MISC comprables en el mercado
    double costoEspanta;
    int cantidadMaxEspanta;
    //Mercado
    double dinero;
    QTimer *cronometroTiempoRestante;
    QTimer *cronometroAbrirMercado;
    int tiempoAbreMercado;
    QTimer *cronometroCerrarMercado;
    int tiempoCierraMercado;
    int tiempoRestanteMercado;
    InterfazMercado* interfazMercado;


    //Granjero
    int posXGranjero;
    int posYGranjero;

    QLabel* labelGranjero;
    QTimer *cronometroMovimientoGranjero;
    int delayMovimientoGranjero;

    QMovie* caminarArriba;
    QMovie* caminarIzquierda;
    QMovie* caminarAbajo;
    QMovie* caminarDerecha;
    //Plagas
    int probabilidadAparicionOveja, cantidadOvejasAparecen, cantidadTardanAparecerOvejas, frutosComeOveja, segundosOvejaComeFrutos;
    int probabilidadAparicionCuervo, cantidadCuervosAparecen, cantidadTardanAparecerCuervos, frutosComeCuervo, segundosCuervoComeFrutos;
    int probabilidadAparicionPlaga, cantidadTardaAparecerPlaga, cantidadSegundosDestruyePlaga;
    //MOUSE
    void mousePressEvent(QMouseEvent *ev);
    short posTableroX;
    short posTableroY;
    bool repeticionClickTile;

    void iniciarHilos();
    int agregarHiloCuervo(int posX, int posY, int pModificadorSleep);
    void modificarPosHiloCuervo(int indice, int posX, int posY);

    void actualizarCeldaXY(short posX, short posY, bool cuervo, bool oveja, bool ovejaObesa, int arbolMisc);
    void actualizarUnaCeldaXY(short posX, short posY);
    QVector<QVector<QLabel*>> matrizLabelsZacate;//Se podría agregar algo como de arar el suelo
    QVector<QVector<QLabel*>> matrizLabelsCuervo;
    QVector<QVector<QLabel*>> matrizLabelsOveja;//La oveja se hace obesa
    QVector<QVector<QLabel*>> matrizLabelsArbolesMisc;//La plaga de gusano afecta al arbol  se ve visualmente en este.  El  espanta pajaros hace uso de este también.

    QVector<QVector<HiloCasillaTablero*>> matrizHilosCasilla;

    QVector<QVector<QVector<bool>>> matrizBoolColocables;//La matriz va a ser 8x8x6. En 5 va [arbol][cuervo][oveja][ovejaObesa][espanta][plaga]

    int cantidadABB, cantidadHeap, cantidadAVL, cantidadBonus, cantidadEspanta, cantidadEspantaColocados;

private slots:
    void on_bVerColocables_toggled(bool checked);

    void moverGranjero();

    void colocarABB();
    void colocarHeap();
    void colocarAVL();
    void colocarBonus();
    void colocarEspanta();

    void comprarABB();
    void comprarHeap();
    void comprarAVL();
    void comprarBonus();
    void comprarEspanta();

    void abrirMercado();
    void cerrarMercado();
    void setLabelTiempoRestante();
    void on_bAbrirMercado_toggled(bool checked);

    void on_bConfigurarComp_toggled(bool checked);

    void on_bVerGraficas_toggled(bool checked);

    void aumentarCantidadFrutos();
    void actualizarMercado();

    void anadirCuervo();
    void anadirOveja();
    void anadirPlaga();

    void espantarPlagas();
private:
    Ui::VentanaPrincipal *ui;
    QVector<HiloInterfazCuervo*> hilosCuervos;
    InterfazColocarObjetos* interfazColocarObjetos;
};

#endif // VENTANAPRINCIPAL_H
