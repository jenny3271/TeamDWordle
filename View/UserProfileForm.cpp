#include "UserProfileForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

namespace View
{
	UserProfileForm::UserProfileForm(void)
	{
		InitializeComponent();

		this->startGamebttn->Click += gcnew System::EventHandler(this, &UserProfileForm::startGameButton_Click);
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
}
