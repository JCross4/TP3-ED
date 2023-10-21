//Tarea Programada 2
//Estructuras de datos
//José Calderón

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define maxPais 9
using namespace std;

string strings[maxPais];


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

    pNodoARN predecessor(pNodoARN nodo) { ////////////////////////////////AQUI
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
    ~listaS();//destructor

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

listaS::~listaS()
{
    pnodoS aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

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
    ~listaMenu();

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
listaMenu::~listaMenu()
{
    pnodoMenu aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

class listaProductos {
public:
    listaProductos() { primero = NULL; }
    ~listaProductos();

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
listaProductos::~listaProductos()
{
    pnodoProductos aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

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
    ~listaPais();

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
listaPais::~listaPais()
{
    pnodoPais aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

class listaDC {
public:
    listaDC() { primero = NULL; }
    ~listaDC();

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

listaDC::~listaDC()
{
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
}

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
    ~listaCola();//destructor

    bool ListaVacia() { return primero == NULL; } //retorna True o False
    void InsertarFinalCola(int pCedula, pnodoProductosCola lProductos, string opcion);
    void insertarNuevoClienteFila(int pCedula, arbolAVLProducto* AProductos, ArbolB* AClientes);
    int largoLista();
    void BorrarFinal(); void BorrarInicio(); void BorrarPosicion(int pos);
    pnodoProductosCola buscarClienteCola(int pCedula);
    void modificarCola(int pCedula, int pCodProducto, int opcion, arbolAVLProducto* lProductos, int pCodProductoNew=0, int pCantidadNew=0);
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

listaCola::~listaCola()
{
    pnodoCola aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

//Métodos de la pila

void Pila::Push(pNodoBinarioPais v)
{
    if (Vacia()) {
        plista = v;
    }
    else {
        NodoBinarioPais* aux = plista;
        while (aux->siguiente) {
            aux = aux->siguiente;
        }
        aux->siguiente = v;
        v->anterior = aux;

    }
}

pNodoBinarioPais Pila::Pop()
{
    NodoBinarioPais* borrar = NULL;
    NodoBinarioPais* salida = NULL;
    if (Vacia()) {
        cout << "Pila Vacia" << endl;
    }
    else {
        borrar = plista;
        while (borrar->siguiente) {
            borrar = borrar->siguiente;
        }
        if (Size() > 1) {
            salida = borrar;
            borrar->anterior->siguiente = NULL;
            borrar = NULL;
            delete borrar;
        }
        else {
            salida = plista;
            plista = NULL;
        }
    }
    return salida;
}

int Pila::Size() {
    while (plista && plista->anterior) plista = plista->anterior;
    int cont = 0;
    NodoBinarioPais* aux;
    aux = plista;
    while (aux) {
        cont++;
        aux = aux->siguiente;
    }
    return cont;
}

void Pila::Mostrar() {
    if (Vacia()) {
        cout << "Vacia";
    }
    NodoBinarioPais* aux = plista;
    while (aux) {
        cout << aux->cod << " - ";
        aux = aux->siguiente;
    }
}

//Métodos de arbol AA

NodoAAMenu* ArbolAAMenu::insertar2(NodoAAMenu* praiz, int codPais, int codCiudad, int codRestaurante, int codMenu, string nombre) {
    if (praiz == nullptr) {
        return new NodoAAMenu(codPais, codCiudad, codRestaurante, nombre, codMenu);
    }

    // Insertar en el subárbol izquierdo si el valor es menor
    if (codMenu < praiz->codMenu) {
        praiz->izquierda = insertar2(praiz->izquierda, codPais, codCiudad, codRestaurante, codMenu, nombre);
    }
    // Insertar en el subárbol derecho si el valor es mayor
    else {
        praiz->derecha = insertar2(praiz->derecha, codPais, codCiudad, codRestaurante, codMenu, nombre);
    }

    // Corregir el árbol después de la inserción
    praiz = corregir(praiz);

    return praiz;
}

NodoAAMenu* ArbolAAMenu::corregir(NodoAAMenu* nodo) {
    if (nodo == nullptr) {
        return nullptr;
    }

    // Realizar rotaciones necesarias para mantener la propiedad AA
    if (nodo->izquierda && nodo->izquierda->nivel == nodo->nivel) {
        nodo = rotacionDerecha(nodo);
    }
    if (nodo->derecha && nodo->derecha->derecha && nodo->derecha->derecha->nivel == nodo->nivel) {
        nodo = rotacionIzquierda(nodo);
        nodo->nivel++;
    }

    return nodo;
}

NodoAAMenu* ArbolAAMenu::rotacionIzquierda(NodoAAMenu* nodo) {
    NodoAAMenu* temp = nodo->derecha;
    nodo->derecha = temp->izquierda;
    temp->izquierda = nodo;
    return temp;
}

NodoAAMenu* ArbolAAMenu::rotacionDerecha(NodoAAMenu* nodo) {
    NodoAAMenu* temp = nodo->izquierda;
    nodo->izquierda = temp->derecha;
    temp->derecha = nodo;
    temp->nivel++;
    return temp;
}

void ArbolAAMenu::insertar1(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, string nombre) {
    raiz = insertar2(raiz, pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, nombre);
}

void ArbolAAMenu::recorridoEnOrden(NodoAAMenu* nodo) {
    if (nodo) {
        recorridoEnOrden(nodo->izquierda);
        std::cout << nodo->codMenu << " ";
        recorridoEnOrden(nodo->derecha);
    }
}

void ArbolAAMenu::imprimirEnOrden() {
    recorridoEnOrden(raiz);
    std::cout << std::endl;
}

//Métodos de arbol AVL Ciudad

//void NodoAVLCiudad::InsertaAVL(int pCodPais, int pCod, string pnombre)
//{
//    if (pCod < cod) {
//        if (Hizq == NULL) {
//            Hizq = new NodoAVLCiudad(pCodPais, pCod, pnombre);
//        }
//        else {
//            Hizq->InsertaAVL(pCodPais, pCod, pnombre);
//        }
//    }
//    else {
//        if (Hder == NULL) {
//            Hder = new NodoAVLCiudad(pCodPais, pCod, pnombre);
//        }
//        else {
//            Hder->InsertaAVL(pCodPais, pCod, pnombre);
//        }
//    }
//}
//
//void arbolAVLCiudad::InsertaNodo(int pCodPais, int num, string pnombre)
//{
//    if (raiz == NULL) {
//        raiz = new NodoAVLCiudad(pCodPais, num, pnombre);
//    }
//    else {
//        raiz->InsertaAVL(pCodPais, num, pnombre);
//    }
//}

pNodoAVLCiudad arbolAVLCiudad::InsertarBalanceado(pNodoAVLCiudad ra, int pCodPais, int pCod, string pnombre) {
    pNodoAVLCiudad n1;
    if (raiz == NULL) {
        raiz = new NodoAVLCiudad(pCodPais, pCod, pnombre);
        cout << pnombre << endl;
        Hh = true;
        return raiz;
    }
    if (ra == NULL) {
        ra = new NodoAVLCiudad(pCodPais, pCod, pnombre);
        cout << pnombre << endl;
        Hh = true;
        return ra;
    }
    else {
        if (pCod < ra->cod) {
            ra->Hizq = InsertarBalanceado(ra->Hizq, pCodPais, pCod, pnombre);

            if (Hh) {
                switch (ra->FB) {
                case 1: ra->FB = 0;
                    Hh = false;
                    break;
                case 0: ra->FB = -1;
                    break;
                case -1: n1 = ra->Hizq;
                    if (n1->FB == -1) {
                        ra = RotacionSimpleIzquierda(ra, n1);
                    }
                    else {
                        ra = RotacionDobleIzquierda(ra, n1);
                    }
                    Hh = false;
                    break;
                }
            }
            return ra;
        }
        else {
            if (pCod > ra->cod) {
                ra->Hder = InsertarBalanceado(ra->Hder, pCodPais, pCod, pnombre);

                if (Hh) {
                    switch (ra->FB) {
                    case -1: ra->FB = 0;
                        Hh = false;
                        break;
                    case 0: ra->FB = 1;
                        break;
                    case 1:n1 = ra->Hder;
                        if (n1->FB == 1) {
                            ra = RotacionSimpleDerecha(ra, n1);
                        }
                        else {
                           ra = RotacionDobleDerecha(ra, n1);
                        }
                        Hh = false;
                        break;
                    }
                }
            }
            return ra;
        }
    }
}

//void arbolBinarioPais::Equilibrar1(NodoBinarioPais* n, bool Hh) {
//    NodoBinarioPais* n1;
//    switch (n->FB) {
//    case -1: n->FB = 0;
//        break;
//    case 0: n->FB = 1;
//        Hh = false;
//        break;
//    case 1: n1 = n->Hder;
//        if (n1->FB >= 0) {
//            if (n1->FB = 0) {
//                Hh = false;
//                RotacionSimpleDerecha(n, n1);
//            }
//            else {
//                RotacionDobleDerecha(n, n1);
//            }
//        }
//    }
//}
//
//void arbolBinarioPais::Equilibrar2(NodoBinarioPais* n, bool Hh) {
//    NodoBinarioPais* n1;
//    switch (n->FB) {
//    case 1: n->FB = 0;
//        break;
//    case 0: n->FB = 1;
//        Hh = false;
//        break;
//    case -1: n1 = n->Hizq;
//        if (n1->FB <= 0) {
//            if (n1->FB = 0) {
//                Hh = false;
//                RotacionSimpleIzquierda(n, n1);
//            }
//            else {
//                RotacionDobleIzquierda(n, n1);
//            }
//        }
//    }
//}

pNodoAVLCiudad arbolAVLCiudad::RotacionDobleIzquierda(NodoAVLCiudad* n, NodoAVLCiudad* n1) {
    NodoAVLCiudad* n2;
    n2 = n1->Hder;
    n->Hizq = n2->Hder;
    n2->Hder = n;
    n1->Hder = n2->Hizq;
    n2->Hizq = n1;

    if (n2->FB == 1) {
        n1->FB = -1;
    }
    else {
        n1->FB = 0;
    }
    if (n2->FB == -1) {
        n->FB = 1;
    }
    else {
        n->FB = 0;
    }
    n2->FB = 0;
    if (raiz == n) {
        raiz = n2;
    }
    n = n2;
    return n;
}

pNodoAVLCiudad arbolAVLCiudad::RotacionDobleDerecha(NodoAVLCiudad* n, NodoAVLCiudad* n1) {
    NodoAVLCiudad* n2;
    n2 = n1->Hizq;
    n->Hder = n2->Hizq;
    n2->Hizq = n;
    n1->Hizq = n2->Hder;
    n2->Hder = n1;

    if (n2->FB == 1) {
        n->FB = -1;
    }
    else {
        n->FB = 0;
    }
    if (n2->FB == -1) {
        n1->FB = 1;
    }
    else {
        n1->FB = 0;
    }
    n2->FB = 0;
    if (raiz == n) {
        raiz = n2;
    }
    n = n2;
    return n;
}

pNodoAVLCiudad arbolAVLCiudad::RotacionSimpleDerecha(NodoAVLCiudad* n, NodoAVLCiudad* n1) {
    n->Hder = n1->Hizq;
    n1->Hizq = n;

    if (n1->FB == 1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = 1;
        n1->FB = -1;
    }
    if (raiz == n) {
        raiz = n1;
    }
    n = n1;
    return n;
}

pNodoAVLCiudad arbolAVLCiudad::RotacionSimpleIzquierda(NodoAVLCiudad* n, NodoAVLCiudad* n1) {
    n->Hizq = n1->Hder;
    n1->Hder = n;

    if (n1->FB == -1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = -1;
        n1->FB = -1;
    }
    if (raiz == n) {
        raiz = n1;
    }
    n = n1;
    return n;
}

//Métodos de arbol AVL Producto

//void NodoAVLCiudad::InsertaAVL(int pCodPais, int pCod, string pnombre)
//{
//    if (pCod < cod) {
//        if (Hizq == NULL) {
//            Hizq = new NodoAVLCiudad(pCodPais, pCod, pnombre);
//        }
//        else {
//            Hizq->InsertaAVL(pCodPais, pCod, pnombre);
//        }
//    }
//    else {
//        if (Hder == NULL) {
//            Hder = new NodoAVLCiudad(pCodPais, pCod, pnombre);
//        }
//        else {
//            Hder->InsertaAVL(pCodPais, pCod, pnombre);
//        }
//    }
//}
//
//void arbolAVLCiudad::InsertaNodo(int pCodPais, int num, string pnombre)
//{
//    if (raiz == NULL) {
//        raiz = new NodoAVLCiudad(pCodPais, num, pnombre);
//    }
//    else {
//        raiz->InsertaAVL(pCodPais, num, pnombre);
//    }
//}

pNodoAVLProducto arbolAVLProducto::InsertarBalanceado(pNodoAVLProducto ra, int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pnombre, string pKcal, int pPrecio, int pCantidad) {
    pNodoAVLProducto n1;
    if (raiz == NULL) {
        raiz = new NodoAVLProducto(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pnombre, pKcal, pPrecio, pCantidad);
        Hh = true;
        return raiz;
    }
    if (ra == NULL) {
        ra = new NodoAVLProducto(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pnombre, pKcal, pPrecio, pCantidad);
        Hh = true;
        return ra;
    }
    else {
        if (pCodProducto < ra->codProducto) {
            ra->Hizq = InsertarBalanceado(ra->Hizq, pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pnombre, pKcal, pPrecio, pCantidad);

            if (Hh) {
                switch (ra->FB) {
                case 1: ra->FB = 0;
                    Hh = false;
                    break;
                case 0: ra->FB = -1;
                    break;
                case -1: n1 = ra->Hizq;
                    if (n1->FB == -1) {
                        ra = RotacionSimpleIzquierda(ra, n1);
                    }
                    else {
                        ra = RotacionDobleIzquierda(ra, n1);
                    }
                    Hh = false;
                    break;
                }
            }
            return ra;
        }
        else {
            if (pCodProducto > ra->codProducto) {
                ra->Hder = InsertarBalanceado(ra->Hder, pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pnombre, pKcal, pPrecio, pCantidad);

                if (Hh) {
                    switch (ra->FB) {
                    case -1: ra->FB = 0;
                        Hh = false;
                        break;
                    case 0: ra->FB = 1;
                        break;
                    case 1:n1 = ra->Hder;
                        if (n1->FB == 1) {
                            ra = RotacionSimpleDerecha(ra, n1);
                        }
                        else {
                            ra = RotacionDobleDerecha(ra, n1);
                        }
                        Hh = false;
                        break;
                    }
                }
            }
            return ra;
        }
    }
}

//void arbolBinarioPais::Equilibrar1(NodoBinarioPais* n, bool Hh) {
//    NodoBinarioPais* n1;
//    switch (n->FB) {
//    case -1: n->FB = 0;
//        break;
//    case 0: n->FB = 1;
//        Hh = false;
//        break;
//    case 1: n1 = n->Hder;
//        if (n1->FB >= 0) {
//            if (n1->FB = 0) {
//                Hh = false;
//                RotacionSimpleDerecha(n, n1);
//            }
//            else {
//                RotacionDobleDerecha(n, n1);
//            }
//        }
//    }
//}
//
//void arbolBinarioPais::Equilibrar2(NodoBinarioPais* n, bool Hh) {
//    NodoBinarioPais* n1;
//    switch (n->FB) {
//    case 1: n->FB = 0;
//        break;
//    case 0: n->FB = 1;
//        Hh = false;
//        break;
//    case -1: n1 = n->Hizq;
//        if (n1->FB <= 0) {
//            if (n1->FB = 0) {
//                Hh = false;
//                RotacionSimpleIzquierda(n, n1);
//            }
//            else {
//                RotacionDobleIzquierda(n, n1);
//            }
//        }
//    }
//}

pNodoAVLProducto arbolAVLProducto::RotacionDobleIzquierda(NodoAVLProducto* n, NodoAVLProducto* n1) {
    NodoAVLProducto* n2;
    n2 = n1->Hder;
    n->Hizq = n2->Hder;
    n2->Hder = n;
    n1->Hder = n2->Hizq;
    n2->Hizq = n1;

    if (n2->FB == 1) {
        n1->FB = -1;
    }
    else {
        n1->FB = 0;
    }
    if (n2->FB == -1) {
        n->FB = 1;
    }
    else {
        n->FB = 0;
    }
    n2->FB = 0;
    if (raiz == n) {
        raiz = n2;
    }
    n = n2;
    return n;
}

pNodoAVLProducto arbolAVLProducto::RotacionDobleDerecha(NodoAVLProducto* n, NodoAVLProducto* n1) {
    NodoAVLProducto* n2;
    n2 = n1->Hizq;
    n->Hder = n2->Hizq;
    n2->Hizq = n;
    n1->Hizq = n2->Hder;
    n2->Hder = n1;

    if (n2->FB == 1) {
        n->FB = -1;
    }
    else {
        n->FB = 0;
    }
    if (n2->FB == -1) {
        n1->FB = 1;
    }
    else {
        n1->FB = 0;
    }
    n2->FB = 0;
    if (raiz == n) {
        raiz = n2;
    }
    n = n2;
    return n;
}

pNodoAVLProducto arbolAVLProducto::RotacionSimpleDerecha(NodoAVLProducto* n, NodoAVLProducto* n1) {
    n->Hder = n1->Hizq;
    n1->Hizq = n;

    if (n1->FB == 1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = 1;
        n1->FB = -1;
    }
    if (raiz == n) {
        raiz = n1;
    }
    n = n1;
    return n;
}

pNodoAVLProducto arbolAVLProducto::RotacionSimpleIzquierda(NodoAVLProducto* n, NodoAVLProducto* n1) {
    n->Hizq = n1->Hder;
    n1->Hder = n;

    if (n1->FB == -1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = -1;
        n1->FB = -1;
    }
    if (raiz == n) {
        raiz = n1;
    }
    n = n1;
    return n;
}

//Métodos de arbol binario de busqueda

void NodoBinarioPais::InsertaBinario(int num, string pnombre)
{
    if (num < cod) {
        if (Hizq == NULL) {
            Hizq = new NodoBinarioPais(num, pnombre);
        }
        else {
            Hizq->InsertaBinario(num, pnombre);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoBinarioPais(num, pnombre);
        }
        else {
            Hder->InsertaBinario(num, pnombre);
        }
    }
}

void arbolBinarioPais::InsertaNodo(int num, string pnombre)
{
    if (raiz == NULL) {
        raiz = new NodoBinarioPais(num, pnombre);
    }
    else {
        raiz->InsertaBinario(num, pnombre);
    }
}

//void arbolBinarioPais::PreordenI() {
//    NodoBinarioPais* Act = raiz;
//    Pila p;
//    while (p.Vacia() == false || (Act != NULL)) {
//        if (Act != NULL) {
//            cout << Act->cod << " - ";
//            p.Push(Act);
//            Act = Act->Hizq;
//        }
//        else {
//            Act = p.Pop();
//            Act = Act->Hder;
//        }
//    }
//}
//
//void arbolBinarioPais::InordenI() {
//    NodoBinarioPais* Act = raiz;
//    Pila p;
//    bool band = true;
//    while (band) {
//
//        while (Act != NULL) {
//            p.Push(Act);
//            Act = Act->Hizq;
//        }
//        if (!p.Vacia()) {
//            Act = p.Pop();
//            cout << Act->cod << " - ";
//            Act = Act->Hder;
//        }
//        if (p.Vacia() && Act == NULL) {
//            break;
//        }
//    }
//}
//
//void arbolBinarioPais::PostordenI() {
//    NodoBinarioPais* Act = raiz;
//    Pila p;
//    Pila p2;
//    while (!p.Vacia() || Act != NULL) {
//        if (Act != NULL) {
//            p2.Push(new NodoBinarioPais(Act->cod, Act->nombre));
//            p.Push(Act);
//            Act = Act->Hder;
//        }
//        else {
//            Act = p.Pop();
//            Act = Act->Hizq;
//        }
//    }
//    while (!p2.Vacia()) {
//        NodoBinarioPais* salida = p2.Pop();
//        cout << salida->cod << " - ";
//    }
//}

void PreordenR(NodoBinarioPais* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->nombre << " - ";
        PreordenR(R->Hizq);
        PreordenR(R->Hder);
    }
}

void PreordenR(NodoAVLCiudad* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->nombre << " - ";
        PreordenR(R->Hizq);
        PreordenR(R->Hder);
    }
}

void PreordenR(NodoARNRest* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->cod << " - ";
        PreordenR(R->Hizq);
        PreordenR(R->Hder);
    }
}

void InordenR(NodoBinarioPais* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenR(R->Hizq);
        cout << R->cod << " - ";
        InordenR(R->Hder);
    }
}

void PostordenR(NodoBinarioPais* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenR(R->Hizq);
        PostordenR(R->Hder);
        cout << R->cod << " - ";
    }
}

//Métodos de arbol B

void NodoB::recorrer()
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (hoja == false)
            C[i]->recorrer();
        cout << " " << cedulas[i];
        cout << " " << nombres[i];
        
    }

    if (hoja == false)
        C[i]->recorrer();
}

void NodoB::recorrerReporteClientes()
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (hoja == false)
            C[i]->recorrer();
        ofstream reporteClientes("Reporte Clientes.txt", ios::app);
        reporteClientes << "\nCedula: " << cedulas[i];
        reporteClientes << "          Nombre " << nombres[i];
        reporteClientes.close();
    }

    if (hoja == false)
        C[i]->recorrer();
}

