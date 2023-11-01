#pragma once
#include <string>
#include <iostream>
using namespace std;
//Clase nodo y lista

class listaPais;
class listaDC;
class listaProductos;
class nodoCiudad;
class arbolAVLCiudad;
class ArbolRN;
class ArbolAAMenu;
class arbolBinarioPais;

//Arbol ciudad
class NodoAVLCiudad {
public:

    NodoAVLCiudad(int pcodPais, int num, string pnombre, NodoAVLCiudad* der = NULL, NodoAVLCiudad* izq = NULL, NodoAVLCiudad* sig = NULL, NodoAVLCiudad* ant = NULL) :
        Hizq(izq), Hder(der), codPais(pcodPais), cod(num), nombre(pnombre), siguiente(sig), anterior(ant), FB(0) {}


    int FB;
    NodoAVLCiudad* Hizq, * Hder, * siguiente, * anterior;

    int codPais;
    int cod;
    string nombre;

    friend class NodoBinarioPais;
    friend class arbolBinarioPais;
    friend class listaDC;
    friend class nodoCiudad;
    friend class Pila;
    friend class Binario;

    void InsertaAVL(int pCodPais, int pCod, string pnombre);
};

typedef NodoAVLCiudad* pNodoAVLCiudad;

class arbolAVLCiudad {
public:
    pNodoAVLCiudad raiz;
    bool Hh;

    arbolAVLCiudad()
    {
        raiz = NULL;
        Hh = false;
    }

    void InsertaNodo(int pCodPais, int pCod, string pnombre);
    /*void PreordenI();
    void InordenI();
    void PostordenI();*/

    void Borrar(NodoAVLCiudad* nodoB, bool);
    void BorrarBalanceado(NodoAVLCiudad* r, bool, int eliminar);
    void Equilibrar1(NodoAVLCiudad* n, bool);
    void Equilibrar2(NodoAVLCiudad* n, bool);
    pNodoAVLCiudad InsertarBalanceado(pNodoAVLCiudad ra, int pCodPais, int pCod, string pnombre);
    pNodoAVLCiudad RotacionDobleIzquierda(NodoAVLCiudad* n1, NodoAVLCiudad* n2);
    pNodoAVLCiudad RotacionDobleDerecha(NodoAVLCiudad* n1, NodoAVLCiudad* n2);
    pNodoAVLCiudad RotacionSimpleIzquierda(NodoAVLCiudad* n1, NodoAVLCiudad* n2);
    pNodoAVLCiudad RotacionSimpleDerecha(NodoAVLCiudad* n1, NodoAVLCiudad* n2);
    void archAArbolCiudad(string nombreA, int i);
    pNodoAVLCiudad ValidarCiudad(pNodoAVLCiudad raiz, int pCodCiudad);

};

//Arbol Producto
class NodoAVLProducto {
public:

    NodoAVLProducto(int pcodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pnombre, string pkcal, int pPrecio, int pcantidad, NodoAVLProducto* der = NULL, NodoAVLProducto* izq = NULL, NodoAVLProducto* sig = NULL, NodoAVLProducto* ant = NULL) :
        Hizq(izq), Hder(der), codPais(pcodPais), codCiudad(pCodCiudad), codRestaurante(pCodRestaurante), codMenu(pCodMenu), codProducto(pCodProducto), nombre(pnombre), kcal(pkcal), precio(pPrecio), cantidad(pcantidad), compras(0), siguiente(sig), anterior(ant), FB(0) {}

    int FB;
    NodoAVLProducto* Hizq, * Hder, * siguiente, * anterior;

    int codPais;
    int codCiudad;
    int codRestaurante;
    int codMenu;
    int codProducto;
    string nombre;
    string kcal;
    int precio;
    int compras;
    int cantidad;

    friend class NodoBinarioPais;
    friend class arbolBinarioPais;
    friend class Pila;

    void InsertaAVL(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pnombre, string pkcal, int pPrecio, int pcantidad);
};

typedef NodoAVLProducto* pNodoAVLProducto;

class arbolAVLProducto {
public:
    pNodoAVLProducto raiz;
    bool Hh;

    arbolAVLProducto()
    {
        raiz = NULL;
        Hh = false;
    }

    void InsertaNodo(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pnombre, string pkcal, int pPrecio);
    /*void PreordenI();
    void InordenI();
    void PostordenI();*/

