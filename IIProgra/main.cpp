#include "mainwindow.h"
#include "arboles.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QFile * archivo = new QFile("abb.o");
    if(!archivo->open(QIODevice::ReadOnly)){
       return 1;
    }
    char * s = (char*)malloc(1024 * sizeof(char));
    int letrasLeidas = 1;
    while(letrasLeidas > 0){
        letrasLeidas = archivo->readLine(s, 1023);
        for(int i = 0;i < letrasLeidas;i++){
            cout <<s[i];
        }
    }
    cout <<endl;

    return a.exec();
}
