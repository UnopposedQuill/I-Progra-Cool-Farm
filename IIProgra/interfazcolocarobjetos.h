#ifndef INTERFAZCOLOCAROBJETOS_H
#define INTERFAZCOLOCAROBJETOS_H

#include <QDialog>

namespace Ui {
class InterfazColocarObjetos;
}

class InterfazColocarObjetos : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazColocarObjetos(QWidget *parent = 0);
    ~InterfazColocarObjetos();

    void setCantidad(int cantidadABB, int cantidadHeap, int cantidadAVL, int cantidadBonus, int cantidadEspanta);

private:
    Ui::InterfazColocarObjetos *ui;
    int cantidadABB, cantidadHeap, cantidadAVL, cantidadBonus, cantidadEspanta;
signals:
    void colocarABB();
    void colocarHeap();
    void colocarAVL();
    void colocarBonus();
    void colocarEspanta();
private slots:
    void on_bColocarABB_clicked();
    void on_bColocarHeap_clicked();
    void on_bColocarAVL_clicked();
    void on_bColocarBonus_clicked();
    void on_bColocarEspanta_clicked();
};

#endif // INTERFAZCOLOCAROBJETOS_H
