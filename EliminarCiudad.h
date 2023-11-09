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
	/// Resumen de EliminarCiudad
	/// </summary>
	public ref class EliminarCiudad : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises;
	public:
		EliminarCiudad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		EliminarCiudad(arbolBinarioPais* ptrPaises)
		{
			InitializeComponent();
			APaises = ptrPaises;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EliminarCiudad()
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
	private: System::Windows::Forms::TextBox^ tbCodCiudad;
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
			this->tbCodCiudad = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(107, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EliminarCiudad::button1_Click);
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(81, 85);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Introduzca el código del país:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Eliminar Ciudad";
			// 
			// tbCodCiudad
			// 
			this->tbCodCiudad->Location = System::Drawing::Point(76, 164);
			this->tbCodCiudad->Name = L"tbCodCiudad";
			this->tbCodCiudad->Size = System::Drawing::Size(134, 20);
			this->tbCodCiudad->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 24);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Introduzca el código de la ciudad:";
			// 
			// EliminarCiudad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 261);
			this->Controls->Add(this->tbCodCiudad);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EliminarCiudad";
			this->Text = L"EliminarCiudad";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCod->Text;
		String^ codC = this->tbCodCiudad->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		std::string strCodC = msclr::interop::marshal_as<std::string>(codC);
		if (strCod != "" && strCodC != "") {
			int intCod = std::stoi(strCod);
			int intCodC = std::stoi(strCodC);
			if (APaises->ValidarPais(APaises->raiz, intCod)) {
				pNodoBinarioPais pais = APaises->ValidarPais(APaises->raiz, intCod);
				if (pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodC)) {
					pais->ciudades->raiz = pais->ciudades->BorrarBalanceado(pais->ciudades->raiz, intCodC);
					MessageBox::Show("Se eliminó correctamente", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else {
					MessageBox::Show("No existe una ciudad con ese código", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				
			}
			else {
				MessageBox::Show("No existe un país con ese código", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "País", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
