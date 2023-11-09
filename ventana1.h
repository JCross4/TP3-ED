#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "VistaAdmin.h"
#include "TP3.cpp"



namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ventana1
	/// </summary>
	public ref class ventana1 : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARestaurantes; ArbolAAMenu* AMenu; arbolAVLProducto* AProducto; ArbolB* AClientes; ArbolB* AAdmins; listaCola* LFila; listaS* LCompra; listaS* LContacto;
	public:
		ventana1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ventana1(arbolBinarioPais* ptrPaises, ArbolRN* ptrRestaurantes, ArbolAAMenu* ptrMenu, arbolAVLProducto* ptrProducto, ArbolB* ptrClientes, ArbolB* ptrAdmins, listaCola* ptrFila, listaS* ptrCompra, listaS* ptrContacto)
		{
			InitializeComponent();
			APaises = ptrPaises; ARestaurantes = ptrRestaurantes; AMenu = ptrMenu; AProducto = ptrProducto; AClientes = ptrClientes; AAdmins = ptrAdmins; LFila = ptrFila; LCompra = ptrCompra; LContacto = ptrContacto;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ventana1()
		{
			if (components)
			{
				delete components;
			}
		}

	
	private: System::Windows::Forms::Label^ labelTitulo;

	private: System::Windows::Forms::TextBox^ inputCedula;
	private: System::Windows::Forms::Label^ labelCedula;
	private: System::Windows::Forms::Label^ labelUsuario;
	private: System::Windows::Forms::Button^ entrar;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;





	protected:

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
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->inputCedula = (gcnew System::Windows::Forms::TextBox());
			this->labelCedula = (gcnew System::Windows::Forms::Label());
			this->labelUsuario = (gcnew System::Windows::Forms::Label());
			this->entrar = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->Location = System::Drawing::Point(189, 9);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(154, 42);
			this->labelTitulo->TabIndex = 2;
			this->labelTitulo->Text = L"Usuario\r\n";
			// 
			// inputCedula
			// 
			this->inputCedula->Location = System::Drawing::Point(293, 135);
			this->inputCedula->Name = L"inputCedula";
			this->inputCedula->Size = System::Drawing::Size(168, 20);
			this->inputCedula->TabIndex = 3;
			// 
			// labelCedula
			// 
			this->labelCedula->AutoSize = true;
			this->labelCedula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCedula->Location = System::Drawing::Point(288, 94);
			this->labelCedula->Name = L"labelCedula";
			this->labelCedula->Size = System::Drawing::Size(217, 25);
			this->labelCedula->TabIndex = 4;
			this->labelCedula->Text = L"Introduzca su cédula:";
			this->labelCedula->Click += gcnew System::EventHandler(this, &ventana1::label2_Click);
			// 
			// labelUsuario
			// 
			this->labelUsuario->AutoSize = true;
			this->labelUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuario->Location = System::Drawing::Point(24, 94);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(236, 25);
			this->labelUsuario->TabIndex = 5;
			this->labelUsuario->Text = L"Seleccione una opción:";
			this->labelUsuario->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// entrar
			// 
			this->entrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entrar->Location = System::Drawing::Point(224, 246);
			this->entrar->Name = L"entrar";
			this->entrar->Size = System::Drawing::Size(76, 31);
			this->entrar->TabIndex = 6;
			this->entrar->Text = L"Entrar";
			this->entrar->UseVisualStyleBackColor = true;
			this->entrar->Click += gcnew System::EventHandler(this, &ventana1::entrar_Click_1);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(97, 29);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Cliente";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(6, 54);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(162, 29);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Administrador";
			this->radioButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(29, 135);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(169, 96);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
			// 
			// ventana1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(521, 289);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->entrar);
			this->Controls->Add(this->labelUsuario);
			this->Controls->Add(this->labelCedula);
			this->Controls->Add(this->inputCedula);
			this->Controls->Add(this->labelTitulo);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"ventana1";
			this->Text = L"TP3";
			this->Load += gcnew System::EventHandler(this, &ventana1::ventana1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ventana1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void entrar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	bool clienteUsuario = radioButton1->Checked;
	bool administradorUsuario = radioButton2->Checked;
	String^ cedula = this->inputCedula->Text;
	std::string strCedula = msclr::interop::marshal_as<std::string>(cedula);
	try {
		int intCedula = std::stoi(strCedula);
		if (clienteUsuario) {
			if (AClientes->validarCedula(intCedula)) {
				MessageBox::Show("El cliente existe", "Cliente", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("El cliente no existe", "Cliente", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (administradorUsuario) {
			if (AAdmins->validarCedula(intCedula)) {
				MessageBox::Show("El administrador existe", "Admin", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				VistaAdmin^ vistaA = gcnew VistaAdmin(APaises, ARestaurantes, AMenu, AProducto, AClientes, AAdmins, LFila, LCompra, LContacto);
				vistaA->ShowDialog();
			}
			else {
				MessageBox::Show("El administrador no existe", "Admin", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			
		}

	}
	catch (...) {
		MessageBox::Show("La cédula debe ser un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		inputCedula->Clear();
	}
}
};
}
