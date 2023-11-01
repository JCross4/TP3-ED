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
	/// Resumen de InsertarMenu
	/// </summary>
	public ref class InsertarMenu : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARest; ArbolAAMenu* AMenu;
	public:
		InsertarMenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		InsertarMenu(arbolBinarioPais* ptrPaises, ArbolRN* ptrRest, ArbolAAMenu* ptrMenu)
		{
			InitializeComponent();
			APaises = ptrPaises;
			ARest = ptrRest;
			AMenu = ptrMenu;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InsertarMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbCodR;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbCodC;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::TextBox^ tbCodP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCodM;

	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbCodR = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbCodC = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbCodP = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCodM = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbCodR
			// 
			this->tbCodR->Location = System::Drawing::Point(100, 176);
			this->tbCodR->Name = L"tbCodR";
			this->tbCodR->Size = System::Drawing::Size(134, 20);
			this->tbCodR->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(314, 24);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Introduzca el código del restaurante:";
			// 
			// tbCodC
			// 
			this->tbCodC->Location = System::Drawing::Point(100, 126);
			this->tbCodC->Name = L"tbCodC";
			this->tbCodC->Size = System::Drawing::Size(134, 20);
			this->tbCodC->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 24);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Introduzca el código de la ciudad:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InsertarMenu::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(100, 287);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 28;
			// 
			// tbCodP
			// 
			this->tbCodP->Location = System::Drawing::Point(100, 76);
			this->tbCodP->Name = L"tbCodP";
			this->tbCodP->Size = System::Drawing::Size(134, 20);
			this->tbCodP->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(278, 24);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Introduzca el nombre del menú:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Introduzca el código del país:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 29);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Insertar Menu";
			// 
			// tbCodM
			// 
			this->tbCodM->Location = System::Drawing::Point(100, 238);
			this->tbCodM->Name = L"tbCodM";
			this->tbCodM->Size = System::Drawing::Size(134, 20);
			this->tbCodM->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(34, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(270, 24);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Introduzca el código del menú:";
			// 
			// InsertarMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 362);
			this->Controls->Add(this->tbCodM);
			this->Controls->Add(this->label6);
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
			this->Name = L"InsertarMenu";
			this->Text = L"InsertarMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codPais = this->tbCodP->Text;
		String^ codCiudad = this->tbCodC->Text;
		String^ codRest = this->tbCodR->Text;
		String^ codMenu = this->tbCodM->Text;
		String^ nombre = this->tbNombre->Text;
		std::string strCodP = msclr::interop::marshal_as<std::string>(codPais);
		std::string strCodC = msclr::interop::marshal_as<std::string>(codCiudad);
		std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
		std::string strCodR = msclr::interop::marshal_as<std::string>(codRest);
		std::string strCodM = msclr::interop::marshal_as<std::string>(codMenu);
		if (strCodP != "" && strNombre != "" && strCodC != "" && strCodR != "") {
			int intCodP = std::stoi(strCodP);
			int intCodC = std::stoi(strCodC);
			int intCodR = std::stoi(strCodR);
			int intCodM = std::stoi(strCodM);
			if (APaises->ValidarPais(APaises->raiz, intCodP)) {
				pNodoBinarioPais pais = APaises->ValidarPais(APaises->raiz, intCodP);
				/*pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodC);
				if (!ciudad) {*/
				if (ARest->validarRestaurante(ARest->getRaiz(), intCodR)) {
					if (!AMenu->validarMenu(AMenu->raiz, intCodM)) {
						AMenu->insertarNuevoMenu(intCodP, intCodC, intCodR, intCodM, strNombre, APaises, ARest);
						MessageBox::Show("Se insertó correctamente", "Menu", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					}
					else {
						MessageBox::Show("Ya existe un menú con ese código", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

				}
				else
				{
					MessageBox::Show("No existe un restaurante con ese código", "Restaurante", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
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

};

