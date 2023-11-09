#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"
#include "InsertarAdmin.h"
#include "ModificarAdmin.h"
#include "ConsultaAdmin.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesAdmin
	/// </summary>
	public ref class OpcionesAdmin : public System::Windows::Forms::Form
	{
	public: ArbolB* AAdmins;
	public:
		OpcionesAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		OpcionesAdmin(ArbolB* ptrAdmin)
		{
			InitializeComponent();
			AAdmins = ptrAdmin;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~OpcionesAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(78, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 37);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Eliminación";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(78, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 36);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Búsqueda";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OpcionesAdmin::button4_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(78, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Modificación";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(78, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Inserción";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesAdmin::button1_Click);
			// 
			// OpcionesAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"OpcionesAdmin";
			this->Text = L"OpcionesAdmin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertarAdmin^ InsAdmin = gcnew InsertarAdmin(AAdmins);
		InsAdmin->ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ModificarAdmin^ ModAdmin = gcnew ModificarAdmin(AAdmins);
	ModAdmin->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaAdmin^ ConAdmin = gcnew ConsultaAdmin(AAdmins);
	ConAdmin->ShowDialog();
}
};
}
