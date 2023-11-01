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
	/// Resumen de ConsultaProducto
	/// </summary>
	public ref class ConsultaProducto : public System::Windows::Forms::Form
	{
	public: arbolAVLProducto* AProd;
	public:
		ConsultaProducto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ConsultaProducto(arbolAVLProducto* ptrProd)
		{
			InitializeComponent();

			AProd = ptrProd;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaProducto()
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(121, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultaProducto::button1_Click);
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(89, 85);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 24);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Introduzca el código del producto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 29);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Consulta Producto";
			// 
			// ConsultaProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 170);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaProducto";
			this->Text = L"ConsultaProducto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCod->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		if (strCod != "") {
			int intCod = std::stoi(strCod);
			if (AProd->ValidarProducto(AProd->raiz, intCod)) {
				pNodoAVLProducto producto = AProd->ValidarProducto(AProd->raiz, intCod);
				string strCod = std::to_string(producto->codMenu);
				string strPrecio = std::to_string(producto->precio);
				string strCantidad = std::to_string(producto->cantidad);
				String^ codStr = gcnew String(strCod.c_str());
				String^ nombreStr = gcnew String(producto->nombre.c_str());
				String^ KcalStr = gcnew String(producto->kcal.c_str());
				String^ precioStr = gcnew String(strPrecio.c_str());
				String^ cantidadStr = gcnew String(strCantidad.c_str());
				MessageBox::Show("Código: " + codStr + " Nombre: " + nombreStr + " KCal: " + KcalStr + " Precio: " + precioStr + " Cantidad: " + cantidadStr, "Menú", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("No existe un menú con ese código", "Menú", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "Menú", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
