#include "interfazgraficas.h"
#include "ui_interfazgraficas.h"

InterfazGraficas::InterfazGraficas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazGraficas)
{
    ui->setupUi(this);
}

InterfazGraficas::~InterfazGraficas()
{
    delete ui;
}

void InterfazGraficas::setTableArbolesEnGranja(QVector<QVector<int>> pArbolesEnGranja){

    //pArbolesEnGranja = [[TIPO][UBICACION X][UBICACION Y][CANTIDAD FRUTOS][VENDIDOS][PERDIDOS]], [...], ...
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(pArbolesEnGranja.length());//Borro las rows que hayan antes
    ui->tableWidget->setColumnCount(6);
    QStringList horzHeaders;
    horzHeaders << "Árbol" << "Ubicación" << "Frutos en el Árbol" << "Monto Total" << "Vendidos" << "Perdidos";
    ui->tableWidget->setHorizontalHeaderLabels(horzHeaders);
    for (int row = 0; row < pArbolesEnGranja.length() ; row++){
        for (int column = 0; column < 6 ; column++){
            int precioVenta = 0;
            switch(column){
                case 0://TIPO
                    switch (pArbolesEnGranja[row][0]){
                        case 0:
                            ui->tableWidget->setItem(row, column, new QTableWidgetItem("ABB"));
                            break;
                        case 1:
                            ui->tableWidget->setItem(row, column, new QTableWidgetItem("Heap"));
                            break;
                        case 2:
                            ui->tableWidget->setItem(row, column, new QTableWidgetItem("AVL"));
                            break;
                        case 3:
                            ui->tableWidget->setItem(row, column, new QTableWidgetItem("Bonus"));
                            break;
                    }
                    break;
                case 1://UBICACION
                    ui->tableWidget->setItem(row, column, new QTableWidgetItem(QString::number(pArbolesEnGranja[row][1]) + "," + QString::number(pArbolesEnGranja[row][2])));
                    break;
                case 2://Cantidad de FRUTOS en el arbol
                    ui->tableWidget->setItem(row, column, new QTableWidgetItem(QString::number(pArbolesEnGranja[row][3])));
                    break;
                case 3://MONTO TOTAL AL QUE SE VENDEN
                    ui->tableWidget->setItem(row, column, new QTableWidgetItem(QString::number(precioVenta*pArbolesEnGranja[row][3])));
                    break;
                case 4://VENDIDOS
                    ui->tableWidget->setItem(row, column, new QTableWidgetItem(QString::number(pArbolesEnGranja[row][4])));
                    break;
                case 5://PERDIDOS
                    ui->tableWidget->setItem(row, column, new QTableWidgetItem(QString::number(pArbolesEnGranja[row][5])));
                    break;
            }//SWITCH COLUMNA

        }//FOR COLUMN
    }//FOR ROW
}
