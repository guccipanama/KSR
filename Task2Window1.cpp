#include "Task2Window1.h"

System::Void KSR::Task2Window1::Ill_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Ill->Text);
	if (Int32::TryParse(str, number))
	{
		this->Ill->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Ill->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::Ripple_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Int32 number = 0;
	System::String^ str = System::Convert::ToString(Ripple->Text);
	if (Int32::TryParse(str, number))
	{
		this->Ripple->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Ripple->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::A_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(A->Text);
	if (Double::TryParse(str, number))
	{
		this->A->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::B_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(B->Text);
	if (Double::TryParse(str, number))
	{
		this->B->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::C_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(C->Text);
	if (Double::TryParse(str, number))
	{
		this->C->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::Hp_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Hp->Text);
	if (Double::TryParse(str, number))
	{
		this->Hp->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Hp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::Hc_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Hc->Text);
	if (Double::TryParse(str, number))
	{
		this->Hc->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Hc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::MF_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(MF->Text);
	if (Double::TryParse(str, number))
	{
		this->MF->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->MF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::Ppot_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Ppot->Text);
	if (Double::TryParse(str, number) && number <= 1)
	{
		this->Ppot->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Ppot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::Pst_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Pst->Text);
	if (Double::TryParse(str, number) && number <= 1)
	{
		this->Pst->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Pst->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

System::Void KSR::Task2Window1::Ppol_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Double number = 0;
	System::String^ str = System::Convert::ToString(Ppol->Text);
	if (Double::TryParse(str, number) && number <= 1)
	{
		this->Ppol->BackColor = System::Drawing::SystemColors::Window;
	}
	else
	{
		this->Ppol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	return System::Void();
}

bool KSR::Task2Window1::Validation()
{
	if (this->Ill->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->Ripple->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->A->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->B->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->C->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->Hp->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Hc->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->MF->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	else if (this->Ppot->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Pst->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;
	else if (this->Ppol->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)))) return false;

	return true;
}

System::Void KSR::Task2Window1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Validation())
	{
		Measurement();
		this->Close();
		return System::Void();
	}
	else
		MessageBox::Show("Введите корректные значения!", "Ошибка!");
}

System::Void KSR::Task2Window1::Measurement()
{
	std::string name = msclr::interop::marshal_as<std::string>(Name->Text);
	room = Room(name, System::Convert::ToInt32(Ill->Text), System::Convert::ToInt32(Ripple->Text), System::Convert::ToInt32(A->Text), System::Convert::ToInt32(B->Text),\
		System::Convert::ToInt32(C->Text), System::Convert::ToDouble(Hc->Text), System::Convert::ToDouble(Hp->Text), System::Convert::ToDouble(MF->Text),\
		System::Convert::ToDouble(Ppot->Text), System::Convert::ToDouble(Pst->Text), System::Convert::ToDouble(Ppol->Text), lamps);
	//name, int neededill, int neededrip, int a, int b, int c, float hc, float hp, float coeffofoperation, float ppot, float pst, float ppol, std::vector<Lamp> lamps
}

System::Void KSR::Task2Window1::Task2Window1_Load(System::Object^ sender, System::EventArgs^ e)
{
	
	this->Ripple->Text = System::Convert::ToString(room.GetNeedRipple());
	this->Ppol->Text = System::Convert::ToString(room.GetPpol());
	this->C->Text = System::Convert::ToString(room.GetHeight());
	this->Pst->Text = System::Convert::ToString(room.GetPst());
	this->B->Text = System::Convert::ToString(room.GetWidth());
	this->Ppot->Text = System::Convert::ToString(room.GetPpot());
	this->A->Text = System::Convert::ToString(room.GetLength());
	this->MF->Text = System::Convert::ToString(room.GetMF());
	this->Hc->Text = System::Convert::ToString(room.GetHc());
	this->Hp->Text = System::Convert::ToString(room.GetHp());
	this->Ill->Text = System::Convert::ToString(room.GetNeedIll());
	this->Name->Text = gcnew System::String(room.GetName().c_str());

	return System::Void();
}