void NodoB::recorrerReporteCClientes(int pCedula)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (hoja == false)
            C[i]->recorrer();
        if (cedulas[i] == pCedula) {
            ofstream reporteCClientes("Reporte Compras de un cliente.txt", ios::app);
            reporteCClientes << "\nCedula: " << cedulas[i];
            reporteCClientes << "          Nombre: " << nombres[i];
            reporteCClientes << "        Compras: " << compras[i];
            reporteCClientes.close();
            return;
        }
    }
    if (hoja == false)
        C[i]->recorrer();
}

NodoB* NodoB::busqueda(int k)
{
    int i = 0;
    while (i < n && k > cedulas[i])
        i++;

    if (cedulas[i] == k)
    {
        cout << "Cedula: "; cout << cedulas[i]; cout << "       Nombre: " + nombres[i] << endl;
        return this;
    }

    if (hoja == true)
        return NULL;

    return C[i]->busqueda(k);
}

bool NodoB::modificar(int pcedula, string pNombreNew, int compraNew) {
    int i = 0;
    while (i < n && pcedula > cedulas[i])
        i++;

    if (cedulas[i] == pcedula)
    {
        if (compraNew != 0) {
            compras[i] += compraNew;
            return true;
        }
        else {
            nombres[i] = pNombreNew;
            return true;
        }
        
    }
    return C[i]->modificar(pcedula, pNombreNew);
}

void ArbolB::insertar(int k, string pnombre)
{
    if (raiz == NULL)
    {
        raiz = new NodoB(t, true);
        raiz->cedulas[0] = k;
        raiz->nombres[0] = pnombre;
        raiz->n = 1;
    }
    else
    {
        if (raiz->n == 2 * t - 1)
        {
            NodoB* s = new NodoB(t, false);

            s->C[0] = raiz;

            s->dividirrama(0, raiz);

            int i = 0;
            if (s->cedulas[0] < k)
                i++;
            s->C[i]->insertarNoLleno(k, pnombre);

            raiz = s;
        }
        else
            raiz->insertarNoLleno(k, pnombre);
    }
}

void NodoB::insertarNoLleno(int k, string pnombre)
{
    int i = n - 1;

    if (hoja == true)
    {
        while (i >= 0 && cedulas[i] > k)
        {
            cedulas[i + 1] = cedulas[i];
            nombres[i + 1] = nombres[i];
            compras[i + 1] = compras[i];
            i--;
        }

        cedulas[i + 1] = k;
        nombres[i + 1] = pnombre;
        n = n + 1;
    }
    else
    {
        while (i >= 0 && cedulas[i] > k)
            i--;

        if (C[i + 1]->n == 2 * t - 1)
        {
            dividirrama(i + 1, C[i + 1]);

            if (cedulas[i + 1] < k)
                i++;
        }
        C[i + 1]->insertarNoLleno(k, pnombre);
    }
}

void NodoB::dividirrama(int i, NodoB* y)
{
    NodoB* z = new NodoB(y->t, y->hoja);
    z->n = t - 1;

    for (int j = 0; j < t - 1; j++) {
        z->cedulas[j] = y->cedulas[j + t];
        z->nombres[j] = y->nombres[j + t];
        z->compras[j] = y->compras[j + t];
    }

    if (y->hoja == false)
    {
        for (int j = 0; j < t; j++)
            z->C[j] = y->C[j + t];
    }

    y->n = t - 1;

    for (int j = n; j >= i + 1; j--)
        C[j + 1] = C[j];

    C[i + 1] = z;

    for (int j = n - 1; j >= i; j--)
    {
        cedulas[j + 1] = cedulas[j];
        nombres[j + 1] = nombres[j];
        compras[j + 1] = compras[j];
    }

    cedulas[i] = y->cedulas[t - 1];
    nombres[i] = y->nombres[t - 1];
    compras[i] = y->compras[t - 1];

    n = n + 1;
}

//Métodos para obtener la longitud de una lista

int listaS::largoLista() {
    int cont = 0;
    pnodoS aux;
    aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
    }
}

int listaCola::largoLista() {
    int cont = 0;
    pnodoCola aux;
    aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
    }
}

int listaProductos::largoLista() {
    int cont = 0;
    pnodoProductos aux;
    aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
    }
}

int listaMenu::largoLista() {
    int cont = 0;
    pnodoMenu aux;
    aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
    }
}

int listaPais::largoLista() {
    int cont = 0;
    pnodoPais aux;
    aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
    }
}

int listaPais::largoListaCiudades(nodoPais* ptrPais1)
{
    int cont = 0;
    pnodoCiudad aux1;
    aux1 = ptrPais1->ciudades;
    while (aux1)
    {
        aux1 = aux1->siguiente;
        cont += 1;
    }
    return cont;
}

//Métodos para separar los elementos de los archivos
int len(string str)
{
    int largo = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        largo++;

    }
    return largo;
}

void split(string pString, char pSeparador)
{
    int actual = 0;
    int i = 0;
    int inicio = 0;
    int final = 0;
    while (i <= len(pString))
    {
        if (pString[i] == pSeparador || i == len(pString))
        {
            final = i;
            string subStr = "";
            subStr.append(pString, inicio, final - inicio);
            strings[actual] = subStr;
            actual += 1;
            inicio = final + 1;
        }
        i++;
    }
}


//Métodos para validar cada elemento

pNodoBinarioPais arbolBinarioPais::ValidarPais(pNodoBinarioPais praiz, int pCodPais)
{
    if (praiz == NULL) {
        return NULL;
    }
    else {
        if (praiz->cod == pCodPais) {
            return praiz;
        }
        else {
            pNodoBinarioPais Izq = ValidarPais(praiz->Hizq, pCodPais);
            pNodoBinarioPais Der = ValidarPais(praiz->Hder, pCodPais);
            if (Izq != NULL)
                return Izq;
            if (Der != NULL)
                return Der;
            return NULL;
        }
    }
}

pNodoAVLCiudad arbolAVLCiudad::ValidarCiudad(pNodoAVLCiudad praiz, int pCodCiudad)
{
    if (praiz == NULL) {
        return NULL;
    }
    else {
        if (praiz->cod == pCodCiudad) {
            return praiz;
        }
        else {
            pNodoAVLCiudad Izq = ValidarCiudad(praiz->Hizq, pCodCiudad);
            pNodoAVLCiudad Der = ValidarCiudad(praiz->Hder, pCodCiudad);
            if (Izq != NULL)
                return Izq;
            if (Der != NULL)
                return Der;
            return NULL;
        }
    }
}

pNodoARN ArbolRN::validarRestaurante(pNodoARN praiz, int pCodRestaurante)
{
    if (praiz == NULL) {
        return NULL;
    }
    else {
        if (praiz->cod == pCodRestaurante) {
            return praiz;
        }
        else {
            pNodoARN Izq = validarRestaurante(praiz->Hizq, pCodRestaurante);
            pNodoARN Der = validarRestaurante(praiz->Hder, pCodRestaurante);
            if (Izq != NULL)
                return Izq;
            if (Der != NULL)
                return Der;
            return NULL;
        }
    }
}

NodoAAMenu* ArbolAAMenu::validarMenu(NodoAAMenu* praiz, int pCodMenu) {
    if (praiz == NULL) {
        return NULL;
    }
    else {
        if (praiz->codMenu == pCodMenu) {
            return praiz;
        }
        else {
            NodoAAMenu* Izq = validarMenu(praiz->izquierda, pCodMenu);
            NodoAAMenu* Der = validarMenu(praiz->derecha, pCodMenu);
            if (Izq != NULL)
                return Izq;
            if (Der != NULL)
                return Der;
            return NULL;
        }
    }
}

pNodoAVLProducto arbolAVLProducto::ValidarProducto(pNodoAVLProducto praiz, int pCodProducto)
{
    if (praiz == NULL) {
        return NULL;
    }
    else {
        if (praiz->codProducto == pCodProducto) {
            return praiz;
        }
        else {
            pNodoAVLProducto Izq = ValidarProducto(praiz->Hizq, pCodProducto);
            pNodoAVLProducto Der = ValidarProducto(praiz->Hder, pCodProducto);
            if (Izq != NULL)
                return Izq;
            if (Der != NULL)
                return Der;
            return NULL;
        }
    }
}

bool ArbolB::validarCedula(int pCedula)
{
    if (busqueda(pCedula)!=NULL)
        return true;
    return false;
}

//Métodos de inserción a las listas

void listaPais::InsertarFinalPais(string pCod, string pNombre)
{
    {
        if (ListaVacia())
        {

            primero = new nodoPais(pCod, pNombre);

        }
        else
        {
            pnodoPais aux = primero;
            while (aux->siguiente != NULL)
                aux = aux->siguiente;
            aux->siguiente = new nodoPais(pCod, pNombre);
            aux->siguiente->anterior = aux;
        }
    }
}

void listaPais::InsertarFinalCiudad(string pCodPais, string pCodCiudad, string pNombre)
{
    pnodoPais aux = primero;
    if (aux == NULL)
        cout << "No hay paises" << endl;
    else
    {
        while (aux)
        {
            if (aux->cod == pCodPais)
            {
                pnodoCiudad aux1 = aux->ciudades;
                if (aux1 == NULL)
                    aux->ciudades = new nodoCiudad(pCodCiudad, pNombre);
                else
                {
                    while (aux1->siguiente != NULL)
                    {
                        aux1 = aux1->siguiente;
                    }
                    aux1->siguiente = new nodoCiudad(pCodCiudad, pNombre);
                    aux1->siguiente->anterior = aux1;
                }
            }
            aux = aux->siguiente;
        }
    }

}

void listaDC::InsertarFinalRestaurante(string pCodPais, string pCodCiudad, string pCodRestaurante, string pNombre)
{
    if (ListaVacia())
    {

        primero = new nodoDC(pCodPais, pCodCiudad, pCodRestaurante, pNombre);
        primero->anterior = primero;
        primero->siguiente = primero;

    }
    else
    {
        pnodoDC nuevo = new nodoDC(pCodPais, pCodCiudad, pCodRestaurante, pNombre);
        nuevo->anterior = primero->anterior;
        nuevo->siguiente = primero;
        primero->anterior->siguiente = nuevo;
        primero->anterior = nuevo;
    }


}

void listaMenu::InsertarFinalMenu(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pNombre) {
    {
        if (ListaVacia())
        {
            primero = new nodoMenu(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pNombre);

        }
        else
        {
            pnodoMenu aux = primero;
            while (aux->siguiente != NULL)
                aux = aux->siguiente;
            aux->siguiente = new nodoMenu(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pNombre);
            aux->siguiente->anterior = aux;
        }
    }

}

