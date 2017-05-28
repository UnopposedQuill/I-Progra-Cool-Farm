
#include "arboles.h"

/**
 * Esta función imprime el árbol de manera PreOrden
 */
void ArbolBinarioBusqueda::imprimirArbolProfundidadPreOrden() {
    this->imprimirArbolProfundidadPreOrden_Aux(this->raiz);
}

/**
 * Esta función imprime recursivamente un árbol de manera PreOrden, se debe llamar desde el de arriba, si no se
 * entiende exactamente qué hace esta función
 * @param raiz La raíz que se desea imprimir
 */
void ArbolBinarioBusqueda::imprimirArbolProfundidadPreOrden_Aux(NodoArbol * raiz) {
    if(raiz != NULL){
        cout <<raiz->dato <<" ";
        this->imprimirArbolProfundidadPreOrden_Aux(raiz->izquierdo);
        this->imprimirArbolProfundidadPreOrden_Aux(raiz->derecho);
    }
    cout <<endl;
}

/**
 * Esta función busca un nodo que sea equvalente al nodo ingresado por parámetro
 * @param nodoABuscar
 * @return
 */
NodoArbol* ArbolBinarioBusqueda::buscarNodo(unsigned long long dato) {
    return this->buscarNodo_Aux(dato,this->raiz);
}

/*
 * Este método no es el de un binario de búsqueda, sino de un binario común y corriente
NodoArbol* ArbolBinarioBusqueda::buscarNodo_Aux(NodoArbol* nodoABuscar, NodoArbol* raiz) {
    if(raiz == NULL){
        return NULL;
    }
    if(raiz->dato = nodoABuscar->dato){
        return raiz;
    }
    NodoArbol * buscar = this->buscarNodo_Aux(nodoABuscar,raiz->izquierdo);
    if(buscar == NULL){
        buscar = this->buscarNodo_Aux(nodoABuscar,raiz->derecho);
    }
    return buscar;
}
 */


NodoArbol* ArbolBinarioBusqueda::buscarNodo_Aux(unsigned long long int dato, NodoArbol* raiz) {
    if(raiz == NULL){//si la raíz es nula, no encontró el nodo
        return NULL;//retorno NULL
    }
    if(raiz->dato == dato){//si son iguales, encontró el nodo
        return raiz;//retorna el nodo que encontró
    }
    if(raiz->dato > dato){//si el dato donde está es mayor, sólo podría estar del lado izquierdo, y lo va a buscar ahí
        return this->buscarNodo_Aux(dato,raiz->izquierdo);
    }
    return this->buscarNodo_Aux(dato,raiz->derecho);//si no, entonces sólo podría estar en el derecho, y va a buscarlo allí
}

/**
 * Esta función retorna el nodo más grande de un árbol
 * @param raiz
 * @return
 */
NodoArbol* ArbolBinarioBusqueda::mayor(NodoArbol* raiz) {
    if(raiz == NULL){
        return NULL;
    }
    if(raiz->derecho == NULL){
        return raiz;
    }
    return this->mayor(raiz->derecho);
}

/**
 * Esta función elimina un nodo con el dato especificado dentro del árbol
 * @param data El dato que se buscará, y eliminará el nodo cuyo dato equivalga
 */
void ArbolBinarioBusqueda::eliminarNodo(unsigned long long data) {
    this->raiz = this->eliminarNodo_aux(data,this->raiz);
}

/**
 * Esta función elimina un nodo con un dato especificado dentro del árbol recursivamente
 * @param dato El dato que se desea eliminar
 * @param raiz El árbol donde se desea eliminar el nodo
 * @return El nuevo árbol cuyo nodo ya fue eliminado
 */
NodoArbol* ArbolBinarioBusqueda::eliminarNodo_aux(unsigned long long dato, NodoArbol* raiz) {
    if(raiz == NULL){
        return NULL;
    }
    if(dato < raiz->dato){
        raiz->izquierdo = eliminarNodo_aux(dato,raiz->izquierdo);
    }
    else if(dato > raiz->dato){
        raiz->derecho = eliminarNodo_aux(dato,raiz->derecho);
    }
    else if(raiz->izquierdo == NULL && raiz->derecho == NULL){
        raiz = NULL;
    }
    else if(raiz->izquierdo == NULL){
        raiz = raiz->derecho;
    }
    else if(raiz->izquierdo == NULL){
        raiz = raiz->izquierdo;
    }
    else{
        NodoArbol * mayorMenores = mayor(raiz->izquierdo);
        raiz->izquierdo = eliminarNodo_aux(mayorMenores->dato,raiz->izquierdo);
        raiz->dato = mayorMenores->dato;
    }
    return raiz;
}

/**
 * Esta función averigua la cantidad de métodos que posee un árbol binario
 * @return Un entero que representa la cantidad de nodos que posee el árbol
 */
int ArbolBinarioBusqueda::cantidadNodos() {
    return this->cantidadNodos_Aux(this->raiz);
}

/**
 * Esta función averigua recursivamente la cantidad de nodos que posee un árbol, cuya raíz será ingresada como parámetro
 * @param raiz La raíz del árbol del cuál se desea saber la cantidad de nodos
 * @return Un entero que representa la cantidad de nodos que posee el árbol
 */
int ArbolBinarioBusqueda::cantidadNodos_Aux(NodoArbol* raiz) {
    if(raiz != NULL){//hay un nodo más que contar
        return 1 + cantidadNodos_Aux(raiz->izquierdo) + cantidadNodos_Aux(raiz->derecho);//entonces retorna 1, y va y busca la cantidad de nodos de los hijos
    }
    return 0;//si la raíz es nula, no habían más nodos que contar
}

/**
 * Esta función inserta un nuevo nodo que poseerá el entero que recibe como parámetro
 * @param dato El entero que poseerá el nuevo nodo
 * @return La raíz del árbol con el nodo insertado
 */
void ArbolBinarioBusqueda::insertar(unsigned long long int dato){
    this->raiz = this->insertar_Aux(new NodoArbol(dato),this->raiz);
}

/**
 * Esta función insertar un nodo ya existente en un árbol que se espera ya posea al menos 1 nodo
 * @param nodoAInsertar El nodo a insertar
 * @param raiz La raíz recursiva de la raíz donde se desea insertar
 * @return La nueva raíz con el nodo insertado
 */
NodoArbol * ArbolBinarioBusqueda::insertar_Aux(NodoArbol * nodoAInsertar, NodoArbol * raiz) {
    if(raiz == NULL){//espacio al inicio
        return nodoAInsertar;//inserta
    }
    if(raiz->dato == nodoAInsertar->dato){//encontró un duplicado, no inserta un nodo nuevo
        return raiz;
    }
    if(raiz->dato > nodoAInsertar->dato){//el dato que se quiere insertar es menor al dato en el que se está
        raiz->izquierdo = this->insertar_Aux(nodoAInsertar,raiz->izquierdo);//lo inserta en la izquierda
    }
    else{//sino, va a la derecha
        raiz->derecho = this->insertar_Aux(nodoAInsertar,raiz->derecho);//lo inserta a la derecha
    }
    return raiz;//retorna la nueva raíz con todos los nodos enganchados
}
