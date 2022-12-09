#include "Task1Window2.h"

System::Void KSR::Task1Window2::Voltage1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Voltage1->Text);
    if (Double::TryParse(str, number))
    {
        this->Voltage1->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Voltage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Voltage2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Voltage2->Text);
    if (Double::TryParse(str, number))
    {
        this->Voltage2->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Voltage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Voltage3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Voltage3->Text);
    if (Double::TryParse(str, number))
    {
        this->Voltage3->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Voltage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Voltage4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Voltage4->Text);
    if (Double::TryParse(str, number))
    {
        this->Voltage4->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Voltage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Voltage5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Voltage5->Text);
    if (Double::TryParse(str, number))
    {
        this->Voltage5->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Voltage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Amp1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Amp1->Text);
    if (Double::TryParse(str, number))
    {
        this->Amp1->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = round(System::Convert::ToDouble(Amp1->Text) * System::Convert::ToDouble(Voltage1->Text) * 10) / 10;
        Power1->Text = System::Convert::ToString(tmp1);
    }
    else
    {
        this->Amp1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }

    return System::Void();
}

System::Void KSR::Task1Window2::Amp2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Amp2->Text);
    if (Double::TryParse(str, number))
    {
        this->Amp2->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = round(System::Convert::ToDouble(Amp2->Text) * System::Convert::ToDouble(Voltage2->Text) * 10) / 10;
        Power2->Text = System::Convert::ToString(tmp1);
    }
    else
    {
        this->Amp2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Amp3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Amp3->Text);
    if (Double::TryParse(str, number))
    {
        this->Amp3->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = round(System::Convert::ToDouble(Amp3->Text) * System::Convert::ToDouble(Voltage3->Text) * 10) / 10;
        Power3->Text = System::Convert::ToString(tmp1);
    }
    else
    {
        this->Amp3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Amp4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Amp4->Text);
    if (Double::TryParse(str, number))
    {
        this->Amp4->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = round(System::Convert::ToDouble(Amp4->Text) * System::Convert::ToDouble(Voltage4->Text) * 10) / 10;
        Power4->Text = System::Convert::ToString(tmp1);
    }
    else
    {
        this->Amp4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Amp5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Amp5->Text);
    if (Double::TryParse(str, number))
    {
        this->Amp5->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = round(System::Convert::ToDouble(Amp5->Text) * System::Convert::ToDouble(Voltage5->Text) * 10) / 10;
        Power5->Text = System::Convert::ToString(tmp1);
    }
    else
    {
        this->Amp5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }

    return System::Void();
}

System::Void KSR::Task1Window2::Ill1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ill1->Text);
    if (Double::TryParse(str, number))
    {
        this->Ill1->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = System::Convert::ToDouble(Ill1->Text) * 110;
        LumFlux1->Text = System::Convert::ToString(tmp1);
        Double number1 = System::Convert::ToDouble(LumFlux1->Text);
        if (LumFlux1->Text != L"" || Power1->Text != L"")
            number1 = System::Convert::ToDouble(LumFlux1->Text);
        if (number1)
        {
            Double tmp1 = round(number1 / System::Convert::ToDouble(Power1->Text) * 10) / 10;
            LO1->Text = System::Convert::ToString(tmp1);
        }
    else
        LO1->Text = L"0";
    }
    else
    {
        this->Ill1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }

    return System::Void();
}

System::Void KSR::Task1Window2::Ill2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ill2->Text);
    if (Double::TryParse(str, number))
    {
        this->Ill2->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = System::Convert::ToDouble(Ill2->Text) * 110;
        LumFlux2->Text = System::Convert::ToString(tmp1);
        Double number1 = System::Convert::ToDouble(LumFlux2->Text);
        if (LumFlux2->Text != L"" || Power2->Text != L"")
            number1 = System::Convert::ToDouble(LumFlux2->Text);
        if (number1)
        {
            Double tmp1 = round(number1 / System::Convert::ToDouble(Power2->Text) * 10) / 10;
            LO2->Text = System::Convert::ToString(tmp1);
        }
        else
            LO2->Text = L"0";
    }
    else
    {
        this->Ill2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ill3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ill3->Text);
    if (Double::TryParse(str, number))
    {
        this->Ill3->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = System::Convert::ToDouble(Ill3->Text) * 110;
        LumFlux3->Text = System::Convert::ToString(tmp1);
        Double number1 = System::Convert::ToDouble(LumFlux3->Text);
        if (LumFlux3->Text != L"" || Power3->Text != L"")
            number1 = System::Convert::ToDouble(LumFlux3->Text);
        if (number1)
        {
            Double tmp1 = round(number1 / System::Convert::ToDouble(Power3->Text) * 10) / 10;
            LO3->Text = System::Convert::ToString(tmp1);
        }
        else
            LO3->Text = L"0";
    }
    else
    {
        this->Ill3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }

    return System::Void();
}