void listaProductos::InsertarFinalProductos(string pCodPais, string pCodCiudad, string pCodRestaurante, string pCodMenu, string pCodProducto, string pNombre, string pKcal, string pPrecio) {
    {
        if (ListaVacia())
        {
            primero = new nodoProductos(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pNombre, pKcal, pPrecio);

        }
        else
        {
            pnodoProductos aux = primero;
            while (aux->siguiente != NULL)
                aux = aux->siguiente;
            aux->siguiente = new nodoProductos(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pNombre, pKcal, pPrecio);
            aux->siguiente->anterior = aux;
        }
    }

}

void listaProductosCola::InsertarFinalProductosCola(pNodoAVLProducto nodo, int intCantidad) {
    {
        if (ListaVacia())
        {
            primero = new nodoProductosCola(nodo->codProducto, intCantidad);
        }
        else
        {
            pnodoProductosCola aux = primero;
            while (aux->siguiente != NULL)
                aux = aux->siguiente;
            aux->siguiente = new nodoProductosCola(nodo->codProducto, intCantidad);
            aux->siguiente->anterior = aux;
        }
        nodo->compras += 1;
        nodo->cantidad -= intCantidad;
    }

}

void listaS::InsertarFinalSimple(string pCedula, string pNombre)
{
    {
        if (ListaVacia())
        {

            primero = new nodoS(pCedula, pNombre);

        }
        else
        {
            pnodoS aux = primero;
            while (aux->siguiente != NULL)
                aux = aux->siguiente;
            aux->siguiente = new nodoS(pCedula, pNombre);
        }
    }

}

void listaCola::InsertarFinalCola(int pCedula, pnodoProductosCola lProductos, string opcion)
{
    {
        if (ListaVacia())
        {
            primero = new nodoCola(pCedula, lProductos, opcion);
        }
        else
        {
            pnodoCola aux = primero;
            while (aux->siguiente != NULL)
                aux = aux->siguiente;
            aux->siguiente = new nodoCola(pCedula, lProductos, opcion);
        }
    }

}

//Métodos de eliminación de las listas

void listaPais::BorrarFinal()
{
    if (ListaVacia()) { cout << "No hay elementos en la lista" << endl; }
    else {
        if (primero->siguiente == NULL)//solo un nodo
        {
            pnodoPais temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoPais aux = primero;
            while (aux->siguiente->siguiente != NULL)
            {
                aux = aux->siguiente;
            }
            pnodoPais temp = aux->siguiente;
            aux->siguiente = NULL;

            delete temp;
        }
    }
}

void listaPais::BorrarInicio()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista" << endl;
    }
    else {
        if (primero->siguiente == NULL) {
            pnodoPais temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoPais aux = primero;
            primero = primero->siguiente;
            primero->anterior = NULL;
            delete aux;
        }
    }
}

void listaPais::BorrarPosicion(int pos)
{
    if (ListaVacia())
    {
        cout << "Lista vacia" << endl;
    }
    else
    {
        if ((pos > largoLista()) || (pos < 0))
        {
            cout << "Error en posicion" << endl;
        }
        else
        {
            if (pos == 1)
                BorrarInicio();
            else
            {
                if (pos == largoLista())
                    BorrarFinal();
                else
                {
                    int cont = 2;
                    pnodoPais aux = primero;
                    while (cont < pos)
                    {
                        aux = aux->siguiente;
                        cont++;
                    }
                    pnodoPais temp = aux->siguiente;
                    aux->siguiente = aux->siguiente->siguiente;
                    aux->siguiente->anterior = aux;
                    delete temp;
                }
            }
        }
    }
}

void listaDC::BorrarFinal()
{
    if (ListaVacia())
        cout << "No hay elementos en la lista:" << endl;
    else
    {
        if (primero->siguiente == primero)
        {
            pnodoDC temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoDC aux = primero; //1
            while (aux->siguiente->siguiente != primero)
                aux = aux->siguiente;
            pnodoDC temp = aux->siguiente;//2
            aux->siguiente = primero;//3
            primero->anterior = aux;//4
            delete temp;//5
        }
    }
}

void listaDC::BorrarInicio()
{
    if (ListaVacia())
        cout << "No hay elementos en la lista:" << endl;
    else
    {
        if (primero->siguiente == primero)
        {
            pnodoDC temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoDC aux = primero->anterior;//1
            pnodoDC temp = primero;//2
            aux->siguiente = primero->siguiente;//3
            primero = primero->siguiente; //4
            primero->anterior = aux;//5
            delete temp;//6
        }
    }
}

void listaMenu::BorrarFinal()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista" << endl;
    }
    else {
        if (primero->siguiente == NULL)//solo un nodo
        {
            pnodoMenu temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoMenu aux = primero;
            while (aux->siguiente->siguiente != NULL)
            {
                aux = aux->siguiente;
            }
            pnodoMenu temp = aux->siguiente;
            aux->siguiente = NULL;

            delete temp;
        }
    }
}

void listaMenu::BorrarInicio()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista" << endl;
    }
    else {
        if (primero->siguiente == NULL) {
            pnodoMenu temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoMenu aux = primero;
            primero = primero->siguiente;
            primero->anterior = NULL;
            delete aux;
        }
    }
}

void listaProductos::BorrarFinal()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista" << endl;
    }
    else {
        if (primero->siguiente == NULL)//solo un nodo
        {
            pnodoProductos temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoProductos aux = primero;
            while (aux->siguiente->siguiente != NULL)
            {
                aux = aux->siguiente;
            }
            pnodoProductos temp = aux->siguiente;
            aux->siguiente = NULL;

            delete temp;
        }
    }
}

void listaProductos::BorrarInicio()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista" << endl;
    }
    else {
        if (primero->siguiente == NULL) {
            pnodoProductos temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            pnodoProductos aux = primero;
            primero = primero->siguiente;
            primero->anterior = NULL;
            delete aux;
        }
    }
}

void listaS::BorrarFinal()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista:" << endl;

    }
    else {

        if (primero->siguiente == NULL)
        {
            pnodoS temp = primero;
            primero = NULL;
            delete temp;;
        }
        else {

            pnodoS aux = primero;
            while (aux->siguiente->siguiente != NULL) {
                aux = aux->siguiente;

            }

            pnodoS temp = aux->siguiente;
            aux->siguiente = NULL;


            delete temp;
        }
    }
}

void listaS::BorrarInicio()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista:" << endl;

    }
    else {
        if (primero->siguiente == NULL)
        {
            pnodoS temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {

            pnodoS aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
    }
}

void listaS::BorrarPosicion(int pos) {
    if (ListaVacia()) {
        cout << "Lista vacia" << endl;
    }
    else {
        if ((pos > largoLista()) || (pos < 0)) {
            cout << "Error en posicion" << endl;
        }
        else {
            if (pos == 1)
            {
                pnodoS temp = primero;
                primero = primero->siguiente;
                delete temp; //BorrarInicio();
            }
            else {
                int cont = 2;
                pnodoS aux = primero;
                while (cont < pos) {
                    aux = aux->siguiente;
                    cont++;
                }
                pnodoS temp = aux->siguiente;
                aux->siguiente = aux->siguiente->siguiente;
                delete temp;
            }
        }
    }

}

//Métodos para leer desde los archivos

void arbolBinarioPais::archAArbolPais(string pNombreArch, int i) {
    ifstream tempArchivo;
    string linea;
    tempArchivo.open(pNombreArch, ios::in);
    if (!tempArchivo)
        cout << "El archivo no se encontro";
    else
    {
        switch (i)
        {
        case 0:
            cout << "Paises" << endl;
            while (getline(tempArchivo, linea))
            {
                split(linea, ';');
                string codPais = strings[0];
                string nombre = strings[1];
                int intCodPais = stoi(codPais);
                if (ValidarPais(raiz, intCodPais) == NULL)
                {
                    InsertaNodo(intCodPais, nombre);
                    cout << "Se ha insertado el pais " + nombre << endl;
                }
                else
                    cout << "El codigo de pais " + codPais + " ya existe" << endl;
            }
            tempArchivo.close();
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }
}

void arbolBinarioPais::archAArbolCiudad(string pNombreArch, int i) {
    ifstream tempArchivo;
    string linea;
    tempArchivo.open(pNombreArch, ios::in);
    if (!tempArchivo)
        cout << "El archivo no se encontro";
    else
    {
        switch (i)
        {
        case 1:
        {
            cout << "Ciudades" << endl;
            while (getline(tempArchivo, linea))
            {
                split(linea, ';');
                string codPais = strings[0];
                string codCiudad = strings[1];
                string nombre = strings[2];
                int intCodPais = stoi(codPais);
                int intCodCiudad = stoi(codCiudad);
                pNodoBinarioPais pais = ValidarPais(raiz, intCodPais);
                if (pais != NULL)
                {
                    if (pais->ciudades == NULL) {
                        pais->ciudades = new arbolAVLCiudad();
                        pais->ciudades->InsertarBalanceado(pais->ciudades->raiz, intCodPais, intCodCiudad, nombre);
                        cout << "La ciudad " + nombre + " se ha insertado correctamente" << endl;
                    }
                    else {
                        if (pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodCiudad) == NULL)
                        {
                            pais->ciudades->InsertarBalanceado(pais->ciudades->raiz, intCodPais, intCodCiudad, nombre);
                            cout << "La ciudad " + nombre + " se ha insertado correctamente" << endl;;
                        }
                        else
                        {
                            cout << "Ya existe una ciudad con ese codigo" << endl;
                        }

                    }
                    
                }
                else
                    cout << codPais + " no es un codigo de pais valido" << endl;
            }
            tempArchivo.close();
            break;
        }
        default:
        {
            cout << "Error" << endl;
            break;
        }
        }
    }
}

void arbolBinarioPais::archAArbolRest(string pNombreArch, int i, ArbolRN* pARestaurantes) {
    ifstream tempArchivo;
    string linea;
    tempArchivo.open(pNombreArch, ios::in);
    if (!tempArchivo)
        cout << "El archivo no se encontro";
    else
    {
        switch (i)
        {
        case 2:
            cout << "Restaurantes" << endl;
            while (getline(tempArchivo, linea))
            {
                split(linea, ';');
                string codPais = strings[0];
                string codCiudad = strings[1];
                string codRestaurante = strings[2];
                string nombre = strings[3];
                int intCodPais = stoi(codPais);
                int intCodCiudad = stoi(codCiudad);
                int intCod = stoi(codRestaurante);
                bool pais = true;
                bool ciudad = true;
                pNodoBinarioPais nodoPais = ValidarPais(raiz, intCodPais);
                if (nodoPais != NULL)
                {
                    pais = false;
                    pNodoAVLCiudad nodoCiudad = nodoPais->ciudades->ValidarCiudad(nodoPais->ciudades->raiz, intCodCiudad);
                    if (nodoCiudad != NULL)
                        ciudad = false;
                }
                if (not pais)
                {
                    if (not ciudad)
                    {
                        if (pARestaurantes->validarRestaurante(pARestaurantes->getRaiz(), intCod) == NULL)
                        {
                            pARestaurantes->insertar(intCodPais, intCodCiudad, intCod, nombre);
                            cout << "Se ha insertado el restaurante " + nombre + " correctamente" << endl;
                        }
                        else
                            cout << nombre + " No es un restaurante valido" << endl;
                    }
                    else
                        cout << "El codigo de ciudad " + codCiudad + " no existe" << endl;
                }
                else
                    cout << "El codigo de pais " + codPais + " no existe" << endl;
            }
            tempArchivo.close();
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }

}

void arbolBinarioPais::archAArbolMenu(string pNombreArch, int i, ArbolRN* pARestaurantes, ArbolAAMenu* pAMenu)
{
    ifstream tempArchivo;
    string linea;
    tempArchivo.open(pNombreArch, ios::in);
    if (!tempArchivo)
        cout << "El archivo no se encontro";
    else
    {
        switch (i)
        {
        case 3:
            cout << "Menu" << endl;
            while (getline(tempArchivo, linea))
            {
                split(linea, ';');
                string codPais = strings[0];
                string codCiudad = strings[1];
                string codRestaurante = strings[2];
                string codMenu = strings[3];
                string nombre = strings[4];
                int intCodPais = stoi(codPais);
                int intCodCiudad = stoi(codCiudad);
                int intCodRestaurante = stoi(codRestaurante);
                int intCodMenu = stoi(codMenu);
                pNodoBinarioPais pais = ValidarPais(raiz, intCodPais);
                if (pais != NULL)
                {
                    pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodCiudad);
                    if (ciudad != NULL)
                    {
                        pNodoARN restaurante = pARestaurantes->validarRestaurante(pARestaurantes->getRaiz(), intCodRestaurante);
                        if (restaurante != NULL)
                        {
                            if (pAMenu->validarMenu(pAMenu->raiz, intCodMenu) == NULL)
                            {
                                pAMenu->insertar1(intCodPais, intCodCiudad, intCodRestaurante, intCodMenu, nombre);
                                cout << "El menu " + nombre + " se ha insertado correctamente" << endl;
                            }
                            else
                                cout << "No es un menu valido" << endl;
                        }
                        else
                            cout << "No existe el restaurante de codigo " + codRestaurante << endl;
                    }
                    else
                        cout << "No existe la ciudad de codigo " + codCiudad << endl;
                }
                else
                    cout << "No existe el pais de codigo " + codPais << endl;

            }
            tempArchivo.close();
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }

}

void arbolBinarioPais::archAArbolProductos(string pNombreArch, int i, ArbolRN* pARestaurantes, ArbolAAMenu* pAMenu, arbolAVLProducto* pAProductos)
{
    ifstream tempArchivo;
    string linea;
    tempArchivo.open(pNombreArch, ios::in);
    if (!tempArchivo)
        cout << "El archivo no se encontro";
    else
    {
        switch (i)
        {
        case 4:
            cout << "Productos" << endl;
            while (getline(tempArchivo, linea))
            {
                split(linea, ';');
                string codPais = strings[0];
                string codCiudad = strings[1];
                string codRestaurante = strings[2];
                string codMenu = strings[3];
                string codProducto = strings[4];
                string nombre = strings[5];
                string kcal = strings[6];
                string precio = strings[7];
                string cantidad = strings[8];
                int intCodPais = stoi(codPais);
                int intCodCiudad = stoi(codCiudad);
                int intCodRestaurante = stoi(codRestaurante);
                int intCodMenu = stoi(codMenu);
                int intCodProducto = stoi(codProducto);
                int intPrecio = stoi(precio);
                int intCantidad = stoi(cantidad);
                pNodoBinarioPais pais = ValidarPais(raiz, intCodPais);
                if (pais != NULL)
                {
                    pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodCiudad);
                    if (ciudad != NULL)
                    {
                        if (pARestaurantes->validarRestaurante(pARestaurantes->getRaiz(), intCodRestaurante) != NULL)
                        {
                            if (pAMenu->validarMenu(pAMenu->raiz, intCodMenu) != NULL)
                            {
                                if (pAProductos->ValidarProducto(pAProductos->raiz, intCodProducto) == NULL)
                                {
                                    pAProductos->InsertarBalanceado(pAProductos->raiz, intCodPais, intCodCiudad, intCodRestaurante, intCodMenu, intCodProducto, nombre, kcal, intPrecio, intCantidad);
                                    cout << "El producto " + nombre + " se ha insertado correctamente" << endl;
                                }
                                else
                                    cout << "No es un producto valido" << endl;
                            }
                            else
                                cout << "No existe el menu de codigo " + codMenu << endl;
                        }
                        else
                            cout << "No existe el restaurante de codigo " + codRestaurante << endl;
                    }
                    else
                        cout << "No existe la ciudad de codigo " + codCiudad << endl;
                }
                else
                    cout << "No existe el pais" + codPais << endl;

            }
            tempArchivo.close();
            break;

        default:
            cout << "Error" << endl;
            break;
        }
    }

}

void ArbolB::archAArbolB(string pNombreArch, int i) {
    ifstream tempArchivo;
    string linea;
    tempArchivo.open(pNombreArch, ios::in);
    if (!tempArchivo)
        cout << "El archivo no se encontro";
    else
    {
        switch (i)
        {

        case 5:
            cout << "Clientes" << endl;
            while (getline(tempArchivo, linea))
            {
                split(linea, ';');
                string cedula = strings[0];
                string nombre = strings[1];
                int intCedula = stoi(cedula);
                if (validarCedula(intCedula) == NULL)
                {
                    insertar(intCedula, nombre);
                    cout << "Se ha insertado el cliente " + nombre + " correctamente" << endl;
                }
                else
                    cout << "Ya existe un cliente de cedula " + cedula << endl;
            }
            tempArchivo.close();
            break;

        default:
            cout << "Error" << endl;
            break;
        }
    }
}

//void listaPais::archAListaPais(string pNombreArch, int i) {
//    ifstream tempArchivo;
//    string linea;
//    tempArchivo.open(pNombreArch, ios::in);
//    if (!tempArchivo)
//        cout << "El archivo no se encontro";
//    else
//    {
//        switch (i)
//        {
//        case 0:
//            cout << "Paises" << endl;
//            while (getline(tempArchivo, linea))
//            {
//                split(linea, ';');
//                string codPais = strings[0];
//                string nombre = strings[1];
//                if (ValidarPais(codPais) == NULL)
//                {
//                    InsertarFinalPais(codPais, nombre);
//                    cout << "Se ha insertado el pais " + nombre << endl;
//                }
//                else
//                    cout << "El codigo de pais " + codPais + " ya existe" << endl;
//            }
//            tempArchivo.close();
//            break;
//        default:
//            cout << "Error" << endl;
//            break;
//        }
//    }
//}

//void listaPais::archAListaCiudad(string pNombreArch, int i) {
//    ifstream tempArchivo;
//    string linea;
//    tempArchivo.open(pNombreArch, ios::in);
//    if (!tempArchivo)
//        cout << "El archivo no se encontro";
//    else
//    {
//        switch (i)
//        {
//        case 1:
//        {
//            cout << "Ciudades" << endl;
//            while (getline(tempArchivo, linea))
//            {
//                split(linea, ';');
//                string codPais = strings[0];
//                string codCiudad = strings[1];
//                string nombre = strings[2];
//                if (ValidarPais(codPais) != NULL)
//                    if (ValidarCiudad(codPais, codCiudad) == NULL)
//                    {
//                        InsertarFinalCiudad(codPais, codCiudad, nombre);
//                        cout << "La ciudad " + nombre + " se ha insertado correctamente" << endl;;
//                    }
//                    else
//                    {
//                        cout << "La ciudad ya existe";
//                    }
//                else
//                    cout << codPais + " no es un codigo de pais valido" << endl;
//            }
//            tempArchivo.close();
//            break;
//        }
//        default:
//        {
//            cout << "Error" << endl;
//            break;
//        }
//        }
//    }
//}

//void listaPais::archAListaDC(string pNombreArch, int i, listaDC* pLRestaurantes) {
//    ifstream tempArchivo;
//    string linea;
//    tempArchivo.open(pNombreArch, ios::in);
//    if (!tempArchivo)
//        cout << "El archivo no se encontro";
//    else
//    {
//        switch (i)
//        {
//        case 2:
//            cout << "Restaurantes" << endl;
//            while (getline(tempArchivo, linea))
//            {
//                split(linea, ';');
//                string codPais = strings[0];
//                string codCiudad = strings[1];
//                string codRestaurante = strings[2];
//                string nombre = strings[3];
//                bool pais = true;
//                bool ciudad = true;
//                if (ValidarPais(codPais) != NULL)
//                    pais = false;
//                if (ValidarCiudad(codPais, codCiudad) != NULL)
//                    ciudad = false;
//                if (not pais)
//                {
//                    if (not ciudad)
//                    {
//                        if (pLRestaurantes->validarRestaurante(codRestaurante) == NULL)
//                        {
//                            pLRestaurantes->InsertarFinalRestaurante(codPais, codCiudad, codRestaurante, nombre);
//                            cout << "Se ha insertado el restaurante " + nombre + " correctamente" << endl;
//                        }
//                        else
//                            cout << nombre + " No es un restaurante valido" << endl;
//                    }
//                    else
//                        cout << "El codigo de ciudad " + codCiudad + " no existe" << endl;
//                }
//                else
//                    cout << "El codigo de pais " + codPais + " no existe" << endl;
//            }
//            tempArchivo.close();
//            break;
//        default:
//            cout << "Error" << endl;
//            break;
//        }
//    }
//
//}

//void listaPais::archAListaMenu(string pNombreArch, int i, listaDC* pLRestaurantes, listaMenu* pLMenu)
//{
//    ifstream tempArchivo;
//    string linea;
//    tempArchivo.open(pNombreArch, ios::in);
//    if (!tempArchivo)
//        cout << "El archivo no se encontro";
//    else
//    {
//        switch (i)
//        {
//        case 3:
//            cout << "Menu" << endl;
//            while (getline(tempArchivo, linea))
//            {
//                split(linea, ';');
//                string codPais = strings[0];
//                string codCiudad = strings[1];
//                string codRestaurante = strings[2];
//                string codMenu = strings[3];
//                string nombre = strings[4];
//                if (ValidarPais(codPais) != NULL)
//                {
//                    if (ValidarCiudad(codPais, codCiudad) != NULL)
//                    {
//                        if (pLRestaurantes->validarRestaurante(codRestaurante) != NULL)
//                        {
//                            if (pLMenu->validarMenu(codMenu) == NULL)
//                            {
//                                pLMenu->InsertarFinalMenu(codPais, codCiudad, codRestaurante, codMenu, nombre);
//                                cout << "El menu " + nombre + " se ha insertado correctamente" << endl;
//                            }
//                            else
//                                cout << "No es un menu valido" << endl;
//                        }
//                        else
//                            cout << "No existe el restaurante de codigo " + codRestaurante << endl;
//                    }
//                    else
//                        cout << "No existe la ciudad de codigo " + codCiudad << endl;
//                }
//                else
//                    cout << "No existe el pais de codigo " + codPais << endl;
//
//            }
//            tempArchivo.close();
//            break;
//        default:
//            cout << "Error" << endl;
//            break;
//        }
//    }
//
//}

//void listaPais::archAListaProductos(string pNombreArch, int i, listaDC* pLRestaurantes, listaMenu* pLMenu, listaProductos* pLProductos)
//{
//    ifstream tempArchivo;
//    string linea;
//    tempArchivo.open(pNombreArch, ios::in);
//    if (!tempArchivo)
//        cout << "El archivo no se encontro";
//    else
//    {
//        switch (i)
//        {
//        case 4:
//            cout << "Productos" << endl;
//            while (getline(tempArchivo, linea))
//            {
//                split(linea, ';');
//                string codPais = strings[0];
//                string codCiudad = strings[1];
//                string codRestaurante = strings[2];
//                string codMenu = strings[3];
//                string codProducto = strings[4];
//                string nombre = strings[5];
//                string kcal = strings[6];
//                string precio = strings[7];
//                if (ValidarPais(codPais) != NULL)
//                {
//                    if (ValidarCiudad(codPais, codCiudad) != NULL)
//                    {
//                        if (pLRestaurantes->validarRestaurante(codRestaurante) != NULL)
//                        {
//                            if (pLMenu->validarMenu(codMenu) != NULL)
//                            {
//                                if (pLProductos->validarProducto(codProducto) == NULL)
//                                {
//                                    pLProductos->InsertarFinalProductos(codPais, codCiudad, codRestaurante, codMenu, codProducto, nombre, kcal, precio);
//                                    cout << "El producto " + nombre + " se ha insertado correctamente" << endl;
//                                }
//                                else
//                                    cout << "No es un producto valido" << endl;
//                            }
//                            else
//                                cout << "No existe el menu de codigo " + codMenu << endl;
//                        }
//                        else
//                            cout << "No existe el restaurante de codigo " + codRestaurante << endl;
//                    }
//                    else
//                        cout << "No existe la ciudad de codigo " + codCiudad << endl;
//                }
//                else
//                    cout << "No existe el pais" + codPais << endl;
//
//            }
//            tempArchivo.close();
//            break;
//
//        default:
//            cout << "Error" << endl;
//            break;
//        }
//    }
//
//}
//
//void listaS::archAListaS(string pNombreArch, int i) {
//    ifstream tempArchivo;
//    string linea;
//    tempArchivo.open(pNombreArch, ios::in);
//    if (!tempArchivo)
//        cout << "El archivo no se encontro";
//    else
//    {
//        switch (i)
//        {
//
//        case 5:
//            cout << "Clientes" << endl;
//            while (getline(tempArchivo, linea))
//            {
//                split(linea, ';');
//                string cedula = strings[0];
//                string nombre = strings[1];
//                if (validarCedula(cedula) == NULL)
//                {
//                    InsertarFinalSimple(cedula, nombre);
//                    cout << "Se ha insertado el cliente " + nombre + " correctamente" << endl;
//                }
//            }
//            tempArchivo.close();
//            break;
//
//        default:
//            cout << "Error" << endl;
//            break;
//        }
//    }
//}

//Métodos para insertar elementos

void arbolBinarioPais::insertarNuevoPais(int pCodPais, string pNombre)
{
    if (ValidarPais(raiz, pCodPais) == NULL)
    {
        InsertaNodo(pCodPais, pNombre);
        cout << "Se ha insertado correctamente el pais " + pNombre << endl;
        return;
    }
    else
        cout << "No se ha podido insertar el pais " + pNombre << endl;
}

void arbolBinarioPais::insertarNuevaCiudad(int pCodPais, int pCodCiudad, string pNombre)
{
    pNodoBinarioPais pais = ValidarPais(raiz, pCodPais);
    if (pais != NULL)
    {
        if (pais->ciudades == NULL) {
            pais->ciudades = new arbolAVLCiudad();
            pais->ciudades->InsertarBalanceado(pais->ciudades->raiz, pCodPais, pCodCiudad, pNombre);
            cout << "Se ha insertado correctamente la ciudad " + pNombre << endl;
            return;
        }
        if (pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad) == NULL)
        {
            pais->ciudades->InsertarBalanceado(pais->ciudades->raiz, pCodPais, pCodCiudad, pNombre);
            cout << "Se ha insertado correctamente la ciudad " + pNombre << endl;
            return;
        }
        else
            cout << "Ya existe ese codigo de ciudad" << endl;
    }
    else
        cout << "No existe el pais de codigo "; cout<< pCodPais << endl;
}

