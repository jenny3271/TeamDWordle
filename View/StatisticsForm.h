#pragma once

#include "../Model/UserProfile.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace View {
	/// <summary>
	/// Summary for StatisticsForm
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void);

		StatisticsForm(Model::UserProfile* profile);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatisticsForm();

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
		Model::UserProfile* userProfile;
	private: System::Windows::Forms::TableLayoutPanel^ guessDistributionGrid;






	private: System::Windows::Forms::TableLayoutPanel^ statsGrid;
	private: System::Windows::Forms::Panel^ guess1Bar;

	private: System::Windows::Forms::Panel^ guess2Bar;
	private: System::Windows::Forms::Panel^ guess3Bar;

	private: System::Windows::Forms::Panel^ guess4Bar;
	private: System::Windows::Forms::Panel^ guess5Bar;
	private: System::Windows::Forms::Panel^ guess6Bar;
	private: System::Windows::Forms::Label^ bar1GuessCount;
	private: System::Windows::Forms::Label^ bar2GuessCount;
	private: System::Windows::Forms::Label^ bar3GuessCount;
	private: System::Windows::Forms::Label^ bar4GuessCount;
	private: System::Windows::Forms::Label^ bar5GuessCount;
	private: System::Windows::Forms::Label^ bar6GuessCount;



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
			this->guess1Label = (gcnew System::Windows::Forms::Label());
			this->guess2Label = (gcnew System::Windows::Forms::Label());
			this->guess3Label = (gcnew System::Windows::Forms::Label());
			this->guess4Label = (gcnew System::Windows::Forms::Label());
			this->guess5Label = (gcnew System::Windows::Forms::Label());
			this->guess6Label = (gcnew System::Windows::Forms::Label());
			this->playAgainBttn = (gcnew System::Windows::Forms::Button());
			this->exitGameBttn = (gcnew System::Windows::Forms::Button());
			this->guessDistributionGrid = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->guess1Bar = (gcnew System::Windows::Forms::Panel());
			this->bar1GuessCount = (gcnew System::Windows::Forms::Label());
			this->guess2Bar = (gcnew System::Windows::Forms::Panel());
			this->bar2GuessCount = (gcnew System::Windows::Forms::Label());
			this->guess3Bar = (gcnew System::Windows::Forms::Panel());
			this->bar3GuessCount = (gcnew System::Windows::Forms::Label());
			this->guess4Bar = (gcnew System::Windows::Forms::Panel());
			this->bar4GuessCount = (gcnew System::Windows::Forms::Label());
			this->guess5Bar = (gcnew System::Windows::Forms::Panel());
			this->bar5GuessCount = (gcnew System::Windows::Forms::Label());
			this->guess6Bar = (gcnew System::Windows::Forms::Panel());
			this->bar6GuessCount = (gcnew System::Windows::Forms::Label());
			this->statsGrid = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->guessDistributionGrid->SuspendLayout();
			this->guess1Bar->SuspendLayout();
			this->guess2Bar->SuspendLayout();
			this->guess3Bar->SuspendLayout();
			this->guess4Bar->SuspendLayout();
			this->guess5Bar->SuspendLayout();
			this->guess6Bar->SuspendLayout();
			this->statsGrid->SuspendLayout();
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
			this->winLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->winLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->winLabel->Location = System::Drawing::Point(95, 60);
			this->winLabel->Name = L"winLabel";
			this->winLabel->Size = System::Drawing::Size(86, 40);
			this->winLabel->TabIndex = 1;
			this->winLabel->Text = L"Win %";
			this->winLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// playedLabel
			// 
			this->playedLabel->AutoSize = true;
			this->playedLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->playedLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playedLabel->Location = System::Drawing::Point(3, 60);
			this->playedLabel->Name = L"playedLabel";
			this->playedLabel->Size = System::Drawing::Size(86, 40);
			this->playedLabel->TabIndex = 2;
			this->playedLabel->Text = L"Played";
			this->playedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// currStreakLabel
			// 
			this->currStreakLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currStreakLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currStreakLabel->Location = System::Drawing::Point(187, 60);
			this->currStreakLabel->MaximumSize = System::Drawing::Size(100, 40);
			this->currStreakLabel->Name = L"currStreakLabel";
			this->currStreakLabel->Size = System::Drawing::Size(86, 40);
			this->currStreakLabel->TabIndex = 3;
			this->currStreakLabel->Text = L"Current\nStreak";
			this->currStreakLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maxStreakLabel
			// 
			this->maxStreakLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxStreakLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxStreakLabel->Location = System::Drawing::Point(279, 60);
			this->maxStreakLabel->MaximumSize = System::Drawing::Size(100, 40);
			this->maxStreakLabel->Name = L"maxStreakLabel";
			this->maxStreakLabel->Size = System::Drawing::Size(88, 40);
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
			this->playedValueLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->playedValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 30));
			this->playedValueLabel->Location = System::Drawing::Point(3, 0);
			this->playedValueLabel->Name = L"playedValueLabel";
			this->playedValueLabel->Size = System::Drawing::Size(86, 60);
			this->playedValueLabel->TabIndex = 6;
			this->playedValueLabel->Text = L"0";
			this->playedValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// winValueLabel
			// 
			this->winValueLabel->AutoSize = true;
			this->winValueLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->winValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 30));
			this->winValueLabel->Location = System::Drawing::Point(95, 0);
			this->winValueLabel->Name = L"winValueLabel";
			this->winValueLabel->Size = System::Drawing::Size(86, 60);
			this->winValueLabel->TabIndex = 7;
			this->winValueLabel->Text = L"0";
			this->winValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// currStreakValueLabel
			// 
			this->currStreakValueLabel->AutoSize = true;
			this->currStreakValueLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currStreakValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 30));
			this->currStreakValueLabel->Location = System::Drawing::Point(187, 0);
			this->currStreakValueLabel->Name = L"currStreakValueLabel";
			this->currStreakValueLabel->Size = System::Drawing::Size(86, 60);
			this->currStreakValueLabel->TabIndex = 8;
			this->currStreakValueLabel->Text = L"0";
			this->currStreakValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maxStreakValueLabel
			// 
			this->maxStreakValueLabel->AutoSize = true;
			this->maxStreakValueLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxStreakValueLabel->Font = (gcnew System::Drawing::Font(L"Arial", 30));
			this->maxStreakValueLabel->Location = System::Drawing::Point(279, 0);
			this->maxStreakValueLabel->Name = L"maxStreakValueLabel";
			this->maxStreakValueLabel->Size = System::Drawing::Size(88, 60);
			this->maxStreakValueLabel->TabIndex = 9;
			this->maxStreakValueLabel->Text = L"0";
			this->maxStreakValueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess1Label
			// 
			this->guess1Label->AutoSize = true;
			this->guess1Label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guess1Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess1Label->Location = System::Drawing::Point(3, 0);
			this->guess1Label->Name = L"guess1Label";
			this->guess1Label->Size = System::Drawing::Size(27, 29);
			this->guess1Label->TabIndex = 16;
			this->guess1Label->Text = L"1";
			this->guess1Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess2Label
			// 
			this->guess2Label->AutoSize = true;
			this->guess2Label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guess2Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess2Label->Location = System::Drawing::Point(3, 29);
			this->guess2Label->Name = L"guess2Label";
			this->guess2Label->Size = System::Drawing::Size(27, 29);
			this->guess2Label->TabIndex = 17;
			this->guess2Label->Text = L"2";
			this->guess2Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess3Label
			// 
			this->guess3Label->AutoSize = true;
			this->guess3Label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guess3Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess3Label->Location = System::Drawing::Point(3, 58);
			this->guess3Label->Name = L"guess3Label";
			this->guess3Label->Size = System::Drawing::Size(27, 29);
			this->guess3Label->TabIndex = 18;
			this->guess3Label->Text = L"3";
			this->guess3Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess4Label
			// 
			this->guess4Label->AutoSize = true;
			this->guess4Label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guess4Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess4Label->Location = System::Drawing::Point(3, 87);
			this->guess4Label->Name = L"guess4Label";
			this->guess4Label->Size = System::Drawing::Size(27, 29);
			this->guess4Label->TabIndex = 19;
			this->guess4Label->Text = L"4";
			this->guess4Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess5Label
			// 
			this->guess5Label->AutoSize = true;
			this->guess5Label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guess5Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess5Label->Location = System::Drawing::Point(3, 116);
			this->guess5Label->Name = L"guess5Label";
			this->guess5Label->Size = System::Drawing::Size(27, 29);
			this->guess5Label->TabIndex = 20;
			this->guess5Label->Text = L"5";
			this->guess5Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guess6Label
			// 
			this->guess6Label->AutoSize = true;
			this->guess6Label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guess6Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guess6Label->Location = System::Drawing::Point(3, 145);
			this->guess6Label->Name = L"guess6Label";
			this->guess6Label->Size = System::Drawing::Size(27, 30);
			this->guess6Label->TabIndex = 21;
			this->guess6Label->Text = L"6";
			this->guess6Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// guessDistributionGrid
			// 
			this->guessDistributionGrid->ColumnCount = 2;
			this->guessDistributionGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				6.6F)));
			this->guessDistributionGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				93.4F)));
			this->guessDistributionGrid->Controls->Add(this->guess1Bar, 1, 0);
			this->guessDistributionGrid->Controls->Add(this->guess1Label, 0, 0);
			this->guessDistributionGrid->Controls->Add(this->guess2Label, 0, 1);
			this->guessDistributionGrid->Controls->Add(this->guess3Label, 0, 2);
			this->guessDistributionGrid->Controls->Add(this->guess6Label, 0, 5);
			this->guessDistributionGrid->Controls->Add(this->guess4Label, 0, 3);
			this->guessDistributionGrid->Controls->Add(this->guess5Label, 0, 4);
			this->guessDistributionGrid->Controls->Add(this->guess2Bar, 1, 1);
			this->guessDistributionGrid->Controls->Add(this->guess3Bar, 1, 2);
			this->guessDistributionGrid->Controls->Add(this->guess4Bar, 1, 3);
			this->guessDistributionGrid->Controls->Add(this->guess5Bar, 1, 4);
			this->guessDistributionGrid->Controls->Add(this->guess6Bar, 1, 5);
			this->guessDistributionGrid->Location = System::Drawing::Point(40, 210);
			this->guessDistributionGrid->Name = L"guessDistributionGrid";
			this->guessDistributionGrid->RowCount = 6;
			this->guessDistributionGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->guessDistributionGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->guessDistributionGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->guessDistributionGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->guessDistributionGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->guessDistributionGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->guessDistributionGrid->Size = System::Drawing::Size(500, 175);
			this->guessDistributionGrid->TabIndex = 24;
			// 
			// guess1Bar
			// 
			this->guess1Bar->Controls->Add(this->bar1GuessCount);
			this->guess1Bar->Location = System::Drawing::Point(36, 3);
			this->guess1Bar->Name = L"guess1Bar";
			this->guess1Bar->Size = System::Drawing::Size(461, 23);
			this->guess1Bar->TabIndex = 26;
			// 
			// bar1GuessCount
			// 
			this->bar1GuessCount->AutoSize = true;
			this->bar1GuessCount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bar1GuessCount->ForeColor = System::Drawing::Color::White;
			this->bar1GuessCount->Location = System::Drawing::Point(0, 2);
			this->bar1GuessCount->Name = L"bar1GuessCount";
			this->bar1GuessCount->Size = System::Drawing::Size(18, 19);
			this->bar1GuessCount->TabIndex = 0;
			this->bar1GuessCount->Text = L"0";
			// 
			// guess2Bar
			// 
			this->guess2Bar->Controls->Add(this->bar2GuessCount);
			this->guess2Bar->Location = System::Drawing::Point(36, 32);
			this->guess2Bar->Name = L"guess2Bar";
			this->guess2Bar->Size = System::Drawing::Size(461, 23);
			this->guess2Bar->TabIndex = 28;
			// 
			// bar2GuessCount
			// 
			this->bar2GuessCount->AutoSize = true;
			this->bar2GuessCount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bar2GuessCount->ForeColor = System::Drawing::Color::White;
			this->bar2GuessCount->Location = System::Drawing::Point(0, 2);
			this->bar2GuessCount->Name = L"bar2GuessCount";
			this->bar2GuessCount->Size = System::Drawing::Size(18, 19);
			this->bar2GuessCount->TabIndex = 0;
			this->bar2GuessCount->Text = L"0";
			// 
			// guess3Bar
			// 
			this->guess3Bar->Controls->Add(this->bar3GuessCount);
			this->guess3Bar->Location = System::Drawing::Point(36, 61);
			this->guess3Bar->Name = L"guess3Bar";
			this->guess3Bar->Size = System::Drawing::Size(461, 23);
			this->guess3Bar->TabIndex = 29;
			// 
			// bar3GuessCount
			// 
			this->bar3GuessCount->AutoSize = true;
			this->bar3GuessCount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bar3GuessCount->ForeColor = System::Drawing::Color::White;
			this->bar3GuessCount->Location = System::Drawing::Point(0, 2);
			this->bar3GuessCount->Name = L"bar3GuessCount";
			this->bar3GuessCount->Size = System::Drawing::Size(18, 19);
			this->bar3GuessCount->TabIndex = 0;
			this->bar3GuessCount->Text = L"0";
			// 
			// guess4Bar
			// 
			this->guess4Bar->Controls->Add(this->bar4GuessCount);
			this->guess4Bar->Location = System::Drawing::Point(36, 90);
			this->guess4Bar->Name = L"guess4Bar";
			this->guess4Bar->Size = System::Drawing::Size(461, 23);
			this->guess4Bar->TabIndex = 30;
			// 
			// bar4GuessCount
			// 
			this->bar4GuessCount->AutoSize = true;
			this->bar4GuessCount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bar4GuessCount->ForeColor = System::Drawing::Color::White;
			this->bar4GuessCount->Location = System::Drawing::Point(0, 2);
			this->bar4GuessCount->Name = L"bar4GuessCount";
			this->bar4GuessCount->Size = System::Drawing::Size(18, 19);
			this->bar4GuessCount->TabIndex = 0;
			this->bar4GuessCount->Text = L"0";
			// 
			// guess5Bar
			// 
			this->guess5Bar->Controls->Add(this->bar5GuessCount);
			this->guess5Bar->Location = System::Drawing::Point(36, 119);
			this->guess5Bar->Name = L"guess5Bar";
			this->guess5Bar->Size = System::Drawing::Size(461, 23);
			this->guess5Bar->TabIndex = 31;
			// 
			// bar5GuessCount
			// 
			this->bar5GuessCount->AutoSize = true;
			this->bar5GuessCount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bar5GuessCount->ForeColor = System::Drawing::Color::White;
			this->bar5GuessCount->Location = System::Drawing::Point(0, 2);
			this->bar5GuessCount->Name = L"bar5GuessCount";
			this->bar5GuessCount->Size = System::Drawing::Size(18, 19);
			this->bar5GuessCount->TabIndex = 0;
			this->bar5GuessCount->Text = L"0";
			// 
			// guess6Bar
			// 
			this->guess6Bar->Controls->Add(this->bar6GuessCount);
			this->guess6Bar->Location = System::Drawing::Point(36, 148);
			this->guess6Bar->Name = L"guess6Bar";
			this->guess6Bar->Size = System::Drawing::Size(461, 24);
			this->guess6Bar->TabIndex = 32;
			// 
			// bar6GuessCount
			// 
			this->bar6GuessCount->AutoSize = true;
			this->bar6GuessCount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bar6GuessCount->ForeColor = System::Drawing::Color::White;
			this->bar6GuessCount->Location = System::Drawing::Point(0, 2);
			this->bar6GuessCount->Name = L"bar6GuessCount";
			this->bar6GuessCount->Size = System::Drawing::Size(18, 19);
			this->bar6GuessCount->TabIndex = 0;
			this->bar6GuessCount->Text = L"0";
			// 
			// statsGrid
			// 
			this->statsGrid->ColumnCount = 4;
			this->statsGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->statsGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->statsGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->statsGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->statsGrid->Controls->Add(this->winValueLabel, 1, 0);
			this->statsGrid->Controls->Add(this->currStreakValueLabel, 2, 0);
			this->statsGrid->Controls->Add(this->maxStreakValueLabel, 3, 0);
			this->statsGrid->Controls->Add(this->playedValueLabel, 0, 0);
			this->statsGrid->Controls->Add(this->playedLabel, 0, 1);
			this->statsGrid->Controls->Add(this->maxStreakLabel, 3, 1);
			this->statsGrid->Controls->Add(this->winLabel, 1, 1);
			this->statsGrid->Controls->Add(this->currStreakLabel, 2, 1);
			this->statsGrid->Location = System::Drawing::Point(115, 44);
			this->statsGrid->Name = L"statsGrid";
			this->statsGrid->RowCount = 2;
			this->statsGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->statsGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->statsGrid->Size = System::Drawing::Size(370, 100);
			this->statsGrid->TabIndex = 25;
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(584, 446);
			this->Controls->Add(this->statsGrid);
			this->Controls->Add(this->guessDistributionGrid);
			this->Controls->Add(this->exitGameBttn);
			this->Controls->Add(this->playAgainBttn);
			this->Controls->Add(this->guessDistLabel);
			this->Controls->Add(this->statsLabel);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StatisticsForm";
			this->guessDistributionGrid->ResumeLayout(false);
			this->guessDistributionGrid->PerformLayout();
			this->guess1Bar->ResumeLayout(false);
			this->guess1Bar->PerformLayout();
			this->guess2Bar->ResumeLayout(false);
			this->guess2Bar->PerformLayout();
			this->guess3Bar->ResumeLayout(false);
			this->guess3Bar->PerformLayout();
			this->guess4Bar->ResumeLayout(false);
			this->guess4Bar->PerformLayout();
			this->guess5Bar->ResumeLayout(false);
			this->guess5Bar->PerformLayout();
			this->guess6Bar->ResumeLayout(false);
			this->guess6Bar->PerformLayout();
			this->statsGrid->ResumeLayout(false);
			this->statsGrid->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void updateGuessDistribution(const std::array<int, 6>& guessCounts, int maxCount, int correctGuessIndex);
		void playAgain_Click(System::Object^ sender, System::EventArgs^ e);
		void exitGame_Click(System::Object^ sender, System::EventArgs^ e);
		void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
