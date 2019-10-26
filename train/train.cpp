#include "train.h"
#include"all_library.h"

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	train::train name;
	Application::Run(%name);

	return 0;
}
