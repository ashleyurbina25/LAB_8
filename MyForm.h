#pragma once
#include "Poligonos.h"
#include "Poligonos.cpp"
#include <fstream>
#include <string>
#include <iostream>

Principal poligonos;

namespace Lab07JJCV1060821 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	
	//Variables
	

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_ListaPoligonos;
	private: System::Windows::Forms::RadioButton^ radioButtonT;
	private: System::Windows::Forms::RadioButton^ radioButtonC;
	private: System::Windows::Forms::RadioButton^ radioButtonR;
	private: System::Windows::Forms::Label^ labelMID;
	protected:

	protected:












	private: System::Windows::Forms::Label^ labelID;

	private: System::Windows::Forms::TextBox^ txt_BuscarID;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbl_Color;
	private: System::Windows::Forms::Label^ labelCR;


	private: System::Windows::Forms::Label^ lbl_Area;
	private: System::Windows::Forms::Label^ labelP;


	private: System::Windows::Forms::Label^ lbl_Perimetro;
	private: System::Windows::Forms::Label^ labelAR;


	private: System::Windows::Forms::Label^ lbl_TipoPoligono;
	private: System::Windows::Forms::Label^ labelT;

	private: System::Windows::Forms::Label^ lbl_IDPoligono;
	private: System::Windows::Forms::Label^ labelD;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::Label^ labelA;






	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBoxB;




















	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBoxA;


















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ labelC;