    void Borrar(NodoAVLProducto* nodoB, bool);
    void BorrarBalanceado(NodoAVLProducto* r, bool, int eliminar);
    void Equilibrar1(NodoAVLProducto* n, bool);
    void Equilibrar2(NodoAVLProducto* n, bool);
    pNodoAVLProducto InsertarBalanceado(pNodoAVLProducto ra, int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pnombre, string pKcal, int pPrecio, int pCantidad);
    pNodoAVLProducto RotacionDobleIzquierda(NodoAVLProducto* n1, NodoAVLProducto* n2);
    pNodoAVLProducto RotacionDobleDerecha(NodoAVLProducto* n1, NodoAVLProducto* n2);
    pNodoAVLProducto RotacionSimpleIzquierda(NodoAVLProducto* n1, NodoAVLProducto* n2);
    pNodoAVLProducto RotacionSimpleDerecha(NodoAVLProducto* n1, NodoAVLProducto* n2);
    pNodoAVLProducto ValidarProducto(pNodoAVLProducto raiz, int pCodProducto);
    void insertarNuevoProducto(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pNombre, string pKcal, int pPrecio, int pCantidad, arbolBinarioPais* pAPaises, ArbolRN* pARestaurante, ArbolAAMenu* pAMenu);
    void buscarProducto(int pCodProducto);
    void modificarProducto(int pCodProducto, int opcion, string pNombreNew, string pKcalNew, int pPrecioNew, int pCantidadNew);
    void reporteProductoMasComprado();
    void reportePrecioProducto(int codProducto);
    void reporteCantidadProducto(int codProducto);
    void reporteProdMenu(int codMenu, ArbolAAMenu* AMenu);
};

class NodoBinarioPais {
public:

    NodoBinarioPais(int num, string pnombre, NodoBinarioPais* der = NULL, NodoBinarioPais* izq = NULL, NodoBinarioPais* sig = NULL, NodoBinarioPais* ant = NULL) :
        Hizq(izq), Hder(der), cod(num), nombre(pnombre), ciudades(NULL), siguiente(sig), anterior(ant), FB(0) {}


    int FB;
    NodoBinarioPais* Hizq, * Hder, * siguiente, * anterior;

    int cod;
    string nombre;
    arbolAVLCiudad* ciudades;

    friend class arbolAVLCiudad;
    friend class listaDC;
    friend class nodoCiudad;
    friend class Pila;
    friend class arbolBinarioPais;

    void InsertaBinario(int num, string pnombre);
};

typedef NodoBinarioPais* pNodoBinarioPais;

void PreordenR(NodoBinarioPais* R);
void InordenR(NodoBinarioPais* R);
void PostordenR(NodoBinarioPais* R);

class Pila {
public:
    Pila() : plista(NULL) {}

    void Push(pNodoBinarioPais);
    void Mostrar();
    bool Vacia() { return plista == NULL; }
    pNodoBinarioPais Pop();
    int Size();

    pNodoBinarioPais plista;
};

class arbolBinarioPais {
public:
    pNodoBinarioPais raiz;

    arbolBinarioPais() :raiz(NULL) {}

    void InsertaNodo(int num, string pnombre);
    void PreordenI();
    void InordenI();
    void PostordenI();


    void Borrar(NodoBinarioPais* nodoB, bool);
    void BorrarBalanceado(NodoBinarioPais* r, bool, int eliminar);
    void archAArbolPais(string nombreA, int i);
    void archAArbolCiudad(string pNombreArch, int i);
    void archAArbolRest(string pNombreArch, int i, ArbolRN* pARest);
    void archAArbolMenu(string pNombreArch, int i, ArbolRN* pLRestaurantes, ArbolAAMenu* pLMenu);
    void archAArbolProductos(string pNombreArch, int i, ArbolRN* pLRestaurantes, ArbolAAMenu* pLMenu, arbolAVLProducto* pLProductos);
    void insertarNuevoPais(int pCodPais, string pNombre);
    void insertarNuevaCiudad(int pCodPais, int pCodCiudad, string pNombre);
    void buscarPais(int pCodPais);
    void buscarCiudad(int pCodPais, int pCodCiudad);
    void modificarPais(int pCodPais, string pNombreNew);
    void modificarCiudad(int pCodPais, int pCodCiudad, string pNombreNew);
    pNodoBinarioPais ValidarPais(pNodoBinarioPais praiz, int pCodPais);
    void reportePaises();
    void reporteCiudades(int codPais);

};

class NodoARNRest {
public:
    int codPais;
    int codCiudad;
    int cod;
    string nombre;
    int busquedas;
    NodoARNRest* padre;
    NodoARNRest* Hizq;
    NodoARNRest* Hder;
    int color;

    friend class ArbolRN;
    friend class ArbolBinarioPais;
};

typedef NodoARNRest* pNodoARN;

class ArbolRN {
private:
    pNodoARN Raiz;
    pNodoARN TNULL;



    void initializeNULLNode(pNodoARN nodo, pNodoARN padre) {
        nodo->cod = 0;
        nodo->padre = padre;
        nodo->Hizq = nullptr;
        nodo->Hder = nullptr;
        nodo->color = 0;
    }

