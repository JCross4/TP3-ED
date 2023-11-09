#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"
#include "RegistrarCompra.h"
#include "ModificarCompra.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesFila
	/// </summary>
	public ref class OpcionesFila : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolB* AClientes; arbolAVLProducto* AProductos; listaCola* LFila;
	public:
		OpcionesFila(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		OpcionesFila(arbolBinarioPais* ptrPaises, ArbolB* ptrClientes, arbolAVLProducto* ptrProductos, listaCola* ptrFila)
		{
			InitializeComponent();

			APaises = ptrPaises;
			AClientes = ptrClientes;
			AProductos = ptrProductos;
			LFila = ptrFila;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~OpcionesFila()
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(78, 167);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 37);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Eliminación";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(78, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Modificación";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesFila::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(78, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Inserción";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesFila::button1_Click);
			// 
			// OpcionesFila
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 224);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"OpcionesFila";
			this->Text = L"OpcionesFila";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listaProductosCola lProdCola;
		listaProductosCola* ptrProdCola = &lProdCola;
		RegistrarCompra^ RegCompra = gcnew RegistrarCompra(APaises, AClientes, AProductos, ptrProdCola, LFila);
		RegCompra->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarCompra^ ModCompra = gcnew ModificarCompra(AClientes, AProductos, LFila);
		ModCompra->ShowDialog();
	}
};
}
