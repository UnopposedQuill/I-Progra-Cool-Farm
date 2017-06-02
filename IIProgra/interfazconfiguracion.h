#ifndef INTERFAZCONFIGURACION_H
#define INTERFAZCONFIGURACION_H

#include <QDialog>

namespace Ui {
class InterfazConfiguracion;
}

class InterfazConfiguracion : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazConfiguracion(QWidget *parent = 0);
    ~InterfazConfiguracion();
    void setPunterosConfiguracion(double *costoABB, int *crecimientoABB, int *frutosCosechaABB, int *cantSegCosechaABB, double *menorVentaFrutosABB, double *mayorVentaFrutosABB,
            double *costoHeap, int *crecimientoHeap, int *frutosCosechaHeap, int *cantSegCosechaHeap, double *menorVentaFrutosHeap, double *mayorVentaFrutosHeap,
            double *costoAVL, int *crecimientoAVL, int *frutosCosechaAVL, int *cantSegCosechaAVL, double *menorVentaFrutosAVL, double *mayorVentaFrutosAVL,
            double *costoBonus, int *crecimientoBonus, int *frutosCosechaBonus, int *cantSegCosechaBonus, double *menorVentaFrutosBonus, double *mayorVentaFrutosBonus,
            double *costoEspanta,
            int *cantidadMaxEspanta,
            int *tiempoAbreMercado,
            int *tiempoCierraMercado,
            int *delayMovimientoGranjero,
            int *probabilidadAparicionOveja, int *cantidadOvejasAparecen, int *cantidadTardanAparecerOvejas, int *frutosComeOveja, int *segundosOvejaComeFrutos,
            int *probabilidadAparicionCuervo, int *cantidadCuervosAparecen, int *cantidadTardanAparecerCuervos, int *frutosComeCuervo, int *segundosCuervoComeFrutos,
            int *probabilidadAparicionPlaga, int *cantidadTardaAparecerPlaga, int *cantidadSegundosDestruyePlaga);
private slots:
    void on_bConfigurarABB_clicked();

    void on_bConfigurarHeap_clicked();

    void on_bConfigurarAVL_clicked();

    void on_bConfigurarBonus_clicked();

    void on_bConfigurarGranjero_clicked();

    void on_bConfigurarOveja_clicked();

    void on_bConfigurarCuervo_clicked();

    void on_bConfigurarPlaga_clicked();

    void on_bConfigurarMercado_clicked();

    void on_bConfigurarEspanta_clicked();

private:
    Ui::InterfazConfiguracion *ui;

    //INFO ARBOLES
    int *crecimientoABB, *frutosCosechaABB, *cantSegCosechaABB;
    double *costoABB, *menorVentaFrutosABB, *mayorVentaFrutosABB;

    int *crecimientoHeap, *frutosCosechaHeap, *cantSegCosechaHeap;
    double *costoHeap, *menorVentaFrutosHeap, *mayorVentaFrutosHeap;

    int *crecimientoAVL, *frutosCosechaAVL, *cantSegCosechaAVL;
    double *costoAVL, *menorVentaFrutosAVL, *mayorVentaFrutosAVL;

    int *crecimientoBonus, *frutosCosechaBonus, *cantSegCosechaBonus;
    double *costoBonus, *menorVentaFrutosBonus, *mayorVentaFrutosBonus;

    //Info de MISC comprables en el mercado
    double *costoEspanta;
    int *cantidadMaxEspanta;
    //Mercado
    int *tiempoAbreMercado;
    int *tiempoCierraMercado;
    //Granjero
    int *delayMovimientoGranjero;
    //Plagas
    int *probabilidadAparicionOveja, *cantidadOvejasAparecen, *cantidadTardanAparecerOvejas, *frutosComeOveja, *segundosOvejaComeFrutos;
    int *probabilidadAparicionCuervo, *cantidadCuervosAparecen, *cantidadTardanAparecerCuervos, *frutosComeCuervo, *segundosCuervoComeFrutos;
    int *probabilidadAparicionPlaga, *cantidadTardaAparecerPlaga, *cantidadSegundosDestruyePlaga;
};

#endif // INTERFAZCONFIGURACION_H
