#ifndef INTERFAZGRAFICAS_H
#define INTERFAZGRAFICAS_H

#include <QDialog>

namespace Ui {
class InterfazGraficas;
}

class InterfazGraficas : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazGraficas(QWidget *parent = 0);
    ~InterfazGraficas();
    void setTableArbolesEnGranja(QVector<QVector<int>> pArbolesEnGranja);

private:
    Ui::InterfazGraficas *ui;
};

#endif // INTERFAZGRAFICAS_H