    // Preorder
    void preOrden(pNodoARN nodo) {
        if (nodo != TNULL) {
            cout << nodo->cod << " ";
            preOrden(nodo->Hizq);
            preOrden(nodo->Hder);
        }
    }

    // Inorder
    void inOrden(pNodoARN nodo) {
        if (nodo != TNULL) {
            inOrden(nodo->Hizq);
            cout << nodo->cod << " ";
            inOrden(nodo->Hder);
        }
    }

    // Post order
    void postOrden(pNodoARN nodo) {
        if (nodo != TNULL) {
            postOrden(nodo->Hizq);
            postOrden(nodo->Hder);
            cout << nodo->cod << " ";
        }
    }

    pNodoARN Busqueda(pNodoARN nodo, int numbuscado) {
        if (nodo == TNULL || numbuscado == nodo->cod) {
            return nodo;
        }

        if (numbuscado < nodo->cod) {
            return Busqueda(nodo->Hizq, numbuscado);
        }
        return Busqueda(nodo->Hder, numbuscado);
    }

    /* // For balancing the tree after deletion
     void deleteFix(NodePtr x) {
       NodePtr s;
       while (x != root && x->color == 0) {
         if (x == x->parent->left) {
           s = x->parent->right;
           if (s->color == 1) {
             s->color = 0;
             x->parent->color = 1;
             leftRotate(x->parent);
             s = x->parent->right;
           }

           if (s->left->color == 0 && s->right->color == 0) {
             s->color = 1;
             x = x->parent;
           } else {
             if (s->right->color == 0) {
               s->left->color = 0;
               s->color = 1;
               rightRotate(s);
               s = x->parent->right;
             }

             s->color = x->parent->color;
             x->parent->color = 0;
             s->right->color = 0;
             leftRotate(x->parent);
             x = root;
           }
         } else {
           s = x->parent->left;
           if (s->color == 1) {
             s->color = 0;
             x->parent->color = 1;
             rightRotate(x->parent);
             s = x->parent->left;
           }

           if (s->right->color == 0 && s->right->color == 0) {
             s->color = 1;
             x = x->parent;
           } else {
             if (s->left->color == 0) {
               s->right->color = 0;
               s->color = 1;
               leftRotate(s);
               s = x->parent->left;
             }

             s->color = x->parent->color;
             x->parent->color = 0;
             s->left->color = 0;
             rightRotate(x->parent);
             x = root;
           }
         }
       }
       x->color = 0;
     }*/

    void rbModificar(pNodoARN uRaiz, pNodoARN vValor) {
        if (Raiz->padre == nullptr) {
            Raiz = vValor;
        }
        else if (uRaiz == uRaiz->padre->Hizq) {
            uRaiz->padre->Hizq = vValor;
        }
        else {
            uRaiz->padre->Hder = vValor;
        }
        vValor->padre = uRaiz->padre;
    }

    /*void deleteNodeHelper(NodePtr node, int key) {
      NodePtr z = TNULL;
      NodePtr x, y;
      while (node != TNULL) {
        if (node->data == key) {
          z = node;
        }

        if (node->data <= key) {
          node = node->right;
        } else {
          node = node->left;
        }
      }

      if (z == TNULL) {
        cout << "Key not found in the tree" << endl;
        return;
      }

      y = z;
      int y_original_color = y->color;
      if (z->left == TNULL) {
        x = z->right;
        rbTransplant(z, z->right);
      } else if (z->right == TNULL) {
        x = z->left;
        rbTransplant(z, z->left);
      } else {
        y = minimum(z->right);
        y_original_color = y->color;
        x = y->right;
        if (y->parent == z) {
          x->parent = y;
        } else {
          rbTransplant(y, y->right);
          y->right = z->right;
          y->right->parent = y;
        }

        rbTransplant(z, y);
        y->left = z->left;
        y->left->parent = y;
        y->color = z->color;
      }
      delete z;
      if (y_original_color == 0) {
        deleteFix(x);
      }
    }*/

    // Balanceo despues de inserción
    void insertarBalanceado(pNodoARN NodoEva) {
        pNodoARN uValor;
        while (NodoEva->padre->color == 1) {
            if (NodoEva->padre == NodoEva->padre->padre->Hder) {
                uValor = NodoEva->padre->padre->Hizq;
                if (uValor->color == 1) {
                    uValor->color = 0;
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    NodoEva = NodoEva->padre->padre;
                }
                else {
                    if (NodoEva == NodoEva->padre->Hizq) {
                        NodoEva = NodoEva->padre;
                        RotacionDerecha(NodoEva);
                    }
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    RotacionIzquierda(NodoEva->padre->padre);
                }
            }
            else {
                uValor = NodoEva->padre->padre->Hder;

                if (uValor->color == 1) {
                    uValor->color = 0;
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    NodoEva = NodoEva->padre->padre;
                }
                else {
                    if (NodoEva == NodoEva->padre->Hder) {
                        NodoEva = NodoEva->padre;
                        RotacionIzquierda(NodoEva);
                    }
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    RotacionDerecha(NodoEva->padre->padre);
                }
            }
            if (NodoEva == Raiz) {
                break;
            }
        }
        Raiz->color = 0;
    }

