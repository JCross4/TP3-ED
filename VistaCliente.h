#pragma once
#include "TP3.h"
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
	/// Resumen de VistaCliente
	/// </summary>
	public ref class VistaCliente : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARestaurantes; ArbolAAMenu* AMenu; arbolAVLProducto* AProducto; ArbolB* AClientes; ArbolB* AAdmins; listaCola* LFila; listaS* LCompra; listaS* LContacto; listaS* LPaisesElim = new listaS; listaS* LCiudadesElim = new listaS; listaS* LRestaurantesElim = new listaS; listaS* LMenuElim = new listaS; listaS* LProductosElim = new listaS;

	public:
		VistaCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		VistaCliente(arbolBinarioPais* ptrPaises, ArbolRN* ptrRestaurantes, ArbolAAMenu* ptrMenu, arbolAVLProducto* ptrProducto, ArbolB* ptrClientes, ArbolB* ptrAdmins, listaCola* ptrFila, listaS* ptrCompra, listaS* ptrContacto)
		{
			InitializeComponent();
			APaises = ptrPaises; ARestaurantes = ptrRestaurantes; AMenu = ptrMenu; AProducto = ptrProducto; AClientes = ptrClientes; AAdmins = ptrAdmins; LFila = ptrFila; LCompra = ptrCompra; LContacto = ptrContacto;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VistaCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menúsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteMásBuscadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menúMásBuscadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ precioDeUnProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentoPorPagarConTarjetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónToolStripMenuItem1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VistaCliente::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteMásBuscadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúMásBuscadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->precioDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentoPorPagarConTarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(285, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cliente";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->consultasToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturaciónToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(678, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísesToolStripMenuItem,
					this->ciudadesToolStripMenuItem, this->restaurantesToolStripMenuItem, this->menúsToolStripMenuItem, this->productosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->administradoresToolStripMenuItem
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// paísesToolStripMenuItem
			// 
			this->paísesToolStripMenuItem->Name = L"paísesToolStripMenuItem";
			this->paísesToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->paísesToolStripMenuItem->Text = L"Países";
			this->paísesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::paísesToolStripMenuItem_Click);
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->ciudadesToolStripMenuItem->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::ciudadesToolStripMenuItem_Click_1);
			// 
			// restaurantesToolStripMenuItem
			// 
			this->restaurantesToolStripMenuItem->Name = L"restaurantesToolStripMenuItem";
			this->restaurantesToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->restaurantesToolStripMenuItem->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::restaurantesToolStripMenuItem_Click_1);
			// 
			// menúsToolStripMenuItem
			// 
			this->menúsToolStripMenuItem->Name = L"menúsToolStripMenuItem";
			this->menúsToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->menúsToolStripMenuItem->Text = L"Menús";
			this->menúsToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::menúsToolStripMenuItem_Click_1);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::productosToolStripMenuItem_Click_1);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::clientesToolStripMenuItem_Click_1);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			this->administradoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::administradoresToolStripMenuItem_Click_1);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísesToolStripMenuItem1,
					this->ciudadesToolStripMenuItem1, this->restaurantesToolStripMenuItem1, this->restauranteMásBuscadoToolStripMenuItem, this->menúMásBuscadoToolStripMenuItem,
					this->precioDeUnProductoToolStripMenuItem, this->descuentoPorPagarConTarjetaToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// paísesToolStripMenuItem1
			// 
			this->paísesToolStripMenuItem1->Name = L"paísesToolStripMenuItem1";
			this->paísesToolStripMenuItem1->Size = System::Drawing::Size(243, 22);
			this->paísesToolStripMenuItem1->Text = L"Países";
			this->paísesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaCliente::paísesToolStripMenuItem1_Click);
			// 
			// ciudadesToolStripMenuItem1
			// 
			this->ciudadesToolStripMenuItem1->Name = L"ciudadesToolStripMenuItem1";
			this->ciudadesToolStripMenuItem1->Size = System::Drawing::Size(243, 22);
			this->ciudadesToolStripMenuItem1->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaCliente::ciudadesToolStripMenuItem1_Click);
			// 
			// restaurantesToolStripMenuItem1
			// 
			this->restaurantesToolStripMenuItem1->Name = L"restaurantesToolStripMenuItem1";
			this->restaurantesToolStripMenuItem1->Size = System::Drawing::Size(243, 22);
			this->restaurantesToolStripMenuItem1->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaCliente::restaurantesToolStripMenuItem1_Click);
			// 
			// restauranteMásBuscadoToolStripMenuItem
			// 
			this->restauranteMásBuscadoToolStripMenuItem->Name = L"restauranteMásBuscadoToolStripMenuItem";
			this->restauranteMásBuscadoToolStripMenuItem->Size = System::Drawing::Size(243, 22);
			this->restauranteMásBuscadoToolStripMenuItem->Text = L"Restaurante más buscado";
			this->restauranteMásBuscadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::restauranteMásBuscadoToolStripMenuItem_Click);
			// 
			// menúMásBuscadoToolStripMenuItem
			// 
			this->menúMásBuscadoToolStripMenuItem->Name = L"menúMásBuscadoToolStripMenuItem";
			this->menúMásBuscadoToolStripMenuItem->Size = System::Drawing::Size(243, 22);
			this->menúMásBuscadoToolStripMenuItem->Text = L"Menú más buscado";
			this->menúMásBuscadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::menúMásBuscadoToolStripMenuItem_Click);
			// 
			// precioDeUnProductoToolStripMenuItem
			// 
			this->precioDeUnProductoToolStripMenuItem->Name = L"precioDeUnProductoToolStripMenuItem";
			this->precioDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(243, 22);
			this->precioDeUnProductoToolStripMenuItem->Text = L"Precio de un producto";
			this->precioDeUnProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::precioDeUnProductoToolStripMenuItem_Click);
			// 
			// descuentoPorPagarConTarjetaToolStripMenuItem
			// 
			this->descuentoPorPagarConTarjetaToolStripMenuItem->Name = L"descuentoPorPagarConTarjetaToolStripMenuItem";
			this->descuentoPorPagarConTarjetaToolStripMenuItem->Size = System::Drawing::Size(243, 22);
			this->descuentoPorPagarConTarjetaToolStripMenuItem->Text = L"Descuento por pagar con tarjeta";
			this->descuentoPorPagarConTarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::descuentoPorPagarConTarjetaToolStripMenuItem_Click);
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descuentosToolStripMenuItem,
					this->facturaciónToolStripMenuItem1
			});
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			this->descuentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::descuentosToolStripMenuItem_Click);
			// 
			// facturaciónToolStripMenuItem1
			// 
			this->facturaciónToolStripMenuItem1->Name = L"facturaciónToolStripMenuItem1";
			this->facturaciónToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->facturaciónToolStripMenuItem1->Text = L"Facturación";
			this->facturaciónToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VistaCliente::facturaciónToolStripMenuItem1_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::acercaDeToolStripMenuItem_Click_1);
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			this->contactoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VistaCliente::contactoToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(450, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 101);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Pagos";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VistaCliente::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(450, 85);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 105);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Usuarios";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VistaCliente::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(74, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(165, 105);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Restaurantes";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &VistaCliente::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(74, 85);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 105);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Lugares";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VistaCliente::button5_Click);
			// 
			// VistaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 353);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"VistaCliente";
			this->Text = L"VistaCliente";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void paísesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultaPais^ ConsPais = gcnew ConsultaPais(APaises);
		ConsPais->ShowDialog();
	}
	private: System::Void contactoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertarContacto^ InsContacto = gcnew InsertarContacto(LContacto);
		InsContacto->ShowDialog();
	}
