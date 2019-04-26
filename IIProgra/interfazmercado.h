#ifndef INTERFAZMERCADO_H
#define INTERFAZMERCADO_H

#include <QDialog>
#include "time.h"
#include <random>
#include <QSignalMapper>

namespace Ui {
class InterfazMercado;
}

class InterfazMercado : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazMercado(QWidget *parent = 0);
    ~InterfazMercado();

    void setTableArbolesEnGranja(QVector<QVector<QVector<int> > > pArbolesEnGranja);

    void setPunteros(QVector<QVector<QVector<int>>> *pPunteroArbolesEnGranja, double *pPunteroDinero);
    QVector<QVector<QVector<int>>> *punteroArbolesEnGranja;
    double *punteroDinero;

    void setParametros(int pCantidadABB, int pCantidadHeap, int pCantidadAVL, int pCantidadBonus, int pCantidadEspanta, int pCantidadMaxEspanta, double pDinero);
    void setInfoABB  (double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos);
    void setInfoHeap (double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos);
    void setInfoAVL  (double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos);
    void setInfoBonus(double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos);
    void setInfoEspanta(double pCosto);

    void actualizarArbol(int posX, int posY);
signals:
    void comprarABB();
    void comprarHeap();
    void comprarAVL();
    void comprarBonus();
    void comprarEspanta();
    void ventaFrutos();

private slots:
    void on_bComprarABB_clicked();

    void on_bComprarHeap_clicked();

    void on_bComprarAVL_clicked();

    void on_bComprarBonus_clicked();

    void on_bComprarEspanta_clicked();

    void venderArbolFila(QString filaCol);
    void on_bVenderTodosFrutos_clicked();


private:
    int cantidadABB, cantidadHeap, cantidadAVL, cantidadBonus, cantidadEspanta, cantidadMaxEspanta;
    double dinero;
    double precioFrutoABB, precioFrutoHeap, precioFrutoAVL, precioFrutoBonus, precioEspanta;
    double costoABB, costoHeap, costoAVL, costoBonus, costoEspanta;

    Ui::InterfazMercado *ui;
};

#endif // INTERFAZMERCADO_H
