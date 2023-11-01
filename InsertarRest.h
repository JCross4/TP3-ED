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
	/// Resumen de InsertarRest
	/// </summary>
	public ref class InsertarRest : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARest;
	public:
		InsertarRest(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		InsertarRest(arbolBinarioPais* ptrPaises, ArbolRN* ptrRest)
		{
			InitializeComponent();
			APaises = ptrPaises;
			ARest = ptrRest;

			//TODO: agregar c�digo de constructor aqu�

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~InsertarRest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbCodC;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::TextBox^ tbCodP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCodR;
	private: System::Windows::Forms::Label^ label5;

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
			this->tbCodC = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbCodP = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCodR = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbCodC
			// 
			this->tbCodC->Location = System::Drawing::Point(107, 143);
			this->tbCodC->Name = L"tbCodC";
			this->tbCodC->Size = System::Drawing::Size(134, 20);
			this->tbCodC->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 24);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Introduzca el c�digo de la ciudad:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InsertarRest::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(107, 280);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 18;
			// 
			// tbCodP
			// 
			this->tbCodP->Location = System::Drawing::Point(107, 78);
			this->tbCodP->Name = L"tbCodP";
			this->tbCodP->Size = System::Drawing::Size(134, 20);
			this->tbCodP->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 24);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Introduzca el nombre del restaurante:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Introduzca el c�digo del pa�s:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Insertar Restaurante";
			// 
			// tbCodR
			// 
			this->tbCodR->Location = System::Drawing::Point(107, 216);
			this->tbCodR->Name = L"tbCodR";
			this->tbCodR->Size = System::Drawing::Size(134, 20);
			this->tbCodR->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(314, 24);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Introduzca el c�digo del restaurante:";
			// 
			// InsertarRest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 351);
			this->Controls->Add(this->tbCodR);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbCodC);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbCodP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"InsertarRest";
			this->Text = L"InsertarRest";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codPais = this->tbCodP->Text;
		String^ codCiudad = this->tbCodC->Text;
		String^ codRest = this->tbCodR->Text;
		String^ nombre = this->tbNombre->Text;
		std::string strCodP = msclr::interop::marshal_as<std::string>(codPais);
		std::string strCodC = msclr::interop::marshal_as<std::string>(codCiudad);
		std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
		std::string strCodR = msclr::interop::marshal_as<std::string>(codRest);
		if (strCodP != "" && strNombre != "" && strCodC != "" && strCodR != "") {
			int intCodP = std::stoi(strCodP);
			int intCodC = std::stoi(strCodC);
			int intCodR = std::stoi(strCodR);
			if (APaises->ValidarPais(APaises->raiz, intCodP)) {
				pNodoBinarioPais pais = APaises->ValidarPais(APaises->raiz, intCodP);
				/*pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodC);
				if (!ciudad) {*/
				if (!ARest->validarRestaurante(ARest->getRaiz(), intCodR)) {
					ARest->insertarNuevoRest(intCodP, intCodC, intCodR, strNombre, APaises);
					MessageBox::Show("Se insert� correctamente", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else
				{
					MessageBox::Show("Ya existe un restaurante con ese c�digo", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				/*}
				else {
					MessageBox::Show("Ya existe una ciudad con ese c�digo", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
					tbCodC->Clear();
				}*/

			}
			else {
				MessageBox::Show("No existe un pa�s con ese c�digo", "Pa�s", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCodP->Clear();
			}

		}
		else {
			MessageBox::Show("Debe introducir la informaci�n", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