private: System::Windows::Forms::ColorDialog^ colorDialog1;
private: System::Windows::Forms::ComboBox^ comboBoxCO;





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
			this->txt_ListaPoligonos = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonT = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonC = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonR = (gcnew System::Windows::Forms::RadioButton());
			this->labelMID = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->txt_BuscarID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_Color = (gcnew System::Windows::Forms::Label());
			this->labelCR = (gcnew System::Windows::Forms::Label());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->labelP = (gcnew System::Windows::Forms::Label());
			this->lbl_Perimetro = (gcnew System::Windows::Forms::Label());
			this->labelAR = (gcnew System::Windows::Forms::Label());
			this->lbl_TipoPoligono = (gcnew System::Windows::Forms::Label());
			this->labelT = (gcnew System::Windows::Forms::Label());
			this->lbl_IDPoligono = (gcnew System::Windows::Forms::Label());
			this->labelD = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->comboBoxCO = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txt_ListaPoligonos
			// 
			this->txt_ListaPoligonos->Location = System::Drawing::Point(335, 27);
			this->txt_ListaPoligonos->Multiline = true;
			this->txt_ListaPoligonos->Name = L"txt_ListaPoligonos";
			this->txt_ListaPoligonos->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_ListaPoligonos->Size = System::Drawing::Size(289, 375);
			this->txt_ListaPoligonos->TabIndex = 0;
			this->txt_ListaPoligonos->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// radioButtonT
			// 
			this->radioButtonT->AutoSize = true;
			this->radioButtonT->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonT->Location = System::Drawing::Point(16, 60);
			this->radioButtonT->Name = L"radioButtonT";
			this->radioButtonT->Size = System::Drawing::Size(135, 18);
			this->radioButtonT->TabIndex = 2;
			this->radioButtonT->TabStop = true;
			this->radioButtonT->Text = L"Triangolo (Isóceles)";
			this->radioButtonT->UseVisualStyleBackColor = true;
			this->radioButtonT->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Triangulo_CheckedChanged);
			// 
			// radioButtonC
			// 
			this->radioButtonC->AutoSize = true;
			this->radioButtonC->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->radioButtonC->Location = System::Drawing::Point(16, 80);
			this->radioButtonC->Name = L"radioButtonC";
			this->radioButtonC->Size = System::Drawing::Size(80, 18);
			this->radioButtonC->TabIndex = 3;
			this->radioButtonC->TabStop = true;
			this->radioButtonC->Text = L"Cuadrado";
			this->radioButtonC->UseVisualStyleBackColor = true;
			this->radioButtonC->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Cuadrado_CheckedChanged);
			// 
			// radioButtonR
			// 
			this->radioButtonR->AutoSize = true;
			this->radioButtonR->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->radioButtonR->Location = System::Drawing::Point(16, 102);
			this->radioButtonR->Name = L"radioButtonR";
			this->radioButtonR->Size = System::Drawing::Size(88, 18);
			this->radioButtonR->TabIndex = 4;
			this->radioButtonR->TabStop = true;
			this->radioButtonR->Text = L"Rectangulo";
			this->radioButtonR->UseVisualStyleBackColor = true;
			this->radioButtonR->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Rectangulo_CheckedChanged);
			// 
			// labelMID
			// 
			this->labelMID->AutoSize = true;
			this->labelMID->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMID->Location = System::Drawing::Point(21, 411);
			this->labelMID->Name = L"labelMID";
			this->labelMID->Size = System::Drawing::Size(168, 25);
			this->labelMID->TabIndex = 7;
			this->labelMID->Text = L"Mostrar según ID";
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->Location = System::Drawing::Point(24, 460);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(93, 18);
			this->labelID->TabIndex = 8;
			this->labelID->Text = L"Ingrese el ID:";
			// 
			// txt_BuscarID
			// 
			this->txt_BuscarID->Location = System::Drawing::Point(142, 457);
			this->txt_BuscarID->Name = L"txt_BuscarID";
			this->txt_BuscarID->Size = System::Drawing::Size(132, 21);
			this->txt_BuscarID->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->lbl_Color);
			this->groupBox1->Controls->Add(this->labelCR);
			this->groupBox1->Controls->Add(this->lbl_Area);
			this->groupBox1->Controls->Add(this->labelP);
			this->groupBox1->Controls->Add(this->lbl_Perimetro);
			this->groupBox1->Controls->Add(this->labelAR);
			this->groupBox1->Controls->Add(this->lbl_TipoPoligono);
			this->groupBox1->Controls->Add(this->labelT);
			this->groupBox1->Controls->Add(this->lbl_IDPoligono);
			this->groupBox1->Controls->Add(this->labelD);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->groupBox1->Location = System::Drawing::Point(23, 503);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(396, 219);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Poligono Buscado";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// lbl_Color
			// 
			this->lbl_Color->AutoSize = true;
			this->lbl_Color->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Color->Location = System::Drawing::Point(131, 169);
			this->lbl_Color->Name = L"lbl_Color";
			this->lbl_Color->Size = System::Drawing::Size(0, 18);
			this->lbl_Color->TabIndex = 20;
			// 
			// labelCR
			// 
			this->labelCR->AutoSize = true;
			this->labelCR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCR->Location = System::Drawing::Point(23, 169);
			this->labelCR->Name = L"labelCR";
			this->labelCR->Size = System::Drawing::Size(60, 18);
			this->labelCR->TabIndex = 19;
			this->labelCR->Text = L"Color: ";
			// 
			// lbl_Area
			// 
			this->lbl_Area->AutoSize = true;
			this->lbl_Area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Area->Location = System::Drawing::Point(131, 144);
			this->lbl_Area->Name = L"lbl_Area";
			this->lbl_Area->Size = System::Drawing::Size(0, 18);
			this->lbl_Area->TabIndex = 18;
			// 
			// labelP
			// 
			this->labelP->AutoSize = true;
			this->labelP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP->Location = System::Drawing::Point(23, 120);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(92, 18);
			this->labelP->TabIndex = 17;
			this->labelP->Text = L"Perímetro: ";
			// 
			// lbl_Perimetro
			// 
			this->lbl_Perimetro->AutoSize = true;
			this->lbl_Perimetro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Perimetro->Location = System::Drawing::Point(131, 120);
			this->lbl_Perimetro->Name = L"lbl_Perimetro";
			this->lbl_Perimetro->Size = System::Drawing::Size(0, 18);
			this->lbl_Perimetro->TabIndex = 16;
			// 
			// labelAR
			// 
			this->labelAR->AutoSize = true;
			this->labelAR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAR->Location = System::Drawing::Point(23, 144);
			this->labelAR->Name = L"labelAR";
			this->labelAR->Size = System::Drawing::Size(52, 18);
			this->labelAR->TabIndex = 15;
			this->labelAR->Text = L"Área: ";
			// 
			// lbl_TipoPoligono
			// 
			this->lbl_TipoPoligono->AutoSize = true;
			this->lbl_TipoPoligono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_TipoPoligono->Location = System::Drawing::Point(131, 77);
			this->lbl_TipoPoligono->Name = L"lbl_TipoPoligono";
			this->lbl_TipoPoligono->Size = System::Drawing::Size(0, 18);
			this->lbl_TipoPoligono->TabIndex = 14;
			// 
			// labelT
			// 
			this->labelT->AutoSize = true;
			this->labelT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelT->Location = System::Drawing::Point(23, 77);
			this->labelT->Name = L"labelT";
			this->labelT->Size = System::Drawing::Size(51, 18);
			this->labelT->TabIndex = 13;
			this->labelT->Text = L"Tipo: ";
			// 
			// lbl_IDPoligono
			// 
			this->lbl_IDPoligono->AutoSize = true;
			this->lbl_IDPoligono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_IDPoligono->Location = System::Drawing::Point(132, 38);
			this->lbl_IDPoligono->Name = L"lbl_IDPoligono";
			this->lbl_IDPoligono->Size = System::Drawing::Size(0, 18);
			this->lbl_IDPoligono->TabIndex = 12;
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelD->Location = System::Drawing::Point(23, 38);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(34, 18);
			this->labelD->TabIndex = 11;
			this->labelD->Text = L"ID: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(259, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Lista: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 32);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Poligonos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->label1->Location = System::Drawing::Point(22, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 14);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Lado 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->label2->Location = System::Drawing::Point(22, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 14);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Lado 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->label3->Location = System::Drawing::Point(22, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 14);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Lado 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->label4->Location = System::Drawing::Point(21, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 14);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Lado 4";
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->labelB->Location = System::Drawing::Point(22, 278);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(31, 14);
			this->labelB->TabIndex = 21;
			this->labelB->Text = L"Base";
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->labelA->Location = System::Drawing::Point(22, 311);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(41, 14);
			this->labelA->TabIndex = 22;
			this->labelA->Text = L"Altura";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 152);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(90, 22);
			this->textBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 183);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 22);
			this->textBox2->TabIndex = 25;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(73, 213);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 22);
			this->textBox3->TabIndex = 26;
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(73, 275);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(90, 21);
			this->textBoxB->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 243);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(90, 21);
			this->textBox4->TabIndex = 32;
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(73, 304);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(90, 21);
			this->textBoxA->TabIndex = 33;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(320, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 34);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(200, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 34);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(525, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 34);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Mostrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Location = System::Drawing::Point(197, 154);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(36, 14);
			this->labelC->TabIndex = 38;
			this->labelC->Text = L"Color";
			this->labelC->Visible = false;
			// 
			// colorDialog1
			// 
			this->colorDialog1->Color = System::Drawing::Color::Cyan;
			// 
			// comboBoxCO
			// 
			this->comboBoxCO->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCO->FormattingEnabled = true;
			this->comboBoxCO->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Celeste", L"Rojo", L"Amarillo", L"Verde", L"Anaranjado",
					L"Rosado", L"Blanco"
			});
			this->comboBoxCO->Location = System::Drawing::Point(200, 178);
			this->comboBoxCO->Name = L"comboBoxCO";
			this->comboBoxCO->Size = System::Drawing::Size(99, 22);
			this->comboBoxCO->TabIndex = 39;
			this->comboBoxCO->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(671, 746);
			this->Controls->Add(this->comboBoxCO);
			this->Controls->Add(this->labelC);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labelA);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txt_BuscarID);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->labelMID);
			this->Controls->Add(this->radioButtonR);
			this->Controls->Add(this->radioButtonC);
			this->Controls->Add(this->radioButtonT);
			this->Controls->Add(this->txt_ListaPoligonos);
			this->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 7.8F));
			this->Name = L"MyForm";
			this->Text = L"Figuras";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Rbtn_Triangulo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (radioButtonT->Checked == true)
	{
		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = true;
		textBoxA->Visible = true;
		textBoxB->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		labelA->Visible = true;
		labelB->Visible = true;
		labelC->Visible = true;
		comboBoxCO->Visible = true;
	}
	else
	{
		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBoxA->Visible = false;
		textBoxB->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		labelA->Visible = false;
		labelB->Visible = false;
		labelC->Visible = false;
		comboBoxCO->Visible = false;
	}
}
private: System::Void Rbtn_Cuadrado_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (radioButtonC->Checked == true)
	{
		textBox1->Visible = true;
		textBox2->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		labelC->Visible = true;
		comboBoxCO->Visible = true;

	}
	else
	{
		textBox1->Visible = false;
		textBox2->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		labelC->Visible = false;
		comboBoxCO->Visible = false;
	}

}
private: System::Void Rbtn_Rectangulo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (radioButtonR->Checked == true)
	{
		textBox1->Visible = true;
		textBox2->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		labelB->Visible = true;
		labelA->Visible = true;
		textBoxB->Visible = true;
		textBoxA->Visible = true;
		labelC->Visible = true;
		comboBoxCO->Visible = true;
	}
	else
	{
		textBox1->Visible = false;
		textBox2->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		labelB->Visible = false;
		labelA->Visible = false;
		textBoxB->Visible = false;
		textBoxA->Visible = false;
		labelC->Visible = false;
		comboBoxCO->Visible = false;
	}
}
private: System::Void Rbtn_Pentagono_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	

}
private: System::Void Rbtn_Octagono_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int lad1, lad2, lad3, lad4, lad5, lad6, lad7, lad8;
	int area, perimetro;
	std::string color;

	try
	{
		if (radioButtonT->Checked == true && comboBoxCO->Text != "")
		{
			int areatriangulo, perimetrotriangulo, basetri, altruratri;

			lad1 = Convert::ToInt32(textBox1->Text);
			lad2 = Convert::ToInt32(textBox2->Text);
			lad3 = Convert::ToInt32(textBox3->Text);
			basetri = Convert::ToInt32(textBoxB->Text);
			altruratri = Convert::ToInt32(textBoxA->Text);
			perimetrotriangulo = lad1 + lad2 + lad3;
			areatriangulo = (basetri * altruratri) / 2;

			for (size_t i = 0; i < comboBoxCO->Text->Length; i++)
			{
				color += comboBoxCO->Text[i];
			}

			poligonos.agregar(perimetrotriangulo, areatriangulo, color, "Triangulo");
		}
		else if (radioButtonC->Checked == true && comboBoxCO->Text != "")
		{
			lad1 = Convert::ToInt32(textBox1->Text);
			lad2 = Convert::ToInt32(textBox2->Text);
			lad3 = Convert::ToInt32(textBox3->Text);
			lad4 = Convert::ToInt32(textBox4->Text);
			perimetro = lad1 + lad2 + lad3 + lad4;
			area = lad1 * lad1;

			for (size_t i = 0; i < comboBoxCO->Text->Length; i++)
			{
				color += comboBoxCO->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Cuadrado");
		}
		else if (radioButtonR->Checked == true && comboBoxCO->Text != "")
		{

			lad1 = Convert::ToInt32(textBox1->Text);
			lad2 = Convert::ToInt32(textBox2->Text);
			lad3 = Convert::ToInt32(textBox3->Text);
			lad4 = Convert::ToInt32(textBox4->Text);
			int base = Convert::ToInt32(textBoxB->Text);
			int altura = Convert::ToInt32(textBoxA->Text);
			perimetro = lad1 + lad2 + lad3 + lad4;
			area = base * altura;

			for (size_t i = 0; i < comboBoxCO->Text->Length; i++)
			{
				color += comboBoxCO->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Rectangulo");
		}
		
		
		else
		{
			MessageBox::Show("Ingrese los datos correspondientes he ingrese solo numeros enteros");
		}

		textBox1->Text = ""; textBox2->Text = "";	textBox3->Text = ""; textBox4->Text = "";
		textBoxB->Text = ""; textBoxA->Text = ""; comboBoxCO->Text = "";
		comboBoxCO->SelectedText == "";
	}
	catch (...)
	{
		MessageBox::Show("Ingrese los datos correspondientes he ingrese solo numeros enteros");
		textBox1->Text = ""; textBox2->Text = "";	textBox3->Text = ""; textBox4->Text = "";
		textBoxB->Text = ""; textBoxA->Text = ""; comboBoxCO->Text = "";
		comboBoxCO->SelectedText == "";
	}

	

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	txt_ListaPoligonos->Text = gcnew String(poligonos.mostrar().c_str());
	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



	int Codigo, posicion = 0;
	Codigo = Convert::ToInt32(txt_BuscarID->Text);

	string Buscar = "";
	Buscar = poligonos.buscar(Codigo);


	if (Buscar != "NO")
	{
		string ID = "", Tipo = "", Area = "", Perimetro = "", Color = "";

		for (size_t i = 0; i < Buscar.length(); i++)
		{
			//Validacion de espacio al inicio
			if (Buscar[i] == ',')
			{
				posicion++;
			}
			else if (posicion == 0)
			{
				ID += Buscar[i];
			}
			else if (posicion == 1)
			{
				Tipo += Buscar[i];
			}
			else if (posicion == 2)
			{
				Perimetro += Buscar[i];
			}
			else if (posicion == 3)
			{
				Area += Buscar[i];
			}
			else if (posicion == 4)
			{
				Color += Buscar[i];
			}
		}
		lbl_IDPoligono->Text = gcnew String(ID.c_str());
		lbl_TipoPoligono->Text = gcnew String(Tipo.c_str());
		lbl_Area->Text = gcnew String(Area.c_str());
		lbl_Perimetro->Text = gcnew String(Perimetro.c_str());
		lbl_Color->Text = gcnew String(Color.c_str());

		if (Color == "Celeste")
		{
			groupBox1->BackColor = System::Drawing::Color::Cyan;
		}
		if (Color == "Rojo")
		{
			groupBox1->BackColor = System::Drawing::Color::Red;
		}
		if (Color == "Amarillo")
		{
			groupBox1->BackColor = System::Drawing::Color::LightYellow;
		}
		if (Color == "Verde")
		{
			groupBox1->BackColor = System::Drawing::Color::GreenYellow;
		}
		if (Color == "Anaranjado")
		{
			groupBox1->BackColor = System::Drawing::Color::Orange;
		}
		if (Color == "Rosado")
		{
			groupBox1->BackColor = System::Drawing::Color::DeepPink;
		}
		if (Color == "Blanco")
		{
			groupBox1->BackColor = System::Drawing::Color::White;
		}
	}
	else
	{
		MessageBox::Show("No se encintro ningun poligono con el ID indicado");
		txt_BuscarID->Text = "";
	}
	txt_BuscarID->Text = "";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
