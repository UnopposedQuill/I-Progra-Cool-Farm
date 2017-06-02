#include "interfazconfiguracion.h"
#include "ui_interfazconfiguracion.h"

InterfazConfiguracion::InterfazConfiguracion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazConfiguracion)
{
    ui->setupUi(this);

}

InterfazConfiguracion::~InterfazConfiguracion()
{
    delete ui;
}

void InterfazConfiguracion::setPunterosConfiguracion(double *costoABB, int *crecimientoABB, int *frutosCosechaABB, int *cantSegCosechaABB, double *menorVentaFrutosABB, double *mayorVentaFrutosABB, double *costoHeap, int *crecimientoHeap, int *frutosCosechaHeap, int *cantSegCosechaHeap, double *menorVentaFrutosHeap, double *mayorVentaFrutosHeap, double *costoAVL, int *crecimientoAVL, int *frutosCosechaAVL, int *cantSegCosechaAVL, double *menorVentaFrutosAVL, double *mayorVentaFrutosAVL, double *costoBonus, int *crecimientoBonus, int *frutosCosechaBonus, int *cantSegCosechaBonus, double *menorVentaFrutosBonus, double *mayorVentaFrutosBonus, double *costoEspanta, int *cantidadMaxEspanta, int *tiempoAbreMercado, int *tiempoCierraMercado, int *delayMovimientoGranjero, int *probabilidadAparicionOveja, int *cantidadOvejasAparecen, int *cantidadTardanAparecerOvejas, int *frutosComeOveja, int *segundosOvejaComeFrutos, int *probabilidadAparicionCuervo, int *cantidadCuervosAparecen, int *cantidadTardanAparecerCuervos, int *frutosComeCuervo, int *segundosCuervoComeFrutos, int *probabilidadAparicionPlaga, int *cantidadTardaAparecerPlaga, int *cantidadSegundosDestruyePlaga)
{
    //INFO ARBOLES
    this->costoABB=costoABB;
    this->crecimientoABB=crecimientoABB;
    this->frutosCosechaABB=frutosCosechaABB;
    this->cantSegCosechaABB=cantSegCosechaABB;
    this->menorVentaFrutosABB=menorVentaFrutosABB;
    this->mayorVentaFrutosABB=mayorVentaFrutosABB;

    this->costoHeap=costoHeap;
    this->crecimientoHeap=crecimientoHeap;
    this->frutosCosechaHeap=frutosCosechaHeap;
    this->cantSegCosechaHeap=cantSegCosechaHeap;
    this->menorVentaFrutosHeap=menorVentaFrutosHeap;
    this->mayorVentaFrutosHeap=mayorVentaFrutosHeap;

    this->costoAVL=costoAVL;
    this->crecimientoAVL=crecimientoAVL;
    this->frutosCosechaAVL=frutosCosechaAVL;
    this->cantSegCosechaAVL=cantSegCosechaAVL;
    this->menorVentaFrutosAVL=menorVentaFrutosAVL;
    this->mayorVentaFrutosAVL=mayorVentaFrutosAVL;

    this->costoBonus=costoBonus;
    this->crecimientoBonus=crecimientoBonus;
    this->frutosCosechaBonus=frutosCosechaBonus;
    this->cantSegCosechaBonus=cantSegCosechaBonus;
    this->menorVentaFrutosBonus=menorVentaFrutosBonus;
    this->mayorVentaFrutosBonus=mayorVentaFrutosBonus;

    //Info de MISC comprables en el mercado
    this->costoEspanta=costoEspanta;
    this->cantidadMaxEspanta=cantidadMaxEspanta;
    //Mercado
    this->tiempoAbreMercado=tiempoAbreMercado;
    this->tiempoCierraMercado=tiempoCierraMercado;
    //Granjero
    this->delayMovimientoGranjero=delayMovimientoGranjero;
    //Plagas
    this->probabilidadAparicionOveja=probabilidadAparicionOveja;
    this->cantidadOvejasAparecen=cantidadOvejasAparecen;
    this->cantidadTardanAparecerOvejas=cantidadTardanAparecerOvejas;
    this->frutosComeOveja=frutosComeOveja;
    this->segundosOvejaComeFrutos=segundosOvejaComeFrutos;

    this->probabilidadAparicionCuervo=probabilidadAparicionCuervo;
    this->cantidadCuervosAparecen=cantidadCuervosAparecen;
    this->cantidadTardanAparecerCuervos=cantidadTardanAparecerCuervos;
    this->frutosComeCuervo=frutosComeCuervo;
    this->segundosCuervoComeFrutos=segundosCuervoComeFrutos;

    this->probabilidadAparicionPlaga=probabilidadAparicionPlaga;
    this->cantidadTardaAparecerPlaga=cantidadTardaAparecerPlaga;
    this->cantidadSegundosDestruyePlaga=cantidadSegundosDestruyePlaga;

    //INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ
    //SE ESTABLECE LOS DATOS DE LA INTERFAZ
    //INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ INTERFAZ


    //INFO ARBOLES
    ui->costoABB->setValue(*costoABB);
    ui->crecimientoABB->setValue(*crecimientoABB/1000);
    ui->frutosCosechaABB->setValue(*frutosCosechaABB);
    ui->cantSegCosechaABB->setValue(*cantSegCosechaABB/1000);
    ui->menorVentaFrutosABB->setValue(*menorVentaFrutosABB);
    ui->mayorVentaFrutosABB->setValue(*mayorVentaFrutosABB);

    ui->costoHeap->setValue(*costoHeap);
    ui->crecimientoHeap->setValue(*crecimientoHeap/1000);
    ui->frutosCosechaHeap->setValue(*frutosCosechaHeap);
    ui->cantSegCosechaHeap->setValue(*cantSegCosechaHeap/1000);
    ui->menorVentaFrutosHeap->setValue(*menorVentaFrutosHeap);
    ui->mayorVentaFrutosHeap->setValue(*mayorVentaFrutosHeap);

    ui->costoAVL->setValue(*costoAVL);
    ui->crecimientoAVL->setValue(*crecimientoAVL/1000);
    ui->frutosCosechaAVL->setValue(*frutosCosechaAVL);
    ui->cantSegCosechaAVL->setValue(*cantSegCosechaAVL/1000);
    ui->menorVentaFrutosAVL->setValue(*menorVentaFrutosAVL);
    ui->mayorVentaFrutosAVL->setValue(*mayorVentaFrutosAVL);

    ui->costoBonus->setValue(*costoBonus);
    ui->crecimientoBonus->setValue(*crecimientoBonus/1000);
    ui->frutosCosechaBonus->setValue(*frutosCosechaBonus);
    ui->cantSegCosechaBonus->setValue(*cantSegCosechaBonus/1000);
    ui->menorVentaFrutosBonus->setValue(*menorVentaFrutosBonus);
    ui->mayorVentaFrutosBonus->setValue(*mayorVentaFrutosBonus);

    //Info de MISC comprables en el mercado
    ui->costoEspanta->setValue(*costoEspanta);
    ui->cantidadMaxEspanta->setValue(*cantidadMaxEspanta);
    //Mercado
    ui->tiempoAbreMercado->setValue(*tiempoAbreMercado/1000);
    ui->tiempoCierraMercado->setValue(*tiempoCierraMercado/1000);
    //Granjero
    ui->delayMovimientoGranjero->setValue(*delayMovimientoGranjero/1000);
    //Plagas
    ui->probabilidadAparicionOveja->setValue(*probabilidadAparicionOveja);
    ui->cantidadOvejasAparecen->setValue(*cantidadOvejasAparecen);
    ui->cantidadTardanAparecerOvejas->setValue(*cantidadTardanAparecerOvejas/1000);
    ui->frutosComeOveja->setValue(*frutosComeOveja);
    ui->segundosOvejaComeFrutos->setValue(*segundosOvejaComeFrutos/1000);

    ui->probabilidadAparicionCuervo->setValue(*probabilidadAparicionCuervo);
    ui->cantidadCuervosAparecen->setValue(*cantidadCuervosAparecen);
    ui->cantidadTardanAparecerCuervos->setValue(*cantidadTardanAparecerCuervos/1000);
    ui->frutosComeCuervo->setValue(*frutosComeCuervo);
    ui->segundosCuervoComeFrutos->setValue(*segundosCuervoComeFrutos/1000);

    ui->probabilidadAparicionPlaga->setValue(*probabilidadAparicionPlaga);
    ui->cantidadTardaAparecerPlaga->setValue(*cantidadTardaAparecerPlaga/1000);
    ui->cantidadSegundosDestruyePlaga->setValue(*cantidadSegundosDestruyePlaga/1000);
}

void InterfazConfiguracion::on_bConfigurarABB_clicked()
{
    *costoABB = ui->costoABB->value();
    *crecimientoABB = ui->crecimientoABB->value()*1000;
    *frutosCosechaABB = ui->frutosCosechaABB->value();
    *cantSegCosechaABB = ui->cantSegCosechaABB->value()*1000;
    *menorVentaFrutosABB = ui->menorVentaFrutosABB->value();
    *mayorVentaFrutosABB = ui->mayorVentaFrutosABB->value();



}

void InterfazConfiguracion::on_bConfigurarHeap_clicked()
{
    *costoHeap = ui->costoHeap->value();
    *crecimientoHeap = ui->crecimientoHeap->value()*1000;
    *frutosCosechaHeap = ui->frutosCosechaHeap->value();
    *cantSegCosechaHeap = ui->cantSegCosechaHeap->value()*1000;
    *menorVentaFrutosHeap = ui->menorVentaFrutosHeap->value();
    *mayorVentaFrutosHeap = ui->mayorVentaFrutosHeap->value();

}

void InterfazConfiguracion::on_bConfigurarAVL_clicked()
{
    *costoAVL = ui->costoAVL->value();
    *crecimientoAVL = ui->crecimientoAVL->value()*1000;
    *frutosCosechaAVL = ui->frutosCosechaAVL->value();
    *cantSegCosechaAVL = ui->cantSegCosechaAVL->value()*1000;
    *menorVentaFrutosAVL = ui->menorVentaFrutosAVL->value();
    *mayorVentaFrutosAVL = ui->mayorVentaFrutosAVL->value();

}

