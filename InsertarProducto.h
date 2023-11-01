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
	/// Resumen de InsertarProducto
	/// </summary>
	public ref class InsertarProducto : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARest; ArbolAAMenu* AMenu; arbolAVLProducto* AProd;
	private: System::Windows::Forms::TextBox^ tbCantidad;
	private: System::Windows::Forms::Label^ label10;
	public:
		InsertarProducto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		InsertarProducto(arbolBinarioPais* ptrPaises, ArbolRN* ptrRest, ArbolAAMenu* ptrMenu, arbolAVLProducto* ptrProd)
		{
			InitializeComponent();
			APaises = ptrPaises;
			ARest = ptrRest;
			AMenu = ptrMenu;
			AProd = ptrProd;

			//TODO: agregar código de constructor aquí

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InsertarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbCodM;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbCodR;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbCodC;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::TextBox^ tbCodP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCodProd;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbPrecio;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbKCal;

	private: System::Windows::Forms::Label^ label9;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->tbCodProd = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbKCal = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbCodM
			// 
			this->tbCodM->Location = System::Drawing::Point(115, 226);
			this->tbCodM->Name = L"tbCodM";
			this->tbCodM->Size = System::Drawing::Size(134, 20);
			this->tbCodM->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(56, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(270, 24);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Introduzca el código del menú:";
			// 
			// tbCodR
			// 
			this->tbCodR->Location = System::Drawing::Point(115, 176);
			this->tbCodR->Name = L"tbCodR";
			this->tbCodR->Size = System::Drawing::Size(134, 20);
			this->tbCodR->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(314, 24);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Introduzca el código del restaurante:";
			// 
			// tbCodC
			// 
			this->tbCodC->Location = System::Drawing::Point(115, 126);
			this->tbCodC->Name = L"tbCodC";
			this->tbCodC->Size = System::Drawing::Size(134, 20);
			this->tbCodC->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 24);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Introduzca el código de la ciudad:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(141, 546);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Insertar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InsertarProducto::button1_Click);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(115, 506);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(134, 20);
			this->tbNombre->TabIndex = 40;
			this->tbNombre->TextChanged += gcnew System::EventHandler(this, &InsertarProducto::tbNombre_TextChanged);
			// 
			// tbCodP
			// 
			this->tbCodP->Location = System::Drawing::Point(115, 76);
			this->tbCodP->Name = L"tbCodP";
			this->tbCodP->Size = System::Drawing::Size(134, 20);
			this->tbCodP->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 479);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(304, 24);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Introduzca el nombre del producto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(71, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 24);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Introduzca el código del país:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(97, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 29);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Insertar Producto";
			// 
			// tbCodProd
			// 
			this->tbCodProd->Location = System::Drawing::Point(115, 288);
			this->tbCodProd->Name = L"tbCodProd";
			this->tbCodProd->Size = System::Drawing::Size(134, 20);
			this->tbCodProd->TabIndex = 49;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(46, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(296, 24);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Introduzca el código del producto:";
			// 
			// tbPrecio
			// 
			this->tbPrecio->Location = System::Drawing::Point(115, 450);
			this->tbPrecio->Name = L"tbPrecio";
			this->tbPrecio->Size = System::Drawing::Size(134, 20);
			this->tbPrecio->TabIndex = 51;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(42, 423);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(291, 24);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Introduzca el precio del producto:";
			this->label8->Click += gcnew System::EventHandler(this, &InsertarProducto::label8_Click);
			// 
			// tbKCal
			// 
			this->tbKCal->Location = System::Drawing::Point(115, 400);
			this->tbKCal->Name = L"tbKCal";
			this->tbKCal->Size = System::Drawing::Size(134, 20);
			this->tbKCal->TabIndex = 53;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(46, 373);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(285, 24);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Introduzca las KCal del producto:";
			// 
			// tbCantidad
			// 
			this->tbCantidad->Location = System::Drawing::Point(115, 349);
			this->tbCantidad->Name = L"tbCantidad";
			this->tbCantidad->Size = System::Drawing::Size(134, 20);
			this->tbCantidad->TabIndex = 55;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(42, 322);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(308, 24);
			this->label10->TabIndex = 54;
			this->label10->Text = L"Introduzca la cantidad del producto:";
			// 
			// InsertarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 576);
			this->Controls->Add(this->tbCantidad);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tbKCal);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tbPrecio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbCodProd);
			this->Controls->Add(this->label7);
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
			this->Name = L"InsertarProducto";
			this->Text = L"InsertarProducto";
			this->Load += gcnew System::EventHandler(this, &InsertarProducto::InsertarProducto_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void InsertarProducto_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codPais = this->tbCodP->Text;
	String^ codCiudad = this->tbCodC->Text;
	String^ codRest = this->tbCodR->Text;
	String^ codMenu = this->tbCodM->Text;
	String^ codProd = this->tbCodProd->Text;
	String^ nombre = this->tbNombre->Text;
	String^ kcal = this->tbKCal->Text;
	String^ cantidad = this->tbCantidad->Text;
	String^ precio = this->tbPrecio->Text;

	std::string strCodP = msclr::interop::marshal_as<std::string>(codPais);
	std::string strCodC = msclr::interop::marshal_as<std::string>(codCiudad);
	std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
	std::string strCodR = msclr::interop::marshal_as<std::string>(codRest);
	std::string strCodM = msclr::interop::marshal_as<std::string>(codMenu);
	std::string strCodProd = msclr::interop::marshal_as<std::string>(codProd);
	std::string strKcal = msclr::interop::marshal_as<std::string>(kcal);
	std::string strCantidad = msclr::interop::marshal_as<std::string>(cantidad);
	std::string strPrecio = msclr::interop::marshal_as<std::string>(precio);

	if (strCodP != "" && strNombre != "" && strCodC != "" && strCodR != "" && strCodM != "" && strCodProd != "" && strKcal != "" && strCantidad != "" && strPrecio != "") {
		int intCodP = std::stoi(strCodP);
		int intCodC = std::stoi(strCodC);
		int intCodR = std::stoi(strCodR);
		int intCodM = std::stoi(strCodM);
		int intCodPr = std::stoi(strCodProd);
		int intKcal = std::stoi(strKcal);
		int intCantidad = std::stoi(strCantidad);
		int intPrecio = std::stoi(strPrecio);
		if (APaises->ValidarPais(APaises->raiz, intCodP)) {
			pNodoBinarioPais pais = APaises->ValidarPais(APaises->raiz, intCodP);
			/*pNodoAVLCiudad ciudad = pais->ciudades->ValidarCiudad(pais->ciudades->raiz, intCodC);
			if (!ciudad) {*/
			if (ARest->validarRestaurante(ARest->getRaiz(), intCodR)) {
				if (AMenu->validarMenu(AMenu->raiz, intCodM)) {
					if (!AProd->ValidarProducto(AProd->raiz, intCodPr)) {
						AProd->insertarNuevoProducto(intCodP, intCodC, intCodR, intCodM, intCodPr, strNombre, strKcal, intPrecio, intCantidad, APaises, ARest, AMenu);
						MessageBox::Show("Se insertó correctamente", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					}
					else {
						MessageBox::Show("Ya existe un producto con ese código", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
						tbCodProd->Clear();
					}
					
				}
				else {
					MessageBox::Show("No existe un menú con ese código", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
					tbCodM->Clear();
				}

			}
			else
			{
				MessageBox::Show("No existe un restaurante con ese código", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCodR->Clear();
			}
			/*}
			else {
				MessageBox::Show("Ya existe una ciudad con ese código", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
				tbCodC->Clear();
			}*/

		}
		else {
			MessageBox::Show("No existe un país con ese código", "Producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbCodP->Clear();
		}

	}
	else {
		MessageBox::Show("Debe introducir la información", "Ciudad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void tbNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
