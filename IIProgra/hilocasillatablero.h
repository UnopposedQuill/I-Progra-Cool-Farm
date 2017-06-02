#ifndef HILOCASILLATABLERO_H
#define HILOCASILLATABLERO_H

#include <QtCore>
class HiloCasillaTablero : public QThread
{
Q_OBJECT
public:
    unsigned int semilla;
    int *posXGranjero, *posYGranjero;
    //Plagas
    bool hayCuervo, hayOveja, hayPlaga;
    int *probabilidadAparicionCuervo, *probabilidadAparicionOveja, *probabilidadAparicionPlaga;

    int *cantidadApareceCuervo, *cantidadApareceOveja;
    int *tiempoApareceCuervo, *tiempoApareceOveja, *tiempoAparecePlaga;
    int cantidadCuervos, cantidadOvejas;
    int *tiempoComeCuervo, *tiempoComeOveja, *tiempoDestruccionPlaga;
    int *frutosComeCuervo, *frutosComeOveja;

    //ARBOL
    enum Arboles {NoHayArbol, ABB, Heap, AVL, Bonus};
    int *hayArbol;
    int cantidadFrutos;
    int frutosPerdidos;
    int *crecimientoABB, *crecimientoHeap, *crecimientoAVL, *crecimientoBonus;

    int *frutosCosechaABB, *cantSegCosechaABB;
    int *frutosCosechaHeap, *cantSegCosechaHeap;
    int *frutosCosechaAVL, *cantSegCosechaAVL;
    int *frutosCosechaBonus, *cantSegCosechaBonus;

    QVector<QVector<QVector<int>>> *punteroVectorArbolesGranja;
    //int *velocif
    //FIN ARBOL
    bool *espantaArriba, *espantaIzquierda, *espantaAbajo, *espantaDerecha;

    int posXHilo, posYHilo;
    bool pausa;
    HiloCasillaTablero();
    void run();

    void setInfo(QVector<QVector<QVector<int>>> *vectorArbolesGranja,int posXHilo, int posYHilo, int *posXGranjero, int *posYGranjero,int *probabilidadAparicionCuervo, int *cantidadApareceCuervo, int* tiempoApareceCuervo, int* frutosComeCuervo, int *tiempoComeCuervo, int *probabilidadAparicionOveja, int *cantidadApareceOveja, int *tiempoApareceOveja, int *frutosComeOveja, int *tiempoComeOveja, int *probabilidadAparicionPlaga, int* tiempoAparecePlaga, int *tiempoDestruccionPlaga, int *crecimientoABB, int *frutosCosechaABB, int *cantSegCosechaABB, int *crecimientoHeap, int *frutosCosechaHeap, int *cantSegCosechaHeap, int *crecimientoAVL, int *frutosCosechaAVL, int *cantSegCosechaAVL, int *crecimientoBonus, int *frutosCosechaBonus, int *cantSegCosechaBonus, int modificadorSemilla);
    void setPunterosBooleanos(bool* espantaArriba, bool* espantaIzquierda, bool* espantaAbajo, bool* espantaDerecha);

    inline bool espantaCerca(){
        bool resultado = false;
        if(espantaArriba != nullptr){
            resultado = *espantaArriba;
        }
        if(espantaIzquierda != nullptr){
            resultado = resultado || *espantaIzquierda;
        }
        if(espantaAbajo != nullptr){
            resultado = resultado || *espantaAbajo;
        }
        if(espantaDerecha != nullptr){
            resultado = resultado || *espantaDerecha;
        }
        return resultado;
    }

signals:
    void aumentarCantidadFrutos();

    void actualizarMercado();

    void anadirCuervo();
    void anadirOveja();
    void anadirPlaga();

    void espantarPlagas();
};

#endif // HILOCASILLATABLERO_H
