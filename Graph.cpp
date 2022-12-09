#include "Graph.h"

System::Void KSR::Graph::Graph_Load(System::Object^ sender, System::EventArgs^ e)
{
    double y = 0;
    double x = 0;
    


    this->chart1->Series[0]->Points->Clear();
    for (int i = 0; i < room.GetLampSize(); i++)
    {
        y = room.GetMeasLO(i);
        x = room.GetRipple(i);
        this->chart1->Series[0]->Points->AddXY(x, y);
    }
    this->chart1->Series[1]->Points->Clear();
    for (int i = 0; i < room.GetLampSize(); i++)
    {
        y = room.GetDeclLO(i);
        x = room.GetRipple(i);
        this->chart1->Series[1]->Points->AddXY(x, y);
    }

    return System::Void();
}
