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
	/// Сводка для Task2Window1
	/// </summary>
	public ref class Task2Window1 : public System::Windows::Forms::Form
	{
	public:
		Task2Window1(void)
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
		~Task2Window1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::TextBox^ Name;
	private: System::Windows::Forms::Label^ IllLabel;
	private: System::Windows::Forms::TextBox^ Ill;

	private: System::Windows::Forms::Label^ RippleLabel;
	private: System::Windows::Forms::Label^ IllLabel1;
	private: System::Windows::Forms::TextBox^ Ripple;

	private: System::Windows::Forms::Label^ RippleLabel1;
	private: System::Windows::Forms::TextBox^ A;

	private: System::Windows::Forms::Label^ ALabel;
	private: System::Windows::Forms::Label^ BLabel;
	private: System::Windows::Forms::TextBox^ B;

	private: System::Windows::Forms::Label^ CLabel;
	private: System::Windows::Forms::Label^ ABCLabel;
	private: System::Windows::Forms::TextBox^ C;

	private: System::Windows::Forms::Label^ HpLabel;


	private: System::Windows::Forms::TextBox^ Hp;

	private: System::Windows::Forms::Label^ HpLabel1;
	private: System::Windows::Forms::Label^ HcLabel;
	private: System::Windows::Forms::Label^ HcLabel1;
	private: System::Windows::Forms::TextBox^ Hc;
	private: System::Windows::Forms::Label^ MFLabel;
	private: System::Windows::Forms::TextBox^ MF;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Ppot;
	private: System::Windows::Forms::TextBox^ Pst;
	private: System::Windows::Forms::TextBox^ Ppol;



	private: System::Windows::Forms::Button^ button1;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task2Window1::typeid));
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::TextBox());
			this->IllLabel = (gcnew System::Windows::Forms::Label());
			this->Ill = (gcnew System::Windows::Forms::TextBox());
			this->RippleLabel = (gcnew System::Windows::Forms::Label());
			this->IllLabel1 = (gcnew System::Windows::Forms::Label());
			this->Ripple = (gcnew System::Windows::Forms::TextBox());
			this->RippleLabel1 = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->ALabel = (gcnew System::Windows::Forms::Label());
			this->BLabel = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->CLabel = (gcnew System::Windows::Forms::Label());
			this->ABCLabel = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::TextBox());
			this->HpLabel = (gcnew System::Windows::Forms::Label());
			this->Hp = (gcnew System::Windows::Forms::TextBox());
			this->HpLabel1 = (gcnew System::Windows::Forms::Label());
			this->HcLabel = (gcnew System::Windows::Forms::Label());
			this->HcLabel1 = (gcnew System::Windows::Forms::Label());
			this->Hc = (gcnew System::Windows::Forms::TextBox());
			this->MFLabel = (gcnew System::Windows::Forms::Label());
			this->MF = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Ppot = (gcnew System::Windows::Forms::TextBox());
			this->Pst = (gcnew System::Windows::Forms::TextBox());
			this->Ppol = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Location = System::Drawing::Point(12, 9);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(60, 13);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"Название:";
			// 
			// Name
			// 
			this->Name->Location = System::Drawing::Point(78, 6);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(467, 20);
			this->Name->TabIndex = 1;
			// 
			// IllLabel
			// 
			this->IllLabel->AutoSize = true;
			this->IllLabel->Location = System::Drawing::Point(12, 36);
			this->IllLabel->Name = L"IllLabel";
			this->IllLabel->Size = System::Drawing::Size(143, 13);
			this->IllLabel->TabIndex = 0;
			this->IllLabel->Text = L"Требуемая освещенность:";
			// 
			// Ill
			// 
			this->Ill->Location = System::Drawing::Point(161, 33);
			this->Ill->Name = L"Ill";
			this->Ill->Size = System::Drawing::Size(384, 20);
			this->Ill->TabIndex = 2;
			this->Ill->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Ill_TextChanged);
			// 
			// RippleLabel
			// 
			this->RippleLabel->AutoSize = true;
			this->RippleLabel->Location = System::Drawing::Point(12, 62);
			this->RippleLabel->Name = L"RippleLabel";
			this->RippleLabel->Size = System::Drawing::Size(133, 13);
			this->RippleLabel->TabIndex = 0;
			this->RippleLabel->Text = L"Макс. коэфф пульсации:";
			// 
			// IllLabel1
			// 
			this->IllLabel1->AutoSize = true;
			this->IllLabel1->Location = System::Drawing::Point(551, 36);
			this->IllLabel1->Name = L"IllLabel1";
			this->IllLabel1->Size = System::Drawing::Size(19, 13);
			this->IllLabel1->TabIndex = 0;
			this->IllLabel1->Text = L"лк";
			// 
			// Ripple
			// 
			this->Ripple->Location = System::Drawing::Point(161, 59);
			this->Ripple->Name = L"Ripple";
			this->Ripple->Size = System::Drawing::Size(384, 20);
			this->Ripple->TabIndex = 2;
			this->Ripple->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Ripple_TextChanged);
			// 
			// RippleLabel1
			// 
			this->RippleLabel1->AutoSize = true;
			this->RippleLabel1->Location = System::Drawing::Point(551, 62);
			this->RippleLabel1->Name = L"RippleLabel1";
			this->RippleLabel1->Size = System::Drawing::Size(15, 13);
			this->RippleLabel1->TabIndex = 0;
			this->RippleLabel1->Text = L"%";
			// 
			// A
			// 
			this->A->Location = System::Drawing::Point(61, 85);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(121, 20);
			this->A->TabIndex = 2;
			this->A->TextChanged += gcnew System::EventHandler(this, &Task2Window1::A_TextChanged);
			// 
			// ALabel
			// 
			this->ALabel->AutoSize = true;
			this->ALabel->Location = System::Drawing::Point(12, 88);
			this->ALabel->Name = L"ALabel";
			this->ALabel->Size = System::Drawing::Size(43, 13);
			this->ALabel->TabIndex = 0;
			this->ALabel->Text = L"Длина:";
			// 
			// BLabel
			// 
			this->BLabel->AutoSize = true;
			this->BLabel->Location = System::Drawing::Point(188, 88);
			this->BLabel->Name = L"BLabel";
			this->BLabel->Size = System::Drawing::Size(49, 13);
			this->BLabel->TabIndex = 0;
			this->BLabel->Text = L"Ширина:";
			// 
			// B
			// 
			this->B->Location = System::Drawing::Point(243, 85);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(121, 20);
			this->B->TabIndex = 2;
			this->B->TextChanged += gcnew System::EventHandler(this, &Task2Window1::B_TextChanged);
			// 
			// CLabel
			// 
			this->CLabel->AutoSize = true;
			this->CLabel->Location = System::Drawing::Point(370, 88);
			this->CLabel->Name = L"CLabel";
			this->CLabel->Size = System::Drawing::Size(48, 13);
			this->CLabel->TabIndex = 0;
			this->CLabel->Text = L"Высота:";
			// 
			// ABCLabel
			// 
			this->ABCLabel->AutoSize = true;
			this->ABCLabel->Location = System::Drawing::Point(551, 88);
			this->ABCLabel->Name = L"ABCLabel";
			this->ABCLabel->Size = System::Drawing::Size(15, 13);
			this->ABCLabel->TabIndex = 0;
			this->ABCLabel->Text = L"м";
			// 
			// C
			// 
			this->C->Location = System::Drawing::Point(424, 85);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(121, 20);
			this->C->TabIndex = 2;
			this->C->TextChanged += gcnew System::EventHandler(this, &Task2Window1::C_TextChanged);
			// 
			// HpLabel
			// 
			this->HpLabel->AutoSize = true;
			this->HpLabel->Location = System::Drawing::Point(12, 114);
			this->HpLabel->Name = L"HpLabel";
			this->HpLabel->Size = System::Drawing::Size(139, 13);
			this->HpLabel->TabIndex = 0;
			this->HpLabel->Text = L"Высота раб. поверхности:";
			// 
			// Hp
			// 
			this->Hp->Location = System::Drawing::Point(161, 111);
			this->Hp->Name = L"Hp";
			this->Hp->Size = System::Drawing::Size(384, 20);
			this->Hp->TabIndex = 2;
			this->Hp->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Hp_TextChanged);
			// 
			// HpLabel1
			// 
			this->HpLabel1->AutoSize = true;
			this->HpLabel1->Location = System::Drawing::Point(551, 114);
			this->HpLabel1->Name = L"HpLabel1";
			this->HpLabel1->Size = System::Drawing::Size(15, 13);
			this->HpLabel1->TabIndex = 0;
			this->HpLabel1->Text = L"м";
			// 
			// HcLabel
			// 
			this->HcLabel->AutoSize = true;
			this->HcLabel->Location = System::Drawing::Point(12, 140);
			this->HcLabel->Name = L"HcLabel";
			this->HcLabel->Size = System::Drawing::Size(149, 13);
			this->HcLabel->TabIndex = 0;
			this->HcLabel->Text = L"Высота свеса светильника:";
			// 
			// HcLabel1
			// 
			this->HcLabel1->AutoSize = true;
			this->HcLabel1->Location = System::Drawing::Point(551, 140);
			this->HcLabel1->Name = L"HcLabel1";
			this->HcLabel1->Size = System::Drawing::Size(15, 13);
			this->HcLabel1->TabIndex = 0;
			this->HcLabel1->Text = L"м";
			// 
			// Hc
			// 
			this->Hc->Location = System::Drawing::Point(161, 137);
			this->Hc->Name = L"Hc";
			this->Hc->Size = System::Drawing::Size(384, 20);
			this->Hc->TabIndex = 2;
			this->Hc->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Hc_TextChanged);
			// 
			// MFLabel
			// 
			this->MFLabel->AutoSize = true;
			this->MFLabel->Location = System::Drawing::Point(12, 166);
			this->MFLabel->Name = L"MFLabel";
			this->MFLabel->Size = System::Drawing::Size(139, 13);
			this->MFLabel->TabIndex = 0;
			this->MFLabel->Text = L"Коэфф. эксплуатации MF:";
			// 
			// MF
			// 
			this->MF->Location = System::Drawing::Point(161, 163);
			this->MF->Name = L"MF";
			this->MF->Size = System::Drawing::Size(384, 20);
			this->MF->TabIndex = 2;
			this->MF->TextChanged += gcnew System::EventHandler(this, &Task2Window1::MF_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ρ пот.:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(204, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ρ ст.:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(378, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"ρ пол.:";
			// 
			// Ppot
			// 
			this->Ppot->Location = System::Drawing::Point(61, 189);
			this->Ppot->Name = L"Ppot";
			this->Ppot->Size = System::Drawing::Size(121, 20);
			this->Ppot->TabIndex = 2;
			this->Ppot->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Ppot_TextChanged);
			// 
			// Pst
			// 
			this->Pst->Location = System::Drawing::Point(243, 189);
			this->Pst->Name = L"Pst";
			this->Pst->Size = System::Drawing::Size(121, 20);
			this->Pst->TabIndex = 2;
			this->Pst->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Pst_TextChanged);
			// 
			// Ppol
			// 
			this->Ppol->Location = System::Drawing::Point(424, 189);
			this->Ppol->Name = L"Ppol";
			this->Ppol->Size = System::Drawing::Size(121, 20);
			this->Ppol->TabIndex = 2;
			this->Ppol->TextChanged += gcnew System::EventHandler(this, &Task2Window1::Ppol_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(530, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Рассчитать и сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task2Window1::button1_Click);
			// 
			// Task2Window1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 246);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Ripple);
			this->Controls->Add(this->Ppol);
			this->Controls->Add(this->C);
			this->Controls->Add(this->Pst);
			this->Controls->Add(this->B);
			this->Controls->Add(this->Ppot);
			this->Controls->Add(this->A);
			this->Controls->Add(this->MF);
			this->Controls->Add(this->Hc);
			this->Controls->Add(this->Hp);
			this->Controls->Add(this->Ill);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->RippleLabel);
			this->Controls->Add(this->HcLabel1);
			this->Controls->Add(this->HpLabel1);
			this->Controls->Add(this->ABCLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->RippleLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CLabel);
			this->Controls->Add(this->BLabel);
			this->Controls->Add(this->IllLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MFLabel);
			this->Controls->Add(this->ALabel);
			this->Controls->Add(this->HcLabel);
			this->Controls->Add(this->HpLabel);
			this->Controls->Add(this->IllLabel);
			this->Controls->Add(this->NameLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(590, 285);
			this->MinimumSize = System::Drawing::Size(590, 285);
			//this->Name = L"Task2Window1";
			this->Text = L"Заполнить таблицу данных о помещении - КСР";
			this->Load += gcnew System::EventHandler(this, &Task2Window1::Task2Window1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Ill_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ripple_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void A_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void B_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void C_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Hp_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Hc_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void MF_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ppot_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Pst_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ppol_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: bool Validation();
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Measurement();
private: System::Void Task2Window1_Load(System::Object^ sender, System::EventArgs^ e);
};
}