void ArbolRN::insertarNuevoRest(int pCodPais, int pCodCiudad, int pCodRestaurante, string pNombre, arbolBinarioPais* pAPaises)
{
    pNodoBinarioPais pais = pAPaises->ValidarPais(pAPaises->raiz, pCodPais);
    if (pais != NULL)
    {
        pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad);
        if (ciudad != NULL)
        {
            if (validarRestaurante(Raiz, pCodRestaurante) == NULL)
            {
                insertar(pCodPais, pCodCiudad, pCodRestaurante, pNombre);
                cout << "Se ha insertado correctamente el restaurante " + pNombre << endl;
                return;
            }
            else
                cout << "Ya existe ese codigo de Restaurante" << endl;
        }
        else
            cout << "No existe la ciudad de codigo "; cout<< pCodCiudad << endl;
    }
    else
        cout << "No existe el pais de codigo "; cout<< pCodPais << endl;
}

void ArbolAAMenu::insertarNuevoMenu(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, string pNombre, arbolBinarioPais* pAPaises, ArbolRN* pARestaurante)
{
    pNodoBinarioPais pais = pAPaises->ValidarPais(pAPaises->raiz, pCodPais);
    if (pais != NULL)
    {
        pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad);
        if (ciudad != NULL)
        {
            pNodoARN restaurante = pARestaurante->validarRestaurante(pARestaurante->getRaiz(), pCodRestaurante);
            if (restaurante != NULL)
            {
                if (validarMenu(raiz, pCodMenu) == NULL)
                {
                    insertar1(pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pNombre);
                    cout << "Se ha insertado correctamente el menu " + pNombre << endl;
                    return;
                }
                else
                    cout << "Ya existe ese codigo de menu" << endl;
            }
            else
                cout << "No existe el restaurante de codigo "; cout<< pCodRestaurante << endl;
        }
        else
            cout << "No existe la ciudad de codigo "; cout<< pCodCiudad << endl;
    }
    else
        cout << "No existe el pais de codigo "; cout<< pCodPais << endl;
}

void arbolAVLProducto::insertarNuevoProducto(int pCodPais, int pCodCiudad, int pCodRestaurante, int pCodMenu, int pCodProducto, string pNombre, string pKcal, int pPrecio, int pCantidad, arbolBinarioPais* pAPaises, ArbolRN* pARestaurante, ArbolAAMenu* pAMenu)
{
    pNodoBinarioPais pais = pAPaises->ValidarPais(pAPaises->raiz, pCodPais);
    if (pais != NULL)
    {
        pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad);
        if (ciudad != NULL)
        {
            pNodoARN restaurante = pARestaurante->validarRestaurante(pARestaurante->getRaiz(), pCodRestaurante);
            if (restaurante != NULL)
            {
                NodoAAMenu* menu = pAMenu->validarMenu(pAMenu->raiz, pCodMenu);
                if (menu != NULL)
                {
                    if (ValidarProducto(raiz, pCodProducto) == NULL)
                    {
                        InsertarBalanceado(raiz, pCodPais, pCodCiudad, pCodRestaurante, pCodMenu, pCodProducto, pNombre, pKcal, pPrecio, pCantidad);
                        cout << "Se ha insertado correctamente el producto " + pNombre << endl;
                        return;
                    }
                    else
                        cout << "Ya existe ese codigo de producto" << endl;
                }
                else
                    cout << "No existe el menu de codigo "; cout<< pCodMenu << endl;
            }
            else
                cout << "No existe el restaurante de codigo "; cout<< pCodRestaurante << endl;
        }
        else
            cout << "No existe la ciudad de codigo "; cout<< pCodCiudad << endl;
    }
    else
        cout << "No existe el pais de codigo "; cout<<pCodPais << endl;
}

void ArbolB::insertarNuevoCliente(int pCedula, string pNombre)
{
    if (!validarCedula(pCedula))
    {
        insertar(pCedula, pNombre);
        cout << "Se ha insertado correctamente el cliente " + pNombre << endl;
        return;
    }
    else
        cout << "No se ha podido insertar el cliente " + pNombre << endl;
}

void listaCola::insertarNuevoClienteFila(int pCedula, arbolAVLProducto* AProductos, ArbolB* AClientes)
{
    listaProductosCola lProductosCliente;
    if (largoLista() < 5)
    {
        if (AClientes->validarCedula(pCedula) != NULL)
        {
            while (true)
            {
                try {
                    string codProducto;
                    cout << "\nIntroduzca el codigo del producto a comprar por el cliente o 0 para salir:" << endl;
                    cin >> codProducto;
                    int intCodProducto = stoi(codProducto);
                    if (codProducto == "0")
                    {
                        break;
                    }
                    else
                    {
                        if (AProductos->ValidarProducto(AProductos->raiz, intCodProducto) != NULL)
                        {
                            string cantidad;
                            pNodoAVLProducto aux = (AProductos->ValidarProducto(AProductos->raiz, intCodProducto));
                            while (true)
                            {
                                cout << "\nIntroduzca la cantidad que va a comprar: " << endl;
                                cin >> cantidad;
                                try
                                {
                                    int intCantidad = stoi(cantidad);
                                    if (aux->cantidad >= intCantidad) {
                                        cout << "\nSe agregó correctamente el producto" << endl;
                                        lProductosCliente.InsertarFinalProductosCola(aux, intCantidad);
                                        break;
                                    }
                                    else
                                    {
                                        cout << "La cantidad solicitada es mayor a la disponible" << endl;
                                    }
                                }
                                catch (...) {
                                    cout << "\nLa cantidad debe ser un número" << endl;
                                }
                            }

                        }
                        else
                        {
                            cout << "\nEl producto no existe" << endl;
                        }
                    }


                }
                catch (...) {
                    cout << "El codigo del producto debe ser un número" << endl;
                }
            }
            if (lProductosCliente.ListaVacia())
                cout << "\nDeben introducirse productos para entrar a la fila" << endl;
            else
            {
                while (true) {
                    string opcion;
                    cout << "\nIntroduzca 1 si es para llevar o 2 para comer en el restaurante : " << endl;
                    cin >> opcion;
                    if (opcion == "1") {
                        pnodoProductosCola prodColaPtr = lProductosCliente.primero;
                        InsertarFinalCola(pCedula, prodColaPtr, opcion);
                        AClientes->raiz->modificar(pCedula, "", 1);
                        cout << "\nSe ha insertado correctamente el cliente de cedula "; cout << pCedula; cout << " en la cola" << endl;
                        return;
                    }
                    if (opcion == "2") {
                        pnodoProductosCola prodColaPtr = lProductosCliente.primero;
                        InsertarFinalCola(pCedula, prodColaPtr, opcion);
                        cout << "\nSe ha insertado correctamente el cliente de cedula "; cout << pCedula; cout << " en la cola" << endl;
                        return;
                    }
                    cout << "No es una opcion valida" << endl;
                }
                
            }
        }
        else
            cout << "\nNo se ha podido insertar el cliente de cedula "; cout << pCedula; cout<<" en la cola" << endl;
    }
    else
    {
        cout << "\nLa cola está llena" << endl;
    }
    return;
}