System::Void KSR::Task1Window2::Ill4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ill4->Text);
    if (Double::TryParse(str, number))
    {
        this->Ill4->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = System::Convert::ToDouble(Ill4->Text) * 110;
        LumFlux4->Text = System::Convert::ToString(tmp1);
        Double number1 = System::Convert::ToDouble(LumFlux4->Text);
        if (LumFlux4->Text != L"" || Power4->Text != L"")
            number1 = System::Convert::ToDouble(LumFlux4->Text);
        if (number1)
        {
            Double tmp1 = round(number1 / System::Convert::ToDouble(Power4->Text) * 10) / 10;
            LO4->Text = System::Convert::ToString(tmp1);
        }
        else
            LO4->Text = L"0";
    }
    else
    {
        this->Ill4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ill5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ill5->Text);
    if (Double::TryParse(str, number))
    {
        this->Ill5->BackColor = System::Drawing::SystemColors::Window;
        Double tmp1 = System::Convert::ToDouble(Ill5->Text) * 110;
        LumFlux5->Text = System::Convert::ToString(tmp1);
        Double number1 = System::Convert::ToDouble(LumFlux5->Text);
        if (LumFlux5->Text != L"" || Power5->Text != L"")
            number1 = System::Convert::ToDouble(LumFlux5->Text);
        if (number1)
        {
            Double tmp1 = round(number1 / System::Convert::ToDouble(Power5->Text) * 10) / 10;
            LO5->Text = System::Convert::ToString(tmp1);
        }
        else
            LO5->Text = L"0";
    }
    else
    {
        this->Ill5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ribble1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ribble1->Text);
    if (Double::TryParse(str, number))
    {
        this->Ribble1->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Ribble1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ribble2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ribble2->Text);
    if (Double::TryParse(str, number))
    {
        this->Ribble2->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Ribble2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ribble3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ribble3->Text);
    if (Double::TryParse(str, number))
    {
        this->Ribble3->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Ribble3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ribble4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ribble4->Text);
    if (Double::TryParse(str, number))
    {
        this->Ribble4->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Ribble4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}

System::Void KSR::Task1Window2::Ribble5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Double number = 0;
    System::String^ str = System::Convert::ToString(Ribble5->Text);
    if (Double::TryParse(str, number))
    {
        this->Ribble5->BackColor = System::Drawing::SystemColors::Window;
    }
    else
    {
        this->Ribble5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
    }
    return System::Void();
}
bool KSR::Task1Window2::Validation()
{
    if (this->Voltage1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Voltage2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Voltage3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Voltage4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Voltage5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

    if (this->Amp1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Amp2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Amp3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Amp4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Amp5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

    if (this->Ill1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ill2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ill3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ill4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ill5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

    if (this->Ribble1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ribble2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ribble3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ribble4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
    if (this->Ribble5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

    return true;
}

System::Void KSR::Task1Window2::SaveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (Validation())
    {
        SetMeasured();
        this->Close();
        return System::Void();
    }
    else
        MessageBox::Show("Введите корректные значения!", "Ошибка!");
}

void KSR::Task1Window2::SetMeasured()
{

    lamps[0].Measure(System::Convert::ToDouble(Voltage1->Text), System::Convert::ToDouble(Amp1->Text), System::Convert::ToDouble(Ill1->Text), System::Convert::ToDouble(Ribble1->Text));
    lamps[1].Measure(System::Convert::ToDouble(Voltage2->Text), System::Convert::ToDouble(Amp2->Text), System::Convert::ToDouble(Ill2->Text), System::Convert::ToDouble(Ribble2->Text));
    lamps[2].Measure(System::Convert::ToDouble(Voltage3->Text), System::Convert::ToDouble(Amp3->Text), System::Convert::ToDouble(Ill3->Text), System::Convert::ToDouble(Ribble3->Text));
    lamps[3].Measure(System::Convert::ToDouble(Voltage4->Text), System::Convert::ToDouble(Amp4->Text), System::Convert::ToDouble(Ill4->Text), System::Convert::ToDouble(Ribble4->Text));
    lamps[4].Measure(System::Convert::ToDouble(Voltage5->Text), System::Convert::ToDouble(Amp5->Text), System::Convert::ToDouble(Ill5->Text), System::Convert::ToDouble(Ribble5->Text));
}

System::Void KSR::Task1Window2::Task1Window2_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->Name1->Text = gcnew System::String(lamps[0].GetName().c_str());
    this->Name2->Text = gcnew System::String(lamps[1].GetName().c_str());
    this->Name3->Text = gcnew System::String(lamps[2].GetName().c_str());
    this->Name4->Text = gcnew System::String(lamps[3].GetName().c_str());
    this->Name5->Text = gcnew System::String(lamps[4].GetName().c_str());

    this->Voltage1->Text = System::Convert::ToString(lamps[0].GetMeasVoltage());
    this->Voltage2->Text = System::Convert::ToString(lamps[1].GetMeasVoltage());
    this->Voltage3->Text = System::Convert::ToString(lamps[2].GetMeasVoltage());
    this->Voltage4->Text = System::Convert::ToString(lamps[3].GetMeasVoltage());
    this->Voltage5->Text = System::Convert::ToString(lamps[4].GetMeasVoltage());

    this->Amp1->Text = System::Convert::ToString(lamps[0].GetMeasAmperage());
    this->Amp2->Text = System::Convert::ToString(lamps[1].GetMeasAmperage());
    this->Amp3->Text = System::Convert::ToString(lamps[2].GetMeasAmperage());
    this->Amp4->Text = System::Convert::ToString(lamps[3].GetMeasAmperage());
    this->Amp5->Text = System::Convert::ToString(lamps[4].GetMeasAmperage());

    this->Ill1->Text = System::Convert::ToString(lamps[0].GetMeasIll());
    this->Ill2->Text = System::Convert::ToString(lamps[1].GetMeasIll());
    this->Ill3->Text = System::Convert::ToString(lamps[2].GetMeasIll());
    this->Ill4->Text = System::Convert::ToString(lamps[3].GetMeasIll());
    this->Ill5->Text = System::Convert::ToString(lamps[4].GetMeasIll());

    this->Ribble1->Text = System::Convert::ToString(lamps[0].GetMeasRipple());
    this->Ribble2->Text = System::Convert::ToString(lamps[1].GetMeasRipple());
    this->Ribble3->Text = System::Convert::ToString(lamps[2].GetMeasRipple());
    this->Ribble4->Text = System::Convert::ToString(lamps[3].GetMeasRipple());
    this->Ribble5->Text = System::Convert::ToString(lamps[4].GetMeasRipple());
    return System::Void();
}
