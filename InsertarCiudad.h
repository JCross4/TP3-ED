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
	/// Resumen de InsertarCiudad
	/// </summary>
	public ref class InsertarCiudad : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises;
	public:
		InsertarCiudad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		InsertarCiudad(arbolBinarioPais* ptrPaises)
		{
			InitializeComponent();
			APaises = ptrPaises;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InsertarCiudad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::TextBox^ tbCodP;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCodC;

	private: System::Windows::Forms::Label^ label4;

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
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbCodP = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCodC = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InsertarCiudad::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(80, 195);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 10;
			// 
			// tbCodP
			// 
			this->tbCodP->Location = System::Drawing::Point(80, 77);
			this->tbCodP->Name = L"tbCodP";
			this->tbCodP->Size = System::Drawing::Size(134, 20);
			this->tbCodP->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(301, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Introduzca el nombre de la ciudad:";
			this->label3->Click += gcnew System::EventHandler(this, &InsertarCiudad::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Introduzca el código del país:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(61, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Insertar Ciudad";
			// 
			// tbCodC
			// 
			this->tbCodC->Location = System::Drawing::Point(80, 127);
			this->tbCodC->Name = L"tbCodC";
			this->tbCodC->Size = System::Drawing::Size(134, 20);
			this->tbCodC->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 24);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Introduzca el código de la ciudad:";
			// 
			// InsertarCiudad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 281);
			this->Controls->Add(this->tbCodC);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbCodP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"InsertarCiudad";
			this->Text = L"InsertarCiudad";
			this->Load += gcnew System::EventHandler(this, &InsertarCiudad::InsertarCiudad_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void InsertarCiudad_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codPais = this->tbCodP->Text;
	String^ codCiudad = this->tbCodC->Text;
	String^ nombre = this->tbNombre->Text;
	std::string strCodP = msclr::interop::marshal_as<std::string>(codPais);
	std::string strCodC = msclr::interop::marshal_as<std::string>(codCiudad);
	std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
	if (strCodP != "" && strNombre != "" && strCodC != "") {
		int intCodP = std::stoi(strCodP);
		int intCodC = std::stoi(strCodC);
		if (APaises->ValidarPais(APaises->raiz, intCodP)) {
			pNodoBinarioPais pais = APaises->ValidarPais(APaises->raiz, intCodP);
			/*pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodC);
			if (!ciudad) {*/
				APaises->insertarNuevaCiudad(intCodP, intCodC, strNombre);
				MessageBox::Show("Se insertó correctamente", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			/*}
			else {
				MessageBox::Show("Ya existe una ciudad con ese código", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCodC->Clear();
			}*/
			
		}
		else {
			MessageBox::Show("No existe un país con ese código", "País", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbCodP->Clear();
		}

	}
	else {
		MessageBox::Show("Debe introducir la información", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
