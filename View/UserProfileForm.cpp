#include "UserProfileForm.h"
#include "../MainForm.h"

#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

namespace View
{
	UserProfileForm::UserProfileForm(void): startGamebttn()
	{
		InitializeComponent();
		this->startGamebttn->Click += gcnew System::EventHandler(this, &UserProfileForm::startGameButton_Click);
		this->AcceptButton = this->startGamebttn;
	}

	UserProfileForm::~UserProfileForm()
	{
		if (components)
		{
			delete components;
		}
	}

	void UserProfileForm::startGameButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (String::IsNullOrEmpty(usernameTextBox->Text))
		{
			MessageBox::Show("Please enter a username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	String^ UserProfileForm::GetUsername() {
		return this->usernameTextBox->Text;
	}

	bool UserProfileForm::GetAllowReuseLetters() {
		return this->checkReuseLetters->Checked;
	}
}
