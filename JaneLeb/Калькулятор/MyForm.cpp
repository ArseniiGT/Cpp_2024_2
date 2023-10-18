#include "MyForm.h"
#include <math.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Calculyator2::MyForm form;
	Application::Run(% form);

}