    void MostrarRN(pNodoARN raiz, string indent, bool ultimo) {
        if (raiz != TNULL) {
            cout << indent;
            if (ultimo) {
                cout << "Derecha----";
                indent += "   ";
            }
            else {
                cout << "Izquierda----";
                indent += "|  ";
            }

            string sColor = raiz->color ? "Rojo" : "Negro";
            cout << raiz->cod << "(" << sColor << ")" << endl;
            MostrarRN(raiz->Hizq, indent, false);
            MostrarRN(raiz->Hder, indent, true);
        }
    }

public:



    ArbolRN() {
        TNULL = new NodoARNRest;
        TNULL->color = 0;
        TNULL->Hizq = nullptr;
        TNULL->Hder = nullptr;
        Raiz = TNULL;
    }

    void preordenM() {
        preOrden(this->Raiz);
    }

    void inordenM() {
        inOrden(this->Raiz);
    }

    void postorderM() {
        postOrden(this->Raiz);
    }

    pNodoARN BusquedaM(int numbuscado) {
        return Busqueda(this->Raiz, numbuscado);
    }

    pNodoARN minimo(pNodoARN nodo) {
        while (nodo->Hizq != TNULL) {
            nodo = nodo->Hizq;
        }
        return nodo;
    }

    pNodoARN maximo(pNodoARN nodo) {
        while (nodo->Hder != TNULL) {
            nodo = nodo->Hder;
        }
        return nodo;
    }

    pNodoARN successor(pNodoARN nodo) {
        if (nodo->Hder != TNULL) {
            return minimo(nodo->Hder);
        }

        pNodoARN y = nodo->padre;
        while (y != TNULL && nodo == y->Hder) {
            nodo = y;
            y = y->padre;
        }
        return y;
    }

    pNodoARN predecessor(pNodoARN nodo) {
        if (nodo->Hizq != TNULL) {
            return maximo(nodo->Hizq);
        }

        pNodoARN y = nodo->padre;
        while (y != TNULL && nodo == y->Hizq) {
            nodo = y;
            y = y->padre;
        }

        return y;
    }

    void RotacionIzquierda(pNodoARN nodo) {
        pNodoARN y = nodo->Hder;
        nodo->Hder = y->Hizq;
        if (y->Hizq != TNULL) {
            y->Hizq->padre = nodo;
        }
        y->padre = nodo->padre;
        if (nodo->padre == nullptr) {
            this->Raiz = y;
        }
        else
        {
            if (nodo == nodo->padre->Hizq) {
                nodo->padre->Hizq = y;
            }
            else {
                nodo->padre->Hder = y;
            }
        }
        y->Hizq = nodo;
        nodo->padre = y;
    }

    void RotacionDerecha(pNodoARN nodo) {
        pNodoARN y = nodo->Hizq;
        nodo->Hizq = y->Hder;
        if (y->Hder != TNULL) {
            y->Hder->padre = nodo;
        }
        y->padre = nodo->padre;
        if (nodo->padre == nullptr) {
            this->Raiz = y;
        }
        else
        {
            if (nodo == nodo->padre->Hder) {
                nodo->padre->Hder = y;
            }
            else {
                nodo->padre->Hizq = y;
            }
        }
        y->Hder = nodo;
        nodo->padre = y;
    }

    // Insercion
    void insertar(int pCodPais, int pCodCiudad, int pCod, string pnombre) {
        pNodoARN nodo = new NodoARNRest;
        nodo->padre = nullptr;
        nodo->cod = pCod;
        nodo->codPais = pCodPais;
        nodo->codCiudad = pCodCiudad;
        nodo->nombre = pnombre;
        nodo->Hizq = TNULL;
        nodo->Hder = TNULL;
        nodo->color = 1;

        pNodoARN y = nullptr;
        pNodoARN x = this->Raiz;

        while (x != TNULL) {
            y = x;
            if (nodo->cod < x->cod) {
                x = x->Hizq;
            }
            else {
                x = x->Hder;
            }
        }

        nodo->padre = y;
        if (y == nullptr) {
            Raiz = nodo;
        }
        else {
            if (nodo->cod < y->cod) {
                y->Hizq = nodo;
            }
            else {
                y->Hder = nodo;
            }
        }

        if (nodo->padre == nullptr) {
            nodo->color = 0;
            return;
        }

        if (nodo->padre->padre == nullptr) {
            return;
        }

        insertarBalanceado(nodo);
    }

