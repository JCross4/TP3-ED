#include "ventana1.h"

using namespace System;
using namespace System::Windows::Forms;

 
void main() {
    arbolBinarioPais APaises; ArbolRN ARestaurantes; ArbolAAMenu AMenu; arbolAVLProducto AProductos; ArbolB AClientes; ArbolB AAdmins; listaS LCompra; listaCola LFila; listaS LContacto;
    arbolBinarioPais* ptrPais = &APaises; ArbolRN* ptrRest = &ARestaurantes; ArbolAAMenu* ptrMenu = &AMenu; arbolAVLProducto* ptrProd = &AProductos; ArbolB* ptrClientes = &AClientes; ArbolB* ptrAdmins = &AAdmins; listaCola* ptrFila = &LFila; listaS* ptrCompra = &LCompra; listaS* ptrContacto = &LContacto;

    //Cargar archivos
    int i = 0;
    APaises.archAArbolPais("Paises.txt", i); PreordenR(APaises.raiz); cout << "\n\n\n"; i += 1; APaises.archAArbolCiudad("Ciudades.txt", i); cout << "\n\n\n"; i += 1;
    APaises.archAArbolRest("Restaurantes.txt", i, ptrRest); ARestaurantes.preordenM(); cout << "\n\n\n"; i += 1; APaises.archAArbolMenu("Menu.txt", i, ptrRest, ptrMenu); AMenu.imprimirEnOrden(); cout << "\n\n\n"; i += 1; APaises.archAArbolProductos("Productos.txt", i, ptrRest, ptrMenu, ptrProd); cout << "\n\n\n";  i += 1; AClientes.archAArbolB("Clientes.txt", i); AAdmins.archAArbolB("Administradores.txt", i);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
    InterfazTP3::ventana1^ vista1 = gcnew InterfazTP3::ventana1(ptrPais, ptrRest, ptrMenu, ptrProd, ptrClientes, ptrAdmins, ptrFila, ptrCompra, ptrContacto);
    vista1->Show();
	//InterfazTP3::ventana1 form;
	Application::Run(vista1);
}

