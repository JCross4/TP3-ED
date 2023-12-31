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
	/// Resumen de ConsultaAdmin
	/// </summary>
	public ref class ConsultaAdmin : public System::Windows::Forms::Form
	{
	public: ArbolB* AAdmins;
	public:
		ConsultaAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		ConsultaAdmin(ArbolB* ptrAdmins)
		{
			InitializeComponent();
			AAdmins = ptrAdmins;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ConsultaAdmin()
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
			this->tbCod = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultaAdmin::button1_Click);
			// 
			// tbCod
			// 
			this->tbCod->Location = System::Drawing::Point(105, 83);
			this->tbCod->Name = L"tbCod";
			this->tbCod->Size = System::Drawing::Size(134, 20);
			this->tbCod->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(332, 24);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Introduzca la c�dula del administrador:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 29);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Consulta Administrador";
			// 
			// ConsultaAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 158);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaAdmin";
			this->Text = L"ConsultaAdmin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cod = this->tbCod->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(cod);
		if (strCod != "") {
			int intCod = std::stoi(strCod);
			if (AAdmins->validarCedula(intCod)) {
				NodoB* cliente = AAdmins->busqueda(intCod);
				string strNombre = (cliente->busquedaNombre(intCod));
				String^ codStr = gcnew String(std::to_string(intCod).c_str());
				String^ nombreStr = gcnew String(strNombre.c_str());
				MessageBox::Show("C�dula: " + codStr + " Nombre: " + nombreStr, "Administradores", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("No existe un administrador con esa c�dula", "Administradores", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCod->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la informaci�n", "Administradores", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
