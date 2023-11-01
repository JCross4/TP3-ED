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
	
	public: arbolBinarioPais* APaises; ArbolRN* ARestaurantes; ArbolAAMenu* AMenu; arbolAVLProducto* AProducto; ArbolB* AClientes; ArbolB* AAdmins; listaCola* LFila; listaS* LCompra;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem3;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	public:
		  VistaAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		VistaAdmin(arbolBinarioPais* ptrPaises, ArbolRN* ptrRestaurantes, ArbolAAMenu* ptrMenu, arbolAVLProducto* ptrProducto, ArbolB* ptrClientes, ArbolB* ptrAdmins, listaCola* ptrFila, listaS* ptrCompra)
		{
			InitializeComponent();
			APaises = ptrPaises; ARestaurantes = ptrRestaurantes; AMenu = ptrMenu; AProducto = ptrProducto; AClientes = ptrClientes; AAdmins = ptrAdmins; LFila = ptrFila; LCompra = ptrCompra;
		
			//TODO: agregar código de constructor aquí
			
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ inserciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menúsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registrarCompraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VistaAdmin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inserciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrarCompraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
					this->reportesToolStripMenuItem, this->facturaciónToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem
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
				this->inserciónToolStripMenuItem,
					this->consultasToolStripMenuItem, this->modificaciónToolStripMenuItem, this->eliminaciónToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// inserciónToolStripMenuItem
			// 
			this->inserciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísesToolStripMenuItem,
					this->ciudadesToolStripMenuItem, this->restaurantesToolStripMenuItem, this->menúsToolStripMenuItem, this->productosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->administradoresToolStripMenuItem, this->registrarCompraToolStripMenuItem
			});
			this->inserciónToolStripMenuItem->Name = L"inserciónToolStripMenuItem";
			this->inserciónToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->inserciónToolStripMenuItem->Text = L"Inserción";
			// 
			// paísesToolStripMenuItem
			// 
			this->paísesToolStripMenuItem->Name = L"paísesToolStripMenuItem";
			this->paísesToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->paísesToolStripMenuItem->Text = L"Países";
			this->paísesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::paísesToolStripMenuItem_Click);
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
			// menúsToolStripMenuItem
			// 
			this->menúsToolStripMenuItem->Name = L"menúsToolStripMenuItem";
			this->menúsToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->menúsToolStripMenuItem->Text = L"Menús";
			this->menúsToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::menúsToolStripMenuItem_Click);
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
				this->paísesToolStripMenuItem2,
					this->ciudadesToolStripMenuItem2, this->restaurantesToolStripMenuItem2, this->menúToolStripMenuItem1, this->productosToolStripMenuItem2,
					this->clientesToolStripMenuItem2, this->administradoresToolStripMenuItem1
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// paísesToolStripMenuItem2
			// 
			this->paísesToolStripMenuItem2->Name = L"paísesToolStripMenuItem2";
			this->paísesToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->paísesToolStripMenuItem2->Text = L"Países";
			this->paísesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VistaAdmin::paísesToolStripMenuItem2_Click);
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
			// menúToolStripMenuItem1
			// 
			this->menúToolStripMenuItem1->Name = L"menúToolStripMenuItem1";
			this->menúToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->menúToolStripMenuItem1->Text = L"Menú";
			this->menúToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::menúToolStripMenuItem1_Click);
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
			// modificaciónToolStripMenuItem
			// 
			this->modificaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísesToolStripMenuItem1,
					this->ciudadesToolStripMenuItem1, this->restaurantesToolStripMenuItem1, this->menúToolStripMenuItem, this->productosToolStripMenuItem1,
					this->clientesToolStripMenuItem1, this->administradorToolStripMenuItem, this->compraToolStripMenuItem
			});
			this->modificaciónToolStripMenuItem->Name = L"modificaciónToolStripMenuItem";
			this->modificaciónToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->modificaciónToolStripMenuItem->Text = L"Modificación";
			// 
			// paísesToolStripMenuItem1
			// 
			this->paísesToolStripMenuItem1->Name = L"paísesToolStripMenuItem1";
			this->paísesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->paísesToolStripMenuItem1->Text = L"Países";
			this->paísesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaAdmin::paísesToolStripMenuItem1_Click);
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
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem->Text = L"Menú";
			this->menúToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaAdmin::menúToolStripMenuItem_Click);
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
			// eliminaciónToolStripMenuItem
			// 
			this->eliminaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísesToolStripMenuItem3,
					this->ciudadesToolStripMenuItem3, this->restaurantesToolStripMenuItem3, this->menúToolStripMenuItem2, this->productosToolStripMenuItem3,
					this->clientesToolStripMenuItem3, this->administradoresToolStripMenuItem2, this->compraToolStripMenuItem1
			});
			this->eliminaciónToolStripMenuItem->Name = L"eliminaciónToolStripMenuItem";
			this->eliminaciónToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->eliminaciónToolStripMenuItem->Text = L"Eliminación";
			// 
			// paísesToolStripMenuItem3
			// 
			this->paísesToolStripMenuItem3->Name = L"paísesToolStripMenuItem3";
			this->paísesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->paísesToolStripMenuItem3->Text = L"Países";
			// 
			// ciudadesToolStripMenuItem3
			// 
			this->ciudadesToolStripMenuItem3->Name = L"ciudadesToolStripMenuItem3";
			this->ciudadesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->ciudadesToolStripMenuItem3->Text = L"Ciudades";
			// 
			// restaurantesToolStripMenuItem3
			// 
			this->restaurantesToolStripMenuItem3->Name = L"restaurantesToolStripMenuItem3";
			this->restaurantesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->restaurantesToolStripMenuItem3->Text = L"Restaurantes";
			// 
			// menúToolStripMenuItem2
			// 
			this->menúToolStripMenuItem2->Name = L"menúToolStripMenuItem2";
			this->menúToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->menúToolStripMenuItem2->Text = L"Menú";
			// 
			// productosToolStripMenuItem3
			// 
			this->productosToolStripMenuItem3->Name = L"productosToolStripMenuItem3";
			this->productosToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->productosToolStripMenuItem3->Text = L"Productos";
			// 
			// clientesToolStripMenuItem3
			// 
			this->clientesToolStripMenuItem3->Name = L"clientesToolStripMenuItem3";
			this->clientesToolStripMenuItem3->Size = System::Drawing::Size(161, 22);
			this->clientesToolStripMenuItem3->Text = L"Clientes";
			// 
			// administradoresToolStripMenuItem2
			// 
			this->administradoresToolStripMenuItem2->Name = L"administradoresToolStripMenuItem2";
			this->administradoresToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->administradoresToolStripMenuItem2->Text = L"Administradores";
			// 
			// compraToolStripMenuItem1
			// 
			this->compraToolStripMenuItem1->Name = L"compraToolStripMenuItem1";
			this->compraToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->compraToolStripMenuItem1->Text = L"Compra";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->contactoToolStripMenuItem->Text = L"Contacto";
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
private: System::Void paísesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void menúsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	InsertarPais^ InsPais = gcnew InsertarPais;
	InsPais->ShowDialog();
}
private: System::Void paísesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void menúToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void paísesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void menúToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	InsertarPais^ InsPais = gcnew InsertarPais;
	InsPais->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaLugares^ VentLug = gcnew VentanaLugares(APaises);
	VentLug->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaRest^ VentRest = gcnew VentanaRest;
	VentRest->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaUsuarios^ VentUser = gcnew VentanaUsuarios;
	VentUser->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