private: System::Void acercaDeToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Restaurantes TP3, José Calderón y Fernando Abarca", "Acerca de", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void ciudadesToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultaCiudad^ ConsCiudad = gcnew ConsultaCiudad(APaises);
	ConsCiudad->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultaRestaurante^ ConsRest = gcnew ConsultaRestaurante(ARestaurantes);
	ConsRest->ShowDialog();
}
private: System::Void menúsToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultaMenu^ ConsMenu = gcnew ConsultaMenu(AMenu);
	ConsMenu->ShowDialog();
}
private: System::Void productosToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultaProducto^ ConsProd = gcnew ConsultaProducto(AProducto);
	ConsProd->ShowDialog();
}
private: System::Void clientesToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultaCliente^ ConsCliente = gcnew ConsultaCliente(AClientes);
	ConsCliente->ShowDialog();
}
private: System::Void administradoresToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultaAdmin^ ConsAdmin = gcnew ConsultaAdmin(AAdmins);
	ConsAdmin->ShowDialog();
}
private: System::Void paísesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	APaises->reportePaises();
	MessageBox::Show("Se creó el reporte correctamente", "Países", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void ciudadesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteCiudades^ RepCiudad = gcnew ReporteCiudades(APaises);
	RepCiudad->ShowDialog();
}
private: System::Void restaurantesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteRest^ RepRest = gcnew ReporteRest(APaises, ARestaurantes);
	RepRest->ShowDialog();
}
private: System::Void restauranteMásBuscadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ARestaurantes->reporteRestMasBuscado();
	MessageBox::Show("Se creó el reporte correctamente", "Restaurante más buscado", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void menúMásBuscadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AMenu->reporteMenuMasBuscado();
	MessageBox::Show("Se creó el reporte correctamente", "Menú más buscado", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void precioDeUnProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportePrecioProd^ RepPrecioProd = gcnew ReportePrecioProd(AProducto);
	RepPrecioProd->ShowDialog();
}
private: System::Void descuentoPorPagarConTarjetaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (LFila->largoLista() == 0) {
		MessageBox::Show("No hay clientes en la fila", "Descuento", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		LFila->reporteDescuento(AProducto);
		MessageBox::Show("Se creó el reporte correctamente", "Descuento", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaLugares^ VentLug = gcnew VentanaLugares(APaises, LPaisesElim, LCiudadesElim, 0);
	VentLug->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaRest^ VentRest = gcnew VentanaRest(APaises, ARestaurantes, AMenu, AProducto, LMenuElim, LProductosElim, LRestaurantesElim, 0);
	VentRest->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaUsuarios^ VentUser = gcnew VentanaUsuarios(AClientes, AAdmins, APaises, AProducto, LFila, 0);
	VentUser->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaPagos^ VentPagos = gcnew VentanaPagos(LFila, AProducto);
	VentPagos->ShowDialog();
}
private: System::Void descuentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Descuento para llevar: 3%				Descuento para comer en el restaurante: 1%			Descuento para pago con tarjeta: 3%			Descuento para pago en efectivo: 1%", "Descuentos", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void facturaciónToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Facturar^ fact = gcnew Facturar(LFila, AProducto);
	fact->ShowDialog();
}
};
}
