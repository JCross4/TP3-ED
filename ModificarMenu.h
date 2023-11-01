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
	/// Resumen de ModificarMenu
	/// </summary>
	public ref class ModificarMenu : public System::Windows::Forms::Form
	{
	public: ArbolAAMenu* AMenu;
	public:
		ModificarMenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ModificarMenu(ArbolAAMenu* ptrMenu)
		{
			InitializeComponent();
			AMenu = ptrMenu;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbCodM;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;

	private: System::Windows::Forms::Label^ label3;

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
			this->tbCodM = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbCodM
			// 
			this->tbCodM->Location = System::Drawing::Point(108, 110);
			this->tbCodM->Name = L"tbCodM";
			this->tbCodM->Size = System::Drawing::Size(134, 20);
			this->tbCodM->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(270, 24);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Introduzca el código del menú:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(136, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarMenu::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(108, 174);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(336, 24);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Introduzca el nuevo nombre del menú:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 29);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Modificar Menú";
			// 
			// ModificarMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 259);
			this->Controls->Add(this->tbCodM);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarMenu";
			this->Text = L"ModificarMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codM = this->tbCodM->Text;
		String^ nombre = this->tbNombre->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(codM);
		std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
		if (strCod != "" && strNombre != "") {
			int intCod = std::stoi(strCod);
			if (AMenu->validarMenu(AMenu->raiz, intCod)) {
				AMenu->modificarMenu(intCod, strNombre);
				MessageBox::Show("Se modificó correctamente", "Menu", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("No existe un menú con ese código", "Menu", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCodM->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la información", "Menu", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
