#include "Task1Window3.h"

    struct bestone
    {
        double delta;
        std::string name;
    };

String^ BestOnePower()
{

    bestone deltas[5];
    for (int i = 0; i < 5; i++)
    {
        deltas[i].delta = abs(lamps[i].GetDeclPower() - lamps[i].GetMeasPower());
        deltas[i].name = lamps[i].GetName();
    }
        

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (deltas[j].delta > deltas[j + 1].delta) 
            {
                bestone b = deltas[j];
                deltas[j] = deltas[j + 1];
                deltas[j + 1] = b;
            }
        }
    }
    return gcnew System::String(deltas[0].name.c_str());
    
}

String^ BestOneLO()
{

    bestone deltas[5];
    for (int i = 0; i < 5; i++)
    {
        deltas[i].delta = abs(lamps[i].GetDeclLO() - lamps[i].GetMeasLO());
        deltas[i].name = lamps[i].GetName();
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (deltas[j].delta > deltas[j + 1].delta)
            {
                bestone b = deltas[j];
                deltas[j] = deltas[j + 1];
                deltas[j + 1] = b;
            }
        }
    }
    return gcnew System::String(deltas[0].name.c_str());

}
String^ BestOneFlux()
{

    bestone deltas[5];
    for (int i = 0; i < 5; i++)
    {
        deltas[i].delta = abs(lamps[i].GetDeclLumflux() - lamps[i].GetMeasLumflux());
        deltas[i].name = lamps[i].GetName();
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (deltas[j].delta > deltas[j + 1].delta)
            {
                bestone b = deltas[j];
                deltas[j] = deltas[j + 1];
                deltas[j + 1] = b;
            }
        }
    }
    return gcnew System::String(deltas[0].name.c_str());

}

