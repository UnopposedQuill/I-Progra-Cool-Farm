#include "interfazmercado.h"
#include "ui_interfazmercado.h"
#include <QDebug>
InterfazMercado::InterfazMercado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazMercado)
{
    ui->setupUi(this);
}

InterfazMercado::~InterfazMercado()
{
    delete ui;
}

void InterfazMercado::setParametros(int pCantidadABB, int pCantidadHeap, int pCantidadAVL, int pCantidadBonus, int pCantidadEspanta, int pCantidadMaxEspanta, double pDinero)
{
    dinero = pDinero;
    cantidadABB = pCantidadABB;
    cantidadHeap = pCantidadHeap;
    cantidadAVL = pCantidadAVL;
    cantidadBonus = pCantidadBonus;
    cantidadEspanta = pCantidadEspanta;
    cantidadMaxEspanta = pCantidadMaxEspanta;
    ui->labelDinero->setText("Dinero: " + QString::number(dinero));
    ui->labelPoseeABB->setText("Posee: " + QString::number(cantidadABB));
    ui->labelPoseeHeap->setText("Posee: " + QString::number(cantidadHeap));
    ui->labelPoseeAVL->setText("Posee: " + QString::number(cantidadAVL));
    ui->labelPoseeBonus->setText("Posee: " + QString::number(cantidadBonus));
    ui->labelPoseeEspanta->setText("Posee: " + QString::number(cantidadEspanta));
    ui->labelCantidadMaxEspanta->setText("Cantidad Máxima: " + QString::number(cantidadMaxEspanta));
}


void InterfazMercado::setInfoABB(double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos){
    ui->labelCostoABB->setText("Costo: $" + QString::number(pCosto));
    ui->labelCrecimientoABB->setText("Crece: " + QString::number(pCrecimiento/1000) + " seg");
    ui->labelCosechaABB->setText("Cosecha: " + QString::number(pFrutosCosecha) + "/" + QString::number(pCantSegCosecha/1000) + "seg");
    ui->labelPrecioFrutosABB->setText("$" + QString::number(pMenorVentaFrutos) + " - $" + QString::number(pMayorVentaFrutos));

    std::mt19937 generator(time(0)+1); // Generador de numeros randoms cuya seed es igual a time(0)
    std::uniform_real_distribution<> distr(pMenorVentaFrutos, pMayorVentaFrutos); // Distribuidor
    precioFrutoABB = distr(generator);
    ui->labelPrecioActualABB->setText("Precio Actual: $" + QString::number(precioFrutoABB));
    costoABB = pCosto;
}

void InterfazMercado::setInfoHeap(double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos){
    ui->labelCostoHeap->setText("Costo: $" + QString::number(pCosto));
    ui->labelCrecimientoHeap->setText("Crece: " + QString::number(pCrecimiento/1000) + " seg");
    ui->labelCosechaHeap->setText("Cosecha: " + QString::number(pFrutosCosecha) + "/" + QString::number(pCantSegCosecha/1000) + "seg");
    ui->labelPrecioFrutosHeap->setText("$" + QString::number(pMenorVentaFrutos) + " - $" + QString::number(pMayorVentaFrutos));

    std::mt19937 generator(time(0)+2); // Generador de numeros randoms cuya seed es igual a time(0)
    std::uniform_real_distribution<> distr(pMenorVentaFrutos, pMayorVentaFrutos); // Distribuidor
    precioFrutoHeap = distr(generator);

    ui->labelPrecioActualHeap->setText("Precio Actual: $" + QString::number(precioFrutoHeap));
    costoHeap = pCosto;
}

