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
	/// Resumen de ModificarPais
	/// </summary>
	public ref class ModificarPais : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises;
	public:
		ModificarPais(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		ModificarPais(arbolBinarioPais* ptrPaises)
		{
			InitializeComponent();
			APaises = ptrPaises;

			//TODO: agregar c�digo de constructor aqu�

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ModificarPais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::TextBox^ tbCod;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbCod = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarPais::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(93, 187);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 10;
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(93, 106);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(321, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Introduzca el nuevo nombre del pa�s:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Introduzca el c�digo del pa�s:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(78, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Modificar Pa�s";
			// 
			// ModificarPais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 279);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarPais";
			this->Text = L"ModificarPais";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCod->Text;
		String^ nombre = this->tbNombre->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
		if (strCod != "" && strNombre != "") {
			int intCod = std::stoi(strCod);
			if (APaises->ValidarPais(APaises->raiz, intCod)) {
				APaises->modificarPais(intCod, strNombre);
				MessageBox::Show("Se modific� correctamente", "Pa�s", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("No existe un pa�s con ese c�digo", "Pa�s", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la informaci�n", "Pa�s", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
