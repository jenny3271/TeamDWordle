#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StatisticsForm
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ statsLabel;
	private: System::Windows::Forms::Label^ winLabel;
	private: System::Windows::Forms::Label^ playedLabel;
	private: System::Windows::Forms::Label^ currStreakLabel;
	private: System::Windows::Forms::Label^ maxStreakLabel;
	private: System::Windows::Forms::Label^ guessDistLabel;
	private: System::Windows::Forms::Label^ playedValueLabel;
	private: System::Windows::Forms::Label^ winValueLabel;
	private: System::Windows::Forms::Label^ currStreakValueLabel;
	private: System::Windows::Forms::Label^ maxStreakValueLabel;
	private: System::Windows::Forms::ProgressBar^ guess1Bar;
	private: System::Windows::Forms::ProgressBar^ guess2Bar;
	private: System::Windows::Forms::ProgressBar^ guess3Bar;
	private: System::Windows::Forms::ProgressBar^ guess4Bar;
	private: System::Windows::Forms::ProgressBar^ guess5Bar;
	private: System::Windows::Forms::ProgressBar^ guess6Bar;
	private: System::Windows::Forms::Label^ guess1Label;
	private: System::Windows::Forms::Label^ guess2Label;
	private: System::Windows::Forms::Label^ guess3Label;
	private: System::Windows::Forms::Label^ guess4Label;
	private: System::Windows::Forms::Label^ guess5Label;
	private: System::Windows::Forms::Label^ guess6Label;
	private: System::Windows::Forms::Button^ playAgainBttn;
	private: System::Windows::Forms::Button^ exitGameBttn;

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
			this->statsLabel = (gcnew System::Windows::Forms::Label());
			this->winLabel = (gcnew System::Windows::Forms::Label());
			this->playedLabel = (gcnew System::Windows::Forms::Label());
			this->currStreakLabel = (gcnew System::Windows::Forms::Label());
			this->maxStreakLabel = (gcnew System::Windows::Forms::Label());
			this->guessDistLabel = (gcnew System::Windows::Forms::Label());
			this->playedValueLabel = (gcnew System::Windows::Forms::Label());
			this->winValueLabel = (gcnew System::Windows::Forms::Label());
			this->currStreakValueLabel = (gcnew System::Windows::Forms::Label());
			this->maxStreakValueLabel = (gcnew System::Windows::Forms::Label());
			this->guess1Bar = (gcnew System::Windows::Forms::ProgressBar());
			this->guess2Bar = (gcnew System::Windows::Forms::ProgressBar());
			this->guess3Bar = (gcnew System::Windows::Forms::ProgressBar());
			this->guess4Bar = (gcnew System::Windows::Forms::ProgressBar());
			this->guess5Bar = (gcnew System::Windows::Forms::ProgressBar());
			this->guess6Bar = (gcnew System::Windows::Forms::ProgressBar());
			this->guess1Label = (gcnew System::Windows::Forms::Label());
			this->guess2Label = (gcnew System::Windows::Forms::Label());
			this->guess3Label = (gcnew System::Windows::Forms::Label());
			this->guess4Label = (gcnew System::Windows::Forms::Label());
			this->guess5Label = (gcnew System::Windows::Forms::Label());
			this->guess6Label = (gcnew System::Windows::Forms::Label());
			this->playAgainBttn = (gcnew System::Windows::Forms::Button());
			this->exitGameBttn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// statsLabel
			// 
			this->statsLabel->AutoSize = true;
			this->statsLabel->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statsLabel->Location = System::Drawing::Point(230, 15);
			this->statsLabel->Name = L"statsLabel";
			this->statsLabel->Size = System::Drawing::Size(139, 26);
			this->statsLabel->TabIndex = 0;
			this->statsLabel->Text = L"STATISTICS";
			// 
			// winLabel
			// 
			this->winLabel->AutoSize = true;
			this->winLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->winLabel->Location = System::Drawing::Point(231, 108);
			this->winLabel->Name = L"winLabel";
			this->winLabel->Size = System::Drawing::Size(58, 19);
			this->winLabel->TabIndex = 1;
			this->winLabel->Text = L"Win %";
			// 
			// playedLabel
			// 
			this->playedLabel->AutoSize = true;
			this->playedLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playedLabel->Location = System::Drawing::Point(145, 108);
			this->playedLabel->Name = L"playedLabel";
			this->playedLabel->Size = System::Drawing::Size(61, 19);
			this->playedLabel->TabIndex = 2;
			this->playedLabel->Text = L"Played";
			// 
			// currStreakLabel
			// 
			this->currStreakLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currStreakLabel->Location = System::Drawing::Point(297, 108);
			this->currStreakLabel->MaximumSize = System::Drawing::Size(100, 40);
			this->currStreakLabel->Name = L"currStreakLabel";
			this->currStreakLabel->Size = System::Drawing::Size(72, 40);
			this->currStreakLabel->TabIndex = 3;
			this->currStreakLabel->Text = L"Current\nStreak";
			this->currStreakLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maxStreakLabel
			// 
			this->maxStreakLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxStreakLabel->Location = System::Drawing::Point(375, 108);
			this->maxStreakLabel->MaximumSize = System::Drawing::Size(100, 40);
			this->maxStreakLabel->Name = L"maxStreakLabel";
			this->maxStreakLabel->Size = System::Drawing::Size(64, 40);
			this->maxStreakLabel->TabIndex = 4;
			this->maxStreakLabel->Text = L"Max\nStreak";
			this->maxStreakLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guessDistLabel
			// 
			this->guessDistLabel->AutoSize = true;
			this->guessDistLabel->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guessDistLabel->Location = System::Drawing::Point(169, 175);
			this->guessDistLabel->Name = L"guessDistLabel";
			this->guessDistLabel->Size = System::Drawing::Size(253, 26);
			this->guessDistLabel->TabIndex = 5;
			this->guessDistLabel->Text = L"GUESS DISTRIBUTION";
			// 
			// playedValueLabel
			// 
			this->playedValueLabel->AutoSize = true;
			this->playedValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 36));
			this->playedValueLabel->Location = System::Drawing::Point(155, 53);
			this->playedValueLabel->Name = L"playedValueLabel";
			this->playedValueLabel->Size = System::Drawing::Size(51, 55);
			this->playedValueLabel->TabIndex = 6;
			this->playedValueLabel->Text = L"0";
			this->playedValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// winValueLabel
			// 
			this->winValueLabel->AutoSize = true;
			this->winValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 36));
			this->winValueLabel->Location = System::Drawing::Point(230, 53);
			this->winValueLabel->Name = L"winValueLabel";
			this->winValueLabel->Size = System::Drawing::Size(51, 55);
			this->winValueLabel->TabIndex = 7;
			this->winValueLabel->Text = L"0";
			this->winValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// currStreakValueLabel
			// 
			this->currStreakValueLabel->AutoSize = true;
			this->currStreakValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 36));
			this->currStreakValueLabel->Location = System::Drawing::Point(307, 53);
			this->currStreakValueLabel->Name = L"currStreakValueLabel";
			this->currStreakValueLabel->Size = System::Drawing::Size(51, 55);
			this->currStreakValueLabel->TabIndex = 8;
			this->currStreakValueLabel->Text = L"0";
			this->currStreakValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maxStreakValueLabel
			// 
			this->maxStreakValueLabel->AutoSize = true;
			this->maxStreakValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 36));
			this->maxStreakValueLabel->Location = System::Drawing::Point(385, 53);
			this->maxStreakValueLabel->Name = L"maxStreakValueLabel";
			this->maxStreakValueLabel->Size = System::Drawing::Size(51, 55);
			this->maxStreakValueLabel->TabIndex = 9;
			this->maxStreakValueLabel->Text = L"0";
			this->maxStreakValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess1Bar
			// 
			this->guess1Bar->Location = System::Drawing::Point(50, 213);
			this->guess1Bar->Name = L"guess1Bar";
			this->guess1Bar->Size = System::Drawing::Size(480, 23);
			this->guess1Bar->TabIndex = 10;
			// 
			// guess2Bar
			// 
			this->guess2Bar->Location = System::Drawing::Point(50, 242);
			this->guess2Bar->Name = L"guess2Bar";
			this->guess2Bar->Size = System::Drawing::Size(480, 23);
			this->guess2Bar->TabIndex = 11;
			// 
			// guess3Bar
			// 
			this->guess3Bar->Location = System::Drawing::Point(50, 271);
			this->guess3Bar->Name = L"guess3Bar";
			this->guess3Bar->Size = System::Drawing::Size(480, 23);
			this->guess3Bar->TabIndex = 12;
			// 
			// guess4Bar
			// 
			this->guess4Bar->Location = System::Drawing::Point(50, 300);
			this->guess4Bar->Name = L"guess4Bar";
			this->guess4Bar->Size = System::Drawing::Size(480, 23);
			this->guess4Bar->TabIndex = 13;
			// 
			// guess5Bar
			// 
			this->guess5Bar->Location = System::Drawing::Point(50, 329);
			this->guess5Bar->Name = L"guess5Bar";
			this->guess5Bar->Size = System::Drawing::Size(480, 23);
			this->guess5Bar->TabIndex = 14;
			// 
			// guess6Bar
			// 
			this->guess6Bar->Location = System::Drawing::Point(50, 358);
			this->guess6Bar->Name = L"guess6Bar";
			this->guess6Bar->Size = System::Drawing::Size(480, 23);
			this->guess6Bar->TabIndex = 15;
			// 
			// guess1Label
			// 
			this->guess1Label->AutoSize = true;
			this->guess1Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess1Label->Location = System::Drawing::Point(26, 213);
			this->guess1Label->Name = L"guess1Label";
			this->guess1Label->Size = System::Drawing::Size(18, 19);
			this->guess1Label->TabIndex = 16;
			this->guess1Label->Text = L"1";
			// 
			// guess2Label
			// 
			this->guess2Label->AutoSize = true;
			this->guess2Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess2Label->Location = System::Drawing::Point(26, 242);
			this->guess2Label->Name = L"guess2Label";
			this->guess2Label->Size = System::Drawing::Size(18, 19);
			this->guess2Label->TabIndex = 17;
			this->guess2Label->Text = L"2";
			// 
			// guess3Label
			// 
			this->guess3Label->AutoSize = true;
			this->guess3Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess3Label->Location = System::Drawing::Point(26, 271);
			this->guess3Label->Name = L"guess3Label";
			this->guess3Label->Size = System::Drawing::Size(18, 19);
			this->guess3Label->TabIndex = 18;
			this->guess3Label->Text = L"3";
			// 
			// guess4Label
			// 
			this->guess4Label->AutoSize = true;
			this->guess4Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess4Label->Location = System::Drawing::Point(26, 300);
			this->guess4Label->Name = L"guess4Label";
			this->guess4Label->Size = System::Drawing::Size(18, 19);
			this->guess4Label->TabIndex = 19;
			this->guess4Label->Text = L"4";
			// 
			// guess5Label
			// 
			this->guess5Label->AutoSize = true;
			this->guess5Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess5Label->Location = System::Drawing::Point(26, 329);
			this->guess5Label->Name = L"guess5Label";
			this->guess5Label->Size = System::Drawing::Size(18, 19);
			this->guess5Label->TabIndex = 20;
			this->guess5Label->Text = L"5";
			// 
			// guess6Label
			// 
			this->guess6Label->AutoSize = true;
			this->guess6Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess6Label->Location = System::Drawing::Point(26, 358);
			this->guess6Label->Name = L"guess6Label";
			this->guess6Label->Size = System::Drawing::Size(18, 19);
			this->guess6Label->TabIndex = 21;
			this->guess6Label->Text = L"6";
			// 
			// playAgainBttn
			// 
			this->playAgainBttn->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->playAgainBttn->Location = System::Drawing::Point(216, 403);
			this->playAgainBttn->Name = L"playAgainBttn";
			this->playAgainBttn->Size = System::Drawing::Size(75, 30);
			this->playAgainBttn->TabIndex = 22;
			this->playAgainBttn->Text = L"Play Again";
			this->playAgainBttn->UseVisualStyleBackColor = true;
			// 
			// exitGameBttn
			// 
			this->exitGameBttn->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->exitGameBttn->Location = System::Drawing::Point(301, 403);
			this->exitGameBttn->Name = L"exitGameBttn";
			this->exitGameBttn->Size = System::Drawing::Size(75, 30);
			this->exitGameBttn->TabIndex = 23;
			this->exitGameBttn->Text = L"Exit Game";
			this->exitGameBttn->UseVisualStyleBackColor = true;
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 446);
			this->Controls->Add(this->exitGameBttn);
			this->Controls->Add(this->playAgainBttn);
			this->Controls->Add(this->guess6Label);
			this->Controls->Add(this->guess5Label);
			this->Controls->Add(this->guess4Label);
			this->Controls->Add(this->guess3Label);
			this->Controls->Add(this->guess2Label);
			this->Controls->Add(this->guess1Label);
			this->Controls->Add(this->guess6Bar);
			this->Controls->Add(this->guess5Bar);
			this->Controls->Add(this->guess4Bar);
			this->Controls->Add(this->guess3Bar);
			this->Controls->Add(this->guess2Bar);
			this->Controls->Add(this->guess1Bar);
			this->Controls->Add(this->maxStreakValueLabel);
			this->Controls->Add(this->currStreakValueLabel);
			this->Controls->Add(this->winValueLabel);
			this->Controls->Add(this->playedValueLabel);
			this->Controls->Add(this->guessDistLabel);
			this->Controls->Add(this->maxStreakLabel);
			this->Controls->Add(this->currStreakLabel);
			this->Controls->Add(this->playedLabel);
			this->Controls->Add(this->winLabel);
			this->Controls->Add(this->statsLabel);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StatisticsForm";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
