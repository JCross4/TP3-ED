#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"
#include "InsertarRest.h"
#include "ModificarRest.h"
#include "ConsultaRestaurante.h"
#include "EliminarRest.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesRest
	/// </summary>
	public ref class OpcionesRest : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARest; listaS* LRestElim; int opcion;
	private: System::Windows::Forms::Button^ button3;
	public:
	public:
		OpcionesRest(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		OpcionesRest(arbolBinarioPais* ptrPais, ArbolRN* ptrRest, listaS* ptrRestElim, int popcion)
		{
			InitializeComponent();

			APaises = ptrPais;
			ARest = ptrRest;
			LRestElim = ptrRestElim;
			opcion = popcion;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~OpcionesRest()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(78, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 36);
			this->button4->TabIndex = 6;
			this->button4->Text = L"B�squeda";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OpcionesRest::button4_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(78, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Modificaci�n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesRest::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(78, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Inserci�n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesRest::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(78, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 37);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Eliminaci�n";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OpcionesRest::button3_Click);
			// 
			// OpcionesRest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"OpcionesRest";
			this->Text = L"OpcionesRest";
			this->Load += gcnew System::EventHandler(this, &OpcionesRest::OpcionesRest_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertarRest^ InsRest = gcnew InsertarRest(APaises, ARest);
		InsRest->ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarRest^ ModRest = gcnew ModificarRest(ARest);
	ModRest->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaRestaurante^ ConRest = gcnew ConsultaRestaurante(ARest);
	ConRest->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarRest^ ElimRest = gcnew EliminarRest(ARest, LRestElim);
	ElimRest->ShowDialog();
}
private: System::Void OpcionesRest_Load(System::Object^ sender, System::EventArgs^ e) {
	if (opcion == 0) {
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
	}
	else
	{
		return;
	}
}
};
}
