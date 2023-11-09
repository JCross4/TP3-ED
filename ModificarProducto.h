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
	/// Resumen de ModificarProducto
	/// </summary>
	public ref class ModificarProducto : public System::Windows::Forms::Form
	{
	public: arbolAVLProducto* AProd;
	public:
		ModificarProducto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ModificarProducto(arbolAVLProducto* ptrProd)
		{
			InitializeComponent();
			AProd = ptrProd;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbKCal;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::TextBox^ tbCod;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbPrecio;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbCant;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ opcionNombre;

	private: System::Windows::Forms::RadioButton^ opcionPrecio;

	private: System::Windows::Forms::RadioButton^ opcionCant;

	private: System::Windows::Forms::RadioButton^ opcionKCal;

	private: System::Windows::Forms::Label^ label7;

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
			this->tbKCal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbCod = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbCant = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->opcionNombre = (gcnew System::Windows::Forms::RadioButton());
			this->opcionPrecio = (gcnew System::Windows::Forms::RadioButton());
			this->opcionCant = (gcnew System::Windows::Forms::RadioButton());
			this->opcionKCal = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbKCal
			// 
			this->tbKCal->Location = System::Drawing::Point(256, 194);
			this->tbKCal->Name = L"tbKCal";
			this->tbKCal->Size = System::Drawing::Size(134, 20);
			this->tbKCal->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(209, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 24);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Nuevas KCal del producto:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(184, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarProducto::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Enabled = false;
			this->tbNombre->Location = System::Drawing::Point(256, 343);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 23;
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(162, 76);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(209, 316);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(253, 24);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Nuevo nombre del producto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(82, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 24);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Introduzca el código del producto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(121, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 29);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Modificar Producto";
			// 
			// tbPrecio
			// 
			this->tbPrecio->Enabled = false;
			this->tbPrecio->Location = System::Drawing::Point(256, 293);
			this->tbPrecio->Name = L"tbPrecio";
			this->tbPrecio->Size = System::Drawing::Size(134, 20);
			this->tbPrecio->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(209, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(240, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Nuevo precio del producto:";
			// 
			// tbCant
			// 
			this->tbCant->Enabled = false;
			this->tbCant->Location = System::Drawing::Point(256, 242);
			this->tbCant->Name = L"tbCant";
			this->tbCant->Size = System::Drawing::Size(134, 20);
			this->tbCant->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(209, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(257, 24);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Nueva cantidad del producto:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->opcionNombre);
			this->groupBox1->Controls->Add(this->opcionPrecio);
			this->groupBox1->Controls->Add(this->opcionCant);
			this->groupBox1->Controls->Add(this->opcionKCal);
			this->groupBox1->Location = System::Drawing::Point(11, 166);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 197);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ModificarProducto::groupBox1_Enter);
			// 
			// opcionNombre
			// 
			this->opcionNombre->AutoSize = true;
			this->opcionNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionNombre->Location = System::Drawing::Point(9, 150);
			this->opcionNombre->Name = L"opcionNombre";
			this->opcionNombre->Size = System::Drawing::Size(97, 28);
			this->opcionNombre->TabIndex = 3;
			this->opcionNombre->TabStop = true;
			this->opcionNombre->Text = L"Nombre";
			this->opcionNombre->UseVisualStyleBackColor = true;
			this->opcionNombre->CheckedChanged += gcnew System::EventHandler(this, &ModificarProducto::opcionNombre_CheckedChanged);
			// 
			// opcionPrecio
			// 
			this->opcionPrecio->AutoSize = true;
			this->opcionPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionPrecio->Location = System::Drawing::Point(9, 107);
			this->opcionPrecio->Name = L"opcionPrecio";
			this->opcionPrecio->Size = System::Drawing::Size(82, 28);
			this->opcionPrecio->TabIndex = 2;
			this->opcionPrecio->TabStop = true;
			this->opcionPrecio->Text = L"Precio";
			this->opcionPrecio->UseVisualStyleBackColor = true;
			this->opcionPrecio->CheckedChanged += gcnew System::EventHandler(this, &ModificarProducto::opcionPrecio_CheckedChanged);
			// 
			// opcionCant
			// 
			this->opcionCant->AutoSize = true;
			this->opcionCant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionCant->Location = System::Drawing::Point(9, 68);
			this->opcionCant->Name = L"opcionCant";
			this->opcionCant->Size = System::Drawing::Size(102, 28);
			this->opcionCant->TabIndex = 1;
			this->opcionCant->Text = L"Cantidad";
			this->opcionCant->UseVisualStyleBackColor = true;
			this->opcionCant->CheckedChanged += gcnew System::EventHandler(this, &ModificarProducto::radioButton2_CheckedChanged);
			// 
			// opcionKCal
			// 
			this->opcionKCal->AutoSize = true;
			this->opcionKCal->Checked = true;
			this->opcionKCal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionKCal->Location = System::Drawing::Point(9, 28);
			this->opcionKCal->Name = L"opcionKCal";
			this->opcionKCal->Size = System::Drawing::Size(67, 28);
			this->opcionKCal->TabIndex = 0;
			this->opcionKCal->TabStop = true;
			this->opcionKCal->Text = L"KCal";
			this->opcionKCal->UseVisualStyleBackColor = true;
			this->opcionKCal->CheckedChanged += gcnew System::EventHandler(this, &ModificarProducto::radioButton1_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(188, 48);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Seleccione qué valor\r\ndesea modificar:";
			// 
			// ModificarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 401);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tbCant);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPrecio);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbKCal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarProducto";
			this->Text = L"ModificarProducto";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (opcionKCal->Checked) {
			tbKCal->Enabled = true;
			tbCant->Enabled = false;
			tbNombre->Enabled = false;
			tbPrecio->Enabled = false;
		}
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opcionCant->Checked) {
		tbKCal->Enabled = false;
		tbCant->Enabled = true;
		tbNombre->Enabled = false;
		tbPrecio->Enabled = false;
	}
}
private: System::Void opcionPrecio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opcionPrecio->Checked) {
		tbKCal->Enabled = false;
		tbCant->Enabled = false;
		tbNombre->Enabled = false;
		tbPrecio->Enabled = true;
	}
}
private: System::Void opcionNombre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opcionNombre->Checked) {
		tbKCal->Enabled = false;
		tbCant->Enabled = false;
		tbNombre->Enabled = true;
		tbPrecio->Enabled = false;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codProd = this->tbCod->Text;
	String^ KCal = this->tbKCal->Text;
	String^ cantidad = this->tbCant->Text;
	String^ precio = this->tbPrecio->Text;
	String^ nombre = this->tbNombre->Text;
	std::string strCod = msclr::interop::marshal_as<std::string>(codProd);
	std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
	std::string strKcal = msclr::interop::marshal_as<std::string>(KCal);
	std::string strPrecio = msclr::interop::marshal_as<std::string>(precio);
	std::string strCantidad = msclr::interop::marshal_as<std::string>(cantidad);
	if (strCod != "") {
		int intCod = std::stoi(strCod);
		if (AProd->ValidarProducto(AProd->raiz, intCod)) {
			if (opcionKCal) {
				if (strKcal != "") {
					AProd->modificarProducto(intCod, 2, "", strKcal, 0, 0);
					MessageBox::Show("Se modificó correctamente las kcal", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("Debe introducir las KCal", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				return;
			}
			if (opcionCant) {
				if (strCantidad != "") {
					int intCantidad = std::stoi(strCantidad);
					AProd->modificarProducto(intCod, 4, "", "", 0, intCantidad);
					MessageBox::Show("Se modificó correctamente las kcal", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("Debe introducir la cantidad", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				return;
			}
			if (opcionPrecio) {
				if (strPrecio != "") {
					int intPrecio = std::stoi(strPrecio);
					AProd->modificarProducto(intCod, 3, "", "", intPrecio, 0);
					MessageBox::Show("Se modificó correctamente el precio", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("Debe introducir la cantidad", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				return;
			}
			if (opcionNombre) {
				if (strNombre != "") {
					AProd->modificarProducto(intCod, 1, strNombre, "", 0, 0);
					MessageBox::Show("Se modificó correctamente el nombre", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("Debe introducir el nombre", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				return;
			}
			
		}
		else {
			MessageBox::Show("No existe un producto con ese código", "Menu", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	else {
		MessageBox::Show("Debe introducir un código de producto", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