void InterfazMercado::setInfoAVL(double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos){
    ui->labelCostoAVL->setText("Costo: $" + QString::number(pCosto));
    ui->labelCrecimientoAVL->setText("Crece: " + QString::number(pCrecimiento/1000) + " seg");
    ui->labelCosechaAVL->setText("Cosecha: " + QString::number(pFrutosCosecha) + "/" + QString::number(pCantSegCosecha/1000) + "seg");
    ui->labelPrecioFrutosAVL->setText("$" + QString::number(pMenorVentaFrutos) + " - $" + QString::number(pMayorVentaFrutos));

    std::mt19937 generator(time(0)+3); // Generador de numeros randoms cuya seed es igual a time(0)
    std::uniform_real_distribution<> distr(pMenorVentaFrutos, pMayorVentaFrutos); // Distribuidor
    precioFrutoAVL = distr(generator);

    ui->labelPrecioActualAVL->setText("Precio Actual: $" + QString::number(precioFrutoAVL));
    costoAVL = pCosto;
}

void InterfazMercado::setInfoBonus(double pCosto, int pCrecimiento, int pFrutosCosecha, int pCantSegCosecha, double pMenorVentaFrutos, double pMayorVentaFrutos){
    ui->labelCostoBonus->setText("Costo: $" + QString::number(pCosto));
    ui->labelCrecimientoBonus->setText("Crece: " + QString::number(pCrecimiento/1000) + " seg");
    ui->labelCosechaBonus->setText("Cosecha: " + QString::number(pFrutosCosecha) + "/" + QString::number(pCantSegCosecha/1000)+ "seg");
    ui->labelPrecioFrutosBonus->setText("$" + QString::number(pMenorVentaFrutos) + " - $" + QString::number(pMayorVentaFrutos));

    std::mt19937 generator(time(0)+4); // Generador de numeros randoms cuya seed es igual a time(0)
    std::uniform_real_distribution<> distr(pMenorVentaFrutos, pMayorVentaFrutos); // Distribuidor
    precioFrutoBonus = distr(generator);

    ui->labelPrecioActualBonus->setText("Precio Actual: $" + QString::number(precioFrutoBonus));
    costoBonus = pCosto;
}

void InterfazMercado::setInfoEspanta(double pCosto){
    ui->labelCostoEspanta->setText("Costo: $" + QString::number(pCosto));
    costoEspanta = pCosto;
}


void InterfazMercado::on_bComprarABB_clicked()
{
    if(dinero-costoABB >= 0){
        dinero -= costoABB;
        ui->labelDinero->setText("Dinero: " + QString::number(dinero));
        cantidadABB++;
        ui->labelPoseeABB->setText("Posee: " + QString::number(cantidadABB));
        emit comprarABB();
    }

}

void InterfazMercado::on_bComprarHeap_clicked()
{
    if(dinero-costoHeap >= 0){
        dinero -= costoHeap;
        ui->labelDinero->setText("Dinero: " + QString::number(dinero));
        cantidadHeap++;
        ui->labelPoseeHeap->setText("Posee: " + QString::number(cantidadHeap));
        emit comprarHeap();
    }

}

void InterfazMercado::on_bComprarAVL_clicked()
{
    if(dinero-costoAVL >= 0){
        dinero -= costoAVL;
        ui->labelDinero->setText("Dinero: " + QString::number(dinero));
        cantidadAVL++;
        ui->labelPoseeAVL->setText("Posee: " + QString::number(cantidadAVL));
        emit comprarAVL();
    }

}

void InterfazMercado::on_bComprarBonus_clicked()
{
    if(dinero-costoBonus >= 0){
        dinero -= costoBonus;
        ui->labelDinero->setText("Dinero: " + QString::number(dinero));
        cantidadBonus++;
        ui->labelPoseeBonus->setText("Posee: " + QString::number(cantidadBonus));
        emit comprarBonus();
    }

}

void InterfazMercado::on_bComprarEspanta_clicked()
{
    if(dinero-costoEspanta >= 0 && cantidadEspanta < cantidadMaxEspanta){
        dinero -= costoEspanta;
        ui->labelDinero->setText("Dinero: " + QString::number(dinero));
        cantidadEspanta++;
        ui->labelPoseeEspanta->setText("Posee: " + QString::number(cantidadEspanta));
        emit comprarEspanta();
    }

}