    pNodoARN getRaiz() {
        return this->Raiz;
    }

    /*  void deleteNode(int data) {
        deleteNodeHelper(this->root, data);
      }*/

    void MostrarRN() {
        if (Raiz) {
            MostrarRN(this->Raiz, "", true);
        }
    }

    pNodoARN validarRestaurante(pNodoARN raiz, int pCodRestaurante);
    void insertarNuevoRest(int pCodPais, int pCodCiudad, int pCodRestaurante, string pNombre, arbolBinarioPais* pAPaises);
    void buscarRestaurante(int pCodRestaurante);
    void modificarRestaurante(int pCodRestaurante, string pNombreNew);
    void reporteRestaurantes(int codPais, int codCiudad, arbolBinarioPais* APais);
    void reporteRestMasBuscado();

    friend class ArbolBinarioPais;
};

class NodoAAMenu {
public:
    int codPais;
    int codCiudad;
    int codRestaurante;
    int codMenu;
    string nombre;
    int busquedas;
    NodoAAMenu* izquierda;
    NodoAAMenu* derecha;
    int nivel; // Nivel del nodo

    NodoAAMenu(int pcodPais, int pCodCiudad, int pCodRestaurante, string pnombre, int val) : codMenu(val), codPais(pcodPais), codCiudad(pCodCiudad), codRestaurante(pCodRestaurante), nombre(pnombre), izquierda(nullptr), derecha(nullptr), nivel(1) {}
};

class ArbolAAMenu {
private:
    // Función privada para insertar un valor en el árbol
    NodoAAMenu* insertar2(NodoAAMenu* praiz, int codPais, int codCiudad, int codRestaurante, int codMenu, string nombre);

    // Función privada para realizar rotaciones necesarias para mantener la propiedad AA
    NodoAAMenu* corregir(NodoAAMenu* nodo);

    // Función privada para realizar una rotación hacia la izquierda
    NodoAAMenu* rotacionIzquierda(NodoAAMenu* nodo);

    // Función privada para realizar una rotación hacia la derecha
    NodoAAMenu* rotacionDerecha(NodoAAMenu* nodo);

public:
    ArbolAAMenu() : raiz(nullptr) {}
    NodoAAMenu* raiz;
    // Función pública para insertar un valor en el árbol
    void insertar1(int codPais, int codCiudad, int codRestaurante, int codMenu, string nombre);

    // Función pública para realizar un recorrido en orden del árbol
    void recorridoEnOrden(NodoAAMenu* nodo);

    // Función pública para imprimir el árbol en orden
    void imprimirEnOrden();

    NodoAAMenu* validarMenu(NodoAAMenu* praiz, int pcodMenu);
    void insertarNuevoMenu(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, string pNombre, arbolBinarioPais* pLPaises, ArbolRN* pLRestaurante);
    void buscarMenu(int pCodMenu);
    void modificarMenu(int pCodMenu, string pNombreNew);
    void reporteMenuMasBuscado();
    void reporteMenuRest(int codRestaurante, ArbolRN* ARest);
};

//Arbol B

class NodoB
{
    int* cedulas;
    string* nombres;
    int* compras;
    int t;
    NodoB** C;
    int n;
    bool hoja;
public:
    // Constructor
    NodoB(int t1, bool hoja1)
    {
        t = t1;
        hoja = hoja1;

        cedulas = new int[2 * t - 1];
        nombres = new string[2 * t - 1];
        compras = new int[2 * t - 1];
        C = new NodoB * [2 * t];

        n = 0;
    }

    void insertarNoLleno(int k, string pnombre);

    void dividirrama(int i, NodoB* y);

    void recorrer();

    string busquedaNombre(int k);

    NodoB* busqueda(int k);

    bool modificar(int pcedula, string pNombreNew, int comprasNew = 0);

    void recorrerReporteClientes();
    void recorrerReporteCClientes(int pCedula);

    friend class ArbolB;
};

class ArbolB
{

    int t;
public:
    NodoB* raiz;
    // Constructor 
    ArbolB()
    {
        raiz = NULL; t = 5;
    }

    void recorrer()
    {
        if (raiz != NULL)
            raiz->recorrer();
    }

    NodoB* busqueda(int k)
    {
        if (raiz == NULL)
            return NULL;
        return raiz->busqueda(k);
    }

    void insertar(int k, string pnombre);
    void archAArbolB(string pNombreArch, int i);
    bool validarCedula(int pCedula);
    void insertarNuevoCliente(int pCedula, string pNombre);
    void modificarCliente(int pCedula, string pNombreNew);
    void reporteClientes();
    void reporteComprasCliente(int pCedula);
};