void listaCola::facturar(arbolAVLProducto* AProd, string metodo) {
    if (ListaVacia()) {
        cout << "La fila está vacía" << endl;
        return;
    }
    pnodoCola nodoCola = primero;
    float precio = 0;
    ofstream factura(to_string(nodoCola->cedula) +" " +  to_string(facturas) + ".txt");
    factura << "Factura de " + to_string(nodoCola->cedula) << endl;
    factura << "Productos:";
    pnodoProductosCola producto =  nodoCola->productos;
    while (producto)
    {
        pNodoAVLProducto Prod = AProd->ValidarProducto(AProd->raiz, producto->codProducto);
        factura << endl;
        factura << "Código: "; factura << producto->codProducto; factura << "      Nombre: " + Prod->nombre + "     Cantidad:  "; factura << producto->cantidad;
        precio += (Prod->precio)*producto->cantidad;
        producto = producto->siguiente;
    }
    if (nodoCola->opcion == "1") {
        if (metodo == "1") {
            precio = precio - ((6 * precio) / 100);
            factura << "\nDescuento: 6%               Precio final:"; factura << precio << endl;
        }
        else{
            precio = precio - ((4 * precio) / 100);
            factura << "\nDescuento: 4%               Precio final:"; factura << precio << endl;
        }
        

    }
    else {
        if (metodo == "1") {
            precio = precio - ((3 * precio) / 100);
            factura << "\nDescuento: 3%               Precio final:"; factura << precio << endl;
        }
        else {
            precio = precio - ((1 * precio) / 100);
            factura << "\nDescuento: 1%               Precio final:"; factura << precio << endl;
        }
        

    }
    factura.close();
    facturas += 1;
    primero = nodoCola->siguiente;
    cout << "Se creó correctamente la factura" << endl;
    if (precio >= mayorFactura) {
        mayorFactura = precio;
    }
    if (precio < menorFactura) {
        menorFactura = precio;
    }
    delete nodoCola;


}

//Métodos para eliminar elementos

//void listaPais::eliminarPais(string pCodPais)
//{
//    if (ValidarPais(pCodPais) != NULL)
//    {
//        pnodoPais aux = primero;
//        int pos = 1;
//        while (pos <= largoLista())
//        {
//            if (aux->cod == pCodPais)
//            {
//                BorrarPosicion(pos);
//                cout << "Se ha eliminado el pais de codigo " + pCodPais + " con exito" << endl;
//                return;
//            }
//            aux = aux->siguiente;
//            pos += 1;
//        }
//        cout << "Error" << endl;
//    }
//    else
//        cout << "No existe el pais" << endl;
//}
//
//void listaPais::eliminarCiudad(string pCodPais, string pCodCiudad)
//{
//    if (ValidarPais(pCodPais) != NULL)
//    {
//        if (ValidarCiudad(pCodPais, pCodCiudad) != NULL)
//        {
//            pnodoPais aux = primero;
//            int pos = 1;
//            while (aux->cod != pCodPais)
//            {
//                aux = aux->siguiente;
//            }
//            pnodoCiudad aux1 = aux->ciudades;
//            int largoCiudades = largoListaCiudades(aux);
//            while (pos <= largoCiudades)
//            {
//                if (aux1->cod == pCodCiudad)
//                {
//                    cout << "Se ha eliminado correctamente la ciudad " + aux1->nombre << endl;
//                    if (pos == 1)
//                    {
//                        if (aux1->siguiente == NULL) {
//                            delete aux1;
//                        }
//                        else
//                        {
//                            pnodoCiudad temp = aux1;
//                            aux1 = aux1->siguiente;
//                            aux1->anterior = NULL;
//                            delete temp;
//                        }
//                        aux->ciudades = nullptr;
//                        return;
//                    }
//                    else
//                    {
//                        if (pos == largoCiudades)
//                        {
//                            pnodoCiudad penultimo = aux1->anterior;
//                            penultimo->siguiente = NULL;
//                            delete aux1;
//                        }
//                        else
//                        {
//                            pnodoCiudad temp = aux1;
//                            aux1 = temp->anterior;
//                            aux1->siguiente = aux1->siguiente->siguiente;
//                            aux1->siguiente->anterior = aux1;
//                            delete temp;
//                        }
//                        aux->ciudades = nullptr;
//                        return;
//                    }
//
//                }
//                aux1 = aux1->siguiente;
//                pos += 1;
//            }
//            cout << "No existe la ciudad con ese codigo" << endl;
//        }
//
//
//    }
//
//}
//
//void listaDC::eliminarRestaurante(string pCodRestaurante)
//{
//    if (validarRestaurante(pCodRestaurante) != NULL)
//    {
//        pnodoDC aux = primero;
//        while (aux->siguiente != primero)
//        {
//            if (aux->codRestaurante == pCodRestaurante)
//            {
//                cout << "Se ha eliminado el restaurante " + aux->nombre + " con exito" << endl;
//                if (aux == primero)
//                {
//                    BorrarInicio();
//                }
//                else
//                {
//                    pnodoDC temp = aux;
//                    aux = temp->anterior;
//                    aux->siguiente = aux->siguiente->siguiente;
//                    aux->siguiente->anterior = aux;
//                    delete temp;
//
//                }
//                return;
//            }
//            aux = aux->siguiente;
//        }
//        if (aux->siguiente == primero)
//        {
//            cout << "Se ha eliminado el restaurante " + aux->nombre + " con exito" << endl;
//            BorrarFinal();
//            return;
//        }
//        cout << "Error" << endl;
//    }
//    else
//        cout << "No existe el restaurante" << endl;
//}
//
//void listaMenu::eliminarMenu(string pCodMenu)
//{
//    if (validarMenu(pCodMenu) != NULL)
//    {
//        pnodoMenu aux = primero;
//        while (aux->siguiente != NULL)
//        {
//            if (aux->codMenu == pCodMenu)
//            {
//                cout << "Se ha eliminado el menu " + aux->nombre + " con exito" << endl;
//                if (aux == primero)
//                {
//                    BorrarInicio();
//                }
//                else
//                {
//                    pnodoMenu temp = aux;
//                    aux = temp->anterior;
//                    aux->siguiente = aux->siguiente->siguiente;
//                    aux->siguiente->anterior = aux;
//                    delete temp;
//
//                }
//                return;
//            }
//            aux = aux->siguiente;
//        }
//        if (aux->siguiente == NULL)
//        {
//            cout << "Se ha eliminado el menu " + aux->nombre + " con exito" << endl;
//            BorrarFinal();
//            return;
//        }
//        cout << "Error" << endl;
//    }
//    else
//        cout << "No existe el menu" << endl;
//}
//
//void listaProductos::eliminarProducto(string pCodProducto)
//{
//    if (validarProducto(pCodProducto) != NULL)
//    {
//        pnodoProductos aux = primero;
//        while (aux->siguiente != NULL)
//        {
//            if (aux->codProducto == pCodProducto)
//            {
//                cout << "Se ha eliminado el producto " + aux->nombre + " con exito" << endl;
//                if (aux == primero)
//                {
//                    BorrarInicio();
//                }
//                else
//                {
//                    pnodoProductos temp = aux;
//                    aux = temp->anterior;
//                    aux->siguiente = aux->siguiente->siguiente;
//                    aux->siguiente->anterior = aux;
//                    delete temp;
//
//                }
//                return;
//            }
//            aux = aux->siguiente;
//        }
//        if (aux->siguiente == NULL)
//        {
//            cout << "Se ha eliminado el menu " + aux->nombre + " con exito" << endl;
//            BorrarFinal();
//            return;
//        }
//        cout << "Error" << endl;
//    }
//    else
//        cout << "No existe el menu" << endl;
//}
//
//void listaS::eliminarCliente(string pCedula)
//{
//    if (validarCedula(pCedula) != NULL)
//    {
//        pnodoS aux = primero;
//        int pos = 1;
//        while (pos <= largoLista())
//        {
//            if (aux->cedula == pCedula)
//            {
//                cout << "Se ha eliminado el cliente " + aux->nombre + " con exito" << endl;
//                BorrarPosicion(pos);
//                return;
//            }
//            aux = aux->siguiente;
//            pos += 1;
//        }
//        cout << "Error" << endl;
//    }
//    else
//        cout << "No existe el cliente" << endl;
//}

//Métodos para buscar elementos

void arbolBinarioPais::buscarPais(int pCodPais)
{
    if (ValidarPais(raiz, pCodPais) != NULL)
    {
        pNodoBinarioPais pais = ValidarPais(raiz, pCodPais);
        cout << "El pais de codigo "; cout << pais->cod; cout << " es "; cout<<pais->nombre << endl;
        return;
    }
    else
        cout << "El pais no existe" << endl;
}

void arbolBinarioPais::buscarCiudad(int pCodPais, int pCodCiudad)
{
    pNodoBinarioPais pais = ValidarPais(raiz, pCodPais);
    if (pais != NULL)
    {
        if (pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad) != NULL)
        {
            pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad);
            cout << "La ciudad de codigo "; cout << ciudad->cod; cout << " es "; cout << ciudad->nombre << endl;
            return;
        }
        else
            cout << "La ciudad no existe" << endl;
    }
    else
        cout << "El pais no existe" << endl;
}

void ArbolRN::buscarRestaurante(int pCodRestaurante)
{
    if (validarRestaurante(Raiz, pCodRestaurante) != NULL)
    {
        pNodoARN restaurante = validarRestaurante(Raiz, pCodRestaurante);
        restaurante->busquedas += 1;
        cout << "El restaurante de codigo "; cout << restaurante->cod; cout << " es "; cout << restaurante->nombre << endl;
        return;
    }
    else
        cout << "El restaurante no existe" << endl;
    return;
}

void ArbolAAMenu::buscarMenu(int pCodMenu)
{
    if (validarMenu(raiz, pCodMenu) != NULL)
    {
        NodoAAMenu* menu = validarMenu(raiz, pCodMenu);
        cout << "El menu de codigo "; cout << menu->codMenu; cout<< " es " + menu->nombre << endl;
        return;
    }
    else
        cout << "El menu no existe" << endl;
    return;
}

void arbolAVLProducto::buscarProducto(int pCodProducto)
{
    if (ValidarProducto(raiz, pCodProducto) != NULL)
    {
        pNodoAVLProducto producto = ValidarProducto(raiz, pCodProducto);
        cout << "El producto de codigo "; cout << producto->codProducto; cout << " es " + producto->nombre + ", tiene " + producto->kcal + " KCal y su precio es "; cout <<producto->precio << endl;
        return;
    }
    else
        cout << "El producto no existe" << endl;
    return;
}

//void ArbolB::buscarCliente(string pCedula)
//{
//    if (validarCedula(pCedula) != NULL)
//    {
//        pnodoS cliente = validarCedula(pCedula);
//        cout << "El cliente de cedula " + cliente->cedula + " es " + cliente->nombre << endl;
//        return;
//    }
//    else
//        cout << "El cliente no existe" << endl;
//    return;
//}

pnodoProductosCola listaCola::buscarClienteCola(int pCedula) {
    pnodoCola aux = primero;
    if (aux == NULL)
        return NULL;
    else
    {
        while (aux)
        {
            if (aux->cedula == pCedula)
            {
                pnodoProductosCola aux2 = aux->productos;
                while (aux2)
                {
                    return aux2;
                }
            }
            aux = aux->siguiente;
        }
        return NULL;
    }

}

//Métodos para modificar elementos

void arbolBinarioPais::modificarPais(int pCodPais, string pNombreNew) {
    if (ValidarPais(raiz, pCodPais) != NULL)
    {
        pNodoBinarioPais pais = ValidarPais(raiz, pCodPais);
        pais->nombre = pNombreNew;
        cout << "Se ha modificado correctamente el pais " + pais->nombre << endl;
    }
    else
        cout << "No es un pais valido" << endl;
}

void arbolBinarioPais::modificarCiudad(int pCodPais, int pCodCiudad, string pNombreNew) {
    pNodoBinarioPais pais = ValidarPais(raiz, pCodPais);
    if (pais != NULL)
    {
        if (pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad) != NULL)
        {
            pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, pCodCiudad);
            ciudad->nombre = pNombreNew;
            cout << "Se ha modificado correctamente la ciudad " + ciudad->nombre << endl;
        }
        else
            cout << "No es una ciudad valida" << endl;
    }
    else
        cout << "No es un pais valido" << endl;
}

void ArbolRN::modificarRestaurante(int pCodRestaurante, string pNombreNew) {
    if (validarRestaurante(Raiz, pCodRestaurante) != NULL) {
        pNodoARN restaurante = validarRestaurante(Raiz, pCodRestaurante);
        restaurante->nombre = pNombreNew;
        cout << "Se ha modificado correctamente el restaurante " + restaurante->nombre << endl;
    }
    else
        cout << "No es un restaurante valido" << endl;
}

void ArbolAAMenu::modificarMenu(int pCodMenu, string pNombreNew) {
    if (validarMenu(raiz, pCodMenu) != NULL) {
        NodoAAMenu* menu = validarMenu(raiz, pCodMenu);
        menu->nombre = pNombreNew;
        cout << "Se ha modificado correctamente el menú " + menu->nombre << endl;
    }
    else
        cout << "No es un menu valido" << endl;
}

void arbolAVLProducto::modificarProducto(int pCodProducto, int opcion, string pNombreNew, string pKcalNew, int pPrecioNew, int pCantidadNew) {
    if (ValidarProducto(raiz, pCodProducto) != NULL) {
        pNodoAVLProducto producto = ValidarProducto(raiz, pCodProducto);
        switch (opcion)
        {
        case 1:
            producto->nombre = pNombreNew;
            cout << "Se ha modificado correctamente el nombre del producto " + producto->nombre << endl;
            break;
        case 2:
            producto->kcal = pKcalNew;
            cout << "Se ha modificado correctamente las Kcal del producto " + producto->nombre << endl;
            break;
        case 3:
            producto->precio = pPrecioNew;
            cout << "Se ha modificado correctamente el precio del producto " + producto->nombre << endl;
            break;
        case 4:
            producto->cantidad += pCantidadNew;
            cout << "Se ha modificado correctamente la cantidad del producto " + producto->nombre << endl;
            break;
        default:
            cout << "No es una opcion valida" << endl;
            break;
        }
    }
    else
        cout << "No es un producto valido" << endl;
}

void ArbolB::modificarCliente(int pCedula, string pNombreNew) {
    if (!validarCedula(pCedula)) {
        if (raiz->modificar(pCedula, pNombreNew))
        {
            cout << "Se ha modificado correctamente el nombre del cliente " + pNombreNew << endl;
            return;
        }
        cout << "No se ha podido modificar el nombre del cliente" << endl;
    }
    else
        cout << "No es una cedula valida" << endl;
}

