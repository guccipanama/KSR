#pragma once
#include "LampsAndRoom.h"
#include "Graph.h"

namespace KSR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task2Window2
	/// </summary>
	public ref class Task2Window2 : public System::Windows::Forms::Form
	{
	public:
		Task2Window2(void)
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
		~Task2Window2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:














	private: System::Windows::Forms::Label^ Win2Label;








	private: System::Windows::Forms::Label^ CostLabel1;
	private: System::Windows::Forms::Label^ CostLabel;
	private: System::Windows::Forms::Label^ NeedelIllLabel;

	private: System::Windows::Forms::Label^ RoomNameLabel;
	private: System::Windows::Forms::TextBox^ Hc;


	private: System::Windows::Forms::TextBox^ C;
	private: System::Windows::Forms::TextBox^ Hp;


	private: System::Windows::Forms::TextBox^ B;

	private: System::Windows::Forms::TextBox^ A;

	private: System::Windows::Forms::TextBox^ RoomName;
	private: System::Windows::Forms::TextBox^ NeededIll;
	private: System::Windows::Forms::TextBox^ Na1;
	private: System::Windows::Forms::TextBox^ Na2;
	private: System::Windows::Forms::TextBox^ Na3;
	private: System::Windows::Forms::TextBox^ Na4;
	private: System::Windows::Forms::TextBox^ Na5;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ MF;

	private: System::Windows::Forms::TextBox^ H;
	private: System::Windows::Forms::TextBox^ S;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ I;
	private: System::Windows::Forms::TextBox^ Pst;


	private: System::Windows::Forms::TextBox^ Mu;
	private: System::Windows::Forms::TextBox^ Ppot;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Ppol;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ Nb1;
private: System::Windows::Forms::TextBox^ Nb2;
private: System::Windows::Forms::TextBox^ Nb3;
private: System::Windows::Forms::TextBox^ Nb4;
private: System::Windows::Forms::TextBox^ Nb5;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ N1;
private: System::Windows::Forms::TextBox^ Nn1;


private: System::Windows::Forms::TextBox^ N2;
private: System::Windows::Forms::TextBox^ Nn2;


private: System::Windows::Forms::TextBox^ N3;
private: System::Windows::Forms::TextBox^ Nn3;


private: System::Windows::Forms::TextBox^ N4;
private: System::Windows::Forms::TextBox^ Nn4;


private: System::Windows::Forms::TextBox^ N5;
private: System::Windows::Forms::TextBox^ Nn5;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ MinFlux1;
private: System::Windows::Forms::TextBox^ Pow1;




private: System::Windows::Forms::TextBox^ PowOne1;
private: System::Windows::Forms::TextBox^ PurchaseCost1;




private: System::Windows::Forms::TextBox^ MinFlux2;
private: System::Windows::Forms::TextBox^ Pow2;


private: System::Windows::Forms::TextBox^ PowOne2;
private: System::Windows::Forms::TextBox^ PurchaseCost2;



private: System::Windows::Forms::TextBox^ MinFlux3;
private: System::Windows::Forms::TextBox^ Pow3;


private: System::Windows::Forms::TextBox^ PowOne3;
private: System::Windows::Forms::TextBox^ PurchaseCost3;



private: System::Windows::Forms::TextBox^ MinFlux4;
private: System::Windows::Forms::TextBox^ Pow4;


private: System::Windows::Forms::TextBox^ PowOne4;
private: System::Windows::Forms::TextBox^ PurchaseCost4;



private: System::Windows::Forms::TextBox^ MinFlux5;
private: System::Windows::Forms::TextBox^ Pow5;


private: System::Windows::Forms::TextBox^ PowOne5;
private: System::Windows::Forms::TextBox^ PurchaseCost5;



	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ ElecCost1;
private: System::Windows::Forms::TextBox^ Cost1;


private: System::Windows::Forms::TextBox^ ElecCost2;
private: System::Windows::Forms::TextBox^ Cost2;


private: System::Windows::Forms::TextBox^ ElecCost3;
private: System::Windows::Forms::TextBox^ Cost3;


private: System::Windows::Forms::TextBox^ ElecCost4;
private: System::Windows::Forms::TextBox^ Cost4;


private: System::Windows::Forms::TextBox^ ElecCost5;
private: System::Windows::Forms::TextBox^ Cost5;


private: System::Windows::Forms::TextBox^ Name1;
private: System::Windows::Forms::TextBox^ Name2;
private: System::Windows::Forms::TextBox^ Name3;
private: System::Windows::Forms::TextBox^ Name4;
private: System::Windows::Forms::TextBox^ Name5;





private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ Res;

private: System::Windows::Forms::Label^ RejLamps;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task2Window2::typeid));
			this->Win2Label = (gcnew System::Windows::Forms::Label());
			this->CostLabel1 = (gcnew System::Windows::Forms::Label());
			this->CostLabel = (gcnew System::Windows::Forms::Label());
			this->NeedelIllLabel = (gcnew System::Windows::Forms::Label());
			this->RoomNameLabel = (gcnew System::Windows::Forms::Label());
			this->Hc = (gcnew System::Windows::Forms::TextBox());
			this->C = (gcnew System::Windows::Forms::TextBox());
			this->Hp = (gcnew System::Windows::Forms::TextBox());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->RoomName = (gcnew System::Windows::Forms::TextBox());
			this->NeededIll = (gcnew System::Windows::Forms::TextBox());
			this->Na1 = (gcnew System::Windows::Forms::TextBox());
			this->Na2 = (gcnew System::Windows::Forms::TextBox());
			this->Na3 = (gcnew System::Windows::Forms::TextBox());
			this->Na4 = (gcnew System::Windows::Forms::TextBox());
			this->Na5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->MF = (gcnew System::Windows::Forms::TextBox());
			this->H = (gcnew System::Windows::Forms::TextBox());
			this->S = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->I = (gcnew System::Windows::Forms::TextBox());
			this->Pst = (gcnew System::Windows::Forms::TextBox());
			this->Mu = (gcnew System::Windows::Forms::TextBox());
			this->Ppot = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Ppol = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Nb1 = (gcnew System::Windows::Forms::TextBox());
			this->Nb2 = (gcnew System::Windows::Forms::TextBox());
			this->Nb3 = (gcnew System::Windows::Forms::TextBox());
			this->Nb4 = (gcnew System::Windows::Forms::TextBox());
			this->Nb5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->N1 = (gcnew System::Windows::Forms::TextBox());
			this->Nn1 = (gcnew System::Windows::Forms::TextBox());
			this->N2 = (gcnew System::Windows::Forms::TextBox());
			this->Nn2 = (gcnew System::Windows::Forms::TextBox());
			this->N3 = (gcnew System::Windows::Forms::TextBox());
			this->Nn3 = (gcnew System::Windows::Forms::TextBox());
			this->N4 = (gcnew System::Windows::Forms::TextBox());
			this->Nn4 = (gcnew System::Windows::Forms::TextBox());
			this->N5 = (gcnew System::Windows::Forms::TextBox());
			this->Nn5 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->MinFlux1 = (gcnew System::Windows::Forms::TextBox());
			this->Pow1 = (gcnew System::Windows::Forms::TextBox());
			this->PowOne1 = (gcnew System::Windows::Forms::TextBox());
			this->PurchaseCost1 = (gcnew System::Windows::Forms::TextBox());
			this->MinFlux2 = (gcnew System::Windows::Forms::TextBox());
			this->Pow2 = (gcnew System::Windows::Forms::TextBox());
			this->PowOne2 = (gcnew System::Windows::Forms::TextBox());
			this->PurchaseCost2 = (gcnew System::Windows::Forms::TextBox());
			this->MinFlux3 = (gcnew System::Windows::Forms::TextBox());
			this->Pow3 = (gcnew System::Windows::Forms::TextBox());
			this->PowOne3 = (gcnew System::Windows::Forms::TextBox());
			this->PurchaseCost3 = (gcnew System::Windows::Forms::TextBox());
			this->MinFlux4 = (gcnew System::Windows::Forms::TextBox());
			this->Pow4 = (gcnew System::Windows::Forms::TextBox());
			this->PowOne4 = (gcnew System::Windows::Forms::TextBox());
			this->PurchaseCost4 = (gcnew System::Windows::Forms::TextBox());
			this->MinFlux5 = (gcnew System::Windows::Forms::TextBox());
			this->Pow5 = (gcnew System::Windows::Forms::TextBox());
			this->PowOne5 = (gcnew System::Windows::Forms::TextBox());
			this->PurchaseCost5 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->ElecCost1 = (gcnew System::Windows::Forms::TextBox());
			this->Cost1 = (gcnew System::Windows::Forms::TextBox());
			this->ElecCost2 = (gcnew System::Windows::Forms::TextBox());
			this->Cost2 = (gcnew System::Windows::Forms::TextBox());
			this->ElecCost3 = (gcnew System::Windows::Forms::TextBox());
			this->Cost3 = (gcnew System::Windows::Forms::TextBox());
			this->ElecCost4 = (gcnew System::Windows::Forms::TextBox());
			this->Cost4 = (gcnew System::Windows::Forms::TextBox());
			this->ElecCost5 = (gcnew System::Windows::Forms::TextBox());
			this->Cost5 = (gcnew System::Windows::Forms::TextBox());
			this->Name1 = (gcnew System::Windows::Forms::TextBox());
			this->Name2 = (gcnew System::Windows::Forms::TextBox());
			this->Name3 = (gcnew System::Windows::Forms::TextBox());
			this->Name4 = (gcnew System::Windows::Forms::TextBox());
			this->Name5 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->Res = (gcnew System::Windows::Forms::Label());
			this->RejLamps = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Win2Label
			// 
			this->Win2Label->AutoSize = true;
			this->Win2Label->Location = System::Drawing::Point(12, 142);
			this->Win2Label->Name = L"Win2Label";
			this->Win2Label->Size = System::Drawing::Size(145, 13);
			this->Win2Label->TabIndex = 151;
			this->Win2Label->Text = L"Уровень раб. поверхности:";
			// 
			// CostLabel1
			// 
			this->CostLabel1->AutoSize = true;
			this->CostLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->CostLabel1->Location = System::Drawing::Point(12, 456);
			this->CostLabel1->Name = L"CostLabel1";
			this->CostLabel1->Size = System::Drawing::Size(133, 13);
			this->CostLabel1->TabIndex = 112;
			this->CostLabel1->Text = L"Число светильников, Na";
			// 
			// CostLabel
			// 
			this->CostLabel->AutoSize = true;
			this->CostLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->CostLabel->Location = System::Drawing::Point(12, 64);
			this->CostLabel->Name = L"CostLabel";
			this->CostLabel->Size = System::Drawing::Size(160, 13);
			this->CostLabel->TabIndex = 113;
			this->CostLabel->Text = L"Габариты помещения, длина: ";
			// 
			// NeedelIllLabel
			// 
			this->NeedelIllLabel->AutoSize = true;
			this->NeedelIllLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->NeedelIllLabel->Location = System::Drawing::Point(12, 38);
			this->NeedelIllLabel->Name = L"NeedelIllLabel";
			this->NeedelIllLabel->Size = System::Drawing::Size(143, 13);
			this->NeedelIllLabel->TabIndex = 109;
			this->NeedelIllLabel->Text = L"Требуемая освещенность:";
			// 
			// RoomNameLabel
			// 
			this->RoomNameLabel->AutoSize = true;
			this->RoomNameLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->RoomNameLabel->Location = System::Drawing::Point(12, 12);
			this->RoomNameLabel->Name = L"RoomNameLabel";
			this->RoomNameLabel->Size = System::Drawing::Size(122, 13);
			this->RoomNameLabel->TabIndex = 103;
			this->RoomNameLabel->Text = L"Название помещения:";
			// 
			// Hc
			// 
			this->Hc->Location = System::Drawing::Point(244, 165);
			this->Hc->Name = L"Hc";
			this->Hc->ReadOnly = true;
			this->Hc->Size = System::Drawing::Size(334, 20);
			this->Hc->TabIndex = 121;
			this->Hc->Text = L"0";
			// 
			// C
			// 
			this->C->Location = System::Drawing::Point(244, 113);
			this->C->Name = L"C";
			this->C->ReadOnly = true;
			this->C->Size = System::Drawing::Size(334, 20);
			this->C->TabIndex = 115;
			this->C->Text = L"0";
			// 
			// Hp
			// 
			this->Hp->Location = System::Drawing::Point(244, 139);
			this->Hp->Name = L"Hp";
			this->Hp->ReadOnly = true;
			this->Hp->Size = System::Drawing::Size(334, 20);
			this->Hp->TabIndex = 127;
			this->Hp->Text = L"0";
			// 
			// B
			// 
			this->B->Location = System::Drawing::Point(244, 87);
			this->B->Name = L"B";
			this->B->ReadOnly = true;
			this->B->Size = System::Drawing::Size(334, 20);
			this->B->TabIndex = 144;
			this->B->Text = L"0";
			// 
			// A
			// 
			this->A->Location = System::Drawing::Point(244, 61);
			this->A->Name = L"A";
			this->A->ReadOnly = true;
			this->A->Size = System::Drawing::Size(334, 20);
			this->A->TabIndex = 140;
			this->A->Text = L"0";
			// 
			// RoomName
			// 
			this->RoomName->Location = System::Drawing::Point(244, 9);
			this->RoomName->Name = L"RoomName";
			this->RoomName->ReadOnly = true;
			this->RoomName->Size = System::Drawing::Size(334, 20);
			this->RoomName->TabIndex = 135;
			this->RoomName->Text = L"A";
			// 
			// NeededIll
			// 
			this->NeededIll->Location = System::Drawing::Point(244, 35);
			this->NeededIll->Name = L"NeededIll";
			this->NeededIll->ReadOnly = true;
			this->NeededIll->Size = System::Drawing::Size(334, 20);
			this->NeededIll->TabIndex = 136;
			this->NeededIll->Text = L"0";
			// 
			// Na1
			// 
			this->Na1->Location = System::Drawing::Point(244, 453);
			this->Na1->Name = L"Na1";
			this->Na1->ReadOnly = true;
			this->Na1->Size = System::Drawing::Size(62, 20);
			this->Na1->TabIndex = 167;
			// 
			// Na2
			// 
			this->Na2->Location = System::Drawing::Point(312, 453);
			this->Na2->Name = L"Na2";
			this->Na2->ReadOnly = true;
			this->Na2->Size = System::Drawing::Size(62, 20);
			this->Na2->TabIndex = 167;
			// 
			// Na3
			// 
			this->Na3->Location = System::Drawing::Point(380, 453);
			this->Na3->Name = L"Na3";
			this->Na3->ReadOnly = true;
			this->Na3->Size = System::Drawing::Size(62, 20);
			this->Na3->TabIndex = 167;
			// 
			// Na4
			// 
			this->Na4->Location = System::Drawing::Point(448, 453);
			this->Na4->Name = L"Na4";
			this->Na4->ReadOnly = true;
			this->Na4->Size = System::Drawing::Size(62, 20);
			this->Na4->TabIndex = 167;
			// 
			// Na5
			// 
			this->Na5->Location = System::Drawing::Point(516, 453);
			this->Na5->Name = L"Na5";
			this->Na5->ReadOnly = true;
			this->Na5->Size = System::Drawing::Size(62, 20);
			this->Na5->TabIndex = 167;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Location = System::Drawing::Point(12, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 13);
			this->label1->TabIndex = 113;
			this->label1->Text = L"Габариты помещения, ширина: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Default;
			this->label8->Location = System::Drawing::Point(12, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 13);
			this->label8->TabIndex = 113;
			this->label8->Text = L"Габариты помещения, высота:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 13);
			this->label9->TabIndex = 151;
			this->label9->Text = L"Высота свеса светильника:";
			// 
			// MF
			// 
			this->MF->Location = System::Drawing::Point(244, 243);
			this->MF->Name = L"MF";
			this->MF->ReadOnly = true;
			this->MF->Size = System::Drawing::Size(334, 20);
			this->MF->TabIndex = 121;
			this->MF->Text = L"0";
			// 
			// H
			// 
			this->H->Location = System::Drawing::Point(244, 191);
			this->H->Name = L"H";
			this->H->ReadOnly = true;
			this->H->Size = System::Drawing::Size(334, 20);
			this->H->TabIndex = 115;
			this->H->Text = L"0";
			// 
			// S
			// 
			this->S->Location = System::Drawing::Point(244, 217);
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Size = System::Drawing::Size(334, 20);
			this->S->TabIndex = 127;
			this->S->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 13);
			this->label5->TabIndex = 151;
			this->label5->Text = L"Высота подвеса светильников:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 13);
			this->label6->TabIndex = 151;
			this->label6->Text = L"Площадь помещения:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 246);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(171, 13);
			this->label10->TabIndex = 151;
			this->label10->Text = L"Коэффициент эксплуатации MF:";
			// 
			// I
			// 
			this->I->Location = System::Drawing::Point(244, 269);
			this->I->Name = L"I";
			this->I->ReadOnly = true;
			this->I->Size = System::Drawing::Size(334, 20);
			this->I->TabIndex = 121;
			this->I->Text = L"0";
			// 
			// Pst
			// 
			this->Pst->Location = System::Drawing::Point(244, 347);
			this->Pst->Name = L"Pst";
			this->Pst->ReadOnly = true;
			this->Pst->Size = System::Drawing::Size(334, 20);
			this->Pst->TabIndex = 121;
			this->Pst->Text = L"0";
			// 
			// Mu
			// 
			this->Mu->Location = System::Drawing::Point(244, 295);
			this->Mu->Name = L"Mu";
			this->Mu->ReadOnly = true;
			this->Mu->Size = System::Drawing::Size(334, 20);
			this->Mu->TabIndex = 115;
			this->Mu->Text = L"0";
			// 
			// Ppot
			// 
			this->Ppot->Location = System::Drawing::Point(244, 321);
			this->Ppot->Name = L"Ppot";
			this->Ppot->ReadOnly = true;
			this->Ppot->Size = System::Drawing::Size(334, 20);
			this->Ppot->TabIndex = 127;
			this->Ppot->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::Default;
			this->label11->Location = System::Drawing::Point(12, 272);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(138, 13);
			this->label11->TabIndex = 160;
			this->label11->Text = L"Показатель помещения i:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Default;
			this->label12->Location = System::Drawing::Point(12, 298);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(171, 13);
			this->label12->TabIndex = 160;
			this->label12->Text = L"Коэфф. исп. светового потока η";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Default;
			this->label13->Location = System::Drawing::Point(12, 324);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(138, 13);
			this->label13->TabIndex = 160;
			this->label13->Text = L"Коэфф. отражения, ρ пот.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Location = System::Drawing::Point(12, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 13);
			this->label4->TabIndex = 160;
			this->label4->Text = L"Коэфф. отражения, ρ ст.";
			// 
			// Ppol
			// 
			this->Ppol->Location = System::Drawing::Point(244, 373);
			this->Ppol->Name = L"Ppol";
			this->Ppol->ReadOnly = true;
			this->Ppol->Size = System::Drawing::Size(334, 20);
			this->Ppol->TabIndex = 121;
			this->Ppol->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Default;
			this->label14->Location = System::Drawing::Point(12, 376);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(139, 13);
			this->label14->TabIndex = 160;
			this->label14->Text = L"Коэфф. отражения, ρ пол.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Location = System::Drawing::Point(12, 482);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 13);
			this->label2->TabIndex = 112;
			this->label2->Text = L"Число светильников, Nb";
			// 
			// Nb1
			// 
			this->Nb1->Location = System::Drawing::Point(244, 479);
			this->Nb1->Name = L"Nb1";
			this->Nb1->ReadOnly = true;
			this->Nb1->Size = System::Drawing::Size(62, 20);
			this->Nb1->TabIndex = 167;
			// 
			// Nb2
			// 
			this->Nb2->Location = System::Drawing::Point(312, 479);
			this->Nb2->Name = L"Nb2";
			this->Nb2->ReadOnly = true;
			this->Nb2->Size = System::Drawing::Size(62, 20);
			this->Nb2->TabIndex = 167;
			// 
			// Nb3
			// 
			this->Nb3->Location = System::Drawing::Point(380, 479);
			this->Nb3->Name = L"Nb3";
			this->Nb3->ReadOnly = true;
			this->Nb3->Size = System::Drawing::Size(62, 20);
			this->Nb3->TabIndex = 167;
			// 
			// Nb4
			// 
			this->Nb4->Location = System::Drawing::Point(448, 479);
			this->Nb4->Name = L"Nb4";
			this->Nb4->ReadOnly = true;
			this->Nb4->Size = System::Drawing::Size(62, 20);
			this->Nb4->TabIndex = 167;
			// 
			// Nb5
			// 
			this->Nb5->Location = System::Drawing::Point(516, 479);
			this->Nb5->Name = L"Nb5";
			this->Nb5->ReadOnly = true;
			this->Nb5->Size = System::Drawing::Size(62, 20);
			this->Nb5->TabIndex = 167;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Location = System::Drawing::Point(12, 508);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 13);
			this->label3->TabIndex = 112;
			this->label3->Text = L"Число светильников, N";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Default;
			this->label7->Location = System::Drawing::Point(12, 534);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(214, 13);
			this->label7->TabIndex = 112;
			this->label7->Text = L"Число ламп в осветительной установке:";
			// 
			// N1
			// 
			this->N1->Location = System::Drawing::Point(244, 505);
			this->N1->Name = L"N1";
			this->N1->ReadOnly = true;
			this->N1->Size = System::Drawing::Size(62, 20);
			this->N1->TabIndex = 167;
			// 
			// Nn1
			// 
			this->Nn1->Location = System::Drawing::Point(244, 531);
			this->Nn1->Name = L"Nn1";
			this->Nn1->ReadOnly = true;
			this->Nn1->Size = System::Drawing::Size(62, 20);
			this->Nn1->TabIndex = 167;
			// 
			// N2
			// 
			this->N2->Location = System::Drawing::Point(312, 505);
			this->N2->Name = L"N2";
			this->N2->ReadOnly = true;
			this->N2->Size = System::Drawing::Size(62, 20);
			this->N2->TabIndex = 167;
			// 
			// Nn2
			// 
			this->Nn2->Location = System::Drawing::Point(312, 531);
			this->Nn2->Name = L"Nn2";
			this->Nn2->ReadOnly = true;
			this->Nn2->Size = System::Drawing::Size(62, 20);
			this->Nn2->TabIndex = 167;
			// 
			// N3
			// 
			this->N3->Location = System::Drawing::Point(380, 505);
			this->N3->Name = L"N3";
			this->N3->ReadOnly = true;
			this->N3->Size = System::Drawing::Size(62, 20);
			this->N3->TabIndex = 167;
			// 
			// Nn3
			// 
			this->Nn3->Location = System::Drawing::Point(380, 531);
			this->Nn3->Name = L"Nn3";
			this->Nn3->ReadOnly = true;
			this->Nn3->Size = System::Drawing::Size(62, 20);
			this->Nn3->TabIndex = 167;
			// 
			// N4
			// 
			this->N4->Location = System::Drawing::Point(448, 505);
			this->N4->Name = L"N4";
			this->N4->ReadOnly = true;
			this->N4->Size = System::Drawing::Size(62, 20);
			this->N4->TabIndex = 167;
			// 
			// Nn4
			// 
			this->Nn4->Location = System::Drawing::Point(448, 531);
			this->Nn4->Name = L"Nn4";
			this->Nn4->ReadOnly = true;
			this->Nn4->Size = System::Drawing::Size(62, 20);
			this->Nn4->TabIndex = 167;
			// 
			// N5
			// 
			this->N5->Location = System::Drawing::Point(516, 505);
			this->N5->Name = L"N5";
			this->N5->ReadOnly = true;
			this->N5->Size = System::Drawing::Size(62, 20);
			this->N5->TabIndex = 167;
			// 
			// Nn5
			// 
			this->Nn5->Location = System::Drawing::Point(516, 531);
			this->Nn5->Name = L"Nn5";
			this->Nn5->ReadOnly = true;
			this->Nn5->Size = System::Drawing::Size(62, 20);
			this->Nn5->TabIndex = 167;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Default;
			this->label15->Location = System::Drawing::Point(12, 560);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(183, 13);
			this->label15->TabIndex = 112;
			this->label15->Text = L"Мин. световой поток одной лампы";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Default;
			this->label16->Location = System::Drawing::Point(12, 612);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(194, 13);
			this->label16->TabIndex = 112;
			this->label16->Text = L"Мощность осветительной установки";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Cursor = System::Windows::Forms::Cursors::Default;
			this->label17->Location = System::Drawing::Point(12, 586);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(133, 13);
			this->label17->TabIndex = 112;
			this->label17->Text = L"Мощность одной лампы:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Cursor = System::Windows::Forms::Cursors::Default;
			this->label18->Location = System::Drawing::Point(12, 638);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(171, 13);
			this->label18->TabIndex = 112;
			this->label18->Text = L"Затраты на приобретение ламп:";
			// 
			// MinFlux1
			// 
			this->MinFlux1->Location = System::Drawing::Point(244, 557);
			this->MinFlux1->Name = L"MinFlux1";
			this->MinFlux1->ReadOnly = true;
			this->MinFlux1->Size = System::Drawing::Size(62, 20);
			this->MinFlux1->TabIndex = 167;
			// 
			// Pow1
			// 
			this->Pow1->Location = System::Drawing::Point(244, 609);
			this->Pow1->Name = L"Pow1";
			this->Pow1->ReadOnly = true;
			this->Pow1->Size = System::Drawing::Size(62, 20);
			this->Pow1->TabIndex = 167;
			// 
			// PowOne1
			// 
			this->PowOne1->Location = System::Drawing::Point(244, 583);
			this->PowOne1->Name = L"PowOne1";
			this->PowOne1->ReadOnly = true;
			this->PowOne1->Size = System::Drawing::Size(62, 20);
			this->PowOne1->TabIndex = 167;
			// 
			// PurchaseCost1
			// 
			this->PurchaseCost1->Location = System::Drawing::Point(244, 635);
			this->PurchaseCost1->Name = L"PurchaseCost1";
			this->PurchaseCost1->ReadOnly = true;
			this->PurchaseCost1->Size = System::Drawing::Size(62, 20);
			this->PurchaseCost1->TabIndex = 167;
			// 
			// MinFlux2
			// 
			this->MinFlux2->Location = System::Drawing::Point(312, 557);
			this->MinFlux2->Name = L"MinFlux2";
			this->MinFlux2->ReadOnly = true;
			this->MinFlux2->Size = System::Drawing::Size(62, 20);
			this->MinFlux2->TabIndex = 167;
			// 
			// Pow2
			// 
			this->Pow2->Location = System::Drawing::Point(312, 609);
			this->Pow2->Name = L"Pow2";
			this->Pow2->ReadOnly = true;
			this->Pow2->Size = System::Drawing::Size(62, 20);
			this->Pow2->TabIndex = 167;
			// 
			// PowOne2
			// 
			this->PowOne2->Location = System::Drawing::Point(312, 583);
			this->PowOne2->Name = L"PowOne2";
			this->PowOne2->ReadOnly = true;
			this->PowOne2->Size = System::Drawing::Size(62, 20);
			this->PowOne2->TabIndex = 167;
			// 
			// PurchaseCost2
			// 
			this->PurchaseCost2->Location = System::Drawing::Point(312, 635);
			this->PurchaseCost2->Name = L"PurchaseCost2";
			this->PurchaseCost2->ReadOnly = true;
			this->PurchaseCost2->Size = System::Drawing::Size(62, 20);
			this->PurchaseCost2->TabIndex = 167;
			// 
			// MinFlux3
			// 
			this->MinFlux3->Location = System::Drawing::Point(380, 557);
			this->MinFlux3->Name = L"MinFlux3";
			this->MinFlux3->ReadOnly = true;
			this->MinFlux3->Size = System::Drawing::Size(62, 20);
			this->MinFlux3->TabIndex = 167;
			// 
			// Pow3
			// 
			this->Pow3->Location = System::Drawing::Point(380, 609);
			this->Pow3->Name = L"Pow3";
			this->Pow3->ReadOnly = true;
			this->Pow3->Size = System::Drawing::Size(62, 20);
			this->Pow3->TabIndex = 167;
			// 
			// PowOne3
			// 
			this->PowOne3->Location = System::Drawing::Point(380, 583);
			this->PowOne3->Name = L"PowOne3";
			this->PowOne3->ReadOnly = true;
			this->PowOne3->Size = System::Drawing::Size(62, 20);
			this->PowOne3->TabIndex = 167;
			// 
			// PurchaseCost3
			// 
			this->PurchaseCost3->Location = System::Drawing::Point(380, 635);
			this->PurchaseCost3->Name = L"PurchaseCost3";
			this->PurchaseCost3->ReadOnly = true;
			this->PurchaseCost3->Size = System::Drawing::Size(62, 20);
			this->PurchaseCost3->TabIndex = 167;
			// 
			// MinFlux4
			// 
			this->MinFlux4->Location = System::Drawing::Point(448, 557);
			this->MinFlux4->Name = L"MinFlux4";
			this->MinFlux4->ReadOnly = true;
			this->MinFlux4->Size = System::Drawing::Size(62, 20);
			this->MinFlux4->TabIndex = 167;
			// 
			// Pow4
			// 
			this->Pow4->Location = System::Drawing::Point(448, 609);
			this->Pow4->Name = L"Pow4";
			this->Pow4->ReadOnly = true;
			this->Pow4->Size = System::Drawing::Size(62, 20);
			this->Pow4->TabIndex = 167;
			// 
			// PowOne4
			// 
			this->PowOne4->Location = System::Drawing::Point(448, 583);
			this->PowOne4->Name = L"PowOne4";
			this->PowOne4->ReadOnly = true;
			this->PowOne4->Size = System::Drawing::Size(62, 20);
			this->PowOne4->TabIndex = 167;
			// 
			// PurchaseCost4
			// 
			this->PurchaseCost4->Location = System::Drawing::Point(448, 635);
			this->PurchaseCost4->Name = L"PurchaseCost4";
			this->PurchaseCost4->ReadOnly = true;
			this->PurchaseCost4->Size = System::Drawing::Size(62, 20);
			this->PurchaseCost4->TabIndex = 167;
			// 
			// MinFlux5
			// 
			this->MinFlux5->Location = System::Drawing::Point(516, 557);
			this->MinFlux5->Name = L"MinFlux5";
			this->MinFlux5->ReadOnly = true;
			this->MinFlux5->Size = System::Drawing::Size(62, 20);
			this->MinFlux5->TabIndex = 167;
			// 
			// Pow5
			// 
			this->Pow5->Location = System::Drawing::Point(516, 609);
			this->Pow5->Name = L"Pow5";
			this->Pow5->ReadOnly = true;
			this->Pow5->Size = System::Drawing::Size(62, 20);
			this->Pow5->TabIndex = 167;
			// 
			// PowOne5
			// 
			this->PowOne5->Location = System::Drawing::Point(516, 583);
			this->PowOne5->Name = L"PowOne5";
			this->PowOne5->ReadOnly = true;
			this->PowOne5->Size = System::Drawing::Size(62, 20);
			this->PowOne5->TabIndex = 167;
			// 
			// PurchaseCost5
			// 
			this->PurchaseCost5->Location = System::Drawing::Point(516, 635);
			this->PurchaseCost5->Name = L"PurchaseCost5";
			this->PurchaseCost5->ReadOnly = true;
			this->PurchaseCost5->Size = System::Drawing::Size(62, 20);
			this->PurchaseCost5->TabIndex = 167;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Cursor = System::Windows::Forms::Cursors::Default;
			this->label19->Location = System::Drawing::Point(12, 664);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(155, 13);
			this->label19->TabIndex = 112;
			this->label19->Text = L"Затраты на электроэнергию:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Cursor = System::Windows::Forms::Cursors::Default;
			this->label20->Location = System::Drawing::Point(12, 690);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 13);
			this->label20->TabIndex = 112;
			this->label20->Text = L"Общие затраты:";
			// 
			// ElecCost1
			// 
			this->ElecCost1->Location = System::Drawing::Point(244, 661);
			this->ElecCost1->Name = L"ElecCost1";
			this->ElecCost1->ReadOnly = true;
			this->ElecCost1->Size = System::Drawing::Size(62, 20);
			this->ElecCost1->TabIndex = 167;
			// 
			// Cost1
			// 
			this->Cost1->Location = System::Drawing::Point(244, 687);
			this->Cost1->Name = L"Cost1";
			this->Cost1->ReadOnly = true;
			this->Cost1->Size = System::Drawing::Size(62, 20);
			this->Cost1->TabIndex = 167;
			// 
			// ElecCost2
			// 
			this->ElecCost2->Location = System::Drawing::Point(312, 661);
			this->ElecCost2->Name = L"ElecCost2";
			this->ElecCost2->ReadOnly = true;
			this->ElecCost2->Size = System::Drawing::Size(62, 20);
			this->ElecCost2->TabIndex = 167;
			// 
			// Cost2
			// 
			this->Cost2->Location = System::Drawing::Point(312, 687);
			this->Cost2->Name = L"Cost2";
			this->Cost2->ReadOnly = true;
			this->Cost2->Size = System::Drawing::Size(62, 20);
			this->Cost2->TabIndex = 167;
			// 
			// ElecCost3
			// 
			this->ElecCost3->Location = System::Drawing::Point(380, 661);
			this->ElecCost3->Name = L"ElecCost3";
			this->ElecCost3->ReadOnly = true;
			this->ElecCost3->Size = System::Drawing::Size(62, 20);
			this->ElecCost3->TabIndex = 167;
			// 
			// Cost3
			// 
			this->Cost3->Location = System::Drawing::Point(380, 687);
			this->Cost3->Name = L"Cost3";
			this->Cost3->ReadOnly = true;
			this->Cost3->Size = System::Drawing::Size(62, 20);
			this->Cost3->TabIndex = 167;
			// 
			// ElecCost4
			// 
			this->ElecCost4->Location = System::Drawing::Point(448, 661);
			this->ElecCost4->Name = L"ElecCost4";
			this->ElecCost4->ReadOnly = true;
			this->ElecCost4->Size = System::Drawing::Size(62, 20);
			this->ElecCost4->TabIndex = 167;
			// 
			// Cost4
			// 
			this->Cost4->Location = System::Drawing::Point(448, 687);
			this->Cost4->Name = L"Cost4";
			this->Cost4->ReadOnly = true;
			this->Cost4->Size = System::Drawing::Size(62, 20);
			this->Cost4->TabIndex = 167;
			// 
			// ElecCost5
			// 
			this->ElecCost5->Location = System::Drawing::Point(516, 661);
			this->ElecCost5->Name = L"ElecCost5";
			this->ElecCost5->ReadOnly = true;
			this->ElecCost5->Size = System::Drawing::Size(62, 20);
			this->ElecCost5->TabIndex = 167;
			// 
			// Cost5
			// 
			this->Cost5->Location = System::Drawing::Point(516, 687);
			this->Cost5->Name = L"Cost5";
			this->Cost5->ReadOnly = true;
			this->Cost5->Size = System::Drawing::Size(62, 20);
			this->Cost5->TabIndex = 167;
			// 
			// Name1
			// 
			this->Name1->Location = System::Drawing::Point(244, 427);
			this->Name1->Name = L"Name1";
			this->Name1->ReadOnly = true;
			this->Name1->Size = System::Drawing::Size(62, 20);
			this->Name1->TabIndex = 167;
			// 
			// Name2
			// 
			this->Name2->Location = System::Drawing::Point(312, 427);
			this->Name2->Name = L"Name2";
			this->Name2->ReadOnly = true;
			this->Name2->Size = System::Drawing::Size(62, 20);
			this->Name2->TabIndex = 167;
			// 
			// Name3
			// 
			this->Name3->Location = System::Drawing::Point(380, 427);
			this->Name3->Name = L"Name3";
			this->Name3->ReadOnly = true;
			this->Name3->Size = System::Drawing::Size(62, 20);
			this->Name3->TabIndex = 167;
			// 
			// Name4
			// 
			this->Name4->Location = System::Drawing::Point(448, 427);
			this->Name4->Name = L"Name4";
			this->Name4->ReadOnly = true;
			this->Name4->Size = System::Drawing::Size(62, 20);
			this->Name4->TabIndex = 167;
			// 
			// Name5
			// 
			this->Name5->Location = System::Drawing::Point(516, 427);
			this->Name5->Name = L"Name5";
			this->Name5->ReadOnly = true;
			this->Name5->Size = System::Drawing::Size(62, 20);
			this->Name5->TabIndex = 167;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Cursor = System::Windows::Forms::Cursors::Default;
			this->label21->Location = System::Drawing::Point(12, 430);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 13);
			this->label21->TabIndex = 112;
			this->label21->Text = L"Названия ламп:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Cursor = System::Windows::Forms::Cursors::Default;
			this->label22->Location = System::Drawing::Point(584, 38);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 13);
			this->label22->TabIndex = 109;
			this->label22->Text = L"лк";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Cursor = System::Windows::Forms::Cursors::Default;
			this->label23->Location = System::Drawing::Point(584, 64);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(15, 13);
			this->label23->TabIndex = 109;
			this->label23->Text = L"м";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Cursor = System::Windows::Forms::Cursors::Default;
			this->label24->Location = System::Drawing::Point(584, 90);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(15, 13);
			this->label24->TabIndex = 109;
			this->label24->Text = L"м";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Cursor = System::Windows::Forms::Cursors::Default;
			this->label25->Location = System::Drawing::Point(584, 116);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(15, 13);
			this->label25->TabIndex = 109;
			this->label25->Text = L"м";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Cursor = System::Windows::Forms::Cursors::Default;
			this->label26->Location = System::Drawing::Point(584, 142);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(15, 13);
			this->label26->TabIndex = 109;
			this->label26->Text = L"м";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Cursor = System::Windows::Forms::Cursors::Default;
			this->label27->Location = System::Drawing::Point(584, 168);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(15, 13);
			this->label27->TabIndex = 109;
			this->label27->Text = L"м";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Cursor = System::Windows::Forms::Cursors::Default;
			this->label28->Location = System::Drawing::Point(584, 194);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(15, 13);
			this->label28->TabIndex = 109;
			this->label28->Text = L"м";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Cursor = System::Windows::Forms::Cursors::Default;
			this->label29->Location = System::Drawing::Point(584, 220);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(18, 13);
			this->label29->TabIndex = 109;
			this->label29->Text = L"м²";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Cursor = System::Windows::Forms::Cursors::Default;
			this->label30->Location = System::Drawing::Point(584, 430);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(20, 13);
			this->label30->TabIndex = 109;
			this->label30->Text = L"шт";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Cursor = System::Windows::Forms::Cursors::Default;
			this->label31->Location = System::Drawing::Point(584, 456);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(20, 13);
			this->label31->TabIndex = 109;
			this->label31->Text = L"шт";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Cursor = System::Windows::Forms::Cursors::Default;
			this->label32->Location = System::Drawing::Point(584, 482);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(20, 13);
			this->label32->TabIndex = 109;
			this->label32->Text = L"шт";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Cursor = System::Windows::Forms::Cursors::Default;
			this->label33->Location = System::Drawing::Point(584, 508);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 13);
			this->label33->TabIndex = 109;
			this->label33->Text = L"шт";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Cursor = System::Windows::Forms::Cursors::Default;
			this->label34->Location = System::Drawing::Point(584, 534);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(20, 13);
			this->label34->TabIndex = 109;
			this->label34->Text = L"шт";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Cursor = System::Windows::Forms::Cursors::Default;
			this->label35->Location = System::Drawing::Point(584, 560);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(21, 13);
			this->label35->TabIndex = 109;
			this->label35->Text = L"лм";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Cursor = System::Windows::Forms::Cursors::Default;
			this->label36->Location = System::Drawing::Point(584, 586);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(19, 13);
			this->label36->TabIndex = 109;
			this->label36->Text = L"Вт";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Cursor = System::Windows::Forms::Cursors::Default;
			this->label37->Location = System::Drawing::Point(585, 612);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(25, 13);
			this->label37->TabIndex = 109;
			this->label37->Text = L"кВт";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Cursor = System::Windows::Forms::Cursors::Default;
			this->label38->Location = System::Drawing::Point(585, 638);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(27, 13);
			this->label38->TabIndex = 109;
			this->label38->Text = L"руб.";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Cursor = System::Windows::Forms::Cursors::Default;
			this->label39->Location = System::Drawing::Point(585, 664);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(27, 13);
			this->label39->TabIndex = 109;
			this->label39->Text = L"руб.";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Cursor = System::Windows::Forms::Cursors::Default;
			this->label40->Location = System::Drawing::Point(585, 690);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(27, 13);
			this->label40->TabIndex = 109;
			this->label40->Text = L"руб.";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Cursor = System::Windows::Forms::Cursors::Default;
			this->label41->Location = System::Drawing::Point(12, 741);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(290, 13);
			this->label41->TabIndex = 109;
			this->label41->Text = L"Наиболее экономически выгодной является лампочка:";
			// 
			// Res
			// 
			this->Res->AutoSize = true;
			this->Res->Cursor = System::Windows::Forms::Cursors::Default;
			this->Res->Location = System::Drawing::Point(301, 741);
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(14, 13);
			this->Res->TabIndex = 109;
			this->Res->Text = L"X";
			// 
			// RejLamps
			// 
			this->RejLamps->AutoSize = true;
			this->RejLamps->Cursor = System::Windows::Forms::Cursors::Default;
			this->RejLamps->Location = System::Drawing::Point(12, 719);
			this->RejLamps->Name = L"RejLamps";
			this->RejLamps->Size = System::Drawing::Size(14, 13);
			this->RejLamps->TabIndex = 109;
			this->RejLamps->Text = L"X";
			// 
			// Task2Window2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 763);
			this->Controls->Add(this->Cost5);
			this->Controls->Add(this->PurchaseCost5);
			this->Controls->Add(this->Nn5);
			this->Controls->Add(this->PowOne5);
			this->Controls->Add(this->Nb5);
			this->Controls->Add(this->ElecCost5);
			this->Controls->Add(this->Pow5);
			this->Controls->Add(this->N5);
			this->Controls->Add(this->MinFlux5);
			this->Controls->Add(this->Name5);
			this->Controls->Add(this->Na5);
			this->Controls->Add(this->Cost4);
			this->Controls->Add(this->PurchaseCost4);
			this->Controls->Add(this->Nn4);
			this->Controls->Add(this->PowOne4);
			this->Controls->Add(this->Nb4);
			this->Controls->Add(this->ElecCost4);
			this->Controls->Add(this->Pow4);
			this->Controls->Add(this->N4);
			this->Controls->Add(this->MinFlux4);
			this->Controls->Add(this->Name4);
			this->Controls->Add(this->Na4);
			this->Controls->Add(this->Cost3);
			this->Controls->Add(this->PurchaseCost3);
			this->Controls->Add(this->Nn3);
			this->Controls->Add(this->PowOne3);
			this->Controls->Add(this->Nb3);
			this->Controls->Add(this->ElecCost3);
			this->Controls->Add(this->Pow3);
			this->Controls->Add(this->N3);
			this->Controls->Add(this->MinFlux3);
			this->Controls->Add(this->Name3);
			this->Controls->Add(this->Na3);
			this->Controls->Add(this->Cost2);
			this->Controls->Add(this->PurchaseCost2);
			this->Controls->Add(this->Nn2);
			this->Controls->Add(this->PowOne2);
			this->Controls->Add(this->Nb2);
			this->Controls->Add(this->ElecCost2);
			this->Controls->Add(this->Pow2);
			this->Controls->Add(this->N2);
			this->Controls->Add(this->MinFlux2);
			this->Controls->Add(this->Name2);
			this->Controls->Add(this->Na2);
			this->Controls->Add(this->Cost1);
			this->Controls->Add(this->PurchaseCost1);
			this->Controls->Add(this->Nn1);
			this->Controls->Add(this->PowOne1);
			this->Controls->Add(this->Nb1);
			this->Controls->Add(this->ElecCost1);
			this->Controls->Add(this->Pow1);
			this->Controls->Add(this->N1);
			this->Controls->Add(this->MinFlux1);
			this->Controls->Add(this->Name1);
			this->Controls->Add(this->Na1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Win2Label);
			this->Controls->Add(this->NeededIll);
			this->Controls->Add(this->RoomName);
			this->Controls->Add(this->A);
			this->Controls->Add(this->B);
			this->Controls->Add(this->Ppot);
			this->Controls->Add(this->S);
			this->Controls->Add(this->Hp);
			this->Controls->Add(this->Mu);
			this->Controls->Add(this->H);
			this->Controls->Add(this->Ppol);
			this->Controls->Add(this->Pst);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->MF);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->C);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->I);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Hc);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->CostLabel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CostLabel);
			this->Controls->Add(this->RejLamps);
			this->Controls->Add(this->Res);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->NeedelIllLabel);
			this->Controls->Add(this->RoomNameLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Task2Window2";
			this->Text = L"Вывести таблицы - КСР";
			this->Load += gcnew System::EventHandler(this, &Task2Window2::Task2Window2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void Task2Window2_Load(System::Object^ sender, System::EventArgs^ e);

};
}
