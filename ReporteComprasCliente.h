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
	/// Resumen de ReporteComprasCliente
	/// </summary>
	public ref class ReporteComprasCliente : public System::Windows::Forms::Form
	{
	public: ArbolB* AClientes;
	public:
		ReporteComprasCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ReporteComprasCliente(ArbolB* ptrClientes)
		{
			InitializeComponent();
			AClientes = ptrClientes;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteComprasCliente()
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
			this->button1->Location = System::Drawing::Point(127, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Crear reporte";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReporteComprasCliente::button1_Click);
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(111, 81);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 24);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Introduzca la cédula del cliente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(348, 29);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Reporte compras de un cliente:";
			// 
			// ReporteComprasCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 159);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ReporteComprasCliente";
			this->Text = L"ReporteComprasCliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCod->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		if (strCod != "") {
			int intCod = std::stoi(strCod);
			if (AClientes->validarCedula(intCod)) {
				AClientes->reporteComprasCliente(intCod);
				MessageBox::Show("Se creó correctamente el reporte", "Compras de un cliente", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("No existe un cliente con esa cédula", "Compras de un cliente", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "Compras de un cliente", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
