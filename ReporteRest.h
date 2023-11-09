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
	/// Resumen de ReporteRest
	/// </summary>
	public ref class ReporteRest : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARest;
	public:
		ReporteRest(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ReporteRest(arbolBinarioPais* ptrPaises, ArbolRN* ptrRest)
		{
			InitializeComponent();
			APaises = ptrPaises;
			ARest = ptrRest;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteRest()
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
	private: System::Windows::Forms::TextBox^ tbCodC;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbCod = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCodC = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Crear reporte";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReporteRest::button1_Click);
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(135, 81);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Introduzca el código del país:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 29);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Reporte Restaurantes de una ciudad";
			// 
			// tbCodC
			// 
			this->tbCodC->Location = System::Drawing::Point(135, 143);
			this->tbCodC->Name = L"tbCodC";
			this->tbCodC->Size = System::Drawing::Size(134, 20);
			this->tbCodC->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(60, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 24);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Introduzca el código de la ciudad:";
			// 
			// ReporteRest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 229);
			this->Controls->Add(this->tbCodC);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ReporteRest";
			this->Text = L"ReporteRest";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCod->Text;
		String^ codC = this->tbCodC->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		std::string strCodC = msclr::interop::marshal_as<std::string>(codC);
		if (strCod != "" && strCodC != "") {
			int intCod = std::stoi(strCod);
			int intCodC = std::stoi(strCodC);
			if (APaises->ValidarPais(APaises->raiz, intCod)) {
				pNodoBinarioPais pais = APaises->ValidarPais(APaises->raiz, intCod);
				if (pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodC)) {
					ARest->reporteRestaurantes(intCod, intCodC, APaises);
					MessageBox::Show("Se creó correctamente el reporte", "Restaurantes de una ciudad", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("No existe una ciudad con ese código", "Restaurantes de una ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
					tbCod->Clear();
				}
			}
			else {
				MessageBox::Show("No existe un país con ese código", "Restaurantes de una ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "Restaurantes de una ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