//Clases de listas

class nodoS { // Constructores
public:

    nodoS(string pCedula, string pNombre)
    {
        cedula = pCedula;
        nombre = pNombre;
        siguiente = NULL;

    }

private:
    string cedula;
    string nombre;
    nodoS* siguiente;// Clase Autoreferencia


    friend class listaS;
};

typedef nodoS* pnodoS; //Alias

class nodoCiudad {
public:
    nodoCiudad(string codCiudad, string pNombre)
    {
        cod = codCiudad;
        nombre = pNombre;
        siguiente = NULL;
        anterior = NULL;
    }

    nodoCiudad(string codCiudad, string pNombre, nodoCiudad* signodo)
    {
        cod = codCiudad;
        nombre = pNombre;
        siguiente = signodo;
    }

private:
    string cod;
    string nombre;
    nodoCiudad* siguiente;
    nodoCiudad* anterior;


    friend class listaCiudad;
    friend class listaPais;
    friend class listaDC;
};

typedef nodoCiudad* pnodoCiudad;

class nodoPais {
public:
    nodoPais(string codPais, string pNombre)
    {
        cod = codPais;
        nombre = pNombre;
        siguiente = NULL;
        anterior = NULL;
        ciudades = NULL;
    }

    nodoPais(string codPais, string pNombre, nodoPais* signodo)
    {
        cod = codPais;
        nombre = pNombre;
        siguiente = signodo;
    }

private:
    string cod;
    string nombre;
    nodoCiudad* ciudades;
    nodoPais* siguiente;
    nodoPais* anterior;


    friend class listaPais;
    friend class listaDC;
    friend class nodoCiudad;
};

typedef nodoPais* pnodoPais;

class nodoMenu {
public:
    nodoMenu(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pNombre)
    {
        codPais = pCodPais;
        codCiudad = pCodCiudad;
        codRestaurante = pCodRestaurante;
        codMenu = pCodMenu;
        nombre = pNombre;
        busquedas = 0;
        siguiente = NULL;
        anterior = NULL;
    }

    nodoMenu(string codPais, string pNombre, nodoMenu* signodo)
    {
        codPais = codPais;
        nombre = pNombre;
        siguiente = signodo;
    }

private:
    string codPais;
    string codCiudad;
    string codRestaurante;
    string codMenu;
    string nombre;
    int busquedas;
    nodoMenu* siguiente;
    nodoMenu* anterior;


    friend class listaMenu;
};

typedef nodoMenu* pnodoMenu;

class nodoProductos {
public:
    nodoProductos(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pCodProducto, string pNombre, string pKcal, string pPrecio)
    {
        codPais = pCodPais;
        codCiudad = pCodCiudad;
        codRestaurante = pCodRestaurante;
        codMenu = pCodMenu;
        codProducto = pCodProducto;
        nombre = pNombre;
        kcal = pKcal;
        precio = pPrecio;
        compras = 0;
        siguiente = NULL;
        anterior = NULL;
    }

    nodoProductos(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pCodProducto, string pNombre, string pKcal, string pPrecio, nodoProductos* signodo)
    {
        codPais = pCodPais;
        codCiudad = pCodCiudad;
        codRestaurante = pCodRestaurante;
        codMenu = pCodMenu;
        codProducto = pCodProducto;
        nombre = pNombre;
        kcal = pKcal;
        precio = pPrecio;
        anterior = NULL;
        siguiente = signodo;
    }

private:
    string codPais;
    string codCiudad;
    string codRestaurante;
    string codMenu;
    string codProducto;
    string nombre;
    string kcal;
    string precio;
    int compras;
    nodoProductos* siguiente;
    nodoProductos* anterior;


    friend class listaProductos;
    friend class listaProductosCola;
    friend class listaCola;
};

typedef nodoProductos* pnodoProductos;

class nodoProductosCola {
public:
    nodoProductosCola(int pCodProducto, int intCantidad)
    {
        codProducto = pCodProducto;
        cantidad = intCantidad;
        siguiente = NULL;
        anterior = NULL;
    }

    nodoProductosCola(int pCodProducto, int intCantidad, nodoProductosCola* signodo)
    {
        codProducto = pCodProducto;
        cantidad = intCantidad;
        anterior = NULL;
        siguiente = signodo;
    }

private:
    int codProducto;
    int cantidad;
    nodoProductosCola* siguiente;
    nodoProductosCola* anterior;


    friend class listaProductosCola;
    friend class listaCola;
};

typedef nodoProductosCola* pnodoProductosCola;

