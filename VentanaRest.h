#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "TP3.h"
#include "OpcionesRest.h"
#include "OpcionesMenu.h"
#include "OpcionesProd.h"

namespace InterfazTP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaRest
	/// </summary>
	public ref class VentanaRest : public System::Windows::Forms::Form
	{
	public: arbolBinarioPais* APaises; ArbolRN* ARest; ArbolAAMenu* AMenu; arbolAVLProducto* AProd; listaS* LMenuElim; listaS* LProdElim; listaS* LRestElim; int opcion;
	public:
		VentanaRest(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//s

		}
		VentanaRest(arbolBinarioPais* ptrPais, ArbolRN* ptrRest, ArbolAAMenu* ptrMenu, arbolAVLProducto* ptrProducto, listaS* ptrMenuElim, listaS* ptrProdElim, listaS* ptrRestElim, int popcion)
		{
			InitializeComponent();

			APaises = ptrPais;
			ARest = ptrRest;
			AMenu = ptrMenu;
			AProd = ptrProducto;
			LMenuElim = ptrMenuElim;
			LProdElim = ptrProdElim;
			LRestElim = ptrRestElim;
			opcion = popcion;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~VentanaRest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaRest::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(70, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 99);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Menus";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaRest::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(70, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 99);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Restaurantes";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaRest::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(70, 262);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 99);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Productos";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VentanaRest::button3_Click);
			// 
			// VentanaRest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 377);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"VentanaRest";
			this->Text = L"VentanaRest";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesProd^ OpcProd = gcnew OpcionesProd(APaises, ARest, AMenu, AProd, LProdElim, opcion);
		OpcProd->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesRest^ OpcRest = gcnew OpcionesRest(APaises, ARest, LRestElim, opcion);
		OpcRest->ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpcionesMenu^ OpcMenu = gcnew OpcionesMenu(APaises, ARest, AMenu, AProd, LMenuElim, opcion);
	OpcMenu->ShowDialog();
}
};
}
