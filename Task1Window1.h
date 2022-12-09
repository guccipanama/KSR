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
	/// Сводка для Task1Window1
	/// </summary>
	public ref class Task1Window1 : public System::Windows::Forms::Form
	{
	public:
		Task1Window1(void)
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
		~Task1Window1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Label^ NameLabel;
	protected:
	private: System::Windows::Forms::Label^ TypeLabel;
	private: System::Windows::Forms::Label^ CostLabel;


	private: System::Windows::Forms::Label^ PowerLabel;
	private: System::Windows::Forms::Label^ LumFluxLabel;
	private: System::Windows::Forms::Label^ DurLabel;

	private: System::Windows::Forms::TextBox^ Name1;
	private: System::Windows::Forms::TextBox^ Name2;
	private: System::Windows::Forms::TextBox^ Name3;
	private: System::Windows::Forms::TextBox^ Name4;
	private: System::Windows::Forms::TextBox^ Name5;
	private: System::Windows::Forms::ListBox^ Type1;
	private: System::Windows::Forms::ListBox^ Type2;
	private: System::Windows::Forms::ListBox^ Type3;
	private: System::Windows::Forms::ListBox^ Type4;
	private: System::Windows::Forms::ListBox^ Type5;
	private: System::Windows::Forms::TextBox^ Cost1;
	private: System::Windows::Forms::TextBox^ Cost2;
	private: System::Windows::Forms::TextBox^ Cost3;
	private: System::Windows::Forms::TextBox^ Cost4;
	private: System::Windows::Forms::TextBox^ Cost5;
	private: System::Windows::Forms::TextBox^ Power1;
	private: System::Windows::Forms::TextBox^ Power2;
	private: System::Windows::Forms::TextBox^ Power3;
	private: System::Windows::Forms::TextBox^ Power4;
	private: System::Windows::Forms::TextBox^ Power5;
	private: System::Windows::Forms::TextBox^ LumFlux1;
	private: System::Windows::Forms::TextBox^ LumFlux2;
	private: System::Windows::Forms::TextBox^ LumFlux3;
	private: System::Windows::Forms::TextBox^ LumFlux4;
	private: System::Windows::Forms::TextBox^ LumFlux5;
	private: System::Windows::Forms::TextBox^ Dur1;
	private: System::Windows::Forms::TextBox^ Dur2;
	private: System::Windows::Forms::TextBox^ Dur3;
	private: System::Windows::Forms::TextBox^ Dur4;
	private: System::Windows::Forms::TextBox^ Dur5;
	private: System::Windows::Forms::Button^ SaveButton;
	private: System::Windows::Forms::Label^ CostLabel1;
	private: System::Windows::Forms::Label^ PowerLabel1;
	private: System::Windows::Forms::Label^ LumFluxLabel1;
	private: System::Windows::Forms::Label^ DurLabel1;
	private: System::Windows::Forms::Label^ LOLabel;
	private: System::Windows::Forms::Label^ LOLabel1;


	private: System::Windows::Forms::TextBox^ LO1;
	private: System::Windows::Forms::TextBox^ LO2;
	private: System::Windows::Forms::TextBox^ LO3;
	private: System::Windows::Forms::TextBox^ LO4;
	private: System::Windows::Forms::TextBox^ LO5;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task1Window1::typeid));
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->TypeLabel = (gcnew System::Windows::Forms::Label());
			this->CostLabel = (gcnew System::Windows::Forms::Label());
			this->PowerLabel = (gcnew System::Windows::Forms::Label());
			this->LumFluxLabel = (gcnew System::Windows::Forms::Label());
			this->DurLabel = (gcnew System::Windows::Forms::Label());
			this->Name1 = (gcnew System::Windows::Forms::TextBox());
			this->Name2 = (gcnew System::Windows::Forms::TextBox());
			this->Name3 = (gcnew System::Windows::Forms::TextBox());
			this->Name4 = (gcnew System::Windows::Forms::TextBox());
			this->Name5 = (gcnew System::Windows::Forms::TextBox());
			this->Type1 = (gcnew System::Windows::Forms::ListBox());
			this->Type2 = (gcnew System::Windows::Forms::ListBox());
			this->Type3 = (gcnew System::Windows::Forms::ListBox());
			this->Type4 = (gcnew System::Windows::Forms::ListBox());
			this->Type5 = (gcnew System::Windows::Forms::ListBox());
			this->Cost1 = (gcnew System::Windows::Forms::TextBox());
			this->Cost2 = (gcnew System::Windows::Forms::TextBox());
			this->Cost3 = (gcnew System::Windows::Forms::TextBox());
			this->Cost4 = (gcnew System::Windows::Forms::TextBox());
			this->Cost5 = (gcnew System::Windows::Forms::TextBox());
			this->Power1 = (gcnew System::Windows::Forms::TextBox());
			this->Power2 = (gcnew System::Windows::Forms::TextBox());
			this->Power3 = (gcnew System::Windows::Forms::TextBox());
			this->Power4 = (gcnew System::Windows::Forms::TextBox());
			this->Power5 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux1 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux2 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux3 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux4 = (gcnew System::Windows::Forms::TextBox());
			this->LumFlux5 = (gcnew System::Windows::Forms::TextBox());
			this->Dur1 = (gcnew System::Windows::Forms::TextBox());
			this->Dur2 = (gcnew System::Windows::Forms::TextBox());
			this->Dur3 = (gcnew System::Windows::Forms::TextBox());
			this->Dur4 = (gcnew System::Windows::Forms::TextBox());
			this->Dur5 = (gcnew System::Windows::Forms::TextBox());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->CostLabel1 = (gcnew System::Windows::Forms::Label());
			this->PowerLabel1 = (gcnew System::Windows::Forms::Label());
			this->LumFluxLabel1 = (gcnew System::Windows::Forms::Label());
			this->DurLabel1 = (gcnew System::Windows::Forms::Label());
			this->LOLabel = (gcnew System::Windows::Forms::Label());
			this->LOLabel1 = (gcnew System::Windows::Forms::Label());
			this->LO1 = (gcnew System::Windows::Forms::TextBox());
			this->LO2 = (gcnew System::Windows::Forms::TextBox());
			this->LO3 = (gcnew System::Windows::Forms::TextBox());
			this->LO4 = (gcnew System::Windows::Forms::TextBox());
			this->LO5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->NameLabel->Location = System::Drawing::Point(12, 15);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(60, 13);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"Название:";
			// 
			// TypeLabel
			// 
			this->TypeLabel->AutoSize = true;
			this->TypeLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->TypeLabel->Location = System::Drawing::Point(12, 38);
			this->TypeLabel->Name = L"TypeLabel";
			this->TypeLabel->Size = System::Drawing::Size(29, 13);
			this->TypeLabel->TabIndex = 0;
			this->TypeLabel->Text = L"Тип:";
			// 
			// CostLabel
			// 
			this->CostLabel->AutoSize = true;
			this->CostLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->CostLabel->Location = System::Drawing::Point(12, 90);
			this->CostLabel->Name = L"CostLabel";
			this->CostLabel->Size = System::Drawing::Size(65, 13);
			this->CostLabel->TabIndex = 0;
			this->CostLabel->Text = L"Стоимость:";
			// 
			// PowerLabel
			// 
			this->PowerLabel->AutoSize = true;
			this->PowerLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->PowerLabel->Location = System::Drawing::Point(12, 116);
			this->PowerLabel->Name = L"PowerLabel";
			this->PowerLabel->Size = System::Drawing::Size(63, 13);
			this->PowerLabel->TabIndex = 0;
			this->PowerLabel->Text = L"Мощность:";
			// 
			// LumFluxLabel
			// 
			this->LumFluxLabel->AutoSize = true;
			this->LumFluxLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->LumFluxLabel->Location = System::Drawing::Point(12, 142);
			this->LumFluxLabel->Name = L"LumFluxLabel";
			this->LumFluxLabel->Size = System::Drawing::Size(90, 13);
			this->LumFluxLabel->TabIndex = 0;
			this->LumFluxLabel->Text = L"Световой поток:";
			// 
			// DurLabel
			// 
			this->DurLabel->AutoSize = true;
			this->DurLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->DurLabel->Location = System::Drawing::Point(12, 194);
			this->DurLabel->Name = L"DurLabel";
			this->DurLabel->Size = System::Drawing::Size(77, 13);
			this->DurLabel->TabIndex = 0;
			this->DurLabel->Text = L"Срок службы:";
			// 
			// Name1
			// 
			this->Name1->Location = System::Drawing::Point(113, 12);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(100, 20);
			this->Name1->TabIndex = 1;
			this->Name1->Text = L"A";
			// 
			// Name2
			// 
			this->Name2->Location = System::Drawing::Point(219, 12);
			this->Name2->Name = L"Name2";
			this->Name2->Size = System::Drawing::Size(100, 20);
			this->Name2->TabIndex = 1;
			this->Name2->Text = L"B";
			// 
			// Name3
			// 
			this->Name3->Location = System::Drawing::Point(325, 12);
			this->Name3->Name = L"Name3";
			this->Name3->Size = System::Drawing::Size(100, 20);
			this->Name3->TabIndex = 1;
			this->Name3->Text = L"C";
			// 
			// Name4
			// 
			this->Name4->Location = System::Drawing::Point(431, 12);
			this->Name4->Name = L"Name4";
			this->Name4->Size = System::Drawing::Size(100, 20);
			this->Name4->TabIndex = 1;
			this->Name4->Text = L"D";
			// 
			// Name5
			// 
			this->Name5->Location = System::Drawing::Point(537, 12);
			this->Name5->Name = L"Name5";
			this->Name5->Size = System::Drawing::Size(100, 20);
			this->Name5->TabIndex = 1;
			this->Name5->Text = L"E";
			// 
			// Type1
			// 
			this->Type1->FormattingEnabled = true;
			this->Type1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ЛН", L"ЛЛ", L"СЛ" });
			this->Type1->Location = System::Drawing::Point(113, 38);
			this->Type1->Name = L"Type1";
			this->Type1->Size = System::Drawing::Size(100, 43);
			this->Type1->TabIndex = 2;
			// 
			// Type2
			// 
			this->Type2->FormattingEnabled = true;
			this->Type2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ЛН", L"ЛЛ", L"СЛ" });
			this->Type2->Location = System::Drawing::Point(219, 38);
			this->Type2->Name = L"Type2";
			this->Type2->Size = System::Drawing::Size(100, 43);
			this->Type2->TabIndex = 2;
			// 
			// Type3
			// 
			this->Type3->FormattingEnabled = true;
			this->Type3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ЛН", L"ЛЛ", L"СЛ" });
			this->Type3->Location = System::Drawing::Point(325, 38);
			this->Type3->Name = L"Type3";
			this->Type3->Size = System::Drawing::Size(100, 43);
			this->Type3->TabIndex = 2;
			// 
			// Type4
			// 
			this->Type4->FormattingEnabled = true;
			this->Type4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ЛН", L"ЛЛ", L"СЛ" });
			this->Type4->Location = System::Drawing::Point(431, 38);
			this->Type4->Name = L"Type4";
			this->Type4->Size = System::Drawing::Size(100, 43);
			this->Type4->TabIndex = 2;
			// 
			// Type5
			// 
			this->Type5->FormattingEnabled = true;
			this->Type5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ЛН", L"ЛЛ", L"СЛ" });
			this->Type5->Location = System::Drawing::Point(537, 38);
			this->Type5->Name = L"Type5";
			this->Type5->Size = System::Drawing::Size(100, 43);
			this->Type5->TabIndex = 2;
			// 
			// Cost1
			// 
			this->Cost1->Location = System::Drawing::Point(113, 87);
			this->Cost1->Name = L"Cost1";
			this->Cost1->Size = System::Drawing::Size(100, 20);
			this->Cost1->TabIndex = 1;
			this->Cost1->Text = L"0";
			this->Cost1->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Cost1_TextChanged);
			// 
			// Cost2
			// 
			this->Cost2->Location = System::Drawing::Point(219, 87);
			this->Cost2->Name = L"Cost2";
			this->Cost2->Size = System::Drawing::Size(100, 20);
			this->Cost2->TabIndex = 1;
			this->Cost2->Text = L"0";
			this->Cost2->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Cost2_TextChanged);
			// 
			// Cost3
			// 
			this->Cost3->Location = System::Drawing::Point(325, 87);
			this->Cost3->Name = L"Cost3";
			this->Cost3->Size = System::Drawing::Size(100, 20);
			this->Cost3->TabIndex = 1;
			this->Cost3->Text = L"0";
			this->Cost3->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Cost3_TextChanged);
			// 
			// Cost4
			// 
			this->Cost4->Location = System::Drawing::Point(431, 87);
			this->Cost4->Name = L"Cost4";
			this->Cost4->Size = System::Drawing::Size(100, 20);
			this->Cost4->TabIndex = 1;
			this->Cost4->Text = L"0";
			this->Cost4->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Cost4_TextChanged);
			// 
			// Cost5
			// 
			this->Cost5->Location = System::Drawing::Point(537, 87);
			this->Cost5->Name = L"Cost5";
			this->Cost5->Size = System::Drawing::Size(100, 20);
			this->Cost5->TabIndex = 1;
			this->Cost5->Text = L"0";
			this->Cost5->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Cost5_TextChanged);
			// 
			// Power1
			// 
			this->Power1->Location = System::Drawing::Point(113, 113);
			this->Power1->Name = L"Power1";
			this->Power1->Size = System::Drawing::Size(100, 20);
			this->Power1->TabIndex = 1;
			this->Power1->Text = L"0";
			this->Power1->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Power1_TextChanged);
			// 
			// Power2
			// 
			this->Power2->Location = System::Drawing::Point(219, 113);
			this->Power2->Name = L"Power2";
			this->Power2->Size = System::Drawing::Size(100, 20);
			this->Power2->TabIndex = 1;
			this->Power2->Text = L"0";
			this->Power2->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Power2_TextChanged);
			// 
			// Power3
			// 
			this->Power3->Location = System::Drawing::Point(325, 113);
			this->Power3->Name = L"Power3";
			this->Power3->Size = System::Drawing::Size(100, 20);
			this->Power3->TabIndex = 1;
			this->Power3->Text = L"0";
			this->Power3->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Power3_TextChanged);
			// 
			// Power4
			// 
			this->Power4->Location = System::Drawing::Point(431, 113);
			this->Power4->Name = L"Power4";
			this->Power4->Size = System::Drawing::Size(100, 20);
			this->Power4->TabIndex = 1;
			this->Power4->Text = L"0";
			this->Power4->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Power4_TextChanged);
			// 
			// Power5
			// 
			this->Power5->Location = System::Drawing::Point(537, 113);
			this->Power5->Name = L"Power5";
			this->Power5->Size = System::Drawing::Size(100, 20);
			this->Power5->TabIndex = 1;
			this->Power5->Text = L"0";
			this->Power5->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Power5_TextChanged);
			// 
			// LumFlux1
			// 
			this->LumFlux1->Location = System::Drawing::Point(113, 139);
			this->LumFlux1->Name = L"LumFlux1";
			this->LumFlux1->Size = System::Drawing::Size(100, 20);
			this->LumFlux1->TabIndex = 1;
			this->LumFlux1->Text = L"0";
			this->LumFlux1->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux1_TextChanged);
			// 
			// LumFlux2
			// 
			this->LumFlux2->Location = System::Drawing::Point(219, 139);
			this->LumFlux2->Name = L"LumFlux2";
			this->LumFlux2->Size = System::Drawing::Size(100, 20);
			this->LumFlux2->TabIndex = 1;
			this->LumFlux2->Text = L"0";
			this->LumFlux2->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux2_TextChanged);
			// 
			// LumFlux3
			// 
			this->LumFlux3->Location = System::Drawing::Point(325, 139);
			this->LumFlux3->Name = L"LumFlux3";
			this->LumFlux3->Size = System::Drawing::Size(100, 20);
			this->LumFlux3->TabIndex = 1;
			this->LumFlux3->Text = L"0";
			this->LumFlux3->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux3_TextChanged);
			// 
			// LumFlux4
			// 
			this->LumFlux4->Location = System::Drawing::Point(431, 139);
			this->LumFlux4->Name = L"LumFlux4";
			this->LumFlux4->Size = System::Drawing::Size(100, 20);
			this->LumFlux4->TabIndex = 1;
			this->LumFlux4->Text = L"0";
			this->LumFlux4->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux4_TextChanged);
			// 
			// LumFlux5
			// 
			this->LumFlux5->Location = System::Drawing::Point(537, 139);
			this->LumFlux5->Name = L"LumFlux5";
			this->LumFlux5->Size = System::Drawing::Size(100, 20);
			this->LumFlux5->TabIndex = 1;
			this->LumFlux5->Text = L"0";
			this->LumFlux5->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux5_TextChanged);
			// 
			// Dur1
			// 
			this->Dur1->Location = System::Drawing::Point(113, 191);
			this->Dur1->Name = L"Dur1";
			this->Dur1->Size = System::Drawing::Size(100, 20);
			this->Dur1->TabIndex = 1;
			this->Dur1->Text = L"0";
			this->Dur1->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Dur1_TextChanged);
			// 
			// Dur2
			// 
			this->Dur2->Location = System::Drawing::Point(219, 191);
			this->Dur2->Name = L"Dur2";
			this->Dur2->Size = System::Drawing::Size(100, 20);
			this->Dur2->TabIndex = 1;
			this->Dur2->Text = L"0";
			this->Dur2->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Dur2_TextChanged);
			// 
			// Dur3
			// 
			this->Dur3->Location = System::Drawing::Point(325, 191);
			this->Dur3->Name = L"Dur3";
			this->Dur3->Size = System::Drawing::Size(100, 20);
			this->Dur3->TabIndex = 1;
			this->Dur3->Text = L"0";
			this->Dur3->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Dur3_TextChanged);
			// 
			// Dur4
			// 
			this->Dur4->Location = System::Drawing::Point(431, 191);
			this->Dur4->Name = L"Dur4";
			this->Dur4->Size = System::Drawing::Size(100, 20);
			this->Dur4->TabIndex = 1;
			this->Dur4->Text = L"0";
			this->Dur4->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Dur4_TextChanged);
			// 
			// Dur5
			// 
			this->Dur5->Location = System::Drawing::Point(537, 191);
			this->Dur5->Name = L"Dur5";
			this->Dur5->Size = System::Drawing::Size(100, 20);
			this->Dur5->TabIndex = 1;
			this->Dur5->Text = L"0";
			this->Dur5->TextChanged += gcnew System::EventHandler(this, &Task1Window1::Dur5_TextChanged);
			// 
			// SaveButton
			// 
			this->SaveButton->Location = System::Drawing::Point(537, 217);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(100, 20);
			this->SaveButton->TabIndex = 3;
			this->SaveButton->Text = L"Сохранить";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &Task1Window1::SaveButton_Click);
			// 
			// CostLabel1
			// 
			this->CostLabel1->AutoSize = true;
			this->CostLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->CostLabel1->Location = System::Drawing::Point(643, 90);
			this->CostLabel1->Name = L"CostLabel1";
			this->CostLabel1->Size = System::Drawing::Size(27, 13);
			this->CostLabel1->TabIndex = 0;
			this->CostLabel1->Text = L"руб.";
			// 
			// PowerLabel1
			// 
			this->PowerLabel1->AutoSize = true;
			this->PowerLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->PowerLabel1->Location = System::Drawing::Point(643, 116);
			this->PowerLabel1->Name = L"PowerLabel1";
			this->PowerLabel1->Size = System::Drawing::Size(19, 13);
			this->PowerLabel1->TabIndex = 0;
			this->PowerLabel1->Text = L"Вт";
			// 
			// LumFluxLabel1
			// 
			this->LumFluxLabel1->AutoSize = true;
			this->LumFluxLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->LumFluxLabel1->Location = System::Drawing::Point(643, 142);
			this->LumFluxLabel1->Name = L"LumFluxLabel1";
			this->LumFluxLabel1->Size = System::Drawing::Size(21, 13);
			this->LumFluxLabel1->TabIndex = 0;
			this->LumFluxLabel1->Text = L"лм";
			// 
			// DurLabel1
			// 
			this->DurLabel1->AutoSize = true;
			this->DurLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->DurLabel1->Location = System::Drawing::Point(643, 194);
			this->DurLabel1->Name = L"DurLabel1";
			this->DurLabel1->Size = System::Drawing::Size(15, 13);
			this->DurLabel1->TabIndex = 0;
			this->DurLabel1->Text = L"ч.";
			// 
			// LOLabel
			// 
			this->LOLabel->AutoSize = true;
			this->LOLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->LOLabel->Location = System::Drawing::Point(12, 168);
			this->LOLabel->Name = L"LOLabel";
			this->LOLabel->Size = System::Drawing::Size(95, 13);
			this->LOLabel->TabIndex = 0;
			this->LOLabel->Text = L"Световая отдача:";
			// 
			// LOLabel1
			// 
			this->LOLabel1->AutoSize = true;
			this->LOLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->LOLabel1->Location = System::Drawing::Point(643, 168);
			this->LOLabel1->Name = L"LOLabel1";
			this->LOLabel1->Size = System::Drawing::Size(38, 13);
			this->LOLabel1->TabIndex = 0;
			this->LOLabel1->Text = L"лм/Вт";
			// 
			// LO1
			// 
			this->LO1->Location = System::Drawing::Point(113, 165);
			this->LO1->Name = L"LO1";
			this->LO1->ReadOnly = true;
			this->LO1->Size = System::Drawing::Size(100, 20);
			this->LO1->TabIndex = 1;
			this->LO1->Text = L"0";
			this->LO1->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux1_TextChanged);
			// 
			// LO2
			// 
			this->LO2->Location = System::Drawing::Point(219, 165);
			this->LO2->Name = L"LO2";
			this->LO2->ReadOnly = true;
			this->LO2->Size = System::Drawing::Size(100, 20);
			this->LO2->TabIndex = 1;
			this->LO2->Text = L"0";
			this->LO2->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux2_TextChanged);
			// 
			// LO3
			// 
			this->LO3->Location = System::Drawing::Point(325, 165);
			this->LO3->Name = L"LO3";
			this->LO3->ReadOnly = true;
			this->LO3->Size = System::Drawing::Size(100, 20);
			this->LO3->TabIndex = 1;
			this->LO3->Text = L"0";
			this->LO3->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux3_TextChanged);
			// 
			// LO4
			// 
			this->LO4->Location = System::Drawing::Point(431, 165);
			this->LO4->Name = L"LO4";
			this->LO4->ReadOnly = true;
			this->LO4->Size = System::Drawing::Size(100, 20);
			this->LO4->TabIndex = 1;
			this->LO4->Text = L"0";
			this->LO4->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux4_TextChanged);
			// 
			// LO5
			// 
			this->LO5->Location = System::Drawing::Point(537, 165);
			this->LO5->Name = L"LO5";
			this->LO5->ReadOnly = true;
			this->LO5->Size = System::Drawing::Size(100, 20);
			this->LO5->TabIndex = 1;
			this->LO5->Text = L"0";
			this->LO5->TextChanged += gcnew System::EventHandler(this, &Task1Window1::LumFlux5_TextChanged);
			// 
			// Task1Window1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 261);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->Type5);
			this->Controls->Add(this->Type4);
			this->Controls->Add(this->Type3);
			this->Controls->Add(this->Type2);
			this->Controls->Add(this->Type1);
			this->Controls->Add(this->Name5);
			this->Controls->Add(this->Name4);
			this->Controls->Add(this->Name3);
			this->Controls->Add(this->Name2);
			this->Controls->Add(this->Cost5);
			this->Controls->Add(this->Cost4);
			this->Controls->Add(this->Cost3);
			this->Controls->Add(this->Cost2);
			this->Controls->Add(this->Power5);
			this->Controls->Add(this->Power4);
			this->Controls->Add(this->Power3);
			this->Controls->Add(this->Power2);
			this->Controls->Add(this->LO5);
			this->Controls->Add(this->LumFlux5);
			this->Controls->Add(this->LO4);
			this->Controls->Add(this->LumFlux4);
			this->Controls->Add(this->LO3);
			this->Controls->Add(this->LumFlux3);
			this->Controls->Add(this->LO2);
			this->Controls->Add(this->LumFlux2);
			this->Controls->Add(this->Dur5);
			this->Controls->Add(this->Dur4);
			this->Controls->Add(this->Dur3);
			this->Controls->Add(this->Dur2);
			this->Controls->Add(this->Dur1);
			this->Controls->Add(this->LO1);
			this->Controls->Add(this->LumFlux1);
			this->Controls->Add(this->Power1);
			this->Controls->Add(this->Cost1);
			this->Controls->Add(this->Name1);
			this->Controls->Add(this->DurLabel1);
			this->Controls->Add(this->LOLabel1);
			this->Controls->Add(this->DurLabel);
			this->Controls->Add(this->LOLabel);
			this->Controls->Add(this->LumFluxLabel1);
			this->Controls->Add(this->LumFluxLabel);
			this->Controls->Add(this->PowerLabel1);
			this->Controls->Add(this->PowerLabel);
			this->Controls->Add(this->CostLabel1);
			this->Controls->Add(this->CostLabel);
			this->Controls->Add(this->TypeLabel);
			this->Controls->Add(this->NameLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(710, 300);
			this->MinimumSize = System::Drawing::Size(710, 300);
			this->Name = L"Task1Window1";
			this->Text = L"Заполнить таблицу измеренных характеристик - КСР";
			this->Load += gcnew System::EventHandler(this, &Task1Window1::Task1Window1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Cost1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cost2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cost3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cost4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cost5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Power1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Power2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Power3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Power4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Power5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void LumFlux1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void LumFlux2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void LumFlux3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void LumFlux4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void LumFlux5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Dur1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Dur2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Dur3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Dur4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Dur5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: bool Validator();
private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e);
private: void SetDeclared();
private: System::Void Task1Window1_Load(System::Object^ sender, System::EventArgs^ e);
};
}
