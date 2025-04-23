#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserProfileForm
	/// </summary>
	public ref class UserProfileForm : public System::Windows::Forms::Form
	{
	public:
		String^ GetUsername();
		bool GetAllowReuseLetters();

		UserProfileForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserProfileForm();

	private: System::Windows::Forms::Label^ labelPrompt;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::CheckBox^ checkReuseLetters;
	private: System::Windows::Forms::Button^ startGamebttn;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelPrompt = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->checkReuseLetters = (gcnew System::Windows::Forms::CheckBox());
			this->startGamebttn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelPrompt
			// 
			this->labelPrompt->AutoSize = true;
			this->labelPrompt->Location = System::Drawing::Point(25, 25);
			this->labelPrompt->Name = L"labelPrompt";
			this->labelPrompt->Size = System::Drawing::Size(111, 13);
			this->labelPrompt->TabIndex = 0;
			this->labelPrompt->Text = L"Enter Your Username:";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Location = System::Drawing::Point(28, 42);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(150, 20);
			this->usernameTextBox->TabIndex = 1;
			// 
			// checkReuseLetters
			// 
			this->checkReuseLetters->AutoSize = true;
			this->checkReuseLetters->Location = System::Drawing::Point(28, 69);
			this->checkReuseLetters->Name = L"checkReuseLetters";
			this->checkReuseLetters->Size = System::Drawing::Size(172, 17);
			this->checkReuseLetters->TabIndex = 2;
			this->checkReuseLetters->Text = L"Allow Reused Letters In Words";
			this->checkReuseLetters->UseVisualStyleBackColor = true;
			// 
			// startGamebttn
			// 
			this->startGamebttn->Location = System::Drawing::Point(125, 99);
			this->startGamebttn->Name = L"startGamebttn";
			this->startGamebttn->Size = System::Drawing::Size(75, 25);
			this->startGamebttn->TabIndex = 3;
			this->startGamebttn->Text = L"Start Game";
			this->startGamebttn->UseVisualStyleBackColor = true;
			// 
			// UserProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 136);
			this->Controls->Add(this->startGamebttn);
			this->Controls->Add(this->checkReuseLetters);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->labelPrompt);
			this->Name = L"UserProfileForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wordle by Team D";
			this->Load += gcnew System::EventHandler(this, &UserProfileForm::UserProfileForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void startGameButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void UserProfileForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
