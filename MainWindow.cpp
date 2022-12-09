#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KSR::MainWindow mainwindow;
	Application::Run(% mainwindow);
}

System::Void KSR::MainWindow::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Task1Window1^ form11 = gcnew Task1Window1();
	form11->Show();
	return System::Void();
}

System::Void KSR::MainWindow::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Task1Window2^ form12 = gcnew Task1Window2();
	form12->Show();
	return System::Void();
}

System::Void KSR::MainWindow::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Task1Window3^ form13 = gcnew Task1Window3();
	form13->Show();
	return System::Void();
}

System::Void KSR::MainWindow::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Task2Window1^ form21 = gcnew Task2Window1();
	form21->Show();
	return System::Void();
}

System::Void KSR::MainWindow::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Graph^ grph = gcnew Graph();
	if(!room.GetIsEmpty())
		grph->Show();
	Task2Window2^ form22 = gcnew Task2Window2();
	form22->Show();
	return System::Void();
}