void InterfazMercado::setTableArbolesEnGranja(QVector<QVector<QVector<int>>> pArbolesEnGranja){

    QSignalMapper* signalMapper = new QSignalMapper (this);
    //pArbolesEnGranja = [[TIPO][UBICACION X][UBICACION Y][CANTIDAD FRUTOS][VENDIDOS][PERDIDOS]], [...], ...
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);//Borro las rows que hayan antes
    ui->tableWidget->setColumnCount(7);
    QStringList horzHeaders;
    horzHeaders << "Árbol" << "Ubicación" << "Frutos en el Árbol" << "Monto Total" << "Vendidos" << "Perdidos" << " ";
    ui->tableWidget->setHorizontalHeaderLabels(horzHeaders);
    for (int filaMatriz = 0; filaMatriz < pArbolesEnGranja.length() ; filaMatriz++){
        for (int columnaMatriz = 0; columnaMatriz < pArbolesEnGranja[0].length() ; columnaMatriz++){
            if(pArbolesEnGranja[filaMatriz][columnaMatriz][0] != 0){
                for (int datoMatriz = 0; datoMatriz < 7 ; datoMatriz++){
                    long double precioVenta;
                    switch(datoMatriz){//[TIPO][UBICACION X][UBICACION Y][CANTIDAD FRUTOS][VENDIDOS][PERDIDOS]
                        case 0://TIPO
                            switch (pArbolesEnGranja[filaMatriz][columnaMatriz][0]){
                                case 0:
                                    break;
                                case 1:
                                    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem("ABB"));
                                    precioVenta = precioFrutoABB;
                                    break;
                                case 2:
                                    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem("Heap"));
                                    precioVenta = precioFrutoHeap;
                                    break;
                                case 3:
                                    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem("AVL"));
                                    precioVenta = precioFrutoAVL;
                                    break;
                                case 4:
                                    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem("Bonus"));
                                    precioVenta = precioFrutoBonus;
                                    break;
                            }
                            break;
                        case 1://UBICACION
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem(QString::number(pArbolesEnGranja[filaMatriz][columnaMatriz][1]) + "," + QString::number(pArbolesEnGranja[filaMatriz][columnaMatriz][2])));
                            break;
                        case 2://Cantidad de FRUTOS en el arbol
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem(QString::number(pArbolesEnGranja[filaMatriz][columnaMatriz][3])));
                            break;
                        case 3://MONTO TOTAL AL QUE SE VENDEN
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem(QString::number((double)(precioVenta*pArbolesEnGranja[filaMatriz][columnaMatriz][3]))));
                            break;
                        case 4://VENDIDOS
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem(QString::number(pArbolesEnGranja[filaMatriz][columnaMatriz][4])));
                            break;
                        case 5://PERDIDOS
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, datoMatriz, new QTableWidgetItem(QString::number(pArbolesEnGranja[filaMatriz][columnaMatriz][5])));
                            break;
                        case 6://BOTON de venta
                            QPushButton* btn_edit = new QPushButton();
                            btn_edit->setText("Vender Frutos");
                            connect (btn_edit, SIGNAL(clicked(bool)),signalMapper,SLOT(map()));
                            signalMapper->setMapping(btn_edit, QString::number(filaMatriz)+"-"+QString::number(columnaMatriz)+"-"+QString::number(ui->tableWidget->rowCount()-1));
                            ui->tableWidget->setCellWidget(ui->tableWidget->rowCount()-1, datoMatriz, btn_edit);
                            break;
                    }//SWITCH COLUMNA

                }//FOR DATO
            }
        }//FOR COLUMNA MATRIZ
    }//FOR FILA MATRIZ

    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(venderArbolFila(QString)));
}
void InterfazMercado::setPunteros(QVector<QVector<QVector<int>>> *pPunteroArbolesEnGranja, double *pPunteroDinero){
    punteroArbolesEnGranja = pPunteroArbolesEnGranja;
    punteroDinero = pPunteroDinero;
}