void listaCola::modificarCola(int pCedula, int pCodProducto, int opcion, arbolAVLProducto* AProductos, int pCodProductoNew, int pCantidadNew) {
    if (buscarClienteCola(pCedula) != NULL)
    {
        pnodoProductosCola primero = buscarClienteCola(pCedula);
        while (primero)
        {
            if (primero->codProducto == pCodProducto)
            {
                if (opcion == 1)
                {
                    pNodoAVLProducto aux = AProductos->ValidarProducto(AProductos->raiz, pCodProducto);
                    if (aux) {
                        aux->compras -= 1;
                        pNodoAVLProducto aux1 = AProductos->ValidarProducto(AProductos->raiz, pCodProductoNew);
                        aux1->compras += 1;
                        primero->codProducto = pCodProductoNew;
                        if (primero->cantidad > aux1->cantidad) {
                            aux->cantidad += primero->cantidad;
                            while (true) {
                                try {
                                    cout << "Debe modificar la cantidad, inserte la nueva cantidad: " << endl;
                                    string nCantidad;
                                    cin >> nCantidad;
                                    int intNCantidad = stoi(nCantidad);
                                    if (intNCantidad <= aux1->cantidad) {
                                        primero->cantidad = intNCantidad;
                                        aux1->cantidad -= intNCantidad;
                                        break;
                                    }
                                    cout << "La cantidad debe ser menor" << endl;
                                }
                                catch (...) {
                                    cout << "La cantidad debe ser un numero" << endl;
                                }
                            }
                        }
                        cout << "Se ha modificado correctamente el producto de la compra" << endl;
                    }
                    else
                        cout << "No existe un producto con el nuevo codigo indicado" << endl;
                    return;
                }
                if (opcion == 2)
                {
                    pNodoAVLProducto aux = AProductos->ValidarProducto(AProductos->raiz, pCodProducto);
                    aux->cantidad += primero->cantidad;
                    if (pCantidadNew <= aux->cantidad) {
                        primero->cantidad = pCantidadNew;
                        aux->cantidad -= pCantidadNew;
                        cout << "Se ha modificado correctamente la cantidad de compra del producto " + primero->codProducto << endl;
                        return;
                    }
                    cout << "La cantidad debe ser menor a la disponible del producto" << endl;
                    aux->cantidad -= primero->cantidad;

                    return;
                }
                if (opcion == 3)
                {
                    pNodoAVLProducto aux = AProductos->ValidarProducto(AProductos->raiz, primero->codProducto);
                    if (aux) {
                        aux->compras -= 1;
                        aux->cantidad += primero->cantidad;
                        primero->anterior->siguiente = primero->siguiente;
                        primero->siguiente->anterior = primero->anterior;
                        if (primero == buscarClienteCola(pCedula)) {
                            pnodoCola nodoCola = this->primero;
                            while (nodoCola)
                            {
                                if (nodoCola->cedula == pCedula) {
                                    nodoCola->productos = primero->siguiente;
                                    return;
                                }
                                nodoCola = nodoCola->siguiente;
                            }
                        }
                        delete primero;
                        
                        cout << "Se ha eliminado correctamente el producto de la compra" << endl;
                    }
                    else
                        cout << "No existe un producto con el codigo indicado" << endl;
                    return;

                }
            }
            primero = primero->siguiente;
        }
        cout << "Error" << endl;
        return;
    }
    else
        cout << "El cliente con esa cedula no esta en la cola" << endl;
}

//Reportes

void preordenReporte(NodoBinarioPais* R) {

    if (R == NULL) {
        return;
    }
    else {
        ofstream reportePais("Reporte Paises.txt", ios::app);
        reportePais << "\n";
        reportePais << "Código: "; reportePais << R->cod; reportePais << "    Nombre: " + R->nombre;
        reportePais.close();
        preordenReporte(R->Hizq);
        preordenReporte(R->Hder);
    }
}

void arbolBinarioPais::reportePaises() {
    if (raiz==NULL) {
        cout << "No hay paises registrados" << endl;
        return;
    }
    ofstream reportePais("Reporte Paises.txt");
    reportePais << "Reporte Lista de Paises";
    reportePais.close();
    preordenReporte(raiz);
}

void preordenReporte(NodoAVLCiudad* R) {

    if (R == NULL) {
        return;
    }
    else {
        ofstream reportePais("Reporte Ciudades de un pais.txt", ios::app);
        reportePais << "\n";
        reportePais << "Código: "; reportePais << R->cod; reportePais << "    Nombre: " + R->nombre;
        reportePais.close();
        preordenReporte(R->Hizq);
        preordenReporte(R->Hder);
    }
}

void arbolBinarioPais::reporteCiudades(int codPais) {
    if (raiz==NULL) {
        cout << "No hay paises registrados" << endl;
        return;
    }
    ofstream reporteCiudades("Reporte Ciudades de un pais.txt");
    reporteCiudades << "Reporte Ciudades de ";
    pNodoBinarioPais pais = ValidarPais(raiz, codPais);
    if (pais)
    {
        reporteCiudades << pais->nombre;
        pNodoAVLCiudad aux1 = pais->ciudades->raiz;
        reporteCiudades.close();
        preordenReporte(aux1);
        }
    }

void preordenReporte(pNodoARN R, int pCodCiudad) {

    if (R == NULL) {
        return;
    }
    else {
        
        if (R->codCiudad == pCodCiudad) {
            ofstream reportePais("Reporte Restaurantes de una ciudad.txt", ios::app);
            reportePais << "\n";
            reportePais << "Código: "; reportePais << R->cod; reportePais << "    Nombre: " + R->nombre;
            reportePais.close();
        }
        preordenReporte(R->Hizq, pCodCiudad);
        preordenReporte(R->Hder, pCodCiudad);
    }
}

void ArbolRN::reporteRestaurantes(int codPais, int codCiudad, arbolBinarioPais* APais) {
    if (Raiz==NULL) {
        cout << "No hay restaurantes registrados" << endl;
        return;
    }
    pNodoBinarioPais pais = APais->ValidarPais(APais->raiz, codPais);
    if (pais) {
        pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, codCiudad);
        if (ciudad)
        {
            ofstream reporteRest("Reporte Restaurantes de una ciudad.txt");
            reporteRest << "Reporte Restaurantes de " + ciudad->nombre + ", " + pais->nombre;
            reporteRest.close();
            preordenReporte(Raiz, codCiudad);
        }
        else
        {
            cout << "No existe la ciudad" << endl;
            return;
        }
    }
    
}

void preordenReporteMenuRest(NodoAAMenu* R, int pCodRestaurante) {

    if (R == NULL) {
        return;
    }
    else {

        if (R->codRestaurante == pCodRestaurante) {
            ofstream reporteMenuR("Reporte Menus de un restaurante.txt", ios::app);
            reporteMenuR << "\n";
            reporteMenuR << "Código: "; reporteMenuR << R->codMenu; reporteMenuR << "    Nombre: " + R->nombre;
            reporteMenuR.close();
        }
        preordenReporteMenuRest(R->izquierda, pCodRestaurante);
        preordenReporteMenuRest(R->derecha, pCodRestaurante);
    }
}

void ArbolAAMenu::reporteMenuRest(int codRestaurante, ArbolRN* ARest) {
    if (raiz == NULL) {
        cout << "No hay menus registrados" << endl;
        return;
    }
    pNodoARN restaurante = ARest->validarRestaurante(ARest->getRaiz(), codRestaurante);
    if (restaurante) {
            ofstream reporteMenuR("Reporte Menus de un restaurante.txt");
            reporteMenuR << "Reporte Menus de " + restaurante->nombre;
            reporteMenuR.close();
            preordenReporteMenuRest(raiz, codRestaurante);
            return;
    }
    cout << "No existe el restaurante";
}

void preordenReporteProdMenu(pNodoAVLProducto R, int pCodMenu) {

    if (R == NULL) {
        return;
    }
    else {

        if (R->codMenu == pCodMenu) {
            ofstream reporteProdM("Reporte Productos de un menu.txt", ios::app);
            reporteProdM << "\n";
            reporteProdM << "Código: "; reporteProdM << R->codProducto; reporteProdM << "    Nombre: " + R->nombre;
            reporteProdM.close();
        }
        preordenReporteProdMenu(R->Hizq, pCodMenu);
        preordenReporteProdMenu(R->Hder, pCodMenu);
    }
}

void arbolAVLProducto::reporteProdMenu(int codMenu, ArbolAAMenu* AMenu) {
    if (raiz == NULL) {
        cout << "No hay productos registrados" << endl;
        return;
    }
    NodoAAMenu* menu = AMenu->validarMenu(AMenu->raiz, codMenu);
    if (menu) {
        ofstream reporteProdM("Reporte Productos de un menu.txt");
        reporteProdM << "Reporte Productos de " + menu->nombre;
        reporteProdM.close();
        preordenReporteProdMenu(raiz, codMenu);
        return;
    }
    cout << "No existe el menu";
}

void ArbolB::reporteClientes()
{
    if (!raiz) {
        cout << "No hay clientes registrados" << endl;
        return;
    }
    ofstream reporteClientes("Reporte Clientes.txt");
    reporteClientes << "Reporte Lista de Clientes";
    reporteClientes.close();
    raiz->recorrerReporteClientes();
    
}

pNodoARN preordenReporteMasBuscado(pNodoARN R, int maxBusquedas) {
    bool mayor = false;
    if (R == NULL) {
        return NULL;
    }
    else {

        if (R->busquedas >= maxBusquedas) {
            ofstream reporteRest("Reporte Restaurante mas buscado.txt", ios::app);
            maxBusquedas = R->busquedas;
            mayor = true;
            reporteRest.close();
        }
        pNodoARN izq = preordenReporteMasBuscado(R->Hizq, maxBusquedas);
        pNodoARN der = preordenReporteMasBuscado(R->Hder, maxBusquedas);
        if (izq) {
            R = izq;
            mayor = true;
        }
        if (der) {
            R = der;
            mayor = true;
        }
        if (mayor)
            return R;
        return NULL;
    }
}

void ArbolRN::reporteRestMasBuscado() {
    if (!Raiz) {
        cout << "No hay restaurantes registrados" << endl;
        return;
    }
    ofstream reporteRest("Reporte Restaurante mas buscado.txt");
    reporteRest << "Reporte Restaurante mas buscado";
    int maxBusquedas = 0;
    pNodoARN masBuscado = Raiz;
    masBuscado = preordenReporteMasBuscado(Raiz, maxBusquedas);
    reporteRest << "\nCódigo: "; reporteRest << masBuscado->cod; reporteRest<< "     Nombre: " + masBuscado->nombre + "       Cantidad de búsquedas: " + to_string(masBuscado->busquedas);
    reporteRest.close();
}

void ArbolB::reporteComprasCliente(int pCedula) {
    if (!raiz) {
        cout << "No hay clientes registrados" << endl;
        return;
    }
    ofstream reporteCClientes("Reporte Compras de un cliente.txt");
    reporteCClientes << "Reporte Compras de un cliente";
    reporteCClientes.close();
    raiz->recorrerReporteCClientes(pCedula);

}

NodoAAMenu* preordenMenuMasBuscado(NodoAAMenu* R, int maxBusquedas) {
    bool mayor = false;
    if (R == NULL) {
        return NULL;
    }
    else {

        if (R->busquedas >= maxBusquedas) {
            ofstream reporteMenu("Reporte Menu mas buscado.txt", ios::app);
            maxBusquedas = R->busquedas;
            mayor = true;
            reporteMenu.close();
        }
        NodoAAMenu* izq = preordenMenuMasBuscado(R->izquierda, maxBusquedas);
        NodoAAMenu* der = preordenMenuMasBuscado(R->derecha, maxBusquedas);
        if (izq) {
            R = izq;
            mayor = true;
        }
        if (der) {
            R = der;
            mayor = true;
        }
        if (mayor)
            return R;
        return NULL;
    }
}

void ArbolAAMenu::reporteMenuMasBuscado() {
    if (!raiz) {
        cout << "No hay menus registrados" << endl;
        return;
    }
    ofstream reporteMenu("Reporte Menu mas buscado.txt");
    reporteMenu << "Reporte Menu mas buscado";
    int maxBusquedas = 0;
    NodoAAMenu* masBuscado = raiz;
    masBuscado = preordenMenuMasBuscado(raiz, maxBusquedas);
    reporteMenu << "\nCódigo: "; reporteMenu << masBuscado->codMenu; reporteMenu << "     Nombre: " + masBuscado->nombre + "       Cantidad de búsquedas: " + to_string(masBuscado->busquedas);
    reporteMenu.close();
}

pNodoAVLProducto preordenProductoMasComprado(pNodoAVLProducto R, int maxCompras) {
    bool mayor = false;
    if (R == NULL) {
        return NULL;
    }
    else {

        if (R->compras >= maxCompras) {
            ofstream reporteProducto("Reporte Producto mas comprado.txt", ios::app);
            maxCompras = R->compras;
            mayor = true;
            reporteProducto.close();
        }
        pNodoAVLProducto izq = preordenProductoMasComprado(R->Hizq, maxCompras);
        pNodoAVLProducto der = preordenProductoMasComprado(R->Hder, maxCompras);
        if (izq) {
            R = izq;
            mayor = true;
        }
        if (der) {
            R = der;
            mayor = true;
        }
        if (mayor)
            return R;
        return NULL;
    }
}

void arbolAVLProducto::reporteProductoMasComprado() {
    if (!raiz) {
        cout << "No hay productos registrados" << endl;
        return;
    }
    ofstream reporteProducto("Reporte Producto mas comprado.txt");
    reporteProducto << "Reporte Producto mas comprado";
    int maxCompras = 0;
    pNodoAVLProducto masComprado = raiz;
    masComprado = preordenProductoMasComprado(raiz, maxCompras);
    reporteProducto << "\nCódigo: "; reporteProducto << masComprado->codProducto; reporteProducto << "     Nombre: " + masComprado->nombre + "       Cantidad de búsquedas: " + to_string(masComprado->compras);
    reporteProducto.close();
}

void arbolAVLProducto::reportePrecioProducto(int codProducto) {
    if (!raiz) {
        cout << "No hay productos registrados" << endl;
        return;
    }
    
    pNodoAVLProducto producto = ValidarProducto(raiz, codProducto);
    if (producto)
    {
        ofstream reportePrecio("Reporte precio de un Producto.txt");
        reportePrecio << "Reporte precio de un Producto";
        reportePrecio << "\nCódigo: "; reportePrecio << producto->codProducto; reportePrecio << "     Nombre: " + producto->nombre + "       Precio: "; reportePrecio<<producto->precio;
        reportePrecio.close();
        return;
    }
    cout << "No existe el producto";
}

void arbolAVLProducto::reporteCantidadProducto(int codProducto) {
    if (!raiz) {
        cout << "No hay productos registrados" << endl;
        return;
    }

    pNodoAVLProducto producto = ValidarProducto(raiz, codProducto);
    if (producto)
    {
        ofstream reportePrecio("Reporte cantidad de un Producto.txt");
        reportePrecio << "Reporte cantidad de un Producto";
        reportePrecio << "\nCódigo: "; reportePrecio << producto->codProducto; reportePrecio << "     Nombre: " + producto->nombre + "       Cantidad: "; reportePrecio << producto->cantidad;
        reportePrecio.close();
        return;
    }
    cout << "No existe el producto";
}

void listaCola::reporteFacturaMayor() {
    if (facturas == 0) {
        cout << "No hay facturas registradas" << endl;
        return;
    }
        ofstream reporteFMayor("Reporte Factura de mayor monto.txt");
        reporteFMayor << "Reporte Factura de mayor monto";
        reporteFMayor << "\nTotal de facturas registradas: "; reporteFMayor << facturas-1; reporteFMayor << "     Mayor monto facturado: "; reporteFMayor << mayorFactura;
        reporteFMayor.close();
        return;

}

void listaCola::reporteFacturaMenor() {
    if (facturas == 0) {
        cout << "No hay facturas registradas" << endl;
        return;
    }
    ofstream reporteFMenor("Reporte Factura de menor monto.txt");
    reporteFMenor << "Reporte Factura de menor monto";
    reporteFMenor << "\nTotal de facturas registradas: "; reporteFMenor << facturas-1; reporteFMenor << "     Menor monto facturado: "; reporteFMenor << menorFactura;
    reporteFMenor.close();
    return;

}

