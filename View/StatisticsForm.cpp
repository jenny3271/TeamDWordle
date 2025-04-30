#include "StatisticsForm.h"
#include "../Model/UserProfile.h"
#include "../MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

namespace View
{
	StatisticsForm::StatisticsForm(void)
	{
		InitializeComponent();
	}

	StatisticsForm::StatisticsForm(Model::UserProfile* profile)
	{
		InitializeComponent();
		this->userProfile = profile;
		this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
		this->playAgainBttn->Click += gcnew System::EventHandler(this, &StatisticsForm::playAgain_Click);
		this->exitGameBttn->Click += gcnew System::EventHandler(this, &StatisticsForm::exitGame_Click);

	}

	StatisticsForm::~StatisticsForm()
	{
		if (components)
		{
			delete components;
		}
	}

	void StatisticsForm::StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->playedValueLabel->Text = this->userProfile->GetTotalGamesPlayed().ToString();
		this->winValueLabel->Text = this->userProfile->GetWinPercentage().ToString();
		this->currStreakValueLabel->Text = this->userProfile->GetCurrentWinStreak().ToString();
		this->maxStreakValueLabel->Text = this->userProfile->GetMaxWinStreak().ToString();

		const std::array<int, 6>& distribution = this->userProfile->GetGuessDistribution();
		int totalGames = this->userProfile->GetTotalGamesPlayed();
		int maxCount = *std::max_element(distribution.begin(), distribution.end());
		int correctGuessIndex = this->userProfile->GetLastCorrectGuessIndex();

		if (totalGames > 0) {
			this->updateGuessDistribution(distribution, maxCount, correctGuessIndex);
		}
	}

	void StatisticsForm::playAgain_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}

	void StatisticsForm::exitGame_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (MessageBox::Show("Are you sure you want to exit?", "Exit Game", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		}
	}

	void StatisticsForm::updateGuessDistribution(const std::array<int, 6>& guessCounts, int maxCount, int correctGuessIndex)
	{
		array<System::Windows::Forms::Panel^>^ guessBars = { this->guess1Bar, this->guess2Bar, this->guess3Bar, this->guess4Bar, this->guess5Bar, this->guess6Bar };
		array<System::Windows::Forms::Label^>^ barLabels = { this->bar1GuessCount, this->bar2GuessCount, this->bar3GuessCount, this->bar4GuessCount, this->bar5GuessCount, this->bar6GuessCount };

		for (int i = 0; i < guessBars->Length; i++) {
			int barWidth = maxCount > 0 ? (guessCounts[i] * guessBars[i]->Parent->Width) / maxCount : 0;
			guessBars[i]->Width = barWidth > 0 ? barWidth : 20;

			guessBars[i]->BackColor = (i == correctGuessIndex)
				? System::Drawing::ColorTranslator::FromHtml("#6CA965")
				: System::Drawing::Color::Gray;

			int labelXPosition = guessBars[i]->Width - barLabels[i]->Width;
			labelXPosition = Math::Max(labelXPosition, 0);
			barLabels[i]->Location = System::Drawing::Point(labelXPosition, (guessBars[i]->Height - barLabels[i]->Height) / 2);
			barLabels[i]->Text = System::Convert::ToString(guessCounts[i]);
		}
	}
}