void InterfazMercado::venderArbolFila(QString filaCol){
    QStringList pieces = filaCol.split( "-" );
    QString filaString = pieces.value(0);
    QString columnaString = pieces.value(1);
    QString filaEnTablaString = pieces.value(2);
    int fila = filaString.toInt();
    int columna = columnaString.toInt();
    int filaEnTabla = filaEnTablaString.toInt();

    //punteroArbolesEnGranja = [[TIPO][UBICACION X][UBICACION Y][CANTIDAD FRUTOS][VENDIDOS][PERDIDOS]], [...], ...
    (*punteroArbolesEnGranja)[fila][columna][4] += (*punteroArbolesEnGranja)[fila][columna][3];//Los vendí
    (*punteroArbolesEnGranja)[fila][columna][3] = 0;//Los vendí
    dinero += (ui->tableWidget->item(filaEnTabla, 3)->text()).toDouble();
    *punteroDinero = dinero;
    ui->labelDinero->setText("Dinero: " + QString::number(dinero));
    ui->tableWidget->item(filaEnTabla, 2)->setText("0");//No hay frutos
    ui->tableWidget->item(filaEnTabla, 3)->setText("0");//El monto al que se venden es 0
    ui->tableWidget->item(filaEnTabla, 4)->setText(QString::number((*punteroArbolesEnGranja)[fila][columna][4]));//Vendidos
}



void InterfazMercado::on_bVenderTodosFrutos_clicked()
{
    //horzHeaders << "Árbol" << "Ubicación" << "Frutos en el Árbol" << "Monto Total" << "Vendidos" << "Perdidos";
    //Ubicacion: X,Y
    for(int fila = 0; fila < ui->tableWidget->rowCount() ; fila++){
        QStringList posicionesXY = ui->tableWidget->item(fila,1)->text().split( "," );
        venderArbolFila(posicionesXY.value(0)+"-"+posicionesXY.value(1)+"-"+QString::number(fila));
    }
}
void InterfazMercado::actualizarArbol(int posX, int posY)
{
        QString referencia = QString::number(posX)+","+QString::number(posY);
        for(int fila = 0; fila < ui->tableWidget->rowCount() ; fila++){
            if(!QString::compare(ui->tableWidget->item(fila,1)->text(), referencia, Qt::CaseInsensitive)){
                ui->tableWidget->item(fila,2)->setText(QString::number((*punteroArbolesEnGranja)[posX][posY][3]));//Frutos en el Arbol
                switch ((*punteroArbolesEnGranja)[posX][posY][0]) {
                case 1:
                    ui->tableWidget->item(fila,3)->setText(QString::number(precioFrutoABB*(*punteroArbolesEnGranja)[posX][posY][3]));//Monto Total
                    break;
                case 2:
                    ui->tableWidget->item(fila,3)->setText(QString::number(precioFrutoHeap*(*punteroArbolesEnGranja)[posX][posY][3]));//Monto Total
                    break;
                case 3:
                    ui->tableWidget->item(fila,3)->setText(QString::number(precioFrutoAVL*(*punteroArbolesEnGranja)[posX][posY][3]));//Monto Total
                    break;
                case 4:
                    ui->tableWidget->item(fila,3)->setText(QString::number(precioFrutoBonus*(*punteroArbolesEnGranja)[posX][posY][3]));//Monto Total
                    break;
                default:
                    break;
                }
                ui->tableWidget->item(fila,4)->setText(QString::number((*punteroArbolesEnGranja)[posX][posY][4]));//Vendidos
                ui->tableWidget->item(fila,5)->setText(QString::number((*punteroArbolesEnGranja)[posX][posY][5]));//Perdidos
                break;
            }
        }
        //Recorrí el for y no lo encontré por lo que debo de añadirlo
        ui->tableWidget->clear();
        setTableArbolesEnGranja((*punteroArbolesEnGranja));

}