void listaCola::reporteDescuento(arbolAVLProducto* AProd) {
    ofstream reporteDesc("Reporte Descuento aplicado.txt");
    reporteDesc << "Reporte Descuento aplicado";
    if (largoLista()==0) {
        cout << "No hay clientes en fila" << endl;
        return;
    }
    pnodoCola nodoCola = primero;
    float precio = 0;
    pnodoProductosCola producto = nodoCola->productos;
    while (producto)
    {
        pNodoAVLProducto Prod = AProd->ValidarProducto(AProd->raiz, producto->codProducto);
        precio += (Prod->precio) * producto->cantidad;
        producto = producto->siguiente;
    }
    reporteDesc << "\nPrecio sin descuento: "; precio; reporteDesc << "     Porcentaje de descuento: " + nodoCola->opcion + "%" << endl;
    if (nodoCola->opcion == "1") {
        cout << precio << endl;
        precio = precio - ((6 * precio) / 100);
    }
    else {
        precio = precio - ((3 * precio) / 100);
    }
    reporteDesc << "Precio al aplicar descuento: "; reporteDesc << precio << endl;
    reporteDesc.close();
    return;

}

//Menú Inicio 

void menuInicio(arbolBinarioPais* APais, ArbolRN* ARest, ArbolAAMenu* AMenu, arbolAVLProducto* AProd, ArbolB* AClientes, listaCola* lFila, listaS* lCompra)
{
    while (true)
    {
        string opcion;
        cout << "Menu de inicio del programa" << endl;
        cout << "1. Insertar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Modificar" << endl;
        cout << "4. Reportes" << endl;
        cout << "5. Fila" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;
        if (opcion == "0")
            break;
        else
        {
            if (opcion == "1")
            {
                while (true)
                {
                    cout << "Insertar" << endl;
                    string opcionInsertar;
                    cout << "1. Insertar pais" << endl;
                    cout << "2. Insertar ciudad" << endl;
                    cout << "3. Insertar restaurante" << endl;
                    cout << "4. Insertar menu" << endl;
                    cout << "5. Insertar producto" << endl;
                    cout << "6. Insertar cliente" << endl;
                    cout << "7. Salir" << endl;
                    cin >> opcionInsertar;
                    try
                    {
                        int intOpcionInsertar = stoi(opcionInsertar);
                        if (intOpcionInsertar == 7)
                            break;
                        switch (intOpcionInsertar)
                        {
                        case 1:
                        {
                            while (true) {
                                
                                    cout << "Insertar pais" << endl;
                                    string codPais;
                                    string nombre;
                                    cout << "Introduzca el codigo del nuevo pais: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el nombre del nuevo pais: " << endl;
                                    cin >> nombre;
                                    try {
                                        int intCodPais = stoi(codPais);
                                        APais->insertarNuevoPais(intCodPais, nombre);
                                    }
                                    catch (...) {
                                        cout << "El codigo del pais debe ser un número" << endl;
                                    }
                                    break;
                            }
                            break;
                        }
                        case 2:
                        {
                            while (true) {
                                try {
                                    cout << "Insertar ciudad" << endl;
                                    string codPais;
                                    string codCiudad;
                                    string nombre;
                                    cout << "Introduzca el codigo del pais en donde se insertara la ciudad: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la nueva ciudad: " << endl;
                                    cin >> codCiudad;
                                    cout << "Introduzca el nombre de la nueva ciudad: " << endl;
                                    cin >> nombre;
                                    int intCodPais = stoi(codPais); int intCodCiudad = stoi(codCiudad);
                                    APais->insertarNuevaCiudad(intCodPais, intCodCiudad, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais y de la ciudad deben ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 3:
                        {
                            while (true) {
                                try {
                                    cout << "Insertar restaurante" << endl;
                                    string codPais;
                                    string codCiudad;
                                    string codRestaurante;
                                    string nombre;
                                    cout << "Introduzca el codigo del pais en donde se encuentra el restaurante: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la ciudad en donde se encuentra el restaurante: " << endl;
                                    cin >> codCiudad;
                                    cout << "Introduzca el codigo del nuevo restaurante: " << endl;
                                    cin >> codRestaurante;
                                    cout << "Introduzca el nombre del nuevo restaurante: " << endl;
                                    cin >> nombre;
                                    int intCodPais = stoi(codPais);
                                    int intCodCiudad = stoi(codCiudad);
                                    int intCodRestaurante = stoi(codRestaurante);
                                    ARest->insertarNuevoRest(intCodPais, intCodCiudad, intCodRestaurante, nombre, APais);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais, ciudad y restaurante deben ser numeros" << endl;
                                }
                            }
                            break;
                        }
                        case 4:
                        {
                            while (true) {
                                try {
                                    cout << "Insertar Menu" << endl;
                                    string codPais;
                                    string codCiudad;
                                    string codRestaurante;
                                    string codMenu;
                                    string nombre;
                                    cout << "Introduzca el codigo del pais en donde se encuentra el menu: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la ciudad en donde se encuentra el menu: " << endl;
                                    cin >> codCiudad;
                                    cout << "Introduzca el codigo del restaurante en donde se encuentra el menu: " << endl;
                                    cin >> codRestaurante;
                                    cout << "Introduzca el codigo del nuevo menu: " << endl;
                                    cin >> codMenu;
                                    cout << "Introduzca el nombre del nuevo menu: " << endl;
                                    cin >> nombre;
                                    int intCodPais = stoi(codPais);
                                    int intCodCiudad = stoi(codCiudad);
                                    int intCodRestaurante = stoi(codRestaurante);
                                    int intCodMenu = stoi(codMenu);
                                    AMenu->insertarNuevoMenu(intCodPais, intCodCiudad, intCodRestaurante, intCodMenu, nombre, APais, ARest);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais, ciudad, restaurante y menu deben ser numeros" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 5:
                        {
                            while (true) {
                                try {
                                    cout << "Insertar Producto" << endl;
                                    string codPais;
                                    string codCiudad;
                                    string codRestaurante;
                                    string codMenu;
                                    string codProducto;
                                    string nombre;
                                    string KCal;
                                    string precio;
                                    string cantidad;
                                    cout << "Introduzca el codigo del pais en donde se encuentra el producto: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la ciudad en donde se encuentra el producto: " << endl;
                                    cin >> codCiudad;
                                    cout << "Introduzca el codigo del restaurante en donde se encuentra el producto: " << endl;
                                    cin >> codRestaurante;
                                    cout << "Introduzca el codigo del menu en donde se encuentra el producto: " << endl;
                                    cin >> codMenu;
                                    cout << "Introduzca el codigo del nuevo producto: " << endl;
                                    cin >> codProducto;
                                    cout << "Introduzca el nombre del nuevo producto: " << endl;
                                    cin >> nombre;
                                    cout << "Introduzca las Kcal del nuevo producto: " << endl;
                                    cin >> KCal;
                                    cout << "Introduzca el precio del nuevo producto: " << endl;
                                    cin >> precio;
                                    cout << "Introduzca la cantidad disponible del nuevo producto: " << endl;
                                    cin >> cantidad;
                                    int intCodPais = stoi(codPais);
                                    int intCodCiudad = stoi(codCiudad);
                                    int intCodRestaurante = stoi(codRestaurante);
                                    int intCodMenu = stoi(codMenu);
                                    int intCodProducto = stoi(codProducto);
                                    int intPrecio = stoi(precio);
                                    int intCantidad = stoi(cantidad);
                                    AProd->insertarNuevoProducto(intCodPais, intCodCiudad, intCodRestaurante, intCodMenu, intCodProducto, nombre, KCal, intPrecio, intCantidad, APais, ARest, AMenu);
                                    break;
                                    
                                }
                                catch (...) {
                                    cout << "El codigo del pais, ciudad, restaurante, menu y producto deben ser numeros" << endl;
                                    cout << "El precio y la cantidad también deben ser numeros" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 6:
                        {
                            while (true) {
                                try {
                                    cout << "Insertar Cliente" << endl;
                                    string cedula;
                                    string nombre;
                                    cout << "Introduzca la cedula del nuevo cliente: " << endl;
                                    cin >> cedula;
                                    cout << "Introduzca el nombre del nuevo cliente: " << endl;
                                    cin >> nombre;
                                    int intCedula = stoi(cedula);
                                    AClientes->insertarNuevoCliente(intCedula, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "La cedula debe ser un numero" << endl;
                                }
                            }
                            break;
                        }

                        default:
                            cout << "No es una opcion valida" << endl;
                            break;
                        }

                    }
                    catch (...)
                    {
                        cout << "No es una opcion valida" << endl;
                    }
                    break;

                }

            }
            /*if (opcion == "2")
            {
                while (true)
                {
                    cout << "Eliminar" << endl;
                    string opcionEliminar;
                    cout << "1. Eliminar pais" << endl;
                    cout << "2. Eliminar ciudad" << endl;
                    cout << "3. Eliminar restaurante" << endl;
                    cout << "4. Eliminar menu" << endl;
                    cout << "5. Eliminar producto" << endl;
                    cout << "6. Eliminar cliente" << endl;
                    cout << "7. Salir" << endl;
                    cin >> opcionEliminar;
                    try
                    {
                        int intOpcionEliminar = stoi(opcionEliminar);
                        if (intOpcionEliminar == 7)
                            break;
                        switch (intOpcionEliminar)
                        {
                        case 1:
                        {
                            cout << "Eliminar pais" << endl;
                            string codPais;
                            cout << "Introduzca el codigo del pais a eliminar: " << endl;
                            cin >> codPais;
                            lPais->eliminarPais(codPais);
                            break;
                        }
                        case 2:
                        {
                            cout << "Eliminar ciudad" << endl;
                            string codPais;
                            string codCiudad;
                            cout << "Introduzca el codigo del pais en donde se eliminara la ciudad: " << endl;
                            cin >> codPais;
                            cout << "Introduzca el codigo de la ciudad a eliminar: " << endl;
                            cin >> codCiudad;
                            lPais->eliminarCiudad(codPais, codCiudad);
                            break;
                        }
                        case 3:
                        {
                            cout << "Eliminar restaurante" << endl;
                            string codRestaurante;
                            cout << "Introduzca el codigo del restaurante a eliminar: " << endl;
                            cin >> codRestaurante;
                            lRest->eliminarRestaurante(codRestaurante);
                            break;
                        }
                        case 4:
                        {
                            cout << "Eliminar Menu" << endl;
                            string codMenu;
                            cout << "Introduzca el codigo del menu a eliminar: " << endl;
                            cin >> codMenu;
                            lMenu->eliminarMenu(codMenu);
                            break;
                        }
                        case 5:
                        {
                            cout << "Eliminar Producto" << endl;
                            string codProducto;
                            cout << "Introduzca el codigo del producto a eliminar: " << endl;
                            cin >> codProducto;
                            lProd->eliminarProducto(codProducto);
                            break;
                        }
                        case 6:
                        {
                            cout << "Eliminar Cliente" << endl;
                            string cedula;
                            cout << "Introduzca la cedula del cliente a eliminar: " << endl;
                            cin >> cedula;
                            lClientes->eliminarCliente(cedula);
                            break;
                        }
                        default:
                            cout << "No es una opcion valida" << endl;
                            break;
                        }

                    }
                    catch (string opcionEliminar)
                    {
                        cout << "No es una opcion valida" << endl;
                    }
                    break;

                }

            }*/
            if (opcion == "2")
            {
                while (true)
                {
                    cout << "Buscar" << endl;
                    string opcionBuscar;
                    cout << "1. Buscar pais" << endl;
                    cout << "2. Buscar ciudad" << endl;
                    cout << "3. Buscar restaurante" << endl;
                    cout << "4. Buscar menu" << endl;
                    cout << "5. Buscar producto" << endl;
                    cout << "6. Buscar cliente" << endl;
                    cout << "7. Salir" << endl;
                    cin >> opcionBuscar;
                    try
                    {
                        int intOpcionBuscar = stoi(opcionBuscar);
                        if (intOpcionBuscar == 7)
                            break;
                        switch (intOpcionBuscar)
                        {
                        case 1:
                        {
                            while (true) {
                                try {
                                    cout << "Buscar pais" << endl;
                                    string codPais;
                                    cout << "Introduzca el codigo del pais a buscar: " << endl;
                                    cin >> codPais;
                                    int intCodPais = stoi(codPais);
                                    APais->buscarPais(intCodPais);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais debe ser un número" << endl;
                                }
                            }
                            break;
                        }
                        case 2:
                        {
                            while (true) {
                                try {
                                    cout << "Buscar ciudad" << endl;
                                    string codPais;
                                    string codCiudad;
                                    cout << "Introduzca el codigo del pais en donde esta la ciudad: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la ciudad a buscar: " << endl;
                                    cin >> codCiudad;
                                    int intCodPais = stoi(codPais);
                                    int intCodCiudad = stoi(codCiudad);
                                    APais->buscarCiudad(intCodPais, intCodCiudad);
                                    break;
                                    
                                }
                                catch (...) {
                                    cout << "El codigo del pais y de la ciudad deben ser un número" << endl;
                                }
                            }
                            break;
                        }
                        case 3:
                        {
                            while (true) {
                                try {
                                    cout << "Buscar restaurante" << endl;
                                    string codRestaurante;
                                    cout << "Introduzca el codigo del restaurante: " << endl;
                                    cin >> codRestaurante;
                                    int intCodRestaurante = stoi(codRestaurante);
                                    ARest->buscarRestaurante(intCodRestaurante);
                                    break;

                                }
                                catch (...) {
                                    cout << "El codigo del restaurante debe ser un número" << endl;
                                }
                            }
                            break;
                        }
                        case 4:
                        {
                            while (true) {
                                try {
                                    cout << "Buscar menu" << endl;
                                    string codMenu;
                                    cout << "Introduzca el codigo del menu: " << endl;
                                    cin >> codMenu;
                                    int intCodMenu = stoi(codMenu);
                                    AMenu->buscarMenu(intCodMenu);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del menu debe ser un número" << endl;
                                }
                            }
                            break;
                        }
                        case 5:
                        {
                            while (true) {
                                try {
                                    cout << "Buscar producto" << endl;
                                    string codProducto;
                                    cout << "Introduzca el codigo del producto: " << endl;
                                    cin >> codProducto;
                                    int intCodProducto = stoi(codProducto);
                                    AProd->buscarProducto(intCodProducto);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del producto debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 6:
                        {
                            while (true) {
                                try {
                                    cout << "Buscar cliente" << endl;
                                    string cedula;
                                    cout << "Introduzca la cedula del cliente: " << endl;
                                    cin >> cedula;
                                    int intCedula = stoi(cedula);
                                    AClientes->busqueda(intCedula);
                                    break;
                                }
                                catch (...) {
                                    cout << "La cedula debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        default:
                            cout << "No es una opcion valida" << endl;
                            break;
                        }

                    }
                    catch (...)
                    {
                        cout << "No es una opcion valida" << endl;
                    }
                    break;

                }
            }
            if (opcion == "3") {
                while (true)
                {
                    cout << "Modificar" << endl;
                    string opcionModificar;
                    cout << "1. Modificar pais" << endl;
                    cout << "2. Modificar ciudad" << endl;
                    cout << "3. Modificar restaurante" << endl;
                    cout << "4. Modificar menu" << endl;
                    cout << "5. Modificar producto" << endl;
                    cout << "6. Modificar cliente" << endl;
                    cout << "7. Salir" << endl;
                    cin >> opcionModificar;
                    try
                    {
                        int intOpcionModificar = stoi(opcionModificar);
                        if (intOpcionModificar == 7)
                            break;
                        switch (intOpcionModificar)
                        {
                        case 1:
                        {
                            while (true) {
                                try {
                                    cout << "Modificar pais" << endl;
                                    string codPais;
                                    string nombre;
                                    cout << "Introduzca el codigo del pais: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el nuevo nombre: " << endl;
                                    cin >> nombre;
                                    int intCodPais = stoi(codPais);
                                    APais->modificarPais(intCodPais, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 2:
                        {
                            while (true) {
                                try {
                                    cout << "Modificar ciudad" << endl;
                                    string codPais;
                                    string codCiudad;
                                    string nombre;
                                    cout << "Introduzca el codigo del pais: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la ciudad: " << endl;
                                    cin >> codCiudad;
                                    cout << "Introduzca el nuevo nombre: " << endl;
                                    cin >> nombre;
                                    int intCodPais = stoi(codPais); int intCodCiudad = stoi(codCiudad);
                                    APais->modificarCiudad(intCodPais, intCodCiudad, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais y la ciudad debe ser un número" << endl;
                                }
                            }
                            break;
                        }
                        case 3:
                        {
                            while (true) {
                                try {
                                    cout << "Modificar restaurante" << endl;
                                    string codRestaurante;
                                    string nombre;
                                    cout << "Introduzca el codigo del restaurante: " << endl;
                                    cin >> codRestaurante;
                                    cout << "Introduzca el nuevo nombre: " << endl;
                                    cin >> nombre;
                                    int intCodRestaurante = stoi(codRestaurante);
                                    ARest->modificarRestaurante(intCodRestaurante, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del restaurante debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 4:
                        {
                            while (true) {
                                try {
                                    cout << "Modificar menu" << endl;
                                    string codMenu;
                                    string nombre;
                                    cout << "Introduzca el codigo del menu: " << endl;
                                    cin >> codMenu;
                                    cout << "Introduzca el nuevo nombre: " << endl;
                                    cin >> nombre;
                                    int intCodMenu = stoi(codMenu);
                                    AMenu->modificarMenu(intCodMenu, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del menu debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 5:
                        {
                            while (true) {
                                try {
                                    cout << "Modificar producto" << endl;
                                    string codProducto;
                                    string nombre;
                                    string kcal;
                                    string precio;
                                    string opcionstr;
                                    string cantidad;
                                    cout << "Introduzca el codigo del producto: " << endl;
                                    cin >> codProducto;
                                    cout << "Introduzca 1 si quiere modificar el nombre, 2 si quiere modificar las kcal, 3 si quiere modificar el precio o 4 para modificar la cantidad: " << endl;
                                    cin >> opcionstr;
                                    try
                                    {
                                        int opcion = stoi(opcionstr);
                                        int intCodProducto = stoi(codProducto);
                                        switch (opcion)
                                        {
                                        case 1:
                                        {
                                            cout << "Introduzca el nuevo nombre: " << endl;
                                            cin >> nombre;
                                            AProd->modificarProducto(intCodProducto, opcion, nombre, kcal, 0, 0);
                                            break;
                                        }
                                        case 2:
                                        {
                                            cout << "Introduzca las kcal: " << endl;
                                            cin >> kcal;
                                            AProd->modificarProducto(intCodProducto, opcion, nombre, kcal, 0, 0);
                                            break;
                                        }
                                        case 3:
                                        {
                                            while (true) {
                                                try {
                                                    cout << "Introduzca el nuevo precio: " << endl;
                                                    cin >> precio;
                                                    int intPrecio = stoi(precio);
                                                    AProd->modificarProducto(intCodProducto, opcion, nombre, kcal, intPrecio, 0);
                                                    break;
                                                }
                                                catch (...) {
                                                    cout << "El precio debe ser un número" << endl;
                                                }
                                            }
                                            break;
                                        }
                                        case 4:
                                        {
                                            while (true) {
                                                try {
                                                    cout << "Introduzca la cantidad a agregar: " << endl;
                                                    cin >> cantidad;
                                                    int intCantidad = stoi(cantidad);
                                                    AProd->modificarProducto(intCodProducto, opcion, nombre, kcal, 0, intCantidad);
                                                    break;
                                                }
                                                catch (...) {
                                                    cout << "La cantidad debe ser un número" << endl;
                                                }
                                            }
                                            break;
                                        }
                                        default:
                                            cout << "No es una opcion valida" << endl;
                                            break;
                                        }
                                    }
                                    catch (...)
                                    {
                                        cout << "La opcion a elegir y el codigo del producto deben ser numeros" << endl;
                                    }

                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del menu debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 6:
                        {
                            while (true) {
                                try {
                                    cout << "Modificar cliente" << endl;
                                    string cedula;
                                    string nombre;
                                    cout << "Introduzca la cedula: " << endl;
                                    cin >> cedula;
                                    cout << "Introduzca el nuevo nombre: " << endl;
                                    cin >> nombre;
                                    int intCedula = stoi(cedula);
                                    AClientes->modificarCliente(intCedula, nombre);
                                    break;
                                }
                                catch (...) {
                                    cout << "La cedula debe ser un número" << endl;
                                }
                            }
                            break;
                        }

                        default:
                            cout << "No es una opcion valida" << endl;
                            break;
                        }

                    }
                    catch (...)
                    {
                        cout << "No es una opcion valida" << endl;
                    }
                    break;

                }
            }
            if (opcion == "4") {
                while (true)
                {
                    cout << "Reportes" << endl;
                    string opcionReportes;
                    cout << "1. Reporte paises" << endl;
                    cout << "2. Reporte ciudades" << endl;
                    cout << "3. Reporte restaurantes" << endl;
                    cout << "4. Reporte clientes" << endl;
                    cout << "5. Compras de un cliente" << endl;
                    cout << "6. Restaurante mas buscado" << endl;
                    cout << "7. Menu de un restaurante" << endl;
                    cout << "8. Productos de un menú" << endl;
                    cout << "9. Menu mas buscado" << endl;
                    cout << "10. Producto mas comprado" << endl;
                    cout << "11. Factura de mayor monto" << endl;
                    cout << "12. Factura de menor monto" << endl;
                    cout << "13. Precio de un producto" << endl;
                    cout << "14. Descuento aplicado" << endl;
                    cout << "15. Cantidad de un producto" << endl;
                    cout << "0. Salir" << endl;
                    cin >> opcionReportes;
                    try
                    {
                        int intOpcionModificar = stoi(opcionReportes);
                        if (intOpcionModificar == 0)
                            break;
                        switch (intOpcionModificar)
                        {
                        case 1:
                        {
                            cout << "Reporte paises" << endl;
                            APais->reportePaises();
                            cout << "Se ha creado el reporte de la lista de paises" << endl;
                            break;
                        }
                        case 2:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte ciudades" << endl;
                                    string codPais;
                                    cout << "Introduzca el codigo del pais que desee: " << endl;
                                    cin >> codPais;
                                    int intCodPais = stoi(codPais);
                                    APais->reporteCiudades(intCodPais);
                                    cout << "Se ha creado el reporte de la lista de ciudades de un pais" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 3:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte restaurantes" << endl;
                                    string codPais;
                                    string codCiudad;
                                    cout << "Introduzca el codigo del pais que desee: " << endl;
                                    cin >> codPais;
                                    cout << "Introduzca el codigo de la ciudad que desee: " << endl;
                                    cin >> codCiudad;
                                    int intCodPais = stoi(codPais);
                                    int intCodCiudad = stoi(codCiudad);
                                    ARest->reporteRestaurantes(intCodPais, intCodCiudad, APais);
                                    cout << "Se ha creado el reporte de la lista de restaurantes de una ciudad" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del pais y de la ciudad debe ser un número" << endl;
                                }
                            }
                            break;
                        }
                        case 4:
                        {
                            cout << "Reporte clientes" << endl;
                            AClientes->reporteClientes();
                            cout << "Se ha creado el reporte de la lista de clientes" << endl;
                            break;
                        }
                        case 5:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte Compras de un cliente" << endl;
                                    string codCliente;
                                    cout << "Introduzca la cedula del cliente que desee: " << endl;
                                    cin >> codCliente;
                                    int intCodCliente = stoi(codCliente);
                                    AClientes->reporteComprasCliente(intCodCliente);
                                    cout << "Se ha creado el reporte de las compras de un cliente" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "La cédula debe ser un número" << endl;
                                }
                            }
                            break;

                        }
                        case 6:
                        {
                            cout << "Reporte restaurante mas buscado" << endl;
                            ARest->reporteRestMasBuscado();
                            cout << "Se ha creado el reporte del restaurante mas buscado" << endl;
                            break;
                        }
                        case 7:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte menus de un restaurante" << endl;
                                    string codRestaurante;
                                    cout << "Introduzca el codigo del restaurante que desee: " << endl;
                                    cin >> codRestaurante;
                                    int intCodRestaurante = stoi(codRestaurante);
                                    AMenu->reporteMenuRest(intCodRestaurante, ARest);
                                    cout << "Se ha creado el reporte de los menus de un restaurante" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del restaurante debe ser un número" << endl;
                                }
                            }
                            break;

                        }
                        case 8:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte productos de un menú" << endl;
                                    string codMenu;
                                    cout << "Introduzca el codigo del menu que desee: " << endl;
                                    cin >> codMenu;
                                    int intCodMenu = stoi(codMenu);
                                    AProd->reporteProdMenu(intCodMenu, AMenu);
                                    cout << "Se ha creado el reporte de los productos de un menú" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del menu debe ser un número" << endl;
                                }
                            }
                            break;

                        }
                        case 9:
                        {
                            cout << "Reporte menu mas buscado" << endl;
                            AMenu->reporteMenuMasBuscado();
                            cout << "Se ha creado el reporte del menu mas buscado" << endl;
                            break;
                        }
                        case 10:
                        {
                            cout << "Reporte producto mas comprado" << endl;
                            AProd->reporteProductoMasComprado();
                            cout << "Se ha creado el reporte del producto mas comprado" << endl;
                            break;

                        }
                        case 11:
                        {
                            cout << "Reporte factura de mayor monto" << endl;
                            lFila->reporteFacturaMayor();
                            cout << "Se ha creado el reporte de la factura de mayor monto" << endl;
                            break;

                        }
                        case 12:
                        {
                            cout << "Reporte factura de menor monto" << endl;
                            lFila->reporteFacturaMenor();
                            cout << "Se ha creado el reporte de la factura de menor monto" << endl;
                            break;

                        }
                        case 13:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte precio de un producto" << endl;
                                    string codProducto;
                                    cout << "Introduzca el codigo del producto que desee: " << endl;
                                    cin >> codProducto;
                                    int intCodProducto = stoi(codProducto);
                                    AProd->reportePrecioProducto(intCodProducto);
                                    cout << "Se ha creado el reporte del precio del producto" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del producto debe ser un número" << endl;
                                }
                            }
                            break;
                            
                        }
                        case 14:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte descuento aplicado" << endl;
                                    lFila->reporteDescuento(AProd);
                                    cout << "Se ha creado el reporte del descuento aplicado" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del producto debe ser un número" << endl;
                                }
                            }
                            break;

                        }
                        case 15:
                        {
                            while (true) {
                                try {
                                    cout << "Reporte cantidad de un producto" << endl;
                                    string codProducto;
                                    cout << "Introduzca el codigo del producto que desee: " << endl;
                                    cin >> codProducto;
                                    int intCodProducto = stoi(codProducto);
                                    AProd->reporteCantidadProducto(intCodProducto);
                                    cout << "Se ha creado el reporte de la cantidad del producto" << endl;
                                    break;
                                }
                                catch (...) {
                                    cout << "El codigo del producto debe ser un número" << endl;
                                }
                            }
                            break;

                        }
                        default:
                            break;
                        }
                    }
                    catch (...)
                    {
                        cout << "No es una opcion valida" << endl;
                    }
                }
            }
            if (opcion == "5") {
                while (true)
                {
                    cout << "Fila" << endl;
                    string opcionFila;
                    cout << "1. Insertar cliente en la fila" << endl;
                    cout << "2. Modificar compra del cliente en la fila" << endl;
                    cout << "3. Facturar" << endl;
                    cout << "4. Salir" << endl;
                    cin >> opcionFila;
                    try
                    {
                        int intOpcionFila = stoi(opcionFila);
                        if (intOpcionFila == 4)
                            break;
                        switch (intOpcionFila)
                        {
                        case 1:
                        {
                            cout << "Insertar Cliente en la cola" << endl;
                            string cedula;
                            string nombre;
                            cout << "Introduzca la cedula del cliente a introducir en la cola: " << endl;
                            cin >> cedula;
                            int intCedula = stoi(cedula);
                            lFila->insertarNuevoClienteFila(intCedula, AProd, AClientes);
                            break;

                        }
                        case 2:
                        {
                            cout << "Modificar Compra del cliente en la fila" << endl;
                            string cedula;
                            string codProducto;
                            string opcionstr;
                            string nuevoCod;
                            string nuevaCant;
                            cout << "Introduzca la cedula del cliente a modificar en la cola: " << endl;
                            cin >> cedula;
                            cout << "Introduzca el codigo del producto a modificar en la cola: " << endl;
                            cin >> codProducto;
                            cout << "Introduzca 1 si quiere modificar el producto, 2 si quiere modificar la cantidad o 3 para eliminar el producto: " << endl;
                            cin >> opcionstr;
                            try
                            {
                                int opcion = stoi(opcionstr);
                                int intCedula = stoi(cedula);
                                int intCodProducto = stoi(codProducto);
                                switch (opcion)
                                {
                                case 1:
                                {
                                        try {
                                            cout << "Introduzca el codigo del nuevo producto: " << endl;
                                            cin >> nuevoCod;
                                            int intCod = stoi(nuevoCod);
                                            lFila->modificarCola(intCedula, intCodProducto, opcion, AProd, intCod);
                                        }
                                        catch (...) {
                                            cout << "El nuevo codigo debe ser un numero" << endl;
                                        }
                                    break;
                                }
                                case 2:
                                {
                                    cout << "Introduzca la nueva cantidad: " << endl;
                                    cin >> nuevaCant;
                                    try {
                                        int cantidad = stoi(nuevaCant);
                                        lFila->modificarCola(intCedula, intCodProducto, opcion, AProd, 0, cantidad);
                                    }
                                    catch (...)
                                    {
                                        cout << "No es un valor valido" << endl;
                                    }
                                    break;

                                }
                                case 3:
                                {
                                    cout << "Eliminar producto" << endl;
                                    lFila->modificarCola(intCedula, intCodProducto, opcion, AProd);
                                    break;
                                }
                                default:
                                    cout << "No es una opcion valida" << endl;
                                    break;
                                }
                            }
                            catch (...)
                            {
                                cout << "La opcion debe ser un número" << endl;
                                cout << "La cedula y el codigo del producto también deben ser un número" << endl;
                            }
                            break;
                        }
                        case 3:
                        {
                            while (true) {
                                    cout << "Facturar" << endl;
                                    string metodo;
                                    cout << "Introduzca 1 si desea pagar con tarjeta, 2 si desea pagar con efectivo:"<<endl;
                                    cin >> metodo;
                                    if (metodo == "1" || metodo == "2") {
                                        lFila->facturar(AProd, metodo);
                                        break;
                                    }
                                    else
                                    {
                                        cout << "No es un valor valido" << endl;
                                    }
                            }
                            break;

                        }
                        default:
                            cout << "No es una opcion valida" << endl;
                            break;
                        }

                    }
                    catch (...)
                    {
                        cout << "No es una opcion valida" << endl;
                    }
                    break;

                }

            }
        }
    }
    }


int main()
{
    arbolBinarioPais APaises; ArbolRN ARestaurantes; ArbolAAMenu AMenu; arbolAVLProducto AProductos; ArbolB AClientes; listaS LCompra; listaCola LFila;
    arbolBinarioPais* ptrPais = &APaises; ArbolRN* ptrRest = &ARestaurantes; ArbolAAMenu* ptrMenu = &AMenu; arbolAVLProducto* ptrProd = &AProductos; ArbolB* ptrClientes = &AClientes; listaCola* ptrFila = &LFila; listaS* ptrCompra = &LCompra;

    //Cargar archivos
    int i = 0;
    APaises.archAArbolPais("Paises.txt", i); PreordenR(APaises.raiz); cout << "\n\n\n"; i += 1; APaises.archAArbolCiudad("Ciudades.txt", i); cout << "\n\n\n"; i += 1;
    APaises.archAArbolRest("Restaurantes.txt", i, ptrRest); ARestaurantes.preordenM(); cout << "\n\n\n"; i += 1; APaises.archAArbolMenu("Menu.txt", i, ptrRest, ptrMenu); AMenu.imprimirEnOrden(); cout << "\n\n\n"; i += 1; APaises.archAArbolProductos("Productos.txt", i, ptrRest, ptrMenu, ptrProd); cout << "\n\n\n";  i += 1; AClientes.archAArbolB("Clientes.txt", i); AClientes.recorrer();

    cout << "\n\n\n";


    //Se inicia el menú
    cout << "\n\n\n";
    menuInicio(ptrPais, ptrRest, ptrMenu, ptrProd, ptrClientes, ptrFila, ptrCompra);

    AClientes.reporteClientes();

    cin.get();
    return 0;
}