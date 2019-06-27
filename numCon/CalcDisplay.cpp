#include "CalcDisplay.h"
#include "converter.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	numCon::CalcDisplay form;
	Application::Run(%form);
}
