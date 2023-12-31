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
	/// Resumen de ModificarRest
	/// </summary>
	public ref class ModificarRest : public System::Windows::Forms::Form
	{
	public: ArbolRN* ARest;
	public:
		ModificarRest(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		ModificarRest(ArbolRN* ptrRest)
		{
			InitializeComponent();
			ARest = ptrRest;

			//TODO: agregar c�digo de constructor aqu�

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ModificarRest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbCodR;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;

	private: System::Windows::Forms::Label^ label3;

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
			this->tbCodR = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbCodR
			// 
			this->tbCodR->Location = System::Drawing::Point(126, 99);
			this->tbCodR->Name = L"tbCodR";
			this->tbCodR->Size = System::Drawing::Size(134, 20);
			this->tbCodR->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(43, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(314, 24);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Introduzca el c�digo del restaurante:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarRest::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(126, 176);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(380, 24);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Introduzca el nuevo nombre del restaurante:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 29);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Modificar Restaurante";
			// 
			// ModificarRest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 265);
			this->Controls->Add(this->tbCodR);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarRest";
			this->Text = L"ModificarRest";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codP = this->tbCodR->Text;
		String^ nombre = this->tbNombre->Text;
		std::string strCod = msclr::interop::marshal_as<std::string>(codP);
		std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
		if (strCod != "" && strNombre != "") {
			int intCod = std::stoi(strCod);
			if (ARest->validarRestaurante(ARest->getRaiz(), intCod)) {
				ARest->modificarRestaurante(intCod, strNombre);
				MessageBox::Show("Se modific� correctamente", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("No existe un restaurante con ese c�digo", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCodR->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la informaci�n", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
