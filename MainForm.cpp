#include "MainForm.h"
#include "Model/WordDictionary.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	// Initialize the WordDictionary and load the dictionary file FOR TESTING
    Model::WordDictionary dict;
	System::Diagnostics::Debug::WriteLine("loaded file: " + dict.load("./dictionary.txt"));//TRUE
	System::Diagnostics::Debug::WriteLine("dictionary contains apple: " + dict.contains("apple"));//TRUE
	System::Diagnostics::Debug::WriteLine("dictionary contains appl: " + dict.contains("appl"));//FALSE
	System::Diagnostics::Debug::WriteLine("dictionary contains sense: " + dict.contains("sense"));//TRUE

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TeamDWordle::MainForm form;
	Application::Run(% form);
}
