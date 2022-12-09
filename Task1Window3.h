#pragma once
#include "LampsAndRoom.h"

namespace KSR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task1Window3
	/// </summary>
	public ref class Task1Window3 : public System::Windows::Forms::Form
	{
	public:
		Task1Window3(void)
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
		~Task1Window3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Name5;
	protected:
	private: System::Windows::Forms::TextBox^ Name4;
	private: System::Windows::Forms::TextBox^ Name3;
	private: System::Windows::Forms::TextBox^ Name2;
	private: System::Windows::Forms::TextBox^ Cost5;
	private: System::Windows::Forms::TextBox^ Cost4;
	private: System::Windows::Forms::TextBox^ Cost3;
	private: System::Windows::Forms::TextBox^ Cost2;
	private: System::Windows::Forms::TextBox^ DeclPower5;

	private: System::Windows::Forms::TextBox^ DeclPower4;

	private: System::Windows::Forms::TextBox^ DeclPower3;

	private: System::Windows::Forms::TextBox^ DeclPower2;
	private: System::Windows::Forms::TextBox^ DeclLO5;


	private: System::Windows::Forms::TextBox^ DeclLumFlux5;
	private: System::Windows::Forms::TextBox^ DeclLO4;


	private: System::Windows::Forms::TextBox^ DeclLumFlux4;
	private: System::Windows::Forms::TextBox^ DeclLO3;


	private: System::Windows::Forms::TextBox^ DeclLumFlux3;
	private: System::Windows::Forms::TextBox^ DeclLO2;


	private: System::Windows::Forms::TextBox^ DeclLumFlux2;
	private: System::Windows::Forms::TextBox^ DeclDur5;


	private: System::Windows::Forms::TextBox^ DeclDur4;

	private: System::Windows::Forms::TextBox^ DeclDur3;

	private: System::Windows::Forms::TextBox^ DeclDur2;

	private: System::Windows::Forms::TextBox^ DeclDur1;

	private: System::Windows::Forms::TextBox^ DeclLO1;

	private: System::Windows::Forms::TextBox^ DeclLumFlux1;

	private: System::Windows::Forms::TextBox^ DeclPower1;

	private: System::Windows::Forms::TextBox^ Cost1;
	private: System::Windows::Forms::TextBox^ Name1;
	private: System::Windows::Forms::Label^ DurLabel1;
	private: System::Windows::Forms::Label^ LOLabel1;
	private: System::Windows::Forms::Label^ DurLabel;
	private: System::Windows::Forms::Label^ LOLabel;
	private: System::Windows::Forms::Label^ LumFluxLabel1;
	private: System::Windows::Forms::Label^ LumFluxLabel;
	private: System::Windows::Forms::Label^ PowerLabel1;
	private: System::Windows::Forms::Label^ PowerLabel;
	private: System::Windows::Forms::Label^ CostLabel1;
	private: System::Windows::Forms::Label^ CostLabel;
	private: System::Windows::Forms::Label^ TypeLabel;
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ Win1Label;
	private: System::Windows::Forms::TextBox^ Type1;
	private: System::Windows::Forms::TextBox^ Type2;
	private: System::Windows::Forms::TextBox^ Type3;
	private: System::Windows::Forms::TextBox^ Type4;
	private: System::Windows::Forms::TextBox^ Type5;
	private: System::Windows::Forms::Label^ Win2Label;


	private: System::Windows::Forms::TextBox^ MeasVoltage5;

	private: System::Windows::Forms::TextBox^ MeasVoltage4;

	private: System::Windows::Forms::TextBox^ MeasVoltage3;

	private: System::Windows::Forms::TextBox^ MeasVoltage2;
	private: System::Windows::Forms::TextBox^ MeasLO5;


private: System::Windows::Forms::TextBox^ MeasLumFlux5;
private: System::Windows::Forms::TextBox^ MeasLO4;


private: System::Windows::Forms::TextBox^ MeasLumFlux4;

private: System::Windows::Forms::TextBox^ MeasPower5;
private: System::Windows::Forms::TextBox^ MeasPower4;


private: System::Windows::Forms::TextBox^ MeasLO3;


private: System::Windows::Forms::TextBox^ MeasLumFlux3;

private: System::Windows::Forms::TextBox^ MeasAmp5;
private: System::Windows::Forms::TextBox^ MeasPower3;
private: System::Windows::Forms::TextBox^ MeasLO2;



private: System::Windows::Forms::TextBox^ MeasLumFlux2;

private: System::Windows::Forms::TextBox^ MeasAmp4;
private: System::Windows::Forms::TextBox^ MeasPower2;


private: System::Windows::Forms::TextBox^ MeasAmp3;

private: System::Windows::Forms::TextBox^ MeasAmp2;
private: System::Windows::Forms::TextBox^ MeasIll5;


private: System::Windows::Forms::TextBox^ MeasIll4;

private: System::Windows::Forms::TextBox^ MeasIll3;

private: System::Windows::Forms::TextBox^ MeasIll2;
private: System::Windows::Forms::TextBox^ MeasRibble5;


private: System::Windows::Forms::TextBox^ MeasRibble4;

private: System::Windows::Forms::TextBox^ MeasRibble3;

private: System::Windows::Forms::TextBox^ MeasRibble2;

private: System::Windows::Forms::TextBox^ MeasLO1;

private: System::Windows::Forms::TextBox^ MeasLumFlux1;
private: System::Windows::Forms::TextBox^ MeasRibble1;


private: System::Windows::Forms::TextBox^ MeasPower1;
private: System::Windows::Forms::TextBox^ MeasIll1;


private: System::Windows::Forms::TextBox^ MeasAmp1;

private: System::Windows::Forms::TextBox^ MeasVoltage1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ RibbleLabel1;
	private: System::Windows::Forms::Label^ RibbleLabel;
	private: System::Windows::Forms::Label^ IllLabel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ IllLabel;
	private: System::Windows::Forms::Label^ AmpLabel1;
	private: System::Windows::Forms::Label^ AmpLabel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ VoltageLabel1;
	private: System::Windows::Forms::Label^ VoltageLabel;
private: System::Windows::Forms::Label^ Resume;
private: System::Windows::Forms::Label^ Res1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ Res2;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ Res3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task1Window3::typeid));
			this->Name5 = (gcnew System::Windows::Forms::TextBox());
			this->Name4 = (gcnew System::Windows::Forms::TextBox());
			this->Name3 = (gcnew System::Windows::Forms::TextBox());
			this->Name2 = (gcnew System::Windows::Forms::TextBox());
			this->Cost5 = (gcnew System::Windows::Forms::TextBox());
			this->Cost4 = (gcnew System::Windows::Forms::TextBox());
			this->Cost3 = (gcnew System::Windows::Forms::TextBox());
			this->Cost2 = (gcnew System::Windows::Forms::TextBox());
			this->DeclPower5 = (gcnew System::Windows::Forms::TextBox());
			this->DeclPower4 = (gcnew System::Windows::Forms::TextBox());
			this->DeclPower3 = (gcnew System::Windows::Forms::TextBox());
			this->DeclPower2 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLO5 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLumFlux5 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLO4 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLumFlux4 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLO3 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLumFlux3 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLO2 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLumFlux2 = (gcnew System::Windows::Forms::TextBox());
			this->DeclDur5 = (gcnew System::Windows::Forms::TextBox());
			this->DeclDur4 = (gcnew System::Windows::Forms::TextBox());
			this->DeclDur3 = (gcnew System::Windows::Forms::TextBox());
			this->DeclDur2 = (gcnew System::Windows::Forms::TextBox());
			this->DeclDur1 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLO1 = (gcnew System::Windows::Forms::TextBox());
			this->DeclLumFlux1 = (gcnew System::Windows::Forms::TextBox());
			this->DeclPower1 = (gcnew System::Windows::Forms::TextBox());
			this->Cost1 = (gcnew System::Windows::Forms::TextBox());
			this->Name1 = (gcnew System::Windows::Forms::TextBox());
			this->DurLabel1 = (gcnew System::Windows::Forms::Label());
			this->LOLabel1 = (gcnew System::Windows::Forms::Label());
			this->DurLabel = (gcnew System::Windows::Forms::Label());
			this->LOLabel = (gcnew System::Windows::Forms::Label());
			this->LumFluxLabel1 = (gcnew System::Windows::Forms::Label());
			this->LumFluxLabel = (gcnew System::Windows::Forms::Label());
			this->PowerLabel1 = (gcnew System::Windows::Forms::Label());
			this->PowerLabel = (gcnew System::Windows::Forms::Label());
			this->CostLabel1 = (gcnew System::Windows::Forms::Label());
			this->CostLabel = (gcnew System::Windows::Forms::Label());
			this->TypeLabel = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->Win1Label = (gcnew System::Windows::Forms::Label());
			this->Type1 = (gcnew System::Windows::Forms::TextBox());
			this->Type2 = (gcnew System::Windows::Forms::TextBox());
			this->Type3 = (gcnew System::Windows::Forms::TextBox());
			this->Type4 = (gcnew System::Windows::Forms::TextBox());
			this->Type5 = (gcnew System::Windows::Forms::TextBox());
			this->Win2Label = (gcnew System::Windows::Forms::Label());
			this->MeasVoltage5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasVoltage4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasVoltage3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasVoltage2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLO5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLumFlux5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLO4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLumFlux4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasPower5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasPower4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLO3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLumFlux3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasAmp5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasPower3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLO2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLumFlux2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasAmp4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasPower2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasAmp3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasAmp2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasIll5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasIll4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasIll3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasIll2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasRibble5 = (gcnew System::Windows::Forms::TextBox());
			this->MeasRibble4 = (gcnew System::Windows::Forms::TextBox());
			this->MeasRibble3 = (gcnew System::Windows::Forms::TextBox());
			this->MeasRibble2 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLO1 = (gcnew System::Windows::Forms::TextBox());
			this->MeasLumFlux1 = (gcnew System::Windows::Forms::TextBox());
			this->MeasRibble1 = (gcnew System::Windows::Forms::TextBox());
			this->MeasPower1 = (gcnew System::Windows::Forms::TextBox());
			this->MeasIll1 = (gcnew System::Windows::Forms::TextBox());
			this->MeasAmp1 = (gcnew System::Windows::Forms::TextBox());
			this->MeasVoltage1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RibbleLabel1 = (gcnew System::Windows::Forms::Label());
			this->RibbleLabel = (gcnew System::Windows::Forms::Label());
			this->IllLabel1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->IllLabel = (gcnew System::Windows::Forms::Label());
			this->AmpLabel1 = (gcnew System::Windows::Forms::Label());
			this->AmpLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->VoltageLabel1 = (gcnew System::Windows::Forms::Label());
			this->VoltageLabel = (gcnew System::Windows::Forms::Label());
			this->Resume = (gcnew System::Windows::Forms::Label());
			this->Res1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Res2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Res3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Name5
			// 
			this->Name5->Location = System::Drawing::Point(553, 29);
			this->Name5->Name = L"Name5";
			this->Name5->ReadOnly = true;
			this->Name5->Size = System::Drawing::Size(100, 20);
			this->Name5->TabIndex = 28;
			this->Name5->Text = L"E";
			// 
			// Name4
			// 
			this->Name4->Location = System::Drawing::Point(447, 29);
			this->Name4->Name = L"Name4";
			this->Name4->ReadOnly = true;
			this->Name4->Size = System::Drawing::Size(100, 20);
			this->Name4->TabIndex = 29;
			this->Name4->Text = L"D";
			// 
			// Name3
			// 
			this->Name3->Location = System::Drawing::Point(341, 29);
			this->Name3->Name = L"Name3";
			this->Name3->ReadOnly = true;
			this->Name3->Size = System::Drawing::Size(100, 20);
			this->Name3->TabIndex = 30;
			this->Name3->Text = L"C";
			// 
			// Name2
			// 
			this->Name2->Location = System::Drawing::Point(235, 29);
			this->Name2->Name = L"Name2";
			this->Name2->ReadOnly = true;
			this->Name2->Size = System::Drawing::Size(100, 20);
			this->Name2->TabIndex = 31;
			this->Name2->Text = L"B";
			// 
			// Cost5
			// 
			this->Cost5->Location = System::Drawing::Point(553, 81);
			this->Cost5->Name = L"Cost5";
			this->Cost5->ReadOnly = true;
			this->Cost5->Size = System::Drawing::Size(100, 20);
			this->Cost5->TabIndex = 32;
			this->Cost5->Text = L"0";
			// 
			// Cost4
			// 
			this->Cost4->Location = System::Drawing::Point(447, 81);
			this->Cost4->Name = L"Cost4";
			this->Cost4->ReadOnly = true;
			this->Cost4->Size = System::Drawing::Size(100, 20);
			this->Cost4->TabIndex = 36;
			this->Cost4->Text = L"0";
			// 
			// Cost3
			// 
			this->Cost3->Location = System::Drawing::Point(341, 81);
			this->Cost3->Name = L"Cost3";
			this->Cost3->ReadOnly = true;
			this->Cost3->Size = System::Drawing::Size(100, 20);
			this->Cost3->TabIndex = 34;
			this->Cost3->Text = L"0";
			// 
			// Cost2
			// 
			this->Cost2->Location = System::Drawing::Point(235, 81);
			this->Cost2->Name = L"Cost2";
			this->Cost2->ReadOnly = true;
			this->Cost2->Size = System::Drawing::Size(100, 20);
			this->Cost2->TabIndex = 35;
			this->Cost2->Text = L"0";
			// 
			// DeclPower5
			// 
			this->DeclPower5->Location = System::Drawing::Point(553, 107);
			this->DeclPower5->Name = L"DeclPower5";
			this->DeclPower5->ReadOnly = true;
			this->DeclPower5->Size = System::Drawing::Size(100, 20);
			this->DeclPower5->TabIndex = 44;
			this->DeclPower5->Text = L"0";
			// 
			// DeclPower4
			// 
			this->DeclPower4->Location = System::Drawing::Point(447, 107);
			this->DeclPower4->Name = L"DeclPower4";
			this->DeclPower4->ReadOnly = true;
			this->DeclPower4->Size = System::Drawing::Size(100, 20);
			this->DeclPower4->TabIndex = 37;
			this->DeclPower4->Text = L"0";
			// 
			// DeclPower3
			// 
			this->DeclPower3->Location = System::Drawing::Point(341, 107);
			this->DeclPower3->Name = L"DeclPower3";
			this->DeclPower3->ReadOnly = true;
			this->DeclPower3->Size = System::Drawing::Size(100, 20);
			this->DeclPower3->TabIndex = 38;
			this->DeclPower3->Text = L"0";
			// 
			// DeclPower2
			// 
			this->DeclPower2->Location = System::Drawing::Point(235, 107);
			this->DeclPower2->Name = L"DeclPower2";
			this->DeclPower2->ReadOnly = true;
			this->DeclPower2->Size = System::Drawing::Size(100, 20);
			this->DeclPower2->TabIndex = 39;
			this->DeclPower2->Text = L"0";
			// 
			// DeclLO5
			// 
			this->DeclLO5->Location = System::Drawing::Point(553, 159);
			this->DeclLO5->Name = L"DeclLO5";
			this->DeclLO5->ReadOnly = true;
			this->DeclLO5->Size = System::Drawing::Size(100, 20);
			this->DeclLO5->TabIndex = 40;
			this->DeclLO5->Text = L"0";
			// 
			// DeclLumFlux5
			// 
			this->DeclLumFlux5->Location = System::Drawing::Point(553, 133);
			this->DeclLumFlux5->Name = L"DeclLumFlux5";
			this->DeclLumFlux5->ReadOnly = true;
			this->DeclLumFlux5->Size = System::Drawing::Size(100, 20);
			this->DeclLumFlux5->TabIndex = 41;
			this->DeclLumFlux5->Text = L"0";
			// 
			// DeclLO4
			// 
			this->DeclLO4->Location = System::Drawing::Point(447, 159);
			this->DeclLO4->Name = L"DeclLO4";
			this->DeclLO4->ReadOnly = true;
			this->DeclLO4->Size = System::Drawing::Size(100, 20);
			this->DeclLO4->TabIndex = 42;
			this->DeclLO4->Text = L"0";
			// 
			// DeclLumFlux4
			// 
			this->DeclLumFlux4->Location = System::Drawing::Point(447, 133);
			this->DeclLumFlux4->Name = L"DeclLumFlux4";
			this->DeclLumFlux4->ReadOnly = true;
			this->DeclLumFlux4->Size = System::Drawing::Size(100, 20);
			this->DeclLumFlux4->TabIndex = 43;
			this->DeclLumFlux4->Text = L"0";
			// 
			// DeclLO3
			// 
			this->DeclLO3->Location = System::Drawing::Point(341, 159);
			this->DeclLO3->Name = L"DeclLO3";
			this->DeclLO3->ReadOnly = true;
			this->DeclLO3->Size = System::Drawing::Size(100, 20);
			this->DeclLO3->TabIndex = 27;
			this->DeclLO3->Text = L"0";
			// 
			// DeclLumFlux3
			// 
			this->DeclLumFlux3->Location = System::Drawing::Point(341, 133);
			this->DeclLumFlux3->Name = L"DeclLumFlux3";
			this->DeclLumFlux3->ReadOnly = true;
			this->DeclLumFlux3->Size = System::Drawing::Size(100, 20);
			this->DeclLumFlux3->TabIndex = 33;
			this->DeclLumFlux3->Text = L"0";
			// 
			// DeclLO2
			// 
			this->DeclLO2->Location = System::Drawing::Point(235, 159);
			this->DeclLO2->Name = L"DeclLO2";
			this->DeclLO2->ReadOnly = true;
			this->DeclLO2->Size = System::Drawing::Size(100, 20);
			this->DeclLO2->TabIndex = 26;
			this->DeclLO2->Text = L"0";
			// 
			// DeclLumFlux2
			// 
			this->DeclLumFlux2->Location = System::Drawing::Point(235, 133);
			this->DeclLumFlux2->Name = L"DeclLumFlux2";
			this->DeclLumFlux2->ReadOnly = true;
			this->DeclLumFlux2->Size = System::Drawing::Size(100, 20);
			this->DeclLumFlux2->TabIndex = 15;
			this->DeclLumFlux2->Text = L"0";
			// 
			// DeclDur5
			// 
			this->DeclDur5->Location = System::Drawing::Point(553, 185);
			this->DeclDur5->Name = L"DeclDur5";
			this->DeclDur5->ReadOnly = true;
			this->DeclDur5->Size = System::Drawing::Size(100, 20);
			this->DeclDur5->TabIndex = 24;
			this->DeclDur5->Text = L"0";
			// 
			// DeclDur4
			// 
			this->DeclDur4->Location = System::Drawing::Point(447, 185);
			this->DeclDur4->Name = L"DeclDur4";
			this->DeclDur4->ReadOnly = true;
			this->DeclDur4->Size = System::Drawing::Size(100, 20);
			this->DeclDur4->TabIndex = 23;
			this->DeclDur4->Text = L"0";
			// 
			// DeclDur3
			// 
			this->DeclDur3->Location = System::Drawing::Point(341, 185);
			this->DeclDur3->Name = L"DeclDur3";
			this->DeclDur3->ReadOnly = true;
			this->DeclDur3->Size = System::Drawing::Size(100, 20);
			this->DeclDur3->TabIndex = 22;
			this->DeclDur3->Text = L"0";
			// 
			// DeclDur2
			// 
			this->DeclDur2->Location = System::Drawing::Point(235, 185);
			this->DeclDur2->Name = L"DeclDur2";
			this->DeclDur2->ReadOnly = true;
			this->DeclDur2->Size = System::Drawing::Size(100, 20);
			this->DeclDur2->TabIndex = 21;
			this->DeclDur2->Text = L"0";
			// 
			// DeclDur1
			// 
			this->DeclDur1->Location = System::Drawing::Point(129, 185);
			this->DeclDur1->Name = L"DeclDur1";
			this->DeclDur1->ReadOnly = true;
			this->DeclDur1->Size = System::Drawing::Size(100, 20);
			this->DeclDur1->TabIndex = 20;
			this->DeclDur1->Text = L"0";
			// 
			// DeclLO1
			// 
			this->DeclLO1->Location = System::Drawing::Point(129, 159);
			this->DeclLO1->Name = L"DeclLO1";
			this->DeclLO1->ReadOnly = true;
			this->DeclLO1->Size = System::Drawing::Size(100, 20);
			this->DeclLO1->TabIndex = 19;
			this->DeclLO1->Text = L"0";
			// 
			// DeclLumFlux1
			// 
			this->DeclLumFlux1->Location = System::Drawing::Point(129, 133);
			this->DeclLumFlux1->Name = L"DeclLumFlux1";
			this->DeclLumFlux1->ReadOnly = true;
			this->DeclLumFlux1->Size = System::Drawing::Size(100, 20);
			this->DeclLumFlux1->TabIndex = 18;
			this->DeclLumFlux1->Text = L"0";
			// 
			// DeclPower1
			// 
			this->DeclPower1->Location = System::Drawing::Point(129, 107);
			this->DeclPower1->Name = L"DeclPower1";
			this->DeclPower1->ReadOnly = true;
			this->DeclPower1->Size = System::Drawing::Size(100, 20);
			this->DeclPower1->TabIndex = 17;
			this->DeclPower1->Text = L"0";
			// 
			// Cost1
			// 
			this->Cost1->Location = System::Drawing::Point(129, 81);
			this->Cost1->Name = L"Cost1";
			this->Cost1->ReadOnly = true;
			this->Cost1->Size = System::Drawing::Size(100, 20);
			this->Cost1->TabIndex = 16;
			this->Cost1->Text = L"0";
			// 
			// Name1
			// 
			this->Name1->Location = System::Drawing::Point(129, 29);
			this->Name1->Name = L"Name1";
			this->Name1->ReadOnly = true;
			this->Name1->Size = System::Drawing::Size(100, 20);
			this->Name1->TabIndex = 25;
			this->Name1->Text = L"A";
			// 
			// DurLabel1
			// 
			this->DurLabel1->AutoSize = true;
			this->DurLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->DurLabel1->Location = System::Drawing::Point(659, 188);
			this->DurLabel1->Name = L"DurLabel1";
			this->DurLabel1->Size = System::Drawing::Size(15, 13);
			this->DurLabel1->TabIndex = 4;
			this->DurLabel1->Text = L"ч.";
			// 
			// LOLabel1
			// 
			this->LOLabel1->AutoSize = true;
			this->LOLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->LOLabel1->Location = System::Drawing::Point(659, 162);
			this->LOLabel1->Name = L"LOLabel1";
			this->LOLabel1->Size = System::Drawing::Size(38, 13);
			this->LOLabel1->TabIndex = 5;
			this->LOLabel1->Text = L"лм/Вт";
			// 
			// DurLabel
			// 
			this->DurLabel->AutoSize = true;
			this->DurLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->DurLabel->Location = System::Drawing::Point(12, 188);
			this->DurLabel->Name = L"DurLabel";
			this->DurLabel->Size = System::Drawing::Size(77, 13);
			this->DurLabel->TabIndex = 6;
			this->DurLabel->Text = L"Срок службы:";
			// 
			// LOLabel
			// 
			this->LOLabel->AutoSize = true;
			this->LOLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->LOLabel->Location = System::Drawing::Point(12, 162);
			this->LOLabel->Name = L"LOLabel";
			this->LOLabel->Size = System::Drawing::Size(95, 13);
			this->LOLabel->TabIndex = 7;
			this->LOLabel->Text = L"Световая отдача:";
			// 
			// LumFluxLabel1
			// 
			this->LumFluxLabel1->AutoSize = true;
			this->LumFluxLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->LumFluxLabel1->Location = System::Drawing::Point(659, 136);
			this->LumFluxLabel1->Name = L"LumFluxLabel1";
			this->LumFluxLabel1->Size = System::Drawing::Size(21, 13);
			this->LumFluxLabel1->TabIndex = 8;
			this->LumFluxLabel1->Text = L"лм";
			// 
			// LumFluxLabel
			// 
			this->LumFluxLabel->AutoSize = true;
			this->LumFluxLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->LumFluxLabel->Location = System::Drawing::Point(12, 136);
			this->LumFluxLabel->Name = L"LumFluxLabel";
			this->LumFluxLabel->Size = System::Drawing::Size(90, 13);
			this->LumFluxLabel->TabIndex = 14;
			this->LumFluxLabel->Text = L"Световой поток:";
			// 
			// PowerLabel1
			// 
			this->PowerLabel1->AutoSize = true;
			this->PowerLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->PowerLabel1->Location = System::Drawing::Point(659, 110);
			this->PowerLabel1->Name = L"PowerLabel1";
			this->PowerLabel1->Size = System::Drawing::Size(19, 13);
			this->PowerLabel1->TabIndex = 10;
			this->PowerLabel1->Text = L"Вт";
			// 
			// PowerLabel
			// 
			this->PowerLabel->AutoSize = true;
			this->PowerLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->PowerLabel->Location = System::Drawing::Point(12, 110);
			this->PowerLabel->Name = L"PowerLabel";
			this->PowerLabel->Size = System::Drawing::Size(63, 13);
			this->PowerLabel->TabIndex = 11;
			this->PowerLabel->Text = L"Мощность:";
			// 
			// CostLabel1
			// 
			this->CostLabel1->AutoSize = true;
			this->CostLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->CostLabel1->Location = System::Drawing::Point(659, 84);
			this->CostLabel1->Name = L"CostLabel1";
			this->CostLabel1->Size = System::Drawing::Size(27, 13);
			this->CostLabel1->TabIndex = 12;
			this->CostLabel1->Text = L"руб.";
			// 
			// CostLabel
			// 
			this->CostLabel->AutoSize = true;
			this->CostLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->CostLabel->Location = System::Drawing::Point(12, 84);
			this->CostLabel->Name = L"CostLabel";
			this->CostLabel->Size = System::Drawing::Size(65, 13);
			this->CostLabel->TabIndex = 13;
			this->CostLabel->Text = L"Стоимость:";
			// 
			// TypeLabel
			// 
			this->TypeLabel->AutoSize = true;
			this->TypeLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->TypeLabel->Location = System::Drawing::Point(12, 58);
			this->TypeLabel->Name = L"TypeLabel";
			this->TypeLabel->Size = System::Drawing::Size(29, 13);
			this->TypeLabel->TabIndex = 9;
			this->TypeLabel->Text = L"Тип:";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->NameLabel->Location = System::Drawing::Point(12, 32);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(60, 13);
			this->NameLabel->TabIndex = 3;
			this->NameLabel->Text = L"Название:";
			// 
			// Win1Label
			// 
			this->Win1Label->AutoSize = true;
			this->Win1Label->Location = System::Drawing::Point(12, 9);
			this->Win1Label->Name = L"Win1Label";
			this->Win1Label->Size = System::Drawing::Size(157, 13);
			this->Win1Label->TabIndex = 50;
			this->Win1Label->Text = L"Заявленные характеристики:";
			// 
			// Type1
			// 
			this->Type1->Location = System::Drawing::Point(129, 55);
			this->Type1->Name = L"Type1";
			this->Type1->ReadOnly = true;
			this->Type1->Size = System::Drawing::Size(100, 20);
			this->Type1->TabIndex = 25;
			this->Type1->Text = L"A";
			// 
			// Type2
			// 
			this->Type2->Location = System::Drawing::Point(235, 55);
			this->Type2->Name = L"Type2";
			this->Type2->ReadOnly = true;
			this->Type2->Size = System::Drawing::Size(100, 20);
			this->Type2->TabIndex = 31;
			this->Type2->Text = L"B";
			// 
			// Type3
			// 
			this->Type3->Location = System::Drawing::Point(341, 55);
			this->Type3->Name = L"Type3";
			this->Type3->ReadOnly = true;
			this->Type3->Size = System::Drawing::Size(100, 20);
			this->Type3->TabIndex = 30;
			this->Type3->Text = L"C";
			// 
			// Type4
			// 
			this->Type4->Location = System::Drawing::Point(447, 55);
			this->Type4->Name = L"Type4";
			this->Type4->ReadOnly = true;
			this->Type4->Size = System::Drawing::Size(100, 20);
			this->Type4->TabIndex = 29;
			this->Type4->Text = L"D";
			// 
			// Type5
			// 
			this->Type5->Location = System::Drawing::Point(553, 55);
			this->Type5->Name = L"Type5";
			this->Type5->ReadOnly = true;
			this->Type5->Size = System::Drawing::Size(100, 20);
			this->Type5->TabIndex = 28;
			this->Type5->Text = L"E";
			// 
			// Win2Label
			// 
			this->Win2Label->AutoSize = true;
			this->Win2Label->Location = System::Drawing::Point(12, 220);
			this->Win2Label->Name = L"Win2Label";
			this->Win2Label->Size = System::Drawing::Size(160, 13);
			this->Win2Label->TabIndex = 50;
			this->Win2Label->Text = L"Измеренные характеристики:";
			// 
			// MeasVoltage5
			// 
			this->MeasVoltage5->Location = System::Drawing::Point(553, 240);
			this->MeasVoltage5->Name = L"MeasVoltage5";
			this->MeasVoltage5->ReadOnly = true;
			this->MeasVoltage5->Size = System::Drawing::Size(100, 20);
			this->MeasVoltage5->TabIndex = 80;
			this->MeasVoltage5->Text = L"0";
			// 
			// MeasVoltage4
			// 
			this->MeasVoltage4->Location = System::Drawing::Point(447, 240);
			this->MeasVoltage4->Name = L"MeasVoltage4";
			this->MeasVoltage4->ReadOnly = true;
			this->MeasVoltage4->Size = System::Drawing::Size(100, 20);
			this->MeasVoltage4->TabIndex = 81;
			this->MeasVoltage4->Text = L"0";
			// 
			// MeasVoltage3
			// 
			this->MeasVoltage3->Location = System::Drawing::Point(341, 240);
			this->MeasVoltage3->Name = L"MeasVoltage3";
			this->MeasVoltage3->ReadOnly = true;
			this->MeasVoltage3->Size = System::Drawing::Size(100, 20);
			this->MeasVoltage3->TabIndex = 99;
			this->MeasVoltage3->Text = L"0";
			// 
			// MeasVoltage2
			// 
			this->MeasVoltage2->Location = System::Drawing::Point(235, 240);
			this->MeasVoltage2->Name = L"MeasVoltage2";
			this->MeasVoltage2->ReadOnly = true;
			this->MeasVoltage2->Size = System::Drawing::Size(100, 20);
			this->MeasVoltage2->TabIndex = 82;
			this->MeasVoltage2->Text = L"0";
			// 
			// MeasLO5
			// 
			this->MeasLO5->Location = System::Drawing::Point(553, 370);
			this->MeasLO5->Name = L"MeasLO5";
			this->MeasLO5->ReadOnly = true;
			this->MeasLO5->Size = System::Drawing::Size(100, 20);
			this->MeasLO5->TabIndex = 86;
			this->MeasLO5->Text = L"0";
			// 
			// MeasLumFlux5
			// 
			this->MeasLumFlux5->Location = System::Drawing::Point(553, 344);
			this->MeasLumFlux5->Name = L"MeasLumFlux5";
			this->MeasLumFlux5->ReadOnly = true;
			this->MeasLumFlux5->Size = System::Drawing::Size(100, 20);
			this->MeasLumFlux5->TabIndex = 83;
			this->MeasLumFlux5->Text = L"0";
			// 
			// MeasLO4
			// 
			this->MeasLO4->Location = System::Drawing::Point(447, 370);
			this->MeasLO4->Name = L"MeasLO4";
			this->MeasLO4->ReadOnly = true;
			this->MeasLO4->Size = System::Drawing::Size(100, 20);
			this->MeasLO4->TabIndex = 90;
			this->MeasLO4->Text = L"0";
			// 
			// MeasLumFlux4
			// 
			this->MeasLumFlux4->Location = System::Drawing::Point(447, 344);
			this->MeasLumFlux4->Name = L"MeasLumFlux4";
			this->MeasLumFlux4->ReadOnly = true;
			this->MeasLumFlux4->Size = System::Drawing::Size(100, 20);
			this->MeasLumFlux4->TabIndex = 89;
			this->MeasLumFlux4->Text = L"0";
			// 
			// MeasPower5
			// 
			this->MeasPower5->Location = System::Drawing::Point(553, 292);
			this->MeasPower5->Name = L"MeasPower5";
			this->MeasPower5->ReadOnly = true;
			this->MeasPower5->Size = System::Drawing::Size(100, 20);
			this->MeasPower5->TabIndex = 85;
			this->MeasPower5->Text = L"0";
			// 
			// MeasPower4
			// 
			this->MeasPower4->Location = System::Drawing::Point(447, 292);
			this->MeasPower4->Name = L"MeasPower4";
			this->MeasPower4->ReadOnly = true;
			this->MeasPower4->Size = System::Drawing::Size(100, 20);
			this->MeasPower4->TabIndex = 88;
			this->MeasPower4->Text = L"0";
			// 
			// MeasLO3
			// 
			this->MeasLO3->Location = System::Drawing::Point(341, 370);
			this->MeasLO3->Name = L"MeasLO3";
			this->MeasLO3->ReadOnly = true;
			this->MeasLO3->Size = System::Drawing::Size(100, 20);
			this->MeasLO3->TabIndex = 93;
			this->MeasLO3->Text = L"0";
			// 
			// MeasLumFlux3
			// 
			this->MeasLumFlux3->Location = System::Drawing::Point(341, 344);
			this->MeasLumFlux3->Name = L"MeasLumFlux3";
			this->MeasLumFlux3->ReadOnly = true;
			this->MeasLumFlux3->Size = System::Drawing::Size(100, 20);
			this->MeasLumFlux3->TabIndex = 92;
			this->MeasLumFlux3->Text = L"0";
			// 
			// MeasAmp5
			// 
			this->MeasAmp5->Location = System::Drawing::Point(553, 266);
			this->MeasAmp5->Name = L"MeasAmp5";
			this->MeasAmp5->ReadOnly = true;
			this->MeasAmp5->Size = System::Drawing::Size(100, 20);
			this->MeasAmp5->TabIndex = 84;
			this->MeasAmp5->Text = L"0";
			// 
			// MeasPower3
			// 
			this->MeasPower3->Location = System::Drawing::Point(341, 292);
			this->MeasPower3->Name = L"MeasPower3";
			this->MeasPower3->ReadOnly = true;
			this->MeasPower3->Size = System::Drawing::Size(100, 20);
			this->MeasPower3->TabIndex = 91;
			this->MeasPower3->Text = L"0";
			// 
			// MeasLO2
			// 
			this->MeasLO2->Location = System::Drawing::Point(235, 370);
			this->MeasLO2->Name = L"MeasLO2";
			this->MeasLO2->ReadOnly = true;
			this->MeasLO2->Size = System::Drawing::Size(100, 20);
			this->MeasLO2->TabIndex = 95;
			this->MeasLO2->Text = L"0";
			// 
			// MeasLumFlux2
			// 
			this->MeasLumFlux2->Location = System::Drawing::Point(235, 344);
			this->MeasLumFlux2->Name = L"MeasLumFlux2";
			this->MeasLumFlux2->ReadOnly = true;
			this->MeasLumFlux2->Size = System::Drawing::Size(100, 20);
			this->MeasLumFlux2->TabIndex = 97;
			this->MeasLumFlux2->Text = L"0";
			// 
			// MeasAmp4
			// 
			this->MeasAmp4->Location = System::Drawing::Point(447, 266);
			this->MeasAmp4->Name = L"MeasAmp4";
			this->MeasAmp4->ReadOnly = true;
			this->MeasAmp4->Size = System::Drawing::Size(100, 20);
			this->MeasAmp4->TabIndex = 87;
			this->MeasAmp4->Text = L"0";
			// 
			// MeasPower2
			// 
			this->MeasPower2->Location = System::Drawing::Point(235, 292);
			this->MeasPower2->Name = L"MeasPower2";
			this->MeasPower2->ReadOnly = true;
			this->MeasPower2->Size = System::Drawing::Size(100, 20);
			this->MeasPower2->TabIndex = 96;
			this->MeasPower2->Text = L"0";
			// 
			// MeasAmp3
			// 
			this->MeasAmp3->Location = System::Drawing::Point(341, 266);
			this->MeasAmp3->Name = L"MeasAmp3";
			this->MeasAmp3->ReadOnly = true;
			this->MeasAmp3->Size = System::Drawing::Size(100, 20);
			this->MeasAmp3->TabIndex = 94;
			this->MeasAmp3->Text = L"0";
			// 
			// MeasAmp2
			// 
			this->MeasAmp2->Location = System::Drawing::Point(235, 266);
			this->MeasAmp2->Name = L"MeasAmp2";
			this->MeasAmp2->ReadOnly = true;
			this->MeasAmp2->Size = System::Drawing::Size(100, 20);
			this->MeasAmp2->TabIndex = 98;
			this->MeasAmp2->Text = L"0";
			// 
			// MeasIll5
			// 
			this->MeasIll5->Location = System::Drawing::Point(553, 318);
			this->MeasIll5->Name = L"MeasIll5";
			this->MeasIll5->ReadOnly = true;
			this->MeasIll5->Size = System::Drawing::Size(100, 20);
			this->MeasIll5->TabIndex = 78;
			this->MeasIll5->Text = L"0";
			// 
			// MeasIll4
			// 
			this->MeasIll4->Location = System::Drawing::Point(447, 318);
			this->MeasIll4->Name = L"MeasIll4";
			this->MeasIll4->ReadOnly = true;
			this->MeasIll4->Size = System::Drawing::Size(100, 20);
			this->MeasIll4->TabIndex = 79;
			this->MeasIll4->Text = L"0";
			// 
			// MeasIll3
			// 
			this->MeasIll3->Location = System::Drawing::Point(341, 318);
			this->MeasIll3->Name = L"MeasIll3";
			this->MeasIll3->ReadOnly = true;
			this->MeasIll3->Size = System::Drawing::Size(100, 20);
			this->MeasIll3->TabIndex = 77;
			this->MeasIll3->Text = L"0";
			// 
			// MeasIll2
			// 
			this->MeasIll2->Location = System::Drawing::Point(235, 318);
			this->MeasIll2->Name = L"MeasIll2";
			this->MeasIll2->ReadOnly = true;
			this->MeasIll2->Size = System::Drawing::Size(100, 20);
			this->MeasIll2->TabIndex = 65;
			this->MeasIll2->Text = L"0";
			// 
			// MeasRibble5
			// 
			this->MeasRibble5->Location = System::Drawing::Point(553, 396);
			this->MeasRibble5->Name = L"MeasRibble5";
			this->MeasRibble5->ReadOnly = true;
			this->MeasRibble5->Size = System::Drawing::Size(100, 20);
			this->MeasRibble5->TabIndex = 76;
			this->MeasRibble5->Text = L"0";
			// 
			// MeasRibble4
			// 
			this->MeasRibble4->Location = System::Drawing::Point(447, 396);
			this->MeasRibble4->Name = L"MeasRibble4";
			this->MeasRibble4->ReadOnly = true;
			this->MeasRibble4->Size = System::Drawing::Size(100, 20);
			this->MeasRibble4->TabIndex = 75;
			this->MeasRibble4->Text = L"0";
			// 
			// MeasRibble3
			// 
			this->MeasRibble3->Location = System::Drawing::Point(341, 396);
			this->MeasRibble3->Name = L"MeasRibble3";
			this->MeasRibble3->ReadOnly = true;
			this->MeasRibble3->Size = System::Drawing::Size(100, 20);
			this->MeasRibble3->TabIndex = 74;
			this->MeasRibble3->Text = L"0";
			// 
			// MeasRibble2
			// 
			this->MeasRibble2->Location = System::Drawing::Point(235, 396);
			this->MeasRibble2->Name = L"MeasRibble2";
			this->MeasRibble2->ReadOnly = true;
			this->MeasRibble2->Size = System::Drawing::Size(100, 20);
			this->MeasRibble2->TabIndex = 73;
			this->MeasRibble2->Text = L"0";
			// 
			// MeasLO1
			// 
			this->MeasLO1->Location = System::Drawing::Point(129, 370);
			this->MeasLO1->Name = L"MeasLO1";
			this->MeasLO1->ReadOnly = true;
			this->MeasLO1->Size = System::Drawing::Size(100, 20);
			this->MeasLO1->TabIndex = 70;
			this->MeasLO1->Text = L"0";
			// 
			// MeasLumFlux1
			// 
			this->MeasLumFlux1->Location = System::Drawing::Point(129, 344);
			this->MeasLumFlux1->Name = L"MeasLumFlux1";
			this->MeasLumFlux1->ReadOnly = true;
			this->MeasLumFlux1->Size = System::Drawing::Size(100, 20);
			this->MeasLumFlux1->TabIndex = 69;
			this->MeasLumFlux1->Text = L"0";
			// 
			// MeasRibble1
			// 
			this->MeasRibble1->Location = System::Drawing::Point(129, 396);
			this->MeasRibble1->Name = L"MeasRibble1";
			this->MeasRibble1->ReadOnly = true;
			this->MeasRibble1->Size = System::Drawing::Size(100, 20);
			this->MeasRibble1->TabIndex = 72;
			this->MeasRibble1->Text = L"0";
			// 
			// MeasPower1
			// 
			this->MeasPower1->Location = System::Drawing::Point(129, 292);
			this->MeasPower1->Name = L"MeasPower1";
			this->MeasPower1->ReadOnly = true;
			this->MeasPower1->Size = System::Drawing::Size(100, 20);
			this->MeasPower1->TabIndex = 67;
			this->MeasPower1->Text = L"0";
			// 
			// MeasIll1
			// 
			this->MeasIll1->Location = System::Drawing::Point(129, 318);
			this->MeasIll1->Name = L"MeasIll1";
			this->MeasIll1->ReadOnly = true;
			this->MeasIll1->Size = System::Drawing::Size(100, 20);
			this->MeasIll1->TabIndex = 71;
			this->MeasIll1->Text = L"0";
			// 
			// MeasAmp1
			// 
			this->MeasAmp1->Location = System::Drawing::Point(129, 266);
			this->MeasAmp1->Name = L"MeasAmp1";
			this->MeasAmp1->ReadOnly = true;
			this->MeasAmp1->Size = System::Drawing::Size(100, 20);
			this->MeasAmp1->TabIndex = 68;
			this->MeasAmp1->Text = L"0";
			// 
			// MeasVoltage1
			// 
			this->MeasVoltage1->Location = System::Drawing::Point(129, 240);
			this->MeasVoltage1->Name = L"MeasVoltage1";
			this->MeasVoltage1->ReadOnly = true;
			this->MeasVoltage1->Size = System::Drawing::Size(100, 20);
			this->MeasVoltage1->TabIndex = 66;
			this->MeasVoltage1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Location = System::Drawing::Point(659, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 53;
			this->label2->Text = L"лм/Вт";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Location = System::Drawing::Point(659, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 52;
			this->label3->Text = L"лм";
			// 
			// RibbleLabel1
			// 
			this->RibbleLabel1->AutoSize = true;
			this->RibbleLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->RibbleLabel1->Location = System::Drawing::Point(659, 399);
			this->RibbleLabel1->Name = L"RibbleLabel1";
			this->RibbleLabel1->Size = System::Drawing::Size(15, 13);
			this->RibbleLabel1->TabIndex = 51;
			this->RibbleLabel1->Text = L"%";
			// 
			// RibbleLabel
			// 
			this->RibbleLabel->AutoSize = true;
			this->RibbleLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->RibbleLabel->Location = System::Drawing::Point(12, 399);
			this->RibbleLabel->Name = L"RibbleLabel";
			this->RibbleLabel->Size = System::Drawing::Size(96, 13);
			this->RibbleLabel->TabIndex = 54;
			this->RibbleLabel->Text = L"Коэф. пульсации:";
			// 
			// IllLabel1
			// 
			this->IllLabel1->AutoSize = true;
			this->IllLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->IllLabel1->Location = System::Drawing::Point(659, 321);
			this->IllLabel1->Name = L"IllLabel1";
			this->IllLabel1->Size = System::Drawing::Size(25, 13);
			this->IllLabel1->TabIndex = 55;
			this->IllLabel1->Text = L"клк";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Location = System::Drawing::Point(12, 373);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Световая отдача:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Location = System::Drawing::Point(12, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 58;
			this->label5->Text = L"Световой поток:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Default;
			this->label6->Location = System::Drawing::Point(12, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 13);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Мощность:";
			// 
			// IllLabel
			// 
			this->IllLabel->AutoSize = true;
			this->IllLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->IllLabel->Location = System::Drawing::Point(12, 321);
			this->IllLabel->Name = L"IllLabel";
			this->IllLabel->Size = System::Drawing::Size(86, 13);
			this->IllLabel->TabIndex = 56;
			this->IllLabel->Text = L"Освещенность:";
			// 
			// AmpLabel1
			// 
			this->AmpLabel1->AutoSize = true;
			this->AmpLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->AmpLabel1->Location = System::Drawing::Point(659, 269);
			this->AmpLabel1->Name = L"AmpLabel1";
			this->AmpLabel1->Size = System::Drawing::Size(14, 13);
			this->AmpLabel1->TabIndex = 64;
			this->AmpLabel1->Text = L"А";
			// 
			// AmpLabel
			// 
			this->AmpLabel->AutoSize = true;
			this->AmpLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->AmpLabel->Location = System::Drawing::Point(12, 269);
			this->AmpLabel->Name = L"AmpLabel";
			this->AmpLabel->Size = System::Drawing::Size(61, 13);
			this->AmpLabel->TabIndex = 60;
			this->AmpLabel->Text = L"Сила тока:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Default;
			this->label7->Location = System::Drawing::Point(659, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 61;
			this->label7->Text = L"Вт";
			// 
			// VoltageLabel1
			// 
			this->VoltageLabel1->AutoSize = true;
			this->VoltageLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->VoltageLabel1->Location = System::Drawing::Point(659, 243);
			this->VoltageLabel1->Name = L"VoltageLabel1";
			this->VoltageLabel1->Size = System::Drawing::Size(14, 13);
			this->VoltageLabel1->TabIndex = 62;
			this->VoltageLabel1->Text = L"В";
			// 
			// VoltageLabel
			// 
			this->VoltageLabel->AutoSize = true;
			this->VoltageLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->VoltageLabel->Location = System::Drawing::Point(12, 243);
			this->VoltageLabel->Name = L"VoltageLabel";
			this->VoltageLabel->Size = System::Drawing::Size(74, 13);
			this->VoltageLabel->TabIndex = 63;
			this->VoltageLabel->Text = L"Напряжение:";
			// 
			// Resume
			// 
			this->Resume->AutoSize = true;
			this->Resume->Location = System::Drawing::Point(12, 430);
			this->Resume->Name = L"Resume";
			this->Resume->Size = System::Drawing::Size(324, 13);
			this->Resume->TabIndex = 101;
			this->Resume->Text = L"Мощность, наиболее близкую к заявленной, имеет лампочка:";
			// 
			// Res1
			// 
			this->Res1->AutoSize = true;
			this->Res1->Location = System::Drawing::Point(342, 430);
			this->Res1->Name = L"Res1";
			this->Res1->Size = System::Drawing::Size(14, 13);
			this->Res1->TabIndex = 102;
			this->Res1->Text = L"X";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 450);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 13);
			this->label1->TabIndex = 101;
			this->label1->Text = L"Световой поток, наиболее близкий к заявленному, имеет лампочка:";
			// 
			// Res2
			// 
			this->Res2->AutoSize = true;
			this->Res2->Location = System::Drawing::Point(375, 450);
			this->Res2->Name = L"Res2";
			this->Res2->Size = System::Drawing::Size(14, 13);
			this->Res2->TabIndex = 102;
			this->Res2->Text = L"X";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 470);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(356, 13);
			this->label9->TabIndex = 101;
			this->label9->Text = L"Световую отдачу, наиболее близкую к заявленной, имеет лампочка:";
			// 
			// Res3
			// 
			this->Res3->AutoSize = true;
			this->Res3->Location = System::Drawing::Point(374, 470);
			this->Res3->Name = L"Res3";
			this->Res3->Size = System::Drawing::Size(14, 13);
			this->Res3->TabIndex = 102;
			this->Res3->Text = L"X";
			// 
			// Task1Window3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 505);
			this->Controls->Add(this->Res3);
			this->Controls->Add(this->Res2);
			this->Controls->Add(this->Res1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Resume);
			this->Controls->Add(this->MeasVoltage5);
			this->Controls->Add(this->MeasVoltage4);
			this->Controls->Add(this->MeasVoltage3);
			this->Controls->Add(this->MeasVoltage2);
			this->Controls->Add(this->MeasLO5);
			this->Controls->Add(this->MeasLumFlux5);
			this->Controls->Add(this->MeasLO4);
			this->Controls->Add(this->MeasLumFlux4);
			this->Controls->Add(this->MeasPower5);
			this->Controls->Add(this->MeasPower4);
			this->Controls->Add(this->MeasLO3);
			this->Controls->Add(this->MeasLumFlux3);
			this->Controls->Add(this->MeasAmp5);
			this->Controls->Add(this->MeasPower3);
			this->Controls->Add(this->MeasLO2);
			this->Controls->Add(this->MeasLumFlux2);
			this->Controls->Add(this->MeasAmp4);
			this->Controls->Add(this->MeasPower2);
			this->Controls->Add(this->MeasAmp3);
			this->Controls->Add(this->MeasAmp2);
			this->Controls->Add(this->MeasIll5);
			this->Controls->Add(this->MeasIll4);
			this->Controls->Add(this->MeasIll3);
			this->Controls->Add(this->MeasIll2);
			this->Controls->Add(this->MeasRibble5);
			this->Controls->Add(this->MeasRibble4);
			this->Controls->Add(this->MeasRibble3);
			this->Controls->Add(this->MeasRibble2);
			this->Controls->Add(this->MeasLO1);
			this->Controls->Add(this->MeasLumFlux1);
			this->Controls->Add(this->MeasRibble1);
			this->Controls->Add(this->MeasPower1);
			this->Controls->Add(this->MeasIll1);
			this->Controls->Add(this->MeasAmp1);
			this->Controls->Add(this->MeasVoltage1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->RibbleLabel1);
			this->Controls->Add(this->RibbleLabel);
			this->Controls->Add(this->IllLabel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->IllLabel);
			this->Controls->Add(this->AmpLabel1);
			this->Controls->Add(this->AmpLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->VoltageLabel1);
			this->Controls->Add(this->VoltageLabel);
			this->Controls->Add(this->Win2Label);
			this->Controls->Add(this->Win1Label);
			this->Controls->Add(this->Type5);
			this->Controls->Add(this->Name5);
			this->Controls->Add(this->Type4);
			this->Controls->Add(this->Name4);
			this->Controls->Add(this->Type3);
			this->Controls->Add(this->Name3);
			this->Controls->Add(this->Type2);
			this->Controls->Add(this->Name2);
			this->Controls->Add(this->Cost5);
			this->Controls->Add(this->Cost4);
			this->Controls->Add(this->Cost3);
			this->Controls->Add(this->Cost2);
			this->Controls->Add(this->DeclPower5);
			this->Controls->Add(this->DeclPower4);
			this->Controls->Add(this->DeclPower3);
			this->Controls->Add(this->DeclPower2);
			this->Controls->Add(this->DeclLO5);
			this->Controls->Add(this->DeclLumFlux5);
			this->Controls->Add(this->DeclLO4);
			this->Controls->Add(this->DeclLumFlux4);
			this->Controls->Add(this->DeclLO3);
			this->Controls->Add(this->DeclLumFlux3);
			this->Controls->Add(this->DeclLO2);
			this->Controls->Add(this->DeclLumFlux2);
			this->Controls->Add(this->DeclDur5);
			this->Controls->Add(this->DeclDur4);
			this->Controls->Add(this->DeclDur3);
			this->Controls->Add(this->DeclDur2);
			this->Controls->Add(this->DeclDur1);
			this->Controls->Add(this->DeclLO1);
			this->Controls->Add(this->DeclLumFlux1);
			this->Controls->Add(this->DeclPower1);
			this->Controls->Add(this->Cost1);
			this->Controls->Add(this->Type1);
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
			this->MinimumSize = System::Drawing::Size(720, 500);
			this->Name = L"Task1Window3";
			this->Text = L"Вывести таблицы - КСР";
			this->Load += gcnew System::EventHandler(this, &Task1Window3::Task1Window3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Task1Window3_Load(System::Object^ sender, System::EventArgs^ e);
};
}
