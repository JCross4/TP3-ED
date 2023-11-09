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
	/// Resumen de ModificarCompra
	/// </summary>
	public ref class ModificarCompra : public System::Windows::Forms::Form
	{
	public: ArbolB* AClientes; arbolAVLProducto* AProd; listaCola* LFila;
	public:
		ModificarCompra(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ModificarCompra(ArbolB* ptrClientes, arbolAVLProducto* ptrProd, listaCola* ptrFila)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			AClientes = ptrClientes;
			AProd = ptrProd;
			LFila = ptrFila;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarCompra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::RadioButton^ opcionPrecio;
	private: System::Windows::Forms::RadioButton^ opcionCant;
	private: System::Windows::Forms::RadioButton^ opcionKCal;
	private: System::Windows::Forms::TextBox^ tbCant;
	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ tbCedula;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCodP;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbNCod;
	private: System::Windows::Forms::Label^ label3;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->opcionPrecio = (gcnew System::Windows::Forms::RadioButton());
			this->opcionCant = (gcnew System::Windows::Forms::RadioButton());
			this->opcionKCal = (gcnew System::Windows::Forms::RadioButton());
			this->tbCant = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbCedula = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCodP = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbNCod = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(188, 48);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Seleccione qué valor\r\ndesea modificar:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->opcionPrecio);
			this->groupBox1->Controls->Add(this->opcionCant);
			this->groupBox1->Controls->Add(this->opcionKCal);
			this->groupBox1->Location = System::Drawing::Point(11, 216);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(189, 147);
			this->groupBox1->TabIndex = 45;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
			// 
			// opcionPrecio
			// 
			this->opcionPrecio->AutoSize = true;
			this->opcionPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionPrecio->Location = System::Drawing::Point(9, 107);
			this->opcionPrecio->Name = L"opcionPrecio";
			this->opcionPrecio->Size = System::Drawing::Size(176, 28);
			this->opcionPrecio->TabIndex = 2;
			this->opcionPrecio->TabStop = true;
			this->opcionPrecio->Text = L"Eliminar producto";
			this->opcionPrecio->UseVisualStyleBackColor = true;
			this->opcionPrecio->CheckedChanged += gcnew System::EventHandler(this, &ModificarCompra::opcionPrecio_CheckedChanged);
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
			this->opcionCant->CheckedChanged += gcnew System::EventHandler(this, &ModificarCompra::opcionCant_CheckedChanged);
			// 
			// opcionKCal
			// 
			this->opcionKCal->AutoSize = true;
			this->opcionKCal->Checked = true;
			this->opcionKCal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionKCal->Location = System::Drawing::Point(9, 28);
			this->opcionKCal->Name = L"opcionKCal";
			this->opcionKCal->Size = System::Drawing::Size(178, 28);
			this->opcionKCal->TabIndex = 0;
			this->opcionKCal->TabStop = true;
			this->opcionKCal->Text = L"Cambiar producto";
			this->opcionKCal->UseVisualStyleBackColor = true;
			this->opcionKCal->CheckedChanged += gcnew System::EventHandler(this, &ModificarCompra::opcionKCal_CheckedChanged);
			// 
			// tbCant
			// 
			this->tbCant->Enabled = false;
			this->tbCant->Location = System::Drawing::Point(273, 307);
			this->tbCant->Name = L"tbCant";
			this->tbCant->Size = System::Drawing::Size(134, 20);
			this->tbCant->TabIndex = 44;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(206, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(257, 24);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Nueva cantidad del producto:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarCompra::button1_Click);
			// 
			// tbCedula
			// 
			this->tbCedula->Location = System::Drawing::Point(164, 76);
			this->tbCedula->Name = L"tbCedula";
			this->tbCedula->Size = System::Drawing::Size(134, 20);
			this->tbCedula->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(93, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 24);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Introduzca la cédula del cliente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(123, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 29);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Modificar Compra";
			// 
			// tbCodP
			// 
			this->tbCodP->Location = System::Drawing::Point(164, 126);
			this->tbCodP->Name = L"tbCodP";
			this->tbCodP->Size = System::Drawing::Size(134, 20);
			this->tbCodP->TabIndex = 48;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(84, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(296, 24);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Introduzca el código del producto:";
			// 
			// tbNCod
			// 
			this->tbNCod->Location = System::Drawing::Point(273, 260);
			this->tbNCod->Name = L"tbNCod";
			this->tbNCod->Size = System::Drawing::Size(134, 20);
			this->tbNCod->TabIndex = 50;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(214, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 24);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Código del nuevo producto:";
			// 
			// ModificarCompra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 426);
			this->Controls->Add(this->tbNCod);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbCodP);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tbCant);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCedula);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarCompra";
			this->Text = L"ModificarCompra";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCedula->Text;
		String^ codP = this->tbCodP->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		std::string strCodP = msclr::interop::marshal_as<std::string>(codP);
		if (strCod != "" && strCodP != "") {
			int intCod = std::stoi(strCod);
			int intCodP = std::stoi(strCodP);
			if (AClientes->validarCedula(intCod))
			{
				if (AProd->ValidarProducto(AProd->raiz, intCodP)) {
					if (opcionKCal) {
						String^ nCod = this->tbNCod->Text;
						std::string strNCod = msclr::interop::marshal_as<std::string>(nCod);
						if (strNCod != "") {
							int intNCod = std::stoi(strNCod);
							LFila->modificarCola(intCod, intCodP, 1, AProd, intNCod);
						}
						else {
							MessageBox::Show("Debe introducir la información", "Menú", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						return;
					}
					if (opcionCant) {
						String^ cant = this->tbCant->Text;
						std::string strCant = msclr::interop::marshal_as<std::string>(cant);
						if (strCant != "") {
							int intCant = std::stoi(strCant);
							LFila->modificarCola(intCod, intCodP, 2, AProd, 0, intCant);
						}
						else
							MessageBox::Show("Debe introducir la información", "Menú", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
					if (opcionPrecio) {
						LFila->modificarCola(intCod, intCodP, 3, AProd);
						return;
					}
				}
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "Menú", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void opcionKCal_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opcionKCal->Checked) {
		tbNCod->Enabled = true;
		tbCant->Enabled = false;
	}
}
private: System::Void opcionCant_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opcionCant->Checked) {
		tbNCod->Enabled = false;
		tbCant->Enabled = true;
	}
}
private: System::Void opcionPrecio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opcionPrecio->Checked) {
		tbNCod->Enabled = false;
		tbCant->Enabled = false;
	}
}
};
}
