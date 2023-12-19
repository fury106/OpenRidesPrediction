#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OpenRidesPrediction::MyForm form;
	Application::Run(% form);
}