class listaS {
public:
    listaS() { primero = NULL; }//constructor
    ~listaS() {
        pnodoS aux;

        while (primero) {
            aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
        primero = NULL;
    };//destructor

    bool ListaVacia() { return primero == NULL; } //retorna True o False
    void Mostrar();//imprimir
    void archAListaS(string pNombreArch, int i);
    void InsertarFinalSimple(string codPais, string nombre);
    pnodoS validarCedula(string pCedula);
    void insertarNuevoCliente(string pCedula, string pNombre);
    int largoLista();
    void eliminarCliente(string pCedula);
    void BorrarFinal(); void BorrarInicio(); void BorrarPosicion(int pos);
    void buscarCliente(string pCedula);
    void modificarCliente(string pCodCliente, string pNombreNew);
    void reporteClientes();

private:
    pnodoS primero;

};


class nodoDC {
public:
    nodoDC(string pCodPais, string pCodCiudad, string pCodRestaurante, string pNombre)
    {
        codPais = pCodPais;
        codCiudad = pCodCiudad;
        codRestaurante = pCodRestaurante;
        nombre = pNombre;
        siguiente = NULL;
        anterior = NULL;
        busquedas = 0;
    }

    nodoDC(string pCodPais, string pCodCiudad, string pCodRestaurante, string pNombre, nodoDC* signodo)
    {
        codPais = pCodPais;
        codCiudad = pCodCiudad;
        codRestaurante = pCodRestaurante;
        nombre = pNombre;
        anterior = NULL;
        siguiente = signodo;
    }

private:
    string codPais = "";
    string codCiudad = "";
    string codRestaurante = "";
    string nombre = "";
    int busquedas = 0;
    nodoDC* siguiente = NULL;
    nodoDC* anterior = NULL;


    friend class listaDC;
    friend class listaPais;
    friend class listaCiudad;
};
typedef nodoDC* pnodoDC;

class listaMenu {
public:
    listaMenu() { primero = NULL; }
    ~listaMenu() {
        pnodoMenu aux;

        while (primero) {
            aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
        primero = NULL;
    };

    int largoLista();
    bool ListaVacia() { return primero == NULL; }
    pnodoMenu validarMenu(string pCodMenu);
    void InsertarFinalMenu(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string nombre);
    void Mostrar();
    void insertarNuevoMenu(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pNombre, listaPais* pLPaises, listaDC* pLRestaurante);
    void eliminarMenu(string pCodMenu);
    void BorrarInicio(); void BorrarFinal();
    void buscarMenu(string pCodMenu);
    void modificarMenu(string pCodMenu, string pNombreNew);
    void reporteMenuMasBuscado();

private:
    pnodoMenu primero;

};

class listaProductos {
public:
    listaProductos() { primero = NULL; }
    ~listaProductos() {
        pnodoProductos aux;

        while (primero) {
            aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
        primero = NULL;
    };

    bool ListaVacia() { return primero == NULL; }
    pnodoProductos validarProducto(string pCodProducto);
    void InsertarFinalProductos(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pCodProducto, string nombre, string pKcal, string pPrecio);
    void Mostrar();
    void insertarNuevoProducto(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pCodProducto, string pNombre, string pKcaL, string pPrecio, listaPais* pLPaises, listaDC* pLRestaurante, listaMenu* pLMenu);
    int largoLista();
    void eliminarProducto(string pCodProducto);
    void BorrarInicio(); void BorrarFinal();
    void buscarProducto(string pCodProducto);
    void modificarProducto(string pCodMenu, int opcion, string pNombreNew = "", string pKcalNew = "", string pPrecioNew = "");
    void InsertarFinalProductosNodo(pnodoProductos nodo);
    void reporteProductoMasComprado();
    void reportePrecioProducto(string codProducto);

private:
    pnodoProductos primero;
};

class listaProductosCola {
public:
    listaProductosCola() { primero = NULL; }
    /*~listaProductosCola();*/

    bool ListaVacia() { return primero == NULL; }
    void InsertarFinalProductosCola(pNodoAVLProducto pProducto, int intCantidad);
    void BorrarInicio();
    void Mostrar();

private:
    pnodoProductosCola primero;

