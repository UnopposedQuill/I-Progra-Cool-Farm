#include "interfazcolocarobjetos.h"
#include "ui_interfazcolocarobjetos.h"

InterfazColocarObjetos::InterfazColocarObjetos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazColocarObjetos)
{
    ui->setupUi(this);
}

InterfazColocarObjetos::~InterfazColocarObjetos()
{
    delete ui;
}

void InterfazColocarObjetos::on_bColocarABB_clicked()
{
    if (cantidadABB > 0)
        emit colocarABB();

}

void InterfazColocarObjetos::on_bColocarHeap_clicked()
{
    if (cantidadHeap > 0)
        emit colocarHeap();
}

void InterfazColocarObjetos::on_bColocarAVL_clicked()
{
    if (cantidadAVL > 0)
        emit colocarAVL();
}

void InterfazColocarObjetos::on_bColocarBonus_clicked()
{
    if (cantidadBonus > 0)
        emit colocarBonus();
}

void InterfazColocarObjetos::on_bColocarEspanta_clicked()
{
    if (cantidadEspanta > 0)
        emit colocarEspanta();
}

void InterfazColocarObjetos::setCantidad(int cantidadABB, int cantidadHeap, int cantidadAVL, int cantidadBonus, int cantidadEspanta){
    ui->labelCantidadABB->setText("Cantidad: "+QString::number(cantidadABB));
    ui->labelCantidadHeap->setText("Cantidad: "+QString::number(cantidadHeap));
    ui->labelCantidadAVL->setText("Cantidad: "+QString::number(cantidadAVL));
    ui->labelCantidadBonus->setText("Cantidad: "+QString::number(cantidadBonus));
    ui->labelCantidadEspanta->setText("Cantidad: "+QString::number(cantidadEspanta));

    this->cantidadABB = cantidadABB;
    this->cantidadHeap = cantidadHeap;
    this->cantidadAVL = cantidadAVL;
    this->cantidadBonus = cantidadBonus;
    this->cantidadEspanta = cantidadEspanta;
}
