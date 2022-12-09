#include "Task1Window1.h"


using namespace System;
using namespace System::Windows::Forms;

System::Void KSR::Task1Window1::Cost1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Cost1->Text);
	if (Int32::TryParse(str, number))
	{
		this->Cost1->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Cost1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Cost2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Cost2->Text);
	if (Int32::TryParse(str, number))
	{
		this->Cost2->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Cost2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Cost3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Cost3->Text);
	if (Int32::TryParse(str, number))
	{
		this->Cost3->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Cost3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Cost4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Cost4->Text);
	if (Int32::TryParse(str, number))
	{
		this->Cost4->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Cost4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Cost5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Cost5->Text);
	if (Int32::TryParse(str, number))
	{
		this->Cost5->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Cost5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Power1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Power1->Text);
	if (Double::TryParse(str, number))
	{
		this->Power1->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Power1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Power2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Power2->Text);
	if (Double::TryParse(str, number))
	{
		this->Power2->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Power2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Power3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Power3->Text);
	if (Double::TryParse(str, number))
	{
		this->Power3->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Power3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Power4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Power4->Text);
	if (Double::TryParse(str, number))
	{
		this->Power4->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Power4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Power5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Power5->Text);
	if (Double::TryParse(str, number))
	{
		this->Power5->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Power5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::LumFlux1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(LumFlux1->Text);
	if (Double::TryParse(str, number))
	{
		this->LumFlux1->BackColor = System::Drawing::SystemColors::Window;
		Double number1 = 0;
		if (LumFlux1->Text != L"")
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
		this->LumFlux1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::LumFlux2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(LumFlux2->Text);
	if (Double::TryParse(str, number))
	{
		this->LumFlux2->BackColor = System::Drawing::SystemColors::Window;
		Double number1 = System::Convert::ToDouble(LumFlux2->Text);
		if (LumFlux2->Text != L"")
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
		this->LumFlux2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::LumFlux3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(LumFlux3->Text);
	if (Double::TryParse(str, number))
	{
		this->LumFlux3->BackColor = System::Drawing::SystemColors::Window;
		Double number1 = System::Convert::ToDouble(LumFlux3->Text);
		if (LumFlux3->Text != L"")
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
		this->LumFlux3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::LumFlux4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(LumFlux4->Text);
	if (Double::TryParse(str, number))
	{
		this->LumFlux4->BackColor = System::Drawing::SystemColors::Window;
		Double number1 = System::Convert::ToDouble(LumFlux4->Text);
		if (LumFlux4->Text != L"")
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
		this->LumFlux4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::LumFlux5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(LumFlux5->Text);
	if (Double::TryParse(str, number))
	{
		this->LumFlux5->BackColor = System::Drawing::SystemColors::Window;
		Double number1 = System::Convert::ToDouble(LumFlux5->Text);
		if (LumFlux5->Text != L"")
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
		this->LumFlux5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Dur1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Dur1->Text);
	if (Int32::TryParse(str, number))
	{
		this->Dur1->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Dur1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Dur2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Dur2->Text);
	if (Int32::TryParse(str, number))
	{
		this->Dur2->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Dur2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Dur3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Dur3->Text);
	if (Int32::TryParse(str, number))
	{
		this->Dur3->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Dur3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Dur4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Dur4->Text);
	if (Int32::TryParse(str, number))
	{
		this->Dur4->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Dur4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task1Window1::Dur5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Dur5->Text);
	if (Int32::TryParse(str, number))
	{
		this->Dur5->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Dur5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

bool KSR::Task1Window1::Validator()
{
	if (this->Cost1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Cost2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Cost3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Cost4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Cost5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->Power1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Power2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Power3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Power4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Power5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->LumFlux1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->LumFlux2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->LumFlux3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->LumFlux4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->LumFlux5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->Dur1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Dur2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Dur3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Dur4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Dur5->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	return true;
}

System::Void KSR::Task1Window1::SaveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Validator())
	{
		SetDeclared();
		this->Close();
		return System::Void();
	}
	else
		MessageBox::Show("Введите корректные значения!", "Ошибка!");
}

void KSR::Task1Window1::SetDeclared()
{
	std::string name = msclr::interop::marshal_as<std::string>(Name1->Text);
	lamps[0].Declare(name, Type1->SelectedIndex, System::Convert::ToDouble(Cost1->Text), System::Convert::ToDouble(Power1->Text), System::Convert::ToDouble(LumFlux1->Text), System::Convert::ToDouble(Dur1->Text));
	name = msclr::interop::marshal_as<std::string>(Name2->Text);
	lamps[1].Declare(name, Type2->SelectedIndex, System::Convert::ToDouble(Cost2->Text), System::Convert::ToDouble(Power2->Text), System::Convert::ToDouble(LumFlux2->Text), System::Convert::ToDouble(Dur2->Text));
	name = msclr::interop::marshal_as<std::string>(Name3->Text);
	lamps[2].Declare(name, Type3->SelectedIndex, System::Convert::ToDouble(Cost3->Text), System::Convert::ToDouble(Power3->Text), System::Convert::ToDouble(LumFlux3->Text), System::Convert::ToDouble(Dur3->Text));
	name = msclr::interop::marshal_as<std::string>(Name4->Text);
	lamps[3].Declare(name, Type4->SelectedIndex, System::Convert::ToDouble(Cost4->Text), System::Convert::ToDouble(Power4->Text), System::Convert::ToDouble(LumFlux4->Text), System::Convert::ToDouble(Dur4->Text));
	name = msclr::interop::marshal_as<std::string>(Name5->Text);
	lamps[4].Declare(name, Type5->SelectedIndex, System::Convert::ToDouble(Cost5->Text), System::Convert::ToDouble(Power5->Text), System::Convert::ToDouble(LumFlux5->Text), System::Convert::ToDouble(Dur5->Text));
}

System::Void KSR::Task1Window1::Task1Window1_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Name1->Text = gcnew System::String(lamps[0].GetName().c_str());
	this->Name2->Text = gcnew System::String(lamps[1].GetName().c_str());
	this->Name3->Text = gcnew System::String(lamps[2].GetName().c_str());
	this->Name4->Text = gcnew System::String(lamps[3].GetName().c_str());
	this->Name5->Text = gcnew System::String(lamps[4].GetName().c_str());

	Type1->SelectedIndex = System::Convert::ToInt32(lamps[0].GetType());
	Type2->SelectedIndex = System::Convert::ToInt32(lamps[1].GetType());
	Type3->SelectedIndex = System::Convert::ToInt32(lamps[2].GetType());
	Type4->SelectedIndex = System::Convert::ToInt32(lamps[3].GetType());
	Type5->SelectedIndex = System::Convert::ToInt32(lamps[4].GetType());
	
	Cost1->Text = System::Convert::ToString(lamps[0].GetCost());
	Cost2->Text = System::Convert::ToString(lamps[1].GetCost());
	Cost3->Text = System::Convert::ToString(lamps[2].GetCost());
	Cost4->Text = System::Convert::ToString(lamps[3].GetCost());
	Cost5->Text = System::Convert::ToString(lamps[4].GetCost());
	
	Power1->Text = System::Convert::ToString(lamps[0].GetDeclPower());
	Power2->Text = System::Convert::ToString(lamps[1].GetDeclPower());
	Power3->Text = System::Convert::ToString(lamps[2].GetDeclPower());
	Power4->Text = System::Convert::ToString(lamps[3].GetDeclPower());
	Power5->Text = System::Convert::ToString(lamps[4].GetDeclPower());

	LumFlux1->Text = System::Convert::ToString(lamps[0].GetDeclLumflux());
	LumFlux2->Text = System::Convert::ToString(lamps[1].GetDeclLumflux());
	LumFlux3->Text = System::Convert::ToString(lamps[2].GetDeclLumflux());
	LumFlux4->Text = System::Convert::ToString(lamps[3].GetDeclLumflux());
	LumFlux5->Text = System::Convert::ToString(lamps[4].GetDeclLumflux());

	Dur1->Text = System::Convert::ToString(lamps[0].GetDeclDuration());
;	Dur2->Text = System::Convert::ToString(lamps[1].GetDeclDuration());
	Dur3->Text = System::Convert::ToString(lamps[2].GetDeclDuration());
	Dur4->Text = System::Convert::ToString(lamps[3].GetDeclDuration());
	Dur5->Text = System::Convert::ToString(lamps[4].GetDeclDuration());

	return System::Void();
}