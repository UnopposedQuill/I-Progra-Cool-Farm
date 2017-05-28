#ifndef ARBOLES_H
#define ARBOLES_H

#include <iostream>
#include <cstdlib>

using namespace std;

struct Heap{

    int largo;
    unsigned long long int * arbol;

    Heap(){
        this->arbol = NULL;
        this->largo = 0;
    }

    void insertar(unsigned long long int datoInsertar);
    void eliminar();
    void imprimirTodo();
};

struct NodoSplay{
    unsigned long long int dato;
    NodoSplay * izquierdo, * derecho, * padre;

    NodoSplay(unsigned long long int dato, NodoSplay * padre){
        this->dato = dato;
        this->izquierdo = this->derecho = NULL;
        this->padre = padre;
    }

    NodoSplay(unsigned long long int dato){
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
    void insertar(unsigned long long int datoInsertar);
    NodoSplay * eliminar(unsigned long long int datoEliminar);
    NodoSplay * buscar(unsigned long long int datoBuscar);

    //Usables si se sabe qué se está haciendo(funciones que hacen la recursividad para las cuatro de arriba)
    void rotarDerecha(NodoSplay * raiz);
    void rotarIzquierda(NodoSplay * raiz);
    void subirARaiz(NodoSplay * raiz);
    void imprimirArbolProfundidadInOrden_Aux(NodoSplay * raiz);
    void imprimirArbolProfundidadPreOrden_Aux(NodoSplay * raiz);
    NodoSplay * mayor(NodoSplay * raiz);
    NodoSplay * insertar_Aux(unsigned long long int datoInsertar,NodoSplay * padreRaiz, NodoSplay * raiz);
    NodoSplay * buscar_Aux(unsigned long long int datoBuscar, NodoSplay * raiz);
    NodoSplay * eliminarNodo_aux(unsigned long long int dato,NodoSplay * raiz);
};

struct NodoAVL{
    int factorBalanceo;
    unsigned long long int dato;
    NodoAVL * izquierdo, * derecho, * padre;

    NodoAVL(unsigned long long int dato, NodoAVL * padre){
        this->dato = dato;
        this->izquierdo = this->derecho = NULL;
        this->padre = padre;
        this->factorBalanceo = 0;
    }

    NodoAVL(unsigned long long int dato){
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
    void insertar(unsigned long long int datoInsertar);
    NodoAVL * eliminar(unsigned long long int datoEliminar);
    NodoAVL * buscar(unsigned long long int datoBuscar);

    //Usables si se sabe qué se está haciendo(funciones que hacen la recursividad para las cuatro de arriba)
    static int altura(NodoAVL * raiz);
    NodoAVL *rotarDerecha(NodoAVL * raiz);
    NodoAVL *rotarIzquierda(NodoAVL * raiz);
    NodoAVL *balancearArbol(NodoAVL * raiz);
    void imprimirArbolProfundidadInOrden_Aux(NodoAVL * raiz);
    void imprimirArbolProfundidadPreOrden_Aux(NodoAVL * raiz);
    NodoAVL * mayor(NodoAVL * raiz);
    NodoAVL * insertar_Aux(unsigned long long int datoInsertar,NodoAVL * padreRaiz, NodoAVL * raiz);
    NodoAVL * buscar_Aux(unsigned long long int datoBuscar, NodoAVL * raiz);
    NodoAVL * eliminarNodo_aux(unsigned long long int dato,NodoAVL * raiz);
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
    void insertar(unsigned long long int dato);
    void eliminarNodo(unsigned long long int data);
    NodoArbol * buscarNodo(unsigned long long int dato);
    int cantidadNodos();
    int cantidadNodos_Aux(NodoArbol * raiz);
    void imprimirArbolProfundidadPreOrden();

    //funciones que hacen la recursividad
    void imprimirArbolProfundidadPreOrden_Aux(NodoArbol * raiz);
    NodoArbol * buscarNodo_Aux(unsigned long long dato, NodoArbol * raiz);
    NodoArbol * insertar_Aux(NodoArbol * nodoAInsertar,NodoArbol * raiz);
    NodoArbol * eliminarNodo_aux(unsigned long long int dato,NodoArbol * raiz);
    NodoArbol * mayor(NodoArbol * raiz);
};
#endif // ARBOLES_H
