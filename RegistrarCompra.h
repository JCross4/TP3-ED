#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"
#include "ProductoCola.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistrarCompra
	/// </summary>
	public ref class RegistrarCompra : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolB* AClientes; arbolAVLProducto* AProd; listaProductosCola* lProdCola; listaCola* lFila;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	public:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	public:
		RegistrarCompra(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		RegistrarCompra(arbolBinarioPais* ptrPaises, ArbolB* ptrClientes, arbolAVLProducto* ptrProd, listaProductosCola* ptrProdCola, listaCola* ptrFila)
		{
			InitializeComponent();
			APaises = ptrPaises;
			AClientes = ptrClientes;
			AProd = ptrProd;
			lProdCola = ptrProdCola;
			lFila = ptrFila;
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistrarCompra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ tbCod;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbCod = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrarCompra::button1_Click);
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(101, 92);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 24);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Introduzca la cédula del cliente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 29);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Registrar Compra";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(86, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 33);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Añadir Producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistrarCompra::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(101, 170);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(131, 85);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(12, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(100, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Para llevar";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(12, 51);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(116, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Restaurante";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// RegistrarCompra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 311);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegistrarCompra";
			this->Text = L"RegistrarCompra";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codP = this->tbCod->Text;
		std::string strCodP = msclr::interop::marshal_as<std::string>(codP);
		if (strCodP != "") {
			int intCodP = std::stoi(strCodP);
			if (lFila->largoLista() >= 5) {
				MessageBox::Show("La fila está llena", "Compra", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				if (lProdCola->ListaVacia()) {
					MessageBox::Show("Debe agregar algún producto a la compra", "Compra", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					string opcion = "1";
					if (radioButton1->Checked) {
						opcion = "1";
					}
					else {
						opcion = "2";
					}
					lFila->InsertarFinalCola(intCodP, lProdCola->primero, opcion);
					MessageBox::Show("Se agregó correctamente a la fila", "Compra", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
			}
		}
		else {
			MessageBox::Show("Debe introducir la información", "Compra", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductoCola^ ProdCola = gcnew ProductoCola(AProd, lProdCola);
	ProdCola->ShowDialog();
}
};
}
