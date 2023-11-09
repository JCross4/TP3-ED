#pragma once
#include "TP3.h"
#include "InsertarPais.h"
#include "InsertarCiudad.h"
#include "InsertarRest.h"
#include "InsertarMenu.h"
#include "InsertarProducto.h"
#include "InsertarCliente.h"
#include "InsertarAdmin.h"
#include "ModificarPais.h"
#include "ModificarCiudad.h"
#include "ModificarRest.h"
#include "ModificarMenu.h"
#include "ModificarProducto.h"
#include "ModificarCliente.h"
#include "ModificarAdmin.h"
#include "ConsultaPais.h"
#include "ConsultaCiudad.h"
#include "ConsultaRestaurante.h"
#include "ConsultaMenu.h"
#include "ConsultaProducto.h"
#include "ConsultaCliente.h"
#include "ConsultaAdmin.h"
#include "VentanaLugares.h"
#include "VentanaRest.h"
#include "VentanaUsuarios.h"
#include "EliminarPais.h"
#include "EliminarMenu.h"
#include "EliminarRest.h"
#include "EliminarCliente.h"
#include "EliminarAdmin.h"
#include "RegistrarCompra.h"
#include "EliminarCiudad.h"
#include "EliminarProducto.h"
#include "ReporteCiudades.h"
#include "ReporteRest.h"
#include "ReporteComprasCliente.h"
#include "ReportePrecioProd.h"
#include "ReporteCantProd.h"
#include "ModificarCompra.h"
#include "InsertarContacto.h"
#include "VentanaPagos.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VistaAdmin
	/// </summary>
	public ref class VistaAdmin : public System::Windows::Forms::Form
	{
	
	public: arbolBinarioPais* APaises; ArbolRN* ARestaurantes; ArbolAAMenu* AMenu; arbolAVLProducto* AProducto; ArbolB* AClientes; ArbolB* AAdmins; listaCola* LFila; listaS* LCompra; listaS* LContacto;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesToolStripMenuItem3;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ men�ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ comprasDeUnClienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteM�sBuscadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ men�M�sBuscadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoM�sCompradoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaDeMayorMontoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaDeMenorMontoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ precioDeUnProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentoAplicadoPorPagarConTarjetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cantidadDeUnProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosEliminadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesEliminadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesEliminadasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menusEliminadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisesEliminadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaci�nToolStripMenuItem1;

	private: System::Windows::Forms::Button^ button4;
	public:
		  VistaAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		VistaAdmin(arbolBinarioPais* ptrPaises, ArbolRN* ptrRestaurantes, ArbolAAMenu* ptrMenu, arbolAVLProducto* ptrProducto, ArbolB* ptrClientes, ArbolB* ptrAdmins, listaCola* ptrFila, listaS* ptrCompra, listaS* ptrContacto)
		{
			InitializeComponent();
			APaises = ptrPaises; ARestaurantes = ptrRestaurantes; AMenu = ptrMenu; AProducto = ptrProducto; AClientes = ptrClientes; AAdmins = ptrAdmins; LFila = ptrFila; LCompra = ptrCompra; LContacto = ptrContacto;
		
			//TODO: agregar c�digo de constructor aqu�
			
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~VistaAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inserci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificaci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminaci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ men�sToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registrarCompraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ men�ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ men�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VistaAdmin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inserci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�sToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrarCompraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificaci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminaci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprasDeUnClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteM�sBuscadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�M�sBuscadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoM�sCompradoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaDeMayorMontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaDeMenorMontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->precioDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentoAplicadoPorPagarConTarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cantidadDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesEliminadasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menusEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaci�nToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Administrador";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturaci�nToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(744, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->inserci�nToolStripMenuItem,
					this->consultasToolStripMenuItem, this->modificaci�nToolStripMenuItem, this->eliminaci�nToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// inserci�nToolStripMenuItem
			// 
			this->inserci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->pa�sesToolStripMenuItem,
					this->ciudadesToolStripMenuItem, this->restaurantesToolStripMenuItem, this->men�sToolStripMenuItem, this->productosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->administradoresToolStripMenuItem, this->registrarCompraToolStripMenuItem
			});
			this->inserci�nToolStripMenuItem->Name = L"inserci�nToolStripMenuItem";
			this->inserci�nToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->inserci�nToolStripMenuItem->Text = L"Inserci�n";
			// 
			// pa�sesToolStripMenuItem
			// 
			this->pa�sesToolStripMenuItem->Name = L"pa�sesToolStripMenuItem";
			this->pa�sesToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->pa�sesToolStripMenuItem->Text = L"Pa�ses";
			this->pa�sesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::pa�sesToolStripMenuItem_Click);
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->ciudadesToolStripMenuItem->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::ciudadesToolStripMenuItem_Click);
			// 
			// restaurantesToolStripMenuItem
			// 
			this->restaurantesToolStripMenuItem->Name = L"restaurantesToolStripMenuItem";
			this->restaurantesToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->restaurantesToolStripMenuItem->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::restaurantesToolStripMenuItem_Click);
			// 
			// men�sToolStripMenuItem
			// 
			this->men�sToolStripMenuItem->Name = L"men�sToolStripMenuItem";
			this->men�sToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->men�sToolStripMenuItem->Text = L"Men�s";
			this->men�sToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::men�sToolStripMenuItem_Click);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::productosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::clientesToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			this->administradoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::administradoresToolStripMenuItem_Click);
			// 
			// registrarCompraToolStripMenuItem
			// 
			this->registrarCompraToolStripMenuItem->Name = L"registrarCompraToolStripMenuItem";
			this->registrarCompraToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->registrarCompraToolStripMenuItem->Text = L"Registrar compra";
			this->registrarCompraToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::registrarCompraToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->pa�sesToolStripMenuItem2,
					this->ciudadesToolStripMenuItem2, this->restaurantesToolStripMenuItem2, this->men�ToolStripMenuItem1, this->productosToolStripMenuItem2,
					this->clientesToolStripMenuItem2, this->administradoresToolStripMenuItem1
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// pa�sesToolStripMenuItem2
			// 
			this->pa�sesToolStripMenuItem2->Name = L"pa�sesToolStripMenuItem2";
			this->pa�sesToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->pa�sesToolStripMenuItem2->Text = L"Pa�ses";
			this->pa�sesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::pa�sesToolStripMenuItem2_Click);
			// 
			// ciudadesToolStripMenuItem2
			// 
			this->ciudadesToolStripMenuItem2->Name = L"ciudadesToolStripMenuItem2";
			this->ciudadesToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->ciudadesToolStripMenuItem2->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::ciudadesToolStripMenuItem2_Click);
			// 
			// restaurantesToolStripMenuItem2
			// 
			this->restaurantesToolStripMenuItem2->Name = L"restaurantesToolStripMenuItem2";
			this->restaurantesToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->restaurantesToolStripMenuItem2->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::restaurantesToolStripMenuItem2_Click);
			// 
			// men�ToolStripMenuItem1
			// 
			this->men�ToolStripMenuItem1->Name = L"men�ToolStripMenuItem1";
			this->men�ToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->men�ToolStripMenuItem1->Text = L"Men�";
			this->men�ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::men�ToolStripMenuItem1_Click);
			// 
			// productosToolStripMenuItem2
			// 
			this->productosToolStripMenuItem2->Name = L"productosToolStripMenuItem2";
			this->productosToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->productosToolStripMenuItem2->Text = L"Productos";
			this->productosToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::productosToolStripMenuItem2_Click);
			// 
			// clientesToolStripMenuItem2
			// 
			this->clientesToolStripMenuItem2->Name = L"clientesToolStripMenuItem2";
			this->clientesToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->clientesToolStripMenuItem2->Text = L"Clientes";
			this->clientesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::clientesToolStripMenuItem2_Click);
			// 
			// administradoresToolStripMenuItem1
			// 
			this->administradoresToolStripMenuItem1->Name = L"administradoresToolStripMenuItem1";
			this->administradoresToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->administradoresToolStripMenuItem1->Text = L"Administradores";
			this->administradoresToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::administradoresToolStripMenuItem1_Click);
			// 
			// modificaci�nToolStripMenuItem
			// 
			this->modificaci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->pa�sesToolStripMenuItem1,
					this->ciudadesToolStripMenuItem1, this->restaurantesToolStripMenuItem1, this->men�ToolStripMenuItem, this->productosToolStripMenuItem1,
					this->clientesToolStripMenuItem1, this->administradorToolStripMenuItem, this->compraToolStripMenuItem
			});
			this->modificaci�nToolStripMenuItem->Name = L"modificaci�nToolStripMenuItem";
			this->modificaci�nToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->modificaci�nToolStripMenuItem->Text = L"Modificaci�n";
			// 
			// pa�sesToolStripMenuItem1
			// 
			this->pa�sesToolStripMenuItem1->Name = L"pa�sesToolStripMenuItem1";
			this->pa�sesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->pa�sesToolStripMenuItem1->Text = L"Pa�ses";
			this->pa�sesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::pa�sesToolStripMenuItem1_Click);
			// 
			// ciudadesToolStripMenuItem1
			// 
			this->ciudadesToolStripMenuItem1->Name = L"ciudadesToolStripMenuItem1";
			this->ciudadesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->ciudadesToolStripMenuItem1->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::ciudadesToolStripMenuItem1_Click);
			// 
			// restaurantesToolStripMenuItem1
			// 
			this->restaurantesToolStripMenuItem1->Name = L"restaurantesToolStripMenuItem1";
			this->restaurantesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->restaurantesToolStripMenuItem1->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::restaurantesToolStripMenuItem1_Click);
			// 
			// men�ToolStripMenuItem
			// 
			this->men�ToolStripMenuItem->Name = L"men�ToolStripMenuItem";
			this->men�ToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->men�ToolStripMenuItem->Text = L"Men�";
			this->men�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::men�ToolStripMenuItem_Click);
			// 
			// productosToolStripMenuItem1
			// 
			this->productosToolStripMenuItem1->Name = L"productosToolStripMenuItem1";
			this->productosToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->productosToolStripMenuItem1->Text = L"Productos";
			this->productosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::productosToolStripMenuItem1_Click);
			// 
			// clientesToolStripMenuItem1
			// 
			this->clientesToolStripMenuItem1->Name = L"clientesToolStripMenuItem1";
			this->clientesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->clientesToolStripMenuItem1->Text = L"Clientes";
			this->clientesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::clientesToolStripMenuItem1_Click);
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			this->administradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::administradorToolStripMenuItem_Click);
			// 
			// compraToolStripMenuItem
			// 
			this->compraToolStripMenuItem->Name = L"compraToolStripMenuItem";
			this->compraToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->compraToolStripMenuItem->Text = L"Compra";
			this->compraToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::compraToolStripMenuItem_Click);
			// 
			// eliminaci�nToolStripMenuItem
			// 
			this->eliminaci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->pa�sesToolStripMenuItem3,
					this->ciudadesToolStripMenuItem3, this->restaurantesToolStripMenuItem3, this->men�ToolStripMenuItem2, this->productosToolStripMenuItem3,
					this->clientesToolStripMenuItem3, this->administradoresToolStripMenuItem2, this->compraToolStripMenuItem1
			});
			this->eliminaci�nToolStripMenuItem->Name = L"eliminaci�nToolStripMenuItem";
			this->eliminaci�nToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->eliminaci�nToolStripMenuItem->Text = L"Eliminaci�n";
			// 
			// pa�sesToolStripMenuItem3
			// 
			this->pa�sesToolStripMenuItem3->Name = L"pa�sesToolStripMenuItem3";
			this->pa�sesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->pa�sesToolStripMenuItem3->Text = L"Pa�ses";
			this->pa�sesToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VistaAdmin::pa�sesToolStripMenuItem3_Click);
			// 
			// ciudadesToolStripMenuItem3
			// 
			this->ciudadesToolStripMenuItem3->Name = L"ciudadesToolStripMenuItem3";
			this->ciudadesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->ciudadesToolStripMenuItem3->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VistaAdmin::ciudadesToolStripMenuItem3_Click);
			// 
			// restaurantesToolStripMenuItem3
			// 
			this->restaurantesToolStripMenuItem3->Name = L"restaurantesToolStripMenuItem3";
			this->restaurantesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->restaurantesToolStripMenuItem3->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VistaAdmin::restaurantesToolStripMenuItem3_Click);
			// 
			// men�ToolStripMenuItem2
			// 
			this->men�ToolStripMenuItem2->Name = L"men�ToolStripMenuItem2";
			this->men�ToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->men�ToolStripMenuItem2->Text = L"Men�";
			this->men�ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::men�ToolStripMenuItem2_Click);
			// 
			// productosToolStripMenuItem3
			// 
			this->productosToolStripMenuItem3->Name = L"productosToolStripMenuItem3";
			this->productosToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->productosToolStripMenuItem3->Text = L"Productos";
			this->productosToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VistaAdmin::productosToolStripMenuItem3_Click);
			// 
			// clientesToolStripMenuItem3
			// 
			this->clientesToolStripMenuItem3->Name = L"clientesToolStripMenuItem3";
			this->clientesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->clientesToolStripMenuItem3->Text = L"Clientes";
			this->clientesToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VistaAdmin::clientesToolStripMenuItem3_Click);
			// 
			// administradoresToolStripMenuItem2
			// 
			this->administradoresToolStripMenuItem2->Name = L"administradoresToolStripMenuItem2";
			this->administradoresToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->administradoresToolStripMenuItem2->Text = L"Administradores";
			this->administradoresToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::administradoresToolStripMenuItem2_Click);
			// 
			// compraToolStripMenuItem1
			// 
			this->compraToolStripMenuItem1->Name = L"compraToolStripMenuItem1";
			this->compraToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->compraToolStripMenuItem1->Text = L"Compra";
			this->compraToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::compraToolStripMenuItem1_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(18) {
				this->pa�sesToolStripMenuItem4,
					this->ciudadesToolStripMenuItem4, this->restaurantesToolStripMenuItem4, this->clientesToolStripMenuItem4, this->comprasDeUnClienteToolStripMenuItem,
					this->restauranteM�sBuscadoToolStripMenuItem, this->men�M�sBuscadoToolStripMenuItem, this->productoM�sCompradoToolStripMenuItem,
					this->facturaDeMayorMontoToolStripMenuItem, this->facturaDeMenorMontoToolStripMenuItem, this->precioDeUnProductoToolStripMenuItem,
					this->descuentoAplicadoPorPagarConTarjetaToolStripMenuItem, this->cantidadDeUnProductoToolStripMenuItem, this->productosEliminadosToolStripMenuItem,
					this->restaurantesEliminadosToolStripMenuItem, this->ciudadesEliminadasToolStripMenuItem, this->menusEliminadosToolStripMenuItem,
					this->paisesEliminadosToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// pa�sesToolStripMenuItem4
			// 
			this->pa�sesToolStripMenuItem4->Name = L"pa�sesToolStripMenuItem4";
			this->pa�sesToolStripMenuItem4->Size = System::Drawing::Size(291, 22);
			this->pa�sesToolStripMenuItem4->Text = L"Pa�ses";
			this->pa�sesToolStripMenuItem4->Click += gcnew System::EventHandler(this, &VistaAdmin::pa�sesToolStripMenuItem4_Click);
			// 
			// ciudadesToolStripMenuItem4
			// 
			this->ciudadesToolStripMenuItem4->Name = L"ciudadesToolStripMenuItem4";
			this->ciudadesToolStripMenuItem4->Size = System::Drawing::Size(291, 22);
			this->ciudadesToolStripMenuItem4->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem4->Click += gcnew System::EventHandler(this, &VistaAdmin::ciudadesToolStripMenuItem4_Click);
			// 
			// restaurantesToolStripMenuItem4
			// 
			this->restaurantesToolStripMenuItem4->Name = L"restaurantesToolStripMenuItem4";
			this->restaurantesToolStripMenuItem4->Size = System::Drawing::Size(291, 22);
			this->restaurantesToolStripMenuItem4->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem4->Click += gcnew System::EventHandler(this, &VistaAdmin::restaurantesToolStripMenuItem4_Click);
			// 
			// clientesToolStripMenuItem4
			// 
			this->clientesToolStripMenuItem4->Name = L"clientesToolStripMenuItem4";
			this->clientesToolStripMenuItem4->Size = System::Drawing::Size(291, 22);
			this->clientesToolStripMenuItem4->Text = L"Clientes";
			this->clientesToolStripMenuItem4->Click += gcnew System::EventHandler(this, &VistaAdmin::clientesToolStripMenuItem4_Click);
			// 
			// comprasDeUnClienteToolStripMenuItem
			// 
			this->comprasDeUnClienteToolStripMenuItem->Name = L"comprasDeUnClienteToolStripMenuItem";
			this->comprasDeUnClienteToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->comprasDeUnClienteToolStripMenuItem->Text = L"Compras de un cliente";
			this->comprasDeUnClienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::comprasDeUnClienteToolStripMenuItem_Click);
			// 
			// restauranteM�sBuscadoToolStripMenuItem
			// 
			this->restauranteM�sBuscadoToolStripMenuItem->Name = L"restauranteM�sBuscadoToolStripMenuItem";
			this->restauranteM�sBuscadoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->restauranteM�sBuscadoToolStripMenuItem->Text = L"Restaurante m�s buscado";
			this->restauranteM�sBuscadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::restauranteM�sBuscadoToolStripMenuItem_Click);
			// 
			// men�M�sBuscadoToolStripMenuItem
			// 
			this->men�M�sBuscadoToolStripMenuItem->Name = L"men�M�sBuscadoToolStripMenuItem";
			this->men�M�sBuscadoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->men�M�sBuscadoToolStripMenuItem->Text = L"Men� m�s buscado";
			this->men�M�sBuscadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::men�M�sBuscadoToolStripMenuItem_Click);
			// 
			// productoM�sCompradoToolStripMenuItem
			// 
			this->productoM�sCompradoToolStripMenuItem->Name = L"productoM�sCompradoToolStripMenuItem";
			this->productoM�sCompradoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->productoM�sCompradoToolStripMenuItem->Text = L"Producto m�s comprado";
			this->productoM�sCompradoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::productoM�sCompradoToolStripMenuItem_Click);
			// 
			// facturaDeMayorMontoToolStripMenuItem
			// 
			this->facturaDeMayorMontoToolStripMenuItem->Name = L"facturaDeMayorMontoToolStripMenuItem";
			this->facturaDeMayorMontoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->facturaDeMayorMontoToolStripMenuItem->Text = L"Factura de mayor monto";
			this->facturaDeMayorMontoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::facturaDeMayorMontoToolStripMenuItem_Click);
			// 
			// facturaDeMenorMontoToolStripMenuItem
			// 
			this->facturaDeMenorMontoToolStripMenuItem->Name = L"facturaDeMenorMontoToolStripMenuItem";
			this->facturaDeMenorMontoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->facturaDeMenorMontoToolStripMenuItem->Text = L"Factura de menor monto";
			this->facturaDeMenorMontoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::facturaDeMenorMontoToolStripMenuItem_Click);
			// 
			// precioDeUnProductoToolStripMenuItem
			// 
			this->precioDeUnProductoToolStripMenuItem->Name = L"precioDeUnProductoToolStripMenuItem";
			this->precioDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->precioDeUnProductoToolStripMenuItem->Text = L"Precio de un producto";
			this->precioDeUnProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::precioDeUnProductoToolStripMenuItem_Click);
			// 
			// descuentoAplicadoPorPagarConTarjetaToolStripMenuItem
			// 
			this->descuentoAplicadoPorPagarConTarjetaToolStripMenuItem->Name = L"descuentoAplicadoPorPagarConTarjetaToolStripMenuItem";
			this->descuentoAplicadoPorPagarConTarjetaToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->descuentoAplicadoPorPagarConTarjetaToolStripMenuItem->Text = L"Descuento aplicado por pagar con tarjeta";
			this->descuentoAplicadoPorPagarConTarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::descuentoAplicadoPorPagarConTarjetaToolStripMenuItem_Click);
			// 
			// cantidadDeUnProductoToolStripMenuItem
			// 
			this->cantidadDeUnProductoToolStripMenuItem->Name = L"cantidadDeUnProductoToolStripMenuItem";
			this->cantidadDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->cantidadDeUnProductoToolStripMenuItem->Text = L"Cantidad de un producto";
			this->cantidadDeUnProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::cantidadDeUnProductoToolStripMenuItem_Click);
			// 
			// productosEliminadosToolStripMenuItem
			// 
			this->productosEliminadosToolStripMenuItem->Name = L"productosEliminadosToolStripMenuItem";
			this->productosEliminadosToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->productosEliminadosToolStripMenuItem->Text = L"Productos eliminados";
			// 
			// restaurantesEliminadosToolStripMenuItem
			// 
			this->restaurantesEliminadosToolStripMenuItem->Name = L"restaurantesEliminadosToolStripMenuItem";
			this->restaurantesEliminadosToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->restaurantesEliminadosToolStripMenuItem->Text = L"Restaurantes eliminados";
			// 
			// ciudadesEliminadasToolStripMenuItem
			// 
			this->ciudadesEliminadasToolStripMenuItem->Name = L"ciudadesEliminadasToolStripMenuItem";
			this->ciudadesEliminadasToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->ciudadesEliminadasToolStripMenuItem->Text = L"Ciudades eliminadas";
			// 
			// menusEliminadosToolStripMenuItem
			// 
			this->menusEliminadosToolStripMenuItem->Name = L"menusEliminadosToolStripMenuItem";
			this->menusEliminadosToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->menusEliminadosToolStripMenuItem->Text = L"Menus eliminados";
			// 
			// paisesEliminadosToolStripMenuItem
			// 
			this->paisesEliminadosToolStripMenuItem->Name = L"paisesEliminadosToolStripMenuItem";
			this->paisesEliminadosToolStripMenuItem->Size = System::Drawing::Size(291, 22);
			this->paisesEliminadosToolStripMenuItem->Text = L"Paises eliminados";
			// 
			// facturaci�nToolStripMenuItem
			// 
			this->facturaci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descuentosToolStripMenuItem,
					this->facturaci�nToolStripMenuItem1
			});
			this->facturaci�nToolStripMenuItem->Name = L"facturaci�nToolStripMenuItem";
			this->facturaci�nToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->facturaci�nToolStripMenuItem->Text = L"Facturaci�n";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::acercaDeToolStripMenuItem_Click);
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			this->contactoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::contactoToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(107, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 105);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Lugares";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VistaAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(107, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 105);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Restaurantes";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VistaAdmin::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(483, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 101);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Pagos";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VistaAdmin::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(483, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 105);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Usuarios";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VistaAdmin::button4_Click);
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// facturaci�nToolStripMenuItem1
			// 
			this->facturaci�nToolStripMenuItem1->Name = L"facturaci�nToolStripMenuItem1";
			this->facturaci�nToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->facturaci�nToolStripMenuItem1->Text = L"Facturaci�n";
			// 
			// VistaAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 367);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"VistaAdmin";
			this->Text = L"VistaAdmin";
			this->Load += gcnew System::EventHandler(this, &VistaAdmin::VistaAdmin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VistaAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pa�sesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarPais^ InsPais = gcnew InsertarPais(APaises);
	InsPais->ShowDialog();
}
private: System::Void ciudadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarCiudad^ InsCiudad = gcnew InsertarCiudad(APaises);
	InsCiudad->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarRest^ InsRest = gcnew InsertarRest(APaises, ARestaurantes);
	InsRest->ShowDialog();
}
private: System::Void men�sToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarMenu^ InsMenu = gcnew InsertarMenu(APaises, ARestaurantes, AMenu);
	InsMenu->ShowDialog();
}
private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarProducto^ InsProducto = gcnew InsertarProducto(APaises, ARestaurantes, AMenu, AProducto);
	InsProducto->ShowDialog();
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarCliente^ InsCliente = gcnew InsertarCliente(AClientes);
	InsCliente->ShowDialog();
}
private: System::Void administradoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarAdmin^ InsAdmin = gcnew InsertarAdmin(AAdmins);
	InsAdmin->ShowDialog();
}
private: System::Void registrarCompraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	listaProductosCola lProdCola;
	listaProductosCola* ptrProdCola = &lProdCola;
	RegistrarCompra^ RegCompra = gcnew RegistrarCompra(APaises, AClientes, AProducto, ptrProdCola, LFila);
	RegCompra->ShowDialog();
}
private: System::Void pa�sesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaPais^ ConsPais = gcnew ConsultaPais(APaises);
	ConsPais->ShowDialog();
}
private: System::Void ciudadesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaCiudad^ ConsCiudad = gcnew ConsultaCiudad(APaises);
	ConsCiudad->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaRestaurante^ ConsRest = gcnew ConsultaRestaurante(ARestaurantes);
	ConsRest->ShowDialog();
}
private: System::Void men�ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaMenu^ ConsMenu = gcnew ConsultaMenu(AMenu);
	ConsMenu->ShowDialog();
}
private: System::Void productosToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaProducto^ ConsProd = gcnew ConsultaProducto(AProducto);
	ConsProd->ShowDialog();
}
private: System::Void clientesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaCliente^ ConsCliente = gcnew ConsultaCliente(AClientes);
	ConsCliente->ShowDialog();
}
private: System::Void administradoresToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaAdmin^ ConsAdmin = gcnew ConsultaAdmin(AAdmins);
	ConsAdmin->ShowDialog();
}
private: System::Void pa�sesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarPais^ ModPais = gcnew ModificarPais(APaises);
	ModPais->ShowDialog();
}
private: System::Void ciudadesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarCiudad^ ModCiudad = gcnew ModificarCiudad(APaises);
	ModCiudad->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarRest^ ModRest = gcnew ModificarRest(ARestaurantes);
	ModRest->ShowDialog();
}
private: System::Void men�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarMenu^ ModMenu = gcnew ModificarMenu(AMenu);
	ModMenu->ShowDialog();
}
private: System::Void productosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarProducto^ ModProd = gcnew ModificarProducto(AProducto);
	ModProd->ShowDialog();    
}
private: System::Void clientesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarCliente^ ModCliente = gcnew ModificarCliente(AClientes);
	ModCliente->ShowDialog();
}
private: System::Void administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarAdmin^ ModAdmin = gcnew ModificarAdmin(AAdmins);
	ModAdmin->ShowDialog();
}
private: System::Void compraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarCompra^ ModCompra = gcnew ModificarCompra(AClientes, AProducto, LFila);
	ModCompra->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaLugares^ VentLug = gcnew VentanaLugares(APaises);
	VentLug->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaRest^ VentRest = gcnew VentanaRest(APaises, ARestaurantes, AMenu, AProducto);
	VentRest->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaUsuarios^ VentUser = gcnew VentanaUsuarios(AClientes, AAdmins, APaises, AProducto, LFila);
	VentUser->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaPagos^ VentPagos = gcnew VentanaPagos(LFila);
	VentPagos->ShowDialog();
}
private: System::Void pa�sesToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarPais^ ElimPais = gcnew EliminarPais(APaises);
	ElimPais->ShowDialog();
}
private: System::Void men�ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarMenu^ ElimMenu = gcnew EliminarMenu(AMenu, AProducto);
	ElimMenu->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarRest^ ElimRest = gcnew EliminarRest(ARestaurantes);
	ElimRest->ShowDialog();
}
private: System::Void clientesToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarCliente^ ElimCliente = gcnew EliminarCliente(AClientes);
	ElimCliente->ShowDialog();
}
private: System::Void administradoresToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarAdmin^ ElimAdmin = gcnew EliminarAdmin(AAdmins);
	ElimAdmin->ShowDialog();
}
private: System::Void ciudadesToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarCiudad^ ElimCiudad = gcnew EliminarCiudad(APaises);
	ElimCiudad->ShowDialog();
}
private: System::Void productosToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarProducto^ ElimProd = gcnew EliminarProducto(AProducto);
	ElimProd->ShowDialog();
}
private: System::Void pa�sesToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	APaises->reportePaises();
	MessageBox::Show("Se cre� el reporte correctamente", "Pa�ses", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void ciudadesToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteCiudades^ RepCiudad = gcnew ReporteCiudades(APaises);
	RepCiudad->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteRest^ RepRest = gcnew ReporteRest(APaises, ARestaurantes);
	RepRest->ShowDialog();
}
private: System::Void clientesToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	AClientes->reporteClientes();
	MessageBox::Show("Se cre� el reporte correctamente", "Clientes", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void comprasDeUnClienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteComprasCliente^ RepComCli = gcnew ReporteComprasCliente(AClientes);
	RepComCli->ShowDialog();
}
private: System::Void restauranteM�sBuscadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ARestaurantes->reporteRestMasBuscado();
	MessageBox::Show("Se cre� el reporte correctamente", "Restaurante m�s buscado", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void men�M�sBuscadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AMenu->reporteMenuMasBuscado();
	MessageBox::Show("Se cre� el reporte correctamente", "Men� m�s buscado", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void productoM�sCompradoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AProducto->reporteProductoMasComprado();
	MessageBox::Show("Se cre� el reporte correctamente", "Producto m�s comprado", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void facturaDeMayorMontoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	LFila->reporteFacturaMayor();
	MessageBox::Show("Se cre� el reporte correctamente", "Factura de mayor monto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void facturaDeMenorMontoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	LFila->reporteFacturaMenor();
	MessageBox::Show("Se cre� el reporte correctamente", "Factura de menor monto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void precioDeUnProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportePrecioProd^ RepPrecioProd = gcnew ReportePrecioProd(AProducto);
	RepPrecioProd->ShowDialog();
}
private: System::Void descuentoAplicadoPorPagarConTarjetaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (LFila->largoLista() == 0) {
		MessageBox::Show("No hay clientes en la fila", "Descuento", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		LFila->reporteDescuento(AProducto);
		MessageBox::Show("Se cre� el reporte correctamente", "Descuento", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void cantidadDeUnProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteCantProd^ RepCantProd = gcnew ReporteCantProd(AProducto);
	RepCantProd->ShowDialog();
}
private: System::Void contactoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InsertarContacto^ InsContacto = gcnew InsertarContacto(LContacto);
	InsContacto->ShowDialog();
}
private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Restaurantes TP3, Jos� Calder�n y Fernando Abarca", "Acerca de", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void compraToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
