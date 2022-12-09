#include "Task2Window2.h"

struct cheapest
{
    double delta;
    std::string name;
};

String^ CheapestOne()
{

    int a = room.GetLampSize();
    cheapest* deltas = new cheapest[a];
    for (int i = 0; i < a; i++)
    {
        deltas[i].delta = room.GetCost(i);
        deltas[i].name = room.GetLampName(i);
    }


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (deltas[j].delta > deltas[j + 1].delta)
            {
                cheapest b = deltas[j];
                deltas[j] = deltas[j + 1];
                deltas[j + 1] = b;
            }
        }
    }
    String^ tmp = gcnew System::String(deltas[0].name.c_str());
    delete[] deltas;
    return tmp;

}

String^ Rejected()
{
    std::string temp = "Неподошедшие лампочки: ";
    if (room.GetRejected().size() == 0)
        return L"Все лампочки подошли";
    else
        for (int i = 0; i < room.GetRejected().size(); i++)
        {
            temp += room.GetRejected()[i];
            if (i != room.GetRejected().size() - 1)
                temp += ", ";
        }
    return gcnew System::String(temp.c_str());
}

System::Void KSR::Task2Window2::Task2Window2_Load(System::Object^ sender, System::EventArgs^ e)
{
    room.Measurement();
    this->RejLamps->Text = Rejected();
    this->Res->Text = CheapestOne();
    
    this->RoomName->Text = gcnew System::String(room.GetName().c_str());
    this->NeededIll->Text = System::Convert::ToString(room.GetNeedIll());
    this->A->Text = System::Convert::ToString(room.GetLength());
    this->B->Text = System::Convert::ToString(room.GetWidth());
    this->C->Text = System::Convert::ToString(room.GetHeight());
    this->Hp->Text = System::Convert::ToString(room.GetHp());
    this->Hc->Text = System::Convert::ToString(room.GetHc());
    this->H->Text = System::Convert::ToString(room.GetH());
    this->S->Text = System::Convert::ToString(room.GetSurf());
    this->MF->Text = System::Convert::ToString(room.GetMF());
    this->I->Text = System::Convert::ToString(room.GetI());
    this->Ppot->Text = System::Convert::ToString(room.GetPpot());
    this->Pst->Text = System::Convert::ToString(room.GetPst());
    this->Ppol->Text = System::Convert::ToString(room.GetPpol());
    this->Mu->Text = System::Convert::ToString(room.GetCoeffOfLux());

    switch (room.GetLampSize())
    {
    case 5:
    {
        this->Name5->Text = gcnew System::String(room.GetLampName(4).c_str());
        this->Na5->Text = System::Convert::ToString(room.GetNa(4));
        this->Nb5->Text = System::Convert::ToString(room.GetNb(4));
        this->N5->Text = System::Convert::ToString(room.GetN(4));
        this->Nn5->Text = System::Convert::ToString(room.GetNn(4));
        this->MinFlux5->Text = System::Convert::ToString(room.GetLumflux(4));
        this->PowOne5->Text = System::Convert::ToString(room.GetPower1(4));
        this->Pow5->Text = System::Convert::ToString(room.GetPowerSum(4));
        this->PurchaseCost5->Text = System::Convert::ToString(room.GetPurchaseCost(4));
        this->ElecCost5->Text = System::Convert::ToString(room.GetElectricityCost(4));
        this->Cost5->Text = System::Convert::ToString(room.GetCost(4));
    }
    case 4:
    {
        this->Name4->Text = gcnew System::String(room.GetLampName(3).c_str());
        this->Na4->Text = System::Convert::ToString(room.GetNa(3));
        this->Nb4->Text = System::Convert::ToString(room.GetNb(3));
        this->N4->Text = System::Convert::ToString(room.GetN(3));
        this->Nn4->Text = System::Convert::ToString(room.GetNn(3));
        this->MinFlux4->Text = System::Convert::ToString(room.GetLumflux(3));
        this->PowOne4->Text = System::Convert::ToString(room.GetPower1(3));
        this->Pow4->Text = System::Convert::ToString(room.GetPowerSum(3));
        this->PurchaseCost4->Text = System::Convert::ToString(room.GetPurchaseCost(3));
        this->ElecCost4->Text = System::Convert::ToString(room.GetElectricityCost(3));
        this->Cost4->Text = System::Convert::ToString(room.GetCost(3));
    }
    case 3:
    {
        this->Name3->Text = gcnew System::String(room.GetLampName(2).c_str());
        this->Na3->Text = System::Convert::ToString(room.GetNa(2));
        this->Nb3->Text = System::Convert::ToString(room.GetNb(2));
        this->N3->Text = System::Convert::ToString(room.GetN(2));
        this->Nn3->Text = System::Convert::ToString(room.GetNn(2));
        this->MinFlux3->Text = System::Convert::ToString(room.GetLumflux(2));
        this->PowOne3->Text = System::Convert::ToString(room.GetPower1(2));
        this->Pow3->Text = System::Convert::ToString(room.GetPowerSum(2));
        this->PurchaseCost3->Text = System::Convert::ToString(room.GetPurchaseCost(2));
        this->ElecCost3->Text = System::Convert::ToString(room.GetElectricityCost(2));
        this->Cost3->Text = System::Convert::ToString(room.GetCost(2));
    }
    case 2:
    {
        this->Name2->Text = gcnew System::String(room.GetLampName(1).c_str());
        this->Na2->Text = System::Convert::ToString(room.GetNa(1));
        this->Nb2->Text = System::Convert::ToString(room.GetNb(1));
        this->N2->Text = System::Convert::ToString(room.GetN(1));
        this->Nn2->Text = System::Convert::ToString(room.GetNn(1));
        this->MinFlux2->Text = System::Convert::ToString(room.GetLumflux(1));
        this->PowOne2->Text = System::Convert::ToString(room.GetPower1(1));
        this->Pow2->Text = System::Convert::ToString(room.GetPowerSum(1));
        this->PurchaseCost2->Text = System::Convert::ToString(room.GetPurchaseCost(1));
        this->ElecCost2->Text = System::Convert::ToString(room.GetElectricityCost(1));
        this->Cost2->Text = System::Convert::ToString(room.GetCost(1));
    }
    case 1:
    {
        this->Name1->Text = gcnew System::String(room.GetLampName(0).c_str());
        this->Na1->Text = System::Convert::ToString(room.GetNa(0));
        this->Nb1->Text = System::Convert::ToString(room.GetNb(0));
        this->N1->Text = System::Convert::ToString(room.GetN(0));
        this->Nn1->Text = System::Convert::ToString(room.GetNn(0));
        this->MinFlux1->Text = System::Convert::ToString(room.GetLumflux(0));
        this->PowOne1->Text = System::Convert::ToString(room.GetPower1(0));
        this->Pow1->Text = System::Convert::ToString(room.GetPowerSum(0));
        this->PurchaseCost1->Text = System::Convert::ToString(room.GetPurchaseCost(0));
        this->ElecCost1->Text = System::Convert::ToString(room.GetElectricityCost(0));
        this->Cost1->Text = System::Convert::ToString(room.GetCost(0));
        break;
    }
    }

    return System::Void();
}
