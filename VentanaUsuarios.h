#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"
#include "OpcionesClientes.h"
#include "OpcionesAdmin.h"
#include "OpcionesFila.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaUsuarios
	/// </summary>
	public ref class VentanaUsuarios : public System::Windows::Forms::Form
	{
	public: ArbolB* AClientes; ArbolB* AAdmins; arbolBinarioPais* APaises; arbolAVLProducto* AProductos; listaCola* LFila;
	public:
		VentanaUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		VentanaUsuarios(ArbolB* ptrClientes, ArbolB* ptrAdmins, arbolBinarioPais* ptrPaises, arbolAVLProducto* ptrProductos, listaCola* ptrFila)
		{
			InitializeComponent();

			AClientes = ptrClientes;
			AAdmins = ptrAdmins;
			APaises = ptrPaises;
			AProductos = ptrProductos;
			LFila = ptrFila;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaUsuarios::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(61, 277);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 99);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Fila";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VentanaUsuarios::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(61, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 99);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Administradores";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaUsuarios::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(61, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 99);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Clientes";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaUsuarios::button1_Click);
			// 
			// VentanaUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 388);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"VentanaUsuarios";
			this->Text = L"VentanaUsuarios";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClientes^ OpcClientes = gcnew OpcionesClientes(AClientes);
		OpcClientes->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesAdmin^ OpcAdmin = gcnew OpcionesAdmin(AAdmins);
		OpcAdmin->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpcionesFila^ OpcFila = gcnew OpcionesFila(APaises, AClientes, AProductos, LFila);
	OpcFila->ShowDialog();
}
};
}