void InterfazConfiguracion::on_bConfigurarBonus_clicked()
{
    *costoBonus = ui->costoBonus->value();
    *crecimientoBonus = ui->crecimientoBonus->value()*1000;
    *frutosCosechaBonus = ui->frutosCosechaBonus->value();
    *cantSegCosechaBonus = ui->cantSegCosechaBonus->value()*1000;
    *menorVentaFrutosBonus = ui->menorVentaFrutosBonus->value();
    *mayorVentaFrutosBonus = ui->mayorVentaFrutosBonus->value();

}

void InterfazConfiguracion::on_bConfigurarGranjero_clicked()
{
    *delayMovimientoGranjero = ui->delayMovimientoGranjero->value()*1000;
}

void InterfazConfiguracion::on_bConfigurarOveja_clicked()
{
    *probabilidadAparicionOveja = ui->probabilidadAparicionOveja->value();
    *cantidadOvejasAparecen = ui->cantidadOvejasAparecen->value();
    *cantidadTardanAparecerOvejas = ui->cantidadTardanAparecerOvejas->value()*1000;
    *frutosComeOveja = ui->frutosComeOveja->value();
    *segundosOvejaComeFrutos = ui->segundosOvejaComeFrutos->value()*1000;

}

void InterfazConfiguracion::on_bConfigurarCuervo_clicked()
{
    *probabilidadAparicionCuervo = ui->probabilidadAparicionCuervo->value();
    *cantidadCuervosAparecen = ui->cantidadCuervosAparecen->value();
    *cantidadTardanAparecerCuervos = ui->cantidadTardanAparecerCuervos->value()*1000;
    *frutosComeCuervo = ui->frutosComeCuervo->value();
    *segundosCuervoComeFrutos = ui->segundosCuervoComeFrutos->value()*1000;

}

void InterfazConfiguracion::on_bConfigurarPlaga_clicked()
{
    *probabilidadAparicionPlaga = ui->probabilidadAparicionPlaga->value();
    *cantidadTardaAparecerPlaga = ui->cantidadTardaAparecerPlaga->value()*1000;
    *cantidadSegundosDestruyePlaga = ui->cantidadSegundosDestruyePlaga->value()*1000;

}

void InterfazConfiguracion::on_bConfigurarMercado_clicked()
{
    *tiempoAbreMercado = ui->tiempoAbreMercado->value()*1000;
    *tiempoCierraMercado = ui->tiempoCierraMercado->value()*1000;

}

void InterfazConfiguracion::on_bConfigurarEspanta_clicked()
{
    *costoEspanta = ui->costoEspanta->value();
    *cantidadMaxEspanta = ui->cantidadMaxEspanta->value();

}
