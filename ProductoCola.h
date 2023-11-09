#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProductoCola
	/// </summary>
	public ref class ProductoCola : public System::Windows::Forms::Form
	{
	public: arbolAVLProducto* AProd; listaProductosCola* lProdCola;
	public:
		ProductoCola(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ProductoCola(arbolAVLProducto* ptrProd, listaProductosCola* ptrProdCola)
		{
			InitializeComponent();
			AProd = ptrProd;
			lProdCola = ptrProdCola;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductoCola()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbCod;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
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
			this->tbCod = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(78, 117);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 48);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Introduzca el código \r\ndel producto a comprar:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 29);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Añadir producto";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 20);
			this->textBox1->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 24);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Introduzca la cantidad a comprar:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProductoCola::button1_Click);
			// 
			// ProductoCola
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductoCola";
			this->Text = L"ProductoCola";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codP = this->tbCod->Text;
		String^ cantidad = this->textBox1->Text;
		std::string strCodP = msclr::interop::marshal_as<std::string>(codP);
		std::string strCantidad = msclr::interop::marshal_as<std::string>(cantidad);
		if (strCodP != "" && strCantidad != "") {
			int intCodP = std::stoi(strCodP);
			int intCantidad = std::stoi(strCantidad);
			if (AProd->ValidarProducto(AProd->raiz, intCodP)) {
				if (AProd->ValidarProducto(AProd->raiz, intCodP)->cantidad >= intCantidad) {
					lProdCola->InsertarFinalProductosCola(AProd->ValidarProducto(AProd->raiz, intCodP), intCantidad);
					MessageBox::Show("Se agregó correctamente", "Producto Compra", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("La cantidad debe ser igual o menor a la disponible", "Producto Compra", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox1->Clear();
				}
				
			}
			else {
				MessageBox::Show("No existe un producto con ese código", "Producto Compra", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "Producto Compra", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
