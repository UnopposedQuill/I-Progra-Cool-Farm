
#include "arboles.h"

/**
 * @brief Splay::rotarDerecha
 * En esta función se rotan los hijos de un nodo hacia la derecha
 * @param raiz La raiz a rotar, cuyo hijo izquierdo es el que será el nuevo padre
 */
void Splay::rotarDerecha(NodoSplay *raiz){
    //raiz es el padre del que quiero subir, que es el hijo izquierdo
    //en este punto sé que tiene un hijo izquierdo, si no no sería llamada desde las otras funciones
    NodoSplay * nodoASalvar = raiz->izquierdo->derecho;//resguardo el posible hijo derecho que pudiera poseer el hijo izquierdo, que puede o no existir
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
}

/**
 * @brief Splay::rotarIzquierda
 * En esta función se rotan los hijos de un nodo hacia la Izquierda
 * @param raiz La raiz a rotar
 */
void Splay::rotarIzquierda(NodoSplay * raiz){
    //en este punto sé que tiene un hijo derecho, si no no sería llamada desde las otras funciones
    //raiz es el padre del que quiero subir, que es el hijo derecho
    NodoSplay * nodoASalvar = raiz->derecho->izquierdo;//resguardo el posible hijo derecho que pudiera poseer el hijo izquierdo, que puede o no existir
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
}

void Splay::subirARaiz(NodoSplay *raiz){
    while(raiz->padre != NULL){//mientras no sea la raíz irá subiéndolo
        cout <<(raiz->padre->izquierdo == raiz) <<endl;
        if(raiz->padre->izquierdo == raiz){//averiguo si era el hijo derecho
            this->rotarDerecha(raiz->padre);//sino rota hacia la derecha
        }
        else{//era el derecho
            this->rotarIzquierda(raiz->padre);//si era el hijo derecho entonces rota hacia la izquierda
        }
    }
    this->raiz = raiz;
}

NodoSplay * Splay::buscar(long double datoBuscar){
    NodoSplay * buscado = this->buscar_Aux(datoBuscar, this->raiz);
    if(buscado != NULL){
        this->subirARaiz(buscado);
    }
    return buscado;
}

NodoSplay * Splay::buscar_Aux(long double datoBuscar, NodoSplay * raiz){
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

void Splay::insertar(long double datoInsertar){
    this->raiz = this->insertar_Aux(datoInsertar,NULL, this->raiz);
    this->buscar(datoInsertar);//el buscado es el que enviará el nodo hacia la raíz
}

NodoSplay * Splay::insertar_Aux(long double datoInsertar, NodoSplay *padreRaiz, NodoSplay * raiz){
    if(raiz == NULL){//espacio al inicio
        return new NodoSplay(datoInsertar,padreRaiz);//inserta
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

NodoSplay * Splay::mayor(NodoSplay *raiz){
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
NodoSplay * Splay::eliminar(long double datoEliminar){
    NodoSplay * nodoABorrar = this->buscar(datoEliminar);//paso el nodo a eliminar hasta arriba si es que existe
    this->raiz = this->eliminarNodo_aux(datoEliminar, this->raiz);
    return nodoABorrar;
}

/**
 * Esta función elimina un nodo con un dato especificado dentro del árbol recursivamente
 * @param dato El dato que se desea eliminar
 * @param raiz El árbol donde se desea eliminar el nodo
 * @return El nuevo árbol cuyo nodo ya fue eliminado
 */
NodoSplay * Splay::eliminarNodo_aux(long double dato, NodoSplay * raiz) {
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
                        NodoSplay * mayorMenores = mayor(raiz->izquierdo);
                        raiz->izquierdo = eliminarNodo_aux(mayorMenores->dato,raiz->izquierdo);
                        raiz->dato = mayorMenores->dato;
                    }
                }
            }
        }
    }
    return raiz;
}

void Splay::imprimirArbolProfundidadInOrden(){
    cout <<"Arbol Splay: " <<endl;
    this->imprimirArbolProfundidadInOrden_Aux(this->raiz);
    cout <<endl;
}

void Splay::imprimirArbolProfundidadInOrden_Aux(NodoSplay *raiz){
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

void Splay::imprimirArbolProfundidadPreOrden(){
    cout <<"Arbol Splay: " <<endl;
    this->imprimirArbolProfundidadPreOrden_Aux(this->raiz);
    cout <<endl;
}

void Splay::imprimirArbolProfundidadPreOrden_Aux(NodoSplay *raiz){
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