System::Void KSR::Task1Window3::Task1Window3_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->Res1->Text = BestOnePower();
    this->Res2->Text = BestOneFlux();
    this->Res3->Text = BestOneLO();
    
    this->Name1->Text = gcnew System::String(lamps[0].GetName().c_str());
    this->Name2->Text = gcnew System::String(lamps[1].GetName().c_str());
    this->Name3->Text = gcnew System::String(lamps[2].GetName().c_str());
    this->Name4->Text = gcnew System::String(lamps[3].GetName().c_str());
    this->Name5->Text = gcnew System::String(lamps[4].GetName().c_str());

    if (lamps[0].GetType() == 0)
        this->Type1->Text = L"ËÍ";
    if (lamps[0].GetType() == 1)
        this->Type1->Text = L"ËË";
    if (lamps[0].GetType() == 2)
        this->Type1->Text = L"ÑË";

    if (lamps[1].GetType() == 0)
        this->Type2->Text = L"ËÍ";
    if (lamps[1].GetType() == 1)
        this->Type2->Text = L"ËË";
    if (lamps[1].GetType() == 2)
        this->Type2->Text = L"ÑË";

    if (lamps[2].GetType() == 0)
        this->Type3->Text = L"ËÍ";
    if (lamps[2].GetType() == 1)
        this->Type3->Text = L"ËË";
    if (lamps[2].GetType() == 2)
        this->Type3->Text = L"ÑË";

    if (lamps[3].GetType() == 0)
        this->Type4->Text = L"ËÍ";
    if (lamps[3].GetType() == 1)
        this->Type4->Text = L"ËË";
    if (lamps[3].GetType() == 2)
        this->Type4->Text = L"ÑË";

    if (lamps[4].GetType() == 0)
        this->Type5->Text = L"ËÍ";
    if (lamps[4].GetType() == 1)
        this->Type5->Text = L"ËË";
    if (lamps[4].GetType() == 2)
        this->Type5->Text = L"ÑË";

    this->Cost1->Text = System::Convert::ToString(lamps[0].GetCost());
    this->Cost2->Text = System::Convert::ToString(lamps[1].GetCost());
    this->Cost3->Text = System::Convert::ToString(lamps[2].GetCost());
    this->Cost4->Text = System::Convert::ToString(lamps[3].GetCost());
    this->Cost5->Text = System::Convert::ToString(lamps[4].GetCost());

    this->DeclPower1->Text = System::Convert::ToString(lamps[0].GetDeclPower());
    this->DeclPower2->Text = System::Convert::ToString(lamps[1].GetDeclPower());
    this->DeclPower3->Text = System::Convert::ToString(lamps[2].GetDeclPower());
    this->DeclPower4->Text = System::Convert::ToString(lamps[3].GetDeclPower());
    this->DeclPower5->Text = System::Convert::ToString(lamps[4].GetDeclPower());

    this->DeclLumFlux1->Text = System::Convert::ToString(lamps[0].GetDeclLumflux());
    this->DeclLumFlux2->Text = System::Convert::ToString(lamps[1].GetDeclLumflux());
    this->DeclLumFlux3->Text = System::Convert::ToString(lamps[2].GetDeclLumflux());
    this->DeclLumFlux4->Text = System::Convert::ToString(lamps[3].GetDeclLumflux());
    this->DeclLumFlux5->Text = System::Convert::ToString(lamps[4].GetDeclLumflux());

    this->DeclLO1->Text = System::Convert::ToString(lamps[0].GetDeclLO());
    this->DeclLO5->Text = System::Convert::ToString(lamps[1].GetDeclLO());
    this->DeclLO4->Text = System::Convert::ToString(lamps[2].GetDeclLO());
    this->DeclLO3->Text = System::Convert::ToString(lamps[3].GetDeclLO());
    this->DeclLO2->Text = System::Convert::ToString(lamps[4].GetDeclLO());

    this->DeclDur5->Text = System::Convert::ToString(lamps[0].GetDeclDuration());
    this->DeclDur4->Text = System::Convert::ToString(lamps[1].GetDeclDuration());
    this->DeclDur3->Text = System::Convert::ToString(lamps[2].GetDeclDuration());
    this->DeclDur2->Text = System::Convert::ToString(lamps[3].GetDeclDuration());
    this->DeclDur1->Text = System::Convert::ToString(lamps[4].GetDeclDuration());

    this->MeasVoltage1->Text = System::Convert::ToString(lamps[0].GetMeasVoltage());
    this->MeasVoltage2->Text = System::Convert::ToString(lamps[1].GetMeasVoltage());
    this->MeasVoltage3->Text = System::Convert::ToString(lamps[2].GetMeasVoltage());
    this->MeasVoltage4->Text = System::Convert::ToString(lamps[3].GetMeasVoltage());
    this->MeasVoltage5->Text = System::Convert::ToString(lamps[4].GetMeasVoltage());

    this->MeasAmp1->Text = System::Convert::ToString(lamps[0].GetMeasAmperage());
    this->MeasAmp2->Text = System::Convert::ToString(lamps[1].GetMeasAmperage());
    this->MeasAmp3->Text = System::Convert::ToString(lamps[2].GetMeasAmperage());
    this->MeasAmp4->Text = System::Convert::ToString(lamps[3].GetMeasAmperage());
    this->MeasAmp5->Text = System::Convert::ToString(lamps[4].GetMeasAmperage());

    this->MeasPower1->Text = System::Convert::ToString(lamps[0].GetMeasPower());
    this->MeasPower2->Text = System::Convert::ToString(lamps[1].GetMeasPower());
    this->MeasPower3->Text = System::Convert::ToString(lamps[2].GetMeasPower());
    this->MeasPower4->Text = System::Convert::ToString(lamps[3].GetMeasPower());
    this->MeasPower5->Text = System::Convert::ToString(lamps[4].GetMeasPower());

    this->MeasIll1->Text = System::Convert::ToString(lamps[0].GetMeasIll());
    this->MeasIll2->Text = System::Convert::ToString(lamps[1].GetMeasIll());
    this->MeasIll3->Text = System::Convert::ToString(lamps[2].GetMeasIll());
    this->MeasIll4->Text = System::Convert::ToString(lamps[3].GetMeasIll());
    this->MeasIll5->Text = System::Convert::ToString(lamps[4].GetMeasIll());

    this->MeasLumFlux1->Text = System::Convert::ToString(lamps[0].GetMeasLumflux());
    this->MeasLumFlux2->Text = System::Convert::ToString(lamps[1].GetMeasLumflux());
    this->MeasLumFlux3->Text = System::Convert::ToString(lamps[2].GetMeasLumflux());
    this->MeasLumFlux4->Text = System::Convert::ToString(lamps[3].GetMeasLumflux());
    this->MeasLumFlux5->Text = System::Convert::ToString(lamps[4].GetMeasLumflux());
    
    this->MeasLO1->Text = System::Convert::ToString(lamps[0].GetMeasLO());
    this->MeasLO2->Text = System::Convert::ToString(lamps[1].GetMeasLO());
    this->MeasLO3->Text = System::Convert::ToString(lamps[2].GetMeasLO());
    this->MeasLO4->Text = System::Convert::ToString(lamps[3].GetMeasLO());
    this->MeasLO5->Text = System::Convert::ToString(lamps[4].GetMeasLO());


    this->MeasRibble1->Text = System::Convert::ToString(lamps[0].GetMeasRipple());
    this->MeasRibble2->Text = System::Convert::ToString(lamps[1].GetMeasRipple());
    this->MeasRibble3->Text = System::Convert::ToString(lamps[2].GetMeasRipple());
    this->MeasRibble4->Text = System::Convert::ToString(lamps[3].GetMeasRipple());
    this->MeasRibble5->Text = System::Convert::ToString(lamps[4].GetMeasRipple());
    


    



    


    




    
    


    
    

    return System::Void();
}