    friend class listaCola;
};
//listaProductosCola::~listaProductosCola()
//{
//    pnodoProductosCola aux;
//
//    while (primero) {
//        aux = primero;
//        primero = primero->siguiente;
//        delete aux;
//    }
//    primero = NULL;
//}

class listaPais {
public:
    listaPais() { primero = NULL; }
    ~listaPais() {
        pnodoPais aux;

        while (primero) {
            aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
        primero = NULL;
    };

    bool ListaVacia() { return primero == NULL; }
    void archAListaPais(string pNombreArch, int i); void archAListaCiudad(string pNombreArch, int i); void archAListaDC(string pNombreArch, int i, listaDC* pLRestaurantes); void archAListaMenu(string pNombreArch, int i, listaDC* pLRestaurantes, listaMenu* pLMenu); void archAListaProductos(string pNombreArch, int i, listaDC* pLRestaurantes, listaMenu* pLMenu, listaProductos* pLProductos);
    void InsertarFinalPais(string pCodPais, string pNombre); void InsertarFinalCiudad(string pCodPais, string pCodCiudad, string pNombre);
    void BorrarInicio(); void BorrarFinal(); void BorrarPosicion(int pos);
    void insertarNuevoPais(string pCodPais, string pNombre); void insertarNuevaCiudad(string pCodPais, string pCodCiudad, string pNombre);
    void eliminarPais(string pCodPais); void eliminarCiudad(string pCodPais, string pCodCiudad);
    int largoLista(); int largoListaCiudades(nodoPais* ptrPais1);
    void buscarPais(string pCodPais);
    void buscarCiudad(string pCodPais, string pCodCiudad);
    void modificarPais(string pCodPais, string pNombreNew);
    void modificarCiudad(string pCodPais, string pCodCiudad, string pNombreNew);
    void reportePaises();
    void reporteCiudades(string codPais);

    pnodoPais ValidarPais(string pCodPais);
    pnodoCiudad ValidarCiudad(string pCodPais, string pCodCiudad);

    void Mostrar();
    void MostrarCiudad(string pCodPais);

private:
    pnodoPais primero;
    listaDC* ptrRest = nullptr;

    friend class listaCiudad;
    friend class listaDC;
};

class listaDC {
public:
    listaDC() { primero = NULL; }
    ~listaDC() {
        pnodoDC aux;
        pnodoDC temp;

        while (primero) {
            temp = primero;
            aux = primero;
            primero = primero->siguiente;
            while (aux->siguiente != primero)
                aux = aux->siguiente;
            aux->siguiente = primero;

            delete temp;
            primero = NULL;
        }
        primero = NULL;
    };

    bool ListaVacia() { return primero == NULL; }
    void InsertarFinalRestaurante(string pCodPais, string pCodCiudad, string pCodRestaurante, string pNombre);
    void Mostrar();
    pnodoDC validarRestaurante(string pCodRestaurante);
    void insertarNuevoRest(string pCodPais, string pCodCiudad, string pCodRestaurante, string pNombre, listaPais* pLPaises);
    void BorrarInicio();
    void BorrarFinal();
    void BorrarPosicion(int pos);
    void eliminarRestaurante(string pCodRestaurante);
    void buscarRestaurante(string pCodRestaurante);
    void modificarRestaurante(string pCodRestaurante, string pNombreNew);
    void reporteRestaurantes(string codPais, string codCiudad, listaPais* lPais);
    void reporteRestMasBuscado();

private:
    pnodoDC primero;

    friend class listaCiudad;

};


class nodoCola { // Constructores
public:

    nodoCola(int pCedula, pnodoProductosCola pPrimeroProductosCola, string popcion)
    {
        cedula = pCedula;
        siguiente = NULL;
        productos = pPrimeroProductosCola;
        opcion = popcion;
    }

    nodoCola(int pCedula, pnodoProductosCola pPrimeroProductosCola, string popcion, nodoCola* signodo)
    {
        cedula = pCedula;
        siguiente = signodo;
        productos = pPrimeroProductosCola;
        opcion = popcion;
    }

private:
    int cedula;
    nodoProductosCola* productos;
    string opcion;
    nodoCola* siguiente;// Clase Autoreferencia


    friend class listaCola;
};

typedef nodoCola* pnodoCola;

class listaCola {
public:
    listaCola() { primero = NULL; facturas = 1; }//constructor
    ~listaCola() {
        pnodoCola aux;

        while (primero) {
            aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
        primero = NULL;
    };//destructor

    bool ListaVacia() { return primero == NULL; } //retorna True o False
    void InsertarFinalCola(int pCedula, pnodoProductosCola lProductos, string opcion);
    void insertarNuevoClienteFila(int pCedula, arbolAVLProducto* AProductos, ArbolB* AClientes);
    int largoLista();
    void BorrarFinal(); void BorrarInicio(); void BorrarPosicion(int pos);
    pnodoProductosCola buscarClienteCola(int pCedula);
    void modificarCola(int pCedula, int pCodProducto, int opcion, arbolAVLProducto* lProductos, int pCodProductoNew = 0, int pCantidadNew = 0);
    void Mostrar();
    void facturar(arbolAVLProducto* AProd, string metodo);
    void reporteFacturaMayor();
    void reporteFacturaMenor();
    void reporteDescuento(arbolAVLProducto* AProd);

private:
    pnodoCola primero;
    int facturas;
    int mayorFactura;
    int menorFactura;

};