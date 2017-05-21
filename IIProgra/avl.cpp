
#include "arboles.h"

/**
 * @brief AVL::rotarDerecha
 * En esta función se rotan los hijos de un nodo hacia la derecha
 * @param raiz La raiz a rotar, cuyo hijo izquierdo es el que será el nuevo padre
 */
NodoAVL * AVL::rotarDerecha(NodoAVL *raiz){
    //raiz es el padre del que quiero subir, que es el hijo izquierdo
    //en este punto sé que tiene un hijo izquierdo, si no no sería llamada desde las otras funciones
    NodoAVL * nodoASalvar = raiz->izquierdo->derecho;//resguardo el posible hijo derecho que pudiera poseer el hijo izquierdo, que puede o no existir
    if(nodoASalvar != NULL){
        nodoASalvar->padre = raiz;
    }
    if(raiz->padre != NULL){//tengo que verificar si tiene un padre, si tiene un padre tengo que modificar la información de los hijos
        //ahora tengo que revisar si raiz era hijo derecho o izquierdo
        if(raiz->padre->izquierdo == raiz){//si era el izquierdo lo coloco a la izquierda
            raiz->padre->izquierdo = raiz->izquierdo;//bajo el puntero del padre
        }
        else{//lo coloco a la derecha
            raiz->padre->derecho = raiz->izquierdo;//bajo el puntero del padre
        }
    }
    raiz->izquierdo->padre = raiz->padre;//anclo el nodo a subir a su nuevo padre
    raiz->padre = raiz->izquierdo;//bajo de nivel el nodo a bajar
    raiz->izquierdo->derecho = raiz;//ahora hago que el nodo a bajar sea el hijo derecho del nodo a subir
    raiz->izquierdo = nodoASalvar;//ahora anclo el viejo hijo derecho del hijo izquierdo, el último fue el que subió
    return raiz->padre;
}

/**
 * @brief AVL::rotarIzquierda
 * En esta función se rotan los hijos de un nodo hacia la Izquierda
 * @param raiz La raiz a rotar
 */
NodoAVL * AVL::rotarIzquierda(NodoAVL * raiz){
    //en este punto sé que tiene un hijo derecho, si no no sería llamada desde las otras funciones
    //raiz es el padre del que quiero subir, que es el hijo derecho
    NodoAVL * nodoASalvar = raiz->derecho->izquierdo;//resguardo el posible hijo derecho que pudiera poseer el hijo izquierdo, que puede o no existir
    if(nodoASalvar != NULL){
        nodoASalvar->padre = raiz;
    }
    if(raiz->padre != NULL){//tengo que verificar si tiene un padre, si tiene un padre tengo que modificar la información de los hijos
        if(raiz->padre->izquierdo == raiz){//si era el izquierdo lo coloco a la izquierda
            raiz->padre->izquierdo = raiz->derecho;//bajo el puntero del padre
        }
        else{//lo coloco a la derecha
            raiz->padre->derecho = raiz->derecho;//bajo el puntero del padre
        }
    }
    raiz->derecho->padre = raiz->padre;//anclo el nodo a subir a su nuevo padre
    raiz->padre = raiz->derecho;//bajo de nivel el nodo a bajar
    raiz->derecho->izquierdo = raiz;//ahora hago que el nodo a bajar sea el hijo derecho del nodo a subir
    raiz->derecho = nodoASalvar;//ahora anclo el viejo hijo derecho del hijo izquierdo, el último fue el que subió
    return raiz->padre;
}

/**
 * @brief AVL::altura
 * Esta función averigua la altura de un árbol
 * @param raiz El árbol del cuál se quiere saber la altura
 * @return Un entero que representa la altura
 */
int AVL::altura(NodoAVL *raiz){
    if(raiz == NULL){//si la raiz es nula, retorno 0
        return 0;
    }//sino voy y busco la altura de los subárboles+1
    return 1+max(altura(raiz->izquierdo),altura(raiz->derecho));
}

/**
 * @brief AVL::balancearArbol
 * Esta función recorre todo el árbol pasado por parámetro balancéandolo completamente
 * @param raiz El árbol a rebalancear
 */
NodoAVL * AVL::balancearArbol(NodoAVL *raiz){
    if(raiz != NULL){//hay un nodo que podría tener que ser rebalanceado
        raiz->factorBalanceo = altura(raiz->derecho)-altura(raiz->izquierdo);//saco el nuevo factor de balance
        if(raiz->factorBalanceo > 1){//se desbalanceó hacia la derecha
            //factor de balanceo de 2, falta verificar si el factor de equilibrio del hijo izquierdo es igual a -1
            if(raiz->derecho == NULL || raiz->derecho->factorBalanceo != -1){//factor del hijo derecho != -1
                raiz = rotarIzquierda(raiz);//roto la raiz hacia la izquierda
            }
            else{//factor del hijo derecho == -1, pues no es nulo NI es diferente a -1
                //rotación doble hacia la izquierda
                raiz = rotarDerecha(raiz->derecho);//primero roto hacia la derecha el hijo derecho
                raiz = rotarIzquierda(raiz);//luego roto a la izquierda la raiz
            }
        }
        else if (raiz->factorBalanceo < -1) {//se desbalanceó hacia la izquierda
            if(raiz->derecho == NULL || raiz->derecho->factorBalanceo != 1){//factor del hijo derecho != 1
                raiz = rotarDerecha(raiz);//roto la raiz hacia la izquierda
            }
            else{//factor del hijo derecho == 1, pues no es nulo NI es diferente a 1
                //rotación doble hacia la izquierda
                raiz = rotarIzquierda(raiz->derecho);//primero roto hacia la derecha el hijo derecho
                raiz = rotarDerecha(raiz);//luego roto a la izquierda la raiz
            }
        }
        raiz->factorBalanceo = altura(raiz->derecho)-altura(raiz->izquierdo);//saco el nuevo factor de balance luego de balancear
        //falta balancear los hijos
        raiz->izquierdo = balancearArbol(raiz->izquierdo);
        raiz->derecho = balancearArbol(raiz->derecho);
        //luego de balancear los hijos podría retornar raíz y retorno el árbol balanceado
    }
    return raiz;
}

/**
 * @brief AVL::buscar
 * Esta función busca un nodo cuyo valor sea equivalente al especificado por parámetro
 * @param datoBuscar El dato que se desea buscar
 * @return Un nodo cuyo dato es el mismo que se ingresó, o Nulo si no lo hayó
 */
NodoAVL * AVL::buscar(long double datoBuscar){
    return this->buscar_Aux(datoBuscar, this->raiz);
}

/**
 * @brief AVL::buscar_Aux
 * Función recursiva auxiliar para buscar nodos
 * @param datoBuscar El dato a buscar
 * @param raiz El árbol donde buscar el dato
 * @return Un nodo cuyo dato es el mismo que se ingresó, o Nulo si no lo hayó
 */
NodoAVL * AVL::buscar_Aux(long double datoBuscar, NodoAVL * raiz){
    if(raiz == NULL){//si la raíz es nula, no encontró el nodo
        return NULL;//retorno NULL
    }
    if(raiz->dato == datoBuscar){//si son iguales, encontró el nodo
        return raiz;//retorna el nodo que encontró
    }
    if(raiz->dato > datoBuscar){//si el dato donde está es mayor, sólo podría estar del lado izquierdo, y lo va a buscar ahí
        return this->buscar_Aux(datoBuscar,raiz->izquierdo);
    }
    return this->buscar_Aux(datoBuscar,raiz->derecho);//si no, entonces sólo podría estar en el derecho, y va a buscarlo allí
}

void AVL::insertar(long double datoInsertar){
    this->raiz = this->insertar_Aux(datoInsertar,NULL, this->raiz);
    this->raiz = this->balancearArbol(this->raiz);//tengo que balancear el árbol
}

NodoAVL * AVL::insertar_Aux(long double datoInsertar, NodoAVL *padreRaiz, NodoAVL * raiz){
    if(raiz == NULL){//espacio al inicio
        return new NodoAVL(datoInsertar,padreRaiz);//inserta
    }
    if(raiz->dato == datoInsertar){//encontró un duplicado, no inserta un nodo nuevo
        return raiz;
    }
    if(raiz->dato > datoInsertar){//el dato que se quiere insertar es menor al dato en el que se está
        raiz->izquierdo = this->insertar_Aux(datoInsertar,raiz,raiz->izquierdo);//lo inserta en la izquierda
    }
    else{//sino, va a la derecha
        raiz->derecho = this->insertar_Aux(datoInsertar,raiz,raiz->derecho);//lo inserta a la derecha
    }
    return raiz;//retorna la nueva raíz con todos los nodos enganchados
}

NodoAVL * AVL::mayor(NodoAVL *raiz){
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
 * @param datoEliminar El dato que se buscará, y eliminará el nodo cuyo dato equivalga
 */
NodoAVL * AVL::eliminar(long double datoEliminar){
    NodoAVL * nodoABorrar = this->buscar(datoEliminar);//busco el nodo a eliminar hasta arriba si es que existe, para retornarlo
    this->raiz = this->eliminarNodo_aux(datoEliminar, this->raiz);//lo elimino, o intento eliminarlo
    this->balancearArbol(this->raiz);//falta balancear
    return nodoABorrar;//y retorno
}

/**
 * Esta función elimina un nodo con un dato especificado dentro del árbol recursivamente
 * @param dato El dato que se desea eliminar
 * @param raiz El árbol donde se desea eliminar el nodo
 * @return El nuevo árbol cuyo nodo ya fue eliminado
 */
NodoAVL * AVL::eliminarNodo_aux(long double dato, NodoAVL * raiz) {
    if(raiz == NULL){
        return NULL;
    }
    if(dato < raiz->dato){
        raiz->izquierdo = eliminarNodo_aux(dato,raiz->izquierdo);
    }
    else{
        if(dato > raiz->dato){
            raiz->derecho = eliminarNodo_aux(dato,raiz->derecho);
        }
        else{
            if(raiz->izquierdo == NULL && raiz->derecho == NULL){
                raiz = NULL;
            }
            else{
                if(raiz->izquierdo == NULL){
                    raiz = raiz->derecho;
                }
                else{
                    if(raiz->izquierdo == NULL){
                        raiz = raiz->izquierdo;
                    }
                    else{
                        NodoAVL * mayorMenores = mayor(raiz->izquierdo);
                        raiz->izquierdo = eliminarNodo_aux(mayorMenores->dato,raiz->izquierdo);
                        raiz->dato = mayorMenores->dato;
                    }
                }
            }
        }
    }
    return raiz;
}

void AVL::imprimirArbolProfundidadInOrden(){
    cout <<"Arbol AVL: " <<endl;
    this->imprimirArbolProfundidadInOrden_Aux(this->raiz);
    cout <<endl;
}

void AVL::imprimirArbolProfundidadInOrden_Aux(NodoAVL *raiz){
    if(raiz != NULL){
        cout <<"\tIzquierdo: ";
        imprimirArbolProfundidadInOrden_Aux(raiz->izquierdo);
        cout <<"\tRaiz: " <<raiz->dato <<endl;
        cout <<"\tDerecho: ";
        imprimirArbolProfundidadInOrden_Aux(raiz->derecho);
    }
    else{
        cout <<"Nulo" <<endl;
    }
}

void AVL::imprimirArbolProfundidadPreOrden(){
    cout <<"Arbol AVL: " <<endl;
    this->imprimirArbolProfundidadPreOrden_Aux(this->raiz);
    cout <<endl;
}

void AVL::imprimirArbolProfundidadPreOrden_Aux(NodoAVL *raiz){
    if(raiz != NULL){
        cout <<"Raiz: " <<raiz->dato <<endl;
        cout <<"Izquierdo: ";
        imprimirArbolProfundidadPreOrden_Aux(raiz->izquierdo);
        cout <<"Derecho: ";
        imprimirArbolProfundidadPreOrden_Aux(raiz->derecho);
    }
    else{
        cout <<endl;
    }
}
