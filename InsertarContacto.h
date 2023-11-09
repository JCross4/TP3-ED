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
	/// Resumen de InsertarContacto
	/// </summary>
	public ref class InsertarContacto : public System::Windows::Forms::Form
	{
	public: listaS* LContacto;
	public:
		InsertarContacto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		InsertarContacto(listaS* ptrContacto)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			LContacto = ptrContacto;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InsertarContacto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCorreo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbTelefono;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCorreo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(162, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InsertarContacto::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(130, 71);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(235, 20);
			this->tbNombre->TabIndex = 32;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 24);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 29);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Insertar Contacto";
			// 
			// tbCorreo
			// 
			this->tbCorreo->Location = System::Drawing::Point(130, 121);
			this->tbCorreo->Name = L"tbCorreo";
			this->tbCorreo->Size = System::Drawing::Size(235, 20);
			this->tbCorreo->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Correo:";
			// 
			// tbTelefono
			// 
			this->tbTelefono->Location = System::Drawing::Point(130, 167);
			this->tbTelefono->Name = L"tbTelefono";
			this->tbTelefono->Size = System::Drawing::Size(235, 20);
			this->tbTelefono->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 24);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Telefono:";
			// 
			// InsertarContacto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 258);
			this->Controls->Add(this->tbTelefono);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbCorreo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"InsertarContacto";
			this->Text = L"InsertarContacto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->tbNombre->Text;
		String^ correo = this->tbCorreo->Text;
		String^ telefono = this->tbTelefono->Text;
		std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
		std::string strCorreo = msclr::interop::marshal_as<std::string>(correo);
		std::string strTelefono = msclr::interop::marshal_as<std::string>(telefono);
		if (strNombre != "" && strCorreo != "" && strTelefono != "") {
			LContacto->InsertarFinalSimple(strCorreo, strNombre, strTelefono);
			MessageBox::Show("Se insertó el contacto correctamente", "Contacto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else
			MessageBox::Show("Debe introducir la información", "Contacto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
};
}
