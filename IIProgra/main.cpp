#include "mainwindow.h"
#include "arboles.h"
#include <QApplication>
#include <QFile>
#include <QDataStream>
#include <QList>
#include <iostream>
#include <cstdlib>

using namespace std;

bool guardarPartidas(QString nombreJugador, unsigned long long int puntajeJugador){
    QFile * archivoGuardados = new QFile("scores.sav");
    if(archivoGuardados->exists() && archivoGuardados->size() != 0){//había una vieja tabla de posiciones, tengo que colocarlo donde debe
        if(!archivoGuardados->open(QIODevice::ReadWrite)){
            return false;//no logró abrirlo
        }
        QDataStream in(archivoGuardados);
        //consigo las dos listas
        QList <QString> listaNombres;
        in >> listaNombres;
        QList<unsigned long long int> lista;
        in >> lista;

        for(int i = min(9, lista.size()-1);i >= 0;i--){//voy recorriendo la lista de los valores bajos hacia los altos
            if(lista.at(i) < puntajeJugador){//encontré un lugar donde insertarlo
                lista.insert(i, puntajeJugador);
                listaNombres.insert(i, nombreJugador);
                break;
            }
        }
        while (lista.size() > 10) {//mientras no hayan 10
            lista.removeLast();//me vuelo el último de ambas listas
            listaNombres.removeLast();
        }
        archivoGuardados->remove();//me lo vuelo, para crearlo de nuevo
        archivoGuardados->open(QIODevice::WriteOnly);
        QDataStream out(archivoGuardados);
        out << listaNombres;
        out << lista;//vuelvo a colocar las listas dentro del archivo
    }
    else{//creo uno nuevo
        if(!archivoGuardados->open(QIODevice::ReadWrite)){
            return false;//no logró abrirlo,
        }
        QDataStream out(archivoGuardados);
        QList <unsigned long long int> lista;
        QList <QString> listaNombres;
        lista.append(puntajeJugador);
        listaNombres.append(nombreJugador);

        out << listaNombres;
        out << lista;//guardo todo
    }
    archivoGuardados->close();
    return true;
}

void imprimirDatosJugadores(){
    QFile * archivoGuardados = new QFile("scores.sav");
    if(archivoGuardados->exists() && archivoGuardados->size() != 0 && archivoGuardados->open(QIODevice::ReadOnly)){
        QDataStream in(archivoGuardados);
        QList <unsigned long long int> lista;
        QList <QString> listaNombres;

        in >> listaNombres;
        in >> lista;

        cout <<"Lista de Puntajes:" <<endl;
        for(int i = 0;i < lista.size() && i < listaNombres.size();i++){
            cout <<"Jugador: " <<listaNombres.at(i).toStdString()<<"\t" <<lista.at(i) <<endl;
        }

        archivoGuardados->close();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*
    QFile * archivo = new QFile("pruebas.sav");
    if(archivo->exists()){
        //leer
        if(!archivo->open(QIODevice::ReadOnly)){
            return 2;
        }
        QDataStream in(archivo);
        QList<unsigned long long int> lista;
        in >> lista;
        for(int i = 0;i < lista.size();i++){
            cout <<lista.at(i) <<" ";
        }
        cout <<endl;
    }
    else{
        //escribir
        if(!archivo->open(QIODevice::WriteOnly)){
           return 1;
        }
        QDataStream out(archivo);   // we will serialize the data into the file
        QList <unsigned long long int> lista;
        lista.append(10);
        lista.append(20);
        lista.append(30);
        lista.append(40);

        lista.append(50);
        lista.append(60);
        lista.append(70);
        lista.append(80);
        out << lista;

    }
    archivo->close();
    */
    /*
    char * s = (char*)malloc(1024 * sizeof(char));
    int letrasLeidas = 1;
    while(letrasLeidas > 0){
        letrasLeidas = archivo->readLine(s, 1023);
        for(int i = 0;i < letrasLeidas;i++){
            cout <<s[i];
        }
    }
    cout <<endl;
    */

    guardarPartidas("PP2", 600);

    imprimirDatosJugadores();
    return 0;
}
