
#include "arboles.h"

void Heap::insertar(unsigned long long datoInsertar){

    this->largo++;
    int posicionAInsertar = this->largo;//la posición de insertado siempre inicia en largo (última posición en 1-basado)
    //primero tengo que revisar si estaba vacío, si estaba vacío tengo que crearlo
    if(this->largo == 1){
        this->arbol = (unsigned long long int*) calloc(this->largo,sizeof(unsigned long long int));
        //posiciónAInsertar ya está en la única posición: largo-1 == 0
    }
    else{//tengo que modificarlo
        unsigned long long int * punteroRevisar = (unsigned long long int*) realloc(this->arbol,this->largo * sizeof(unsigned long long int));
        if(punteroRevisar != NULL){
            this->arbol = punteroRevisar;
        }
    }
    this->arbol[posicionAInsertar-1] = datoInsertar;//inserto al final de la lista
    //ahora tengo que realizar los intercambios de posiciones
    while(posicionAInsertar != 1){//mientras la posición a insertar sea diferente a la raiz, tengo que revisar posibles intercambios
        if(posicionAInsertar%2 == 0){//si la posición a insertar es par, la posible posición de intercambio está en k/2
            if(datoInsertar >= this->arbol[posicionAInsertar/2-1]){//si el valor a insertar es mayor a su k/2, el -1 es para convertirlo a 0-basado
                //entonces hago el intercambio de posiciones
                this->arbol[posicionAInsertar-1] = this->arbol[posicionAInsertar/2-1];//coloco el valor del "nodo padre" en donde estaba insertando
                this->arbol[posicionAInsertar/2-1] = datoInsertar;//luego coloco el dato a ser insertado en el lugar del "nodo padre"
                posicionAInsertar/=2;//didividodividovido entre 2 la posición a insertar
                continue;//siguiente iteración
            }
            break;//si es menor o igual entonces termina, pues ya verificó todo
        }
        else{
            if(datoInsertar >= this->arbol[(posicionAInsertar-3)/2]){//si el valor a insertar es mayor a su (k-3)/2, (ya convertido en 0-basado)
                //entonces hago el intercambio de posiciones
                this->arbol[posicionAInsertar-1] = this->arbol[(posicionAInsertar-3)/2];//coloco el valor del "nodo padre" en donde estaba insertando
                this->arbol[(posicionAInsertar-3)/2] = datoInsertar;//luego coloco el dato a ser insertado en el lugar del "nodo padre"
                posicionAInsertar /= 2;//divido entre 2 la posición a insertar y luego resto 1
                continue;//siguiente iteración
            }
            break;//si es menor o igual entonces termina, pues ya verificó todo
        }
    }
}

void Heap::imprimirTodo(){
    for(int i = 0;i < this->largo; i++){
        cout <<this->arbol[i] <<" ";
    }
    cout <<endl;
}

void Heap::eliminar(){
    this->arbol[0] = this->arbol[this->largo-1];//sustituyo el valor al inicio con el valor al final
    this->largo--;//reduzco en 1 el largo del heap
    if(this->largo == 0){//si llega a ser cero, entonces libero todo
        cfree(this->arbol);
        this->arbol = NULL;
    }
    else{
        unsigned long long int * punteroRevisar = (unsigned long long int*) realloc(this->arbol,this->largo * sizeof(unsigned long long int));
        if(punteroRevisar != NULL){
            this->arbol = punteroRevisar;
        }
        int posicionAVerificar = 1;
        while(posicionAVerificar <= this->largo && posicionAVerificar*2 <= this->largo && posicionAVerificar*2+1 <= this->largo){//mientras haya nodos hijos que se puedan revisar
            if(max(this->arbol[posicionAVerificar*2-1],this->arbol[posicionAVerificar*2]) > this->arbol[posicionAVerificar-1]){//si el máximo de los dos hijos rebasa al padre, entonces tengo que intercambiarlos
                //ahora tengo que verificar cuál de los dos lo rebaso
                long double mover = this->arbol[posicionAVerificar-1];;//el número que se va a pasar de lugar hacia abajo en la jerarquía
                if(this->arbol[posicionAVerificar*2-1] > mover){//la posición 2k lo rebasó
                    this->arbol[posicionAVerificar-1] = this->arbol[posicionAVerificar*2-1];//paso el número mayor
                    this->arbol[posicionAVerificar*2-1] = mover;//ahora paso hacia abajo el número recién movido
                    posicionAVerificar*=2;//duplico la posición a verificar para verificar las siguientes posiciones
                }
                else{//la posición 2k+1 lo rebasó
                    this->arbol[posicionAVerificar-1] = this->arbol[posicionAVerificar*2];//paso el número mayor
                    this->arbol[posicionAVerificar*2] = mover;//ahora paso hacia abajo el número recién movido
                    posicionAVerificar = posicionAVerificar*2+1;//duplico la posición y luego la incremento a verificar para verificar las siguientes posiciones
                }
            }
            else{//sino, entonces simplemente termina todo
                break;
            }
        }
    }
}
