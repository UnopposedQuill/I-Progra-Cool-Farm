#ifndef ARBOLES_H
#define ARBOLES_H

#include <iostream>
#include <cstdlib>

using namespace std;

struct Heap{

    int largo;
    long double * arbol;

    Heap(){
        this->arbol = NULL;
        this->largo = 0;
    }

    void insertar(long double datoInsertar);
    void eliminar();
    void imprimirTodo();
};

struct NodoSplay{
    long double dato;
    NodoSplay * izquierdo, * derecho, * padre;

    NodoSplay(long double dato, NodoSplay * padre){
        this->dato = dato;
        this->izquierdo = this->derecho = NULL;
        this->padre = padre;
    }

    NodoSplay(long double dato){
        this->dato = dato;
        this->izquierdo = this->derecho = this->padre = NULL;
    }
};

struct Splay{

    NodoSplay * raiz;

    Splay(){
        this->raiz = NULL;
    }

    //Usables por cualquiera
    void imprimirArbolProfundidadInOrden();
    void imprimirArbolProfundidadPreOrden();
    void insertar(long double datoInsertar);
    NodoSplay * eliminar(long double datoEliminar);
    NodoSplay * buscar(long double datoBuscar);

    //Usables si se sabe qué se está haciendo(funciones que hacen la recursividad para las cuatro de arriba)
    void rotarDerecha(NodoSplay * raiz);
    void rotarIzquierda(NodoSplay * raiz);
    void subirARaiz(NodoSplay * raiz);
    void imprimirArbolProfundidadInOrden_Aux(NodoSplay * raiz);
    void imprimirArbolProfundidadPreOrden_Aux(NodoSplay * raiz);
    NodoSplay * mayor(NodoSplay * raiz);
    NodoSplay * insertar_Aux(long double datoInsertar,NodoSplay * padreRaiz, NodoSplay * raiz);
    NodoSplay * buscar_Aux(long double datoBuscar, NodoSplay * raiz);
    NodoSplay * eliminarNodo_aux(long double dato,NodoSplay * raiz);
};

struct NodoAVL{
    int factorBalanceo;
    long double dato;
    NodoAVL * izquierdo, * derecho, * padre;

    NodoAVL(long double dato, NodoAVL * padre){
        this->dato = dato;
        this->izquierdo = this->derecho = NULL;
        this->padre = padre;
        this->factorBalanceo = 0;
    }

    NodoAVL(long double dato){
        this->dato = dato;
        this->izquierdo = this->derecho = this->padre = NULL;
        this->factorBalanceo = 0;
    }

};

struct AVL{
    NodoAVL * raiz;

    AVL(){
        this->raiz = NULL;
    }

    //Usables por cualquiera
    void imprimirArbolProfundidadInOrden();
    void imprimirArbolProfundidadPreOrden();
    void insertar(long double datoInsertar);
    NodoAVL * eliminar(long double datoEliminar);
    NodoAVL * buscar(long double datoBuscar);

    //Usables si se sabe qué se está haciendo(funciones que hacen la recursividad para las cuatro de arriba)
    static int altura(NodoAVL * raiz);
    NodoAVL *rotarDerecha(NodoAVL * raiz);
    NodoAVL *rotarIzquierda(NodoAVL * raiz);
    NodoAVL *balancearArbol(NodoAVL * raiz);
    void imprimirArbolProfundidadInOrden_Aux(NodoAVL * raiz);
    void imprimirArbolProfundidadPreOrden_Aux(NodoAVL * raiz);
    NodoAVL * mayor(NodoAVL * raiz);
    NodoAVL * insertar_Aux(long double datoInsertar,NodoAVL * padreRaiz, NodoAVL * raiz);
    NodoAVL * buscar_Aux(long double datoBuscar, NodoAVL * raiz);
    NodoAVL * eliminarNodo_aux(long double dato,NodoAVL * raiz);
};

struct NodoArbol{

    long double dato;
    NodoArbol * derecho, * izquierdo;

    NodoArbol(long double data){
        this->dato = data;
        derecho = izquierdo = NULL;
    }
};

struct ArbolBinarioBusqueda{

    NodoArbol * raiz;

    ArbolBinarioBusqueda(){
        this->raiz = NULL;
    }

    //funciones usables por cualquiera
    void insertar(long double dato);
    void eliminarNodo(long double data);
    NodoArbol * buscarNodo(long double dato);
    int cantidadNodos();
    int cantidadNodos_Aux(NodoArbol * raiz);
    void imprimirArbolProfundidadPreOrden();

    //funciones que hacen la recursividad
    void imprimirArbolProfundidadPreOrden_Aux(NodoArbol * raiz);
    NodoArbol * buscarNodo_Aux(long double dato, NodoArbol * raiz);
    NodoArbol * insertar_Aux(NodoArbol * nodoAInsertar,NodoArbol * raiz);
    NodoArbol * eliminarNodo_aux(long double dato,NodoArbol * raiz);
    NodoArbol * mayor(NodoArbol * raiz);
};
#endif // ARBOLES_H
