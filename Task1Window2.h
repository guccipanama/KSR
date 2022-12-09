#pragma once
#include <msclr/marshal_cppstd.h>
#include "LampsAndRoom.h"

namespace KSR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task1Window2
	/// </summary>
	public ref class Task1Window2 : public System::Windows::Forms::Form
	{
	public:
		Task1Window2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Task1Window2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SaveButton;
	protected:
	private: System::Windows::Forms::TextBox^ Voltage5;
	private: System::Windows::Forms::TextBox^ Voltage4;
	private: System::Windows::Forms::TextBox^ Voltage3;
	private: System::Windows::Forms::TextBox^ Voltage2;
	private: System::Windows::Forms::TextBox^ Amp5;
	private: System::Windows::Forms::TextBox^ Amp4;
	private: System::Windows::Forms::TextBox^ Amp3;
	private: System::Windows::Forms::TextBox^ Amp2;
	private: System::Windows::Forms::TextBox^ Ill5;
	private: System::Windows::Forms::TextBox^ Ill4;
	private: System::Windows::Forms::TextBox^ Ill3;
	private: System::Windows::Forms::TextBox^ Ill2;
	private: System::Windows::Forms::TextBox^ Ribble5;
	private: System::Windows::Forms::TextBox^ Ribble4;
	private: System::Windows::Forms::TextBox^ Ribble3;
	private: System::Windows::Forms::TextBox^ Ribble2;
	private: System::Windows::Forms::TextBox^ Ribble1;
	private: System::Windows::Forms::TextBox^ Ill1;
	private: System::Windows::Forms::TextBox^ Amp1;
	private: System::Windows::Forms::TextBox^ Voltage1;
	private: System::Windows::Forms::Label^ RibbleLabel1;
	private: System::Windows::Forms::Label^ RibbleLabel;
	private: System::Windows::Forms::Label^ IllLabel1;
	private: System::Windows::Forms::Label^ IllLabel;
	private: System::Windows::Forms::Label^ AmpLabel1;
	private: System::Windows::Forms::Label^ AmpLabel;
	private: System::Windows::Forms::Label^ VoltageLabel1;
	private: System::Windows::Forms::Label^ VoltageLabel;
	private: System::Windows::Forms::Label^ PowerLabel;
	private: System::Windows::Forms::Label^ LumFluxLabel;
	private: System::Windows::Forms::Label^ LOLabel;
	private: System::Windows::Forms::TextBox^ Power1;
	private: System::Windows::Forms::TextBox^ Power2;
	private: System::Windows::Forms::TextBox^ Power3;
	private: System::Windows::Forms::TextBox^ Power4;
	private: System::Windows::Forms::TextBox^ Power5;
	private: System::Windows::Forms::TextBox^ Name1;
	private: System::Windows::Forms::TextBox^ Name2;
	private: System::Windows::Forms::TextBox^ Name3;
	private: System::Windows::Forms::TextBox^ Name4;
	private: System::Windows::Forms::TextBox^ Name5;
	private: System::Windows::Forms::TextBox^ LumFlux1;
	private: System::Windows::Forms::TextBox^ LumFlux2;
	private: System::Windows::Forms::TextBox^ LumFlux3;
	private: System::Windows::Forms::TextBox^ LumFlux4;
	private: System::Windows::Forms::TextBox^ LumFlux5;

	private: System::Windows::Forms::TextBox^ LO1;
	private: System::Windows::Forms::TextBox^ LO2;
	private: System::Windows::Forms::TextBox^ LO3;
	private: System::Windows::Forms::TextBox^ LO4;
	private: System::Windows::Forms::TextBox^ LO5;
	private: System::Windows::Forms::Label^ PowerLabel1;
	private: System::Windows::Forms::Label^ LumFluxLabel1;
	private: System::Windows::Forms::Label^ LOLabel1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task1Window2::typeid));
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->Voltage5 = (gcnew System::Windows::Forms::TextBox());
			this->Voltage4 = (gcnew System::Windows::Forms::TextBox());
			this->Voltage3 = (gcnew System::Windows::Forms::TextBox());
			this->Voltage2 = (gcnew System::Windows::Forms::TextBox());
			this->Amp5 = (gcnew System::Windows::Forms::TextBox());
			this->Amp4 = (gcnew System::Windows::Forms::TextBox());
			this->Amp3 = (gcnew System::Windows::Forms::TextBox());
			this->Amp2 = (gcnew System::Windows::Forms::TextBox());
			this->Ill5 = (gcnew System::Windows::Forms::TextBox());
			this->Ill4 = (gcnew System::Windows::Forms::TextBox());
			this->Ill3 = (gcnew System::Windows::Forms::TextBox());
			this->Ill2 = (gcnew System::Windows::Forms::TextBox());
			this->Ribble5 = (gcnew System::Windows::Forms::TextBox());
			this->Ribble4 = (gcnew System::Windows::Forms::TextBox());
			this->Ribble3 = (gcnew System::Windows::Forms::TextBox());
			this->Ribble2 = (gcnew System::Windows::Forms::TextBox());
			this->Ribble1 = (gcnew System::Windows::Forms::TextBox());
			this->Ill1 = (gcnew System::Windows::Forms::TextBox());
			this->Amp1 = (gcnew System::Windows::Forms::TextBox());
			this->Voltage1 = (gcnew System::Windows::Forms::TextBox());
			this->RibbleLabel1 = (gcnew System::Windows::Forms::Label());
			this->RibbleLabel = (gcnew System::Windows::Forms::Label());
			this->IllLabel1 = (gcnew System::Windows::Forms::Label());
			this->IllLabel = (gcnew System::Windows::Forms::Label());
			this->AmpLabel1 = (gcnew System::Windows::Forms::Label());
			this->AmpLabel = (gcnew System::Windows::Forms::Label());
			this->VoltageLabel1 = (gcnew System::Windows::Forms::Label());
			this->VoltageLabel = (gcnew System::Windows::Forms::Label());
			this->PowerLabel = (gcnew System::Windows::Forms::Label());
			this->LumFluxLabel = (gcnew System::Windows::Forms::Label());
			this->LOLabel = (gcnew System::Windows::Forms::Label());
			this->Power1 = (gcnew System::Windows::Forms::TextBox());
			this->Power2 = (gcnew System::Windows::Forms::TextBox());
			this->Power3 = (gcnew System::Windows::Forms::TextBox());
			this->Power4 = (gcnew System::Windows::Forms::TextBox());
			this->Power5 = (gcnew System::Windows::Forms::TextBox());
			this->Name1 = (gcnew System::Windows::Forms::TextBox());
			this->Name2 = (gcnew System::Windows::Forms::TextBox());
			this->Name3 = (gcnew System::Windows::Forms::TextBox());
			this->Name4 = (gcnew System::Windows::Forms::TextBox());
			this->Name5 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux1 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux2 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux3 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux4 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux5 = (gcnew System::Windows::Forms::TextBox());
			this->LO1 = (gcnew System::Windows::Forms::TextBox());
			this->LO2 = (gcnew System::Windows::Forms::TextBox());
			this->LO3 = (gcnew System::Windows::Forms::TextBox());
			this->LO4 = (gcnew System::Windows::Forms::TextBox());
			this->LO5 = (gcnew System::Windows::Forms::TextBox());
			this->PowerLabel1 = (gcnew System::Windows::Forms::Label());
			this->LumFluxLabel1 = (gcnew System::Windows::Forms::Label());
			this->LOLabel1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SaveButton
			// 
			this->SaveButton->Location = System::Drawing::Point(538, 214);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(100, 20);
			this->SaveButton->TabIndex = 44;
			this->SaveButton->Text = L"Сохранить";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &Task1Window2::SaveButton_Click);
			// 
			// Voltage5
			// 
			this->Voltage5->Location = System::Drawing::Point(538, 31);
			this->Voltage5->Name = L"Voltage5";
			this->Voltage5->Size = System::Drawing::Size(100, 20);
			this->Voltage5->TabIndex = 30;
			this->Voltage5->Text = L"0";
			this->Voltage5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage5_TextChanged);
			// 
			// Voltage4
			// 
			this->Voltage4->Location = System::Drawing::Point(432, 31);
			this->Voltage4->Name = L"Voltage4";
			this->Voltage4->Size = System::Drawing::Size(100, 20);
			this->Voltage4->TabIndex = 31;
			this->Voltage4->Text = L"0";
			this->Voltage4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage4_TextChanged);
			// 
			// Voltage3
			// 
			this->Voltage3->Location = System::Drawing::Point(326, 31);
			this->Voltage3->Name = L"Voltage3";
			this->Voltage3->Size = System::Drawing::Size(100, 20);
			this->Voltage3->TabIndex = 38;
			this->Voltage3->Text = L"0";
			this->Voltage3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage3_TextChanged);
			// 
			// Voltage2
			// 
			this->Voltage2->Location = System::Drawing::Point(220, 31);
			this->Voltage2->Name = L"Voltage2";
			this->Voltage2->Size = System::Drawing::Size(100, 20);
			this->Voltage2->TabIndex = 33;
			this->Voltage2->Text = L"0";
			this->Voltage2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage2_TextChanged);
			// 
			// Amp5
			// 
			this->Amp5->Location = System::Drawing::Point(538, 57);
			this->Amp5->Name = L"Amp5";
			this->Amp5->Size = System::Drawing::Size(100, 20);
			this->Amp5->TabIndex = 34;
			this->Amp5->Text = L"0";
			this->Amp5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp5_TextChanged);
			// 
			// Amp4
			// 
			this->Amp4->Location = System::Drawing::Point(432, 57);
			this->Amp4->Name = L"Amp4";
			this->Amp4->Size = System::Drawing::Size(100, 20);
			this->Amp4->TabIndex = 35;
			this->Amp4->Text = L"0";
			this->Amp4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp4_TextChanged);
			// 
			// Amp3
			// 
			this->Amp3->Location = System::Drawing::Point(326, 57);
			this->Amp3->Name = L"Amp3";
			this->Amp3->Size = System::Drawing::Size(100, 20);
			this->Amp3->TabIndex = 36;
			this->Amp3->Text = L"0";
			this->Amp3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp3_TextChanged);
			// 
			// Amp2
			// 
			this->Amp2->Location = System::Drawing::Point(220, 57);
			this->Amp2->Name = L"Amp2";
			this->Amp2->Size = System::Drawing::Size(100, 20);
			this->Amp2->TabIndex = 37;
			this->Amp2->Text = L"0";
			this->Amp2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp2_TextChanged);
			// 
			// Ill5
			// 
			this->Ill5->Location = System::Drawing::Point(538, 109);
			this->Ill5->Name = L"Ill5";
			this->Ill5->Size = System::Drawing::Size(100, 20);
			this->Ill5->TabIndex = 25;
			this->Ill5->Text = L"0";
			this->Ill5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ill5_TextChanged);
			// 
			// Ill4
			// 
			this->Ill4->Location = System::Drawing::Point(432, 109);
			this->Ill4->Name = L"Ill4";
			this->Ill4->Size = System::Drawing::Size(100, 20);
			this->Ill4->TabIndex = 29;
			this->Ill4->Text = L"0";
			this->Ill4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ill4_TextChanged);
			// 
			// Ill3
			// 
			this->Ill3->Location = System::Drawing::Point(326, 109);
			this->Ill3->Name = L"Ill3";
			this->Ill3->Size = System::Drawing::Size(100, 20);
			this->Ill3->TabIndex = 24;
			this->Ill3->Text = L"0";
			this->Ill3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ill3_TextChanged);
			// 
			// Ill2
			// 
			this->Ill2->Location = System::Drawing::Point(220, 109);
			this->Ill2->Name = L"Ill2";
			this->Ill2->Size = System::Drawing::Size(100, 20);
			this->Ill2->TabIndex = 14;
			this->Ill2->Text = L"0";
			this->Ill2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ill2_TextChanged);
			// 
			// Ribble5
			// 
			this->Ribble5->Location = System::Drawing::Point(538, 187);
			this->Ribble5->Name = L"Ribble5";
			this->Ribble5->Size = System::Drawing::Size(100, 20);
			this->Ribble5->TabIndex = 22;
			this->Ribble5->Text = L"0";
			this->Ribble5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ribble5_TextChanged);
			// 
			// Ribble4
			// 
			this->Ribble4->Location = System::Drawing::Point(432, 187);
			this->Ribble4->Name = L"Ribble4";
			this->Ribble4->Size = System::Drawing::Size(100, 20);
			this->Ribble4->TabIndex = 21;
			this->Ribble4->Text = L"0";
			this->Ribble4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ribble4_TextChanged);
			// 
			// Ribble3
			// 
			this->Ribble3->Location = System::Drawing::Point(326, 187);
			this->Ribble3->Name = L"Ribble3";
			this->Ribble3->Size = System::Drawing::Size(100, 20);
			this->Ribble3->TabIndex = 20;
			this->Ribble3->Text = L"0";
			this->Ribble3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ribble3_TextChanged);
			// 
			// Ribble2
			// 
			this->Ribble2->Location = System::Drawing::Point(220, 187);
			this->Ribble2->Name = L"Ribble2";
			this->Ribble2->Size = System::Drawing::Size(100, 20);
			this->Ribble2->TabIndex = 19;
			this->Ribble2->Text = L"0";
			this->Ribble2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ribble2_TextChanged);
			// 
			// Ribble1
			// 
			this->Ribble1->Location = System::Drawing::Point(114, 187);
			this->Ribble1->Name = L"Ribble1";
			this->Ribble1->Size = System::Drawing::Size(100, 20);
			this->Ribble1->TabIndex = 18;
			this->Ribble1->Text = L"0";
			this->Ribble1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ribble1_TextChanged);
			// 
			// Ill1
			// 
			this->Ill1->Location = System::Drawing::Point(114, 109);
			this->Ill1->Name = L"Ill1";
			this->Ill1->Size = System::Drawing::Size(100, 20);
			this->Ill1->TabIndex = 17;
			this->Ill1->Text = L"0";
			this->Ill1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Ill1_TextChanged);
			// 
			// Amp1
			// 
			this->Amp1->Location = System::Drawing::Point(114, 57);
			this->Amp1->Name = L"Amp1";
			this->Amp1->Size = System::Drawing::Size(100, 20);
			this->Amp1->TabIndex = 16;
			this->Amp1->Text = L"0";
			this->Amp1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp1_TextChanged);
			// 
			// Voltage1
			// 
			this->Voltage1->Location = System::Drawing::Point(114, 31);
			this->Voltage1->Name = L"Voltage1";
			this->Voltage1->Size = System::Drawing::Size(100, 20);
			this->Voltage1->TabIndex = 15;
			this->Voltage1->Text = L"0";
			this->Voltage1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage1_TextChanged);
			// 
			// RibbleLabel1
			// 
			this->RibbleLabel1->AutoSize = true;
			this->RibbleLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->RibbleLabel1->Location = System::Drawing::Point(644, 190);
			this->RibbleLabel1->Name = L"RibbleLabel1";
			this->RibbleLabel1->Size = System::Drawing::Size(15, 13);
			this->RibbleLabel1->TabIndex = 5;
			this->RibbleLabel1->Text = L"%";
			// 
			// RibbleLabel
			// 
			this->RibbleLabel->AutoSize = true;
			this->RibbleLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->RibbleLabel->Location = System::Drawing::Point(12, 190);
			this->RibbleLabel->Name = L"RibbleLabel";
			this->RibbleLabel->Size = System::Drawing::Size(96, 13);
			this->RibbleLabel->TabIndex = 6;
			this->RibbleLabel->Text = L"Коэф. пульсации:";
			// 
			// IllLabel1
			// 
			this->IllLabel1->AutoSize = true;
			this->IllLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->IllLabel1->Location = System::Drawing::Point(644, 112);
			this->IllLabel1->Name = L"IllLabel1";
			this->IllLabel1->Size = System::Drawing::Size(25, 13);
			this->IllLabel1->TabIndex = 7;
			this->IllLabel1->Text = L"клк";
			// 
			// IllLabel
			// 
			this->IllLabel->AutoSize = true;
			this->IllLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->IllLabel->Location = System::Drawing::Point(12, 112);
			this->IllLabel->Name = L"IllLabel";
			this->IllLabel->Size = System::Drawing::Size(86, 13);
			this->IllLabel->TabIndex = 8;
			this->IllLabel->Text = L"Освещенность:";
			// 
			// AmpLabel1
			// 
			this->AmpLabel1->AutoSize = true;
			this->AmpLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->AmpLabel1->Location = System::Drawing::Point(644, 60);
			this->AmpLabel1->Name = L"AmpLabel1";
			this->AmpLabel1->Size = System::Drawing::Size(14, 13);
			this->AmpLabel1->TabIndex = 13;
			this->AmpLabel1->Text = L"А";
			// 
			// AmpLabel
			// 
			this->AmpLabel->AutoSize = true;
			this->AmpLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->AmpLabel->Location = System::Drawing::Point(12, 60);
			this->AmpLabel->Name = L"AmpLabel";
			this->AmpLabel->Size = System::Drawing::Size(61, 13);
			this->AmpLabel->TabIndex = 10;
			this->AmpLabel->Text = L"Сила тока:";
			// 
			// VoltageLabel1
			// 
			this->VoltageLabel1->AutoSize = true;
			this->VoltageLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->VoltageLabel1->Location = System::Drawing::Point(644, 34);
			this->VoltageLabel1->Name = L"VoltageLabel1";
			this->VoltageLabel1->Size = System::Drawing::Size(14, 13);
			this->VoltageLabel1->TabIndex = 11;
			this->VoltageLabel1->Text = L"В";
			// 
			// VoltageLabel
			// 
			this->VoltageLabel->AutoSize = true;
			this->VoltageLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->VoltageLabel->Location = System::Drawing::Point(12, 34);
			this->VoltageLabel->Name = L"VoltageLabel";
			this->VoltageLabel->Size = System::Drawing::Size(74, 13);
			this->VoltageLabel->TabIndex = 12;
			this->VoltageLabel->Text = L"Напряжение:";
			// 
			// PowerLabel
			// 
			this->PowerLabel->AutoSize = true;
			this->PowerLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->PowerLabel->Location = System::Drawing::Point(12, 86);
			this->PowerLabel->Name = L"PowerLabel";
			this->PowerLabel->Size = System::Drawing::Size(63, 13);
			this->PowerLabel->TabIndex = 8;
			this->PowerLabel->Text = L"Мощность:";
			// 
			// LumFluxLabel
			// 
			this->LumFluxLabel->AutoSize = true;
			this->LumFluxLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->LumFluxLabel->Location = System::Drawing::Point(12, 138);
			this->LumFluxLabel->Name = L"LumFluxLabel";
			this->LumFluxLabel->Size = System::Drawing::Size(90, 13);
			this->LumFluxLabel->TabIndex = 8;
			this->LumFluxLabel->Text = L"Световой поток:";
			// 
			// LOLabel
			// 
			this->LOLabel->AutoSize = true;
			this->LOLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->LOLabel->Location = System::Drawing::Point(13, 164);
			this->LOLabel->Name = L"LOLabel";
			this->LOLabel->Size = System::Drawing::Size(95, 13);
			this->LOLabel->TabIndex = 8;
			this->LOLabel->Text = L"Световая отдача:";
			// 
			// Power1
			// 
			this->Power1->Location = System::Drawing::Point(114, 83);
			this->Power1->Name = L"Power1";
			this->Power1->ReadOnly = true;
			this->Power1->Size = System::Drawing::Size(100, 20);
			this->Power1->TabIndex = 16;
			this->Power1->Text = L"0";
			this->Power1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp1_TextChanged);
			// 
			// Power2
			// 
			this->Power2->Location = System::Drawing::Point(220, 83);
			this->Power2->Name = L"Power2";
			this->Power2->ReadOnly = true;
			this->Power2->Size = System::Drawing::Size(100, 20);
			this->Power2->TabIndex = 37;
			this->Power2->Text = L"0";
			this->Power2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp2_TextChanged);
			// 
			// Power3
			// 
			this->Power3->Location = System::Drawing::Point(326, 83);
			this->Power3->Name = L"Power3";
			this->Power3->ReadOnly = true;
			this->Power3->Size = System::Drawing::Size(100, 20);
			this->Power3->TabIndex = 36;
			this->Power3->Text = L"0";
			this->Power3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp3_TextChanged);
			// 
			// Power4
			// 
			this->Power4->Location = System::Drawing::Point(432, 83);
			this->Power4->Name = L"Power4";
			this->Power4->ReadOnly = true;
			this->Power4->Size = System::Drawing::Size(100, 20);
			this->Power4->TabIndex = 35;
			this->Power4->Text = L"0";
			this->Power4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp4_TextChanged);
			// 
			// Power5
			// 
			this->Power5->Location = System::Drawing::Point(538, 83);
			this->Power5->Name = L"Power5";
			this->Power5->ReadOnly = true;
			this->Power5->Size = System::Drawing::Size(100, 20);
			this->Power5->TabIndex = 34;
			this->Power5->Text = L"0";
			this->Power5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp5_TextChanged);
			// 
			// Name1
			// 
			this->Name1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name1->Location = System::Drawing::Point(114, 12);
			this->Name1->Name = L"Name1";
			this->Name1->ReadOnly = true;
			this->Name1->Size = System::Drawing::Size(100, 13);
			this->Name1->TabIndex = 15;
			this->Name1->Text = L"0";
			this->Name1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage1_TextChanged);
			// 
			// Name2
			// 
			this->Name2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name2->Location = System::Drawing::Point(220, 12);
			this->Name2->Name = L"Name2";
			this->Name2->ReadOnly = true;
			this->Name2->Size = System::Drawing::Size(100, 13);
			this->Name2->TabIndex = 15;
			this->Name2->Text = L"0";
			this->Name2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage1_TextChanged);
			// 
			// Name3
			// 
			this->Name3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name3->Location = System::Drawing::Point(326, 12);
			this->Name3->Name = L"Name3";
			this->Name3->ReadOnly = true;
			this->Name3->Size = System::Drawing::Size(100, 13);
			this->Name3->TabIndex = 15;
			this->Name3->Text = L"0";
			this->Name3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage1_TextChanged);
			// 
			// Name4
			// 
			this->Name4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name4->Location = System::Drawing::Point(432, 12);
			this->Name4->Name = L"Name4";
			this->Name4->ReadOnly = true;
			this->Name4->Size = System::Drawing::Size(100, 13);
			this->Name4->TabIndex = 15;
			this->Name4->Text = L"0";
			this->Name4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage1_TextChanged);
			// 
			// Name5
			// 
			this->Name5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name5->Location = System::Drawing::Point(538, 12);
			this->Name5->Name = L"Name5";
			this->Name5->ReadOnly = true;
			this->Name5->Size = System::Drawing::Size(100, 13);
			this->Name5->TabIndex = 15;
			this->Name5->Text = L"0";
			this->Name5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Voltage1_TextChanged);
			// 
			// LumFlux1
			// 
			this->LumFlux1->Location = System::Drawing::Point(114, 135);
			this->LumFlux1->Name = L"LumFlux1";
			this->LumFlux1->ReadOnly = true;
			this->LumFlux1->Size = System::Drawing::Size(100, 20);
			this->LumFlux1->TabIndex = 16;
			this->LumFlux1->Text = L"0";
			this->LumFlux1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp1_TextChanged);
			// 
			// LumFlux2
			// 
			this->LumFlux2->Location = System::Drawing::Point(220, 135);
			this->LumFlux2->Name = L"LumFlux2";
			this->LumFlux2->ReadOnly = true;
			this->LumFlux2->Size = System::Drawing::Size(100, 20);
			this->LumFlux2->TabIndex = 37;
			this->LumFlux2->Text = L"0";
			this->LumFlux2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp2_TextChanged);
			// 
			// LumFlux3
			// 
			this->LumFlux3->Location = System::Drawing::Point(326, 135);
			this->LumFlux3->Name = L"LumFlux3";
			this->LumFlux3->ReadOnly = true;
			this->LumFlux3->Size = System::Drawing::Size(100, 20);
			this->LumFlux3->TabIndex = 36;
			this->LumFlux3->Text = L"0";
			this->LumFlux3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp3_TextChanged);
			// 
			// LumFlux4
			// 
			this->LumFlux4->Location = System::Drawing::Point(432, 135);
			this->LumFlux4->Name = L"LumFlux4";
			this->LumFlux4->ReadOnly = true;
			this->LumFlux4->Size = System::Drawing::Size(100, 20);
			this->LumFlux4->TabIndex = 35;
			this->LumFlux4->Text = L"0";
			this->LumFlux4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp4_TextChanged);
			// 
			// LumFlux5
			// 
			this->LumFlux5->Location = System::Drawing::Point(538, 135);
			this->LumFlux5->Name = L"LumFlux5";
			this->LumFlux5->ReadOnly = true;
			this->LumFlux5->Size = System::Drawing::Size(100, 20);
			this->LumFlux5->TabIndex = 34;
			this->LumFlux5->Text = L"0";
			this->LumFlux5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp5_TextChanged);
			// 
			// LO1
			// 
			this->LO1->Location = System::Drawing::Point(114, 161);
			this->LO1->Name = L"LO1";
			this->LO1->ReadOnly = true;
			this->LO1->Size = System::Drawing::Size(100, 20);
			this->LO1->TabIndex = 16;
			this->LO1->Text = L"0";
			this->LO1->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp1_TextChanged);
			// 
			// LO2
			// 
			this->LO2->Location = System::Drawing::Point(220, 161);
			this->LO2->Name = L"LO2";
			this->LO2->ReadOnly = true;
			this->LO2->Size = System::Drawing::Size(100, 20);
			this->LO2->TabIndex = 37;
			this->LO2->Text = L"0";
			this->LO2->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp2_TextChanged);
			// 
			// LO3
			// 
			this->LO3->Location = System::Drawing::Point(326, 161);
			this->LO3->Name = L"LO3";
			this->LO3->ReadOnly = true;
			this->LO3->Size = System::Drawing::Size(100, 20);
			this->LO3->TabIndex = 36;
			this->LO3->Text = L"0";
			this->LO3->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp3_TextChanged);
			// 
			// LO4
			// 
			this->LO4->Location = System::Drawing::Point(432, 161);
			this->LO4->Name = L"LO4";
			this->LO4->ReadOnly = true;
			this->LO4->Size = System::Drawing::Size(100, 20);
			this->LO4->TabIndex = 35;
			this->LO4->Text = L"0";
			this->LO4->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp4_TextChanged);
			// 
			// LO5
			// 
			this->LO5->Location = System::Drawing::Point(538, 161);
			this->LO5->Name = L"LO5";
			this->LO5->ReadOnly = true;
			this->LO5->Size = System::Drawing::Size(100, 20);
			this->LO5->TabIndex = 34;
			this->LO5->Text = L"0";
			this->LO5->TextChanged += gcnew System::EventHandler(this, &Task1Window2::Amp5_TextChanged);
			// 
			// PowerLabel1
			// 
			this->PowerLabel1->AutoSize = true;
			this->PowerLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->PowerLabel1->Location = System::Drawing::Point(644, 86);
			this->PowerLabel1->Name = L"PowerLabel1";
			this->PowerLabel1->Size = System::Drawing::Size(19, 13);
			this->PowerLabel1->TabIndex = 11;
			this->PowerLabel1->Text = L"Вт";
			// 
			// LumFluxLabel1
			// 
			this->LumFluxLabel1->AutoSize = true;
			this->LumFluxLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->LumFluxLabel1->Location = System::Drawing::Point(644, 138);
			this->LumFluxLabel1->Name = L"LumFluxLabel1";
			this->LumFluxLabel1->Size = System::Drawing::Size(21, 13);
			this->LumFluxLabel1->TabIndex = 5;
			this->LumFluxLabel1->Text = L"лм";
			// 
			// LOLabel1
			// 
			this->LOLabel1->AutoSize = true;
			this->LOLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->LOLabel1->Location = System::Drawing::Point(644, 161);
			this->LOLabel1->Name = L"LOLabel1";
			this->LOLabel1->Size = System::Drawing::Size(38, 13);
			this->LOLabel1->TabIndex = 5;
			this->LOLabel1->Text = L"лм/Вт";
			// 
			// Task1Window2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 261);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->Voltage5);
			this->Controls->Add(this->Voltage4);
			this->Controls->Add(this->Voltage3);
			this->Controls->Add(this->Voltage2);
			this->Controls->Add(this->LO5);
			this->Controls->Add(this->LumFlux5);
			this->Controls->Add(this->LO4);
			this->Controls->Add(this->LumFlux4);
			this->Controls->Add(this->Power5);
			this->Controls->Add(this->Power4);
			this->Controls->Add(this->LO3);
			this->Controls->Add(this->LumFlux3);
			this->Controls->Add(this->Amp5);
			this->Controls->Add(this->Power3);
			this->Controls->Add(this->LO2);
			this->Controls->Add(this->LumFlux2);
			this->Controls->Add(this->Amp4);
			this->Controls->Add(this->Power2);
			this->Controls->Add(this->Amp3);
			this->Controls->Add(this->Amp2);
			this->Controls->Add(this->Ill5);
			this->Controls->Add(this->Ill4);
			this->Controls->Add(this->Ill3);
			this->Controls->Add(this->Ill2);
			this->Controls->Add(this->Ribble5);
			this->Controls->Add(this->Ribble4);
			this->Controls->Add(this->Ribble3);
			this->Controls->Add(this->Ribble2);
			this->Controls->Add(this->LO1);
			this->Controls->Add(this->LumFlux1);
			this->Controls->Add(this->Ribble1);
			this->Controls->Add(this->Power1);
			this->Controls->Add(this->Ill1);
			this->Controls->Add(this->Name5);
			this->Controls->Add(this->Name4);
			this->Controls->Add(this->Name3);
			this->Controls->Add(this->Name2);
			this->Controls->Add(this->Name1);
			this->Controls->Add(this->Amp1);
			this->Controls->Add(this->Voltage1);
			this->Controls->Add(this->LOLabel1);
			this->Controls->Add(this->LumFluxLabel1);
			this->Controls->Add(this->RibbleLabel1);
			this->Controls->Add(this->RibbleLabel);
			this->Controls->Add(this->IllLabel1);
			this->Controls->Add(this->LOLabel);
			this->Controls->Add(this->LumFluxLabel);
			this->Controls->Add(this->PowerLabel);
			this->Controls->Add(this->IllLabel);
			this->Controls->Add(this->AmpLabel1);
			this->Controls->Add(this->AmpLabel);
			this->Controls->Add(this->PowerLabel1);
			this->Controls->Add(this->VoltageLabel1);
			this->Controls->Add(this->VoltageLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(710, 300);
			this->MinimumSize = System::Drawing::Size(710, 300);
			this->Name = L"Task1Window2";
			this->Text = L"Заполнить таблицу измеренных характеристик - КСР";
			this->Load += gcnew System::EventHandler(this, &Task1Window2::Task1Window2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Voltage1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Voltage2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Voltage3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Voltage4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Voltage5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Amp1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Amp2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Amp3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Amp4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Amp5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ill1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ill2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ill3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ill4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ill5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ribble1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ribble2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ribble3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ribble4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ribble5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: bool Validation();
private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e);
private: void SetMeasured();
private: System::Void Task1Window2_Load(System::Object^ sender, System::EventArgs^ e);
};
}
