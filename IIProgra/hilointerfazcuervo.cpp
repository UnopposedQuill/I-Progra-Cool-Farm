#include "hilointerfazcuervo.h"
#include <QPixmap>
HiloInterfazCuervo::HiloInterfazCuervo(VentanaPrincipal *pVentana, int posX, int posY, int pModificadorSleep){
    modificadorSleep = pModificadorSleep;
    ventana = pVentana;
    this->posX = posX;
    this->posY = posY;
    labelCuervo = new QLabel(ventana);
    pixmap.load(":/cuervo/Images/Raven/raven-black0001.png");
    pixmap = pixmap.scaled(61, 51, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    labelCuervo->setPixmap(pixmap);
    labelCuervo->setGeometry(195 + posX*80,  21 + posY*80, 61, 51);
    labelCuervo->show();


    activo = true;

}

void HiloInterfazCuervo::modificarPos(int posX, int posY){
    this->posX = posX;
    this->posY = posY;
    QMutex mutex;
    mutex.lock();
    labelCuervo->move(195 + posX*80, 21 + posY*80);
    mutex.unlock();
}

void HiloInterfazCuervo::run(){
    int contador = 2;
    msleep(5000);
    QMutex mutex;
    sleep(modificadorSleep);
    while (activo){

        if (contador == 26){
            contador = 1;
        }

        //mutex.lock();
        if(contador < 10){

            if (pixmap.load(":/cuervo/Images/Raven/raven-black000"+QString::number(contador)+".png")){
                pixmap = pixmap.scaled(61, 51, Qt::KeepAspectRatio, Qt::SmoothTransformation);
                mutex.lock();
                labelCuervo->setPixmap(pixmap);
                mutex.unlock();
            }
            else
                qDebug()<<"error";
        }
        else{
            pixmap.load(":/cuervo/Images/Raven/raven-black00"+QString::number(contador)+".png");
            pixmap = pixmap.scaled(61, 51, Qt::KeepAspectRatio, Qt::SmoothTransformation);
            mutex.lock();
            labelCuervo->setPixmap(pixmap);
            mutex.unlock();
        }

        //mutex.unlock();
        contador++;
        msleep(5);
    }
}
