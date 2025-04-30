#include "MainForm.h"
#include "Model/WordDictionary.h"
#include "Model/WordleManager.h"
#include "View/UserProfileForm.h"
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <msclr/marshal_cppstd.h>

#include "Model/UserProfile.h"
#include "View/StatisticsForm.h"

using namespace System;
using namespace System::Windows::Forms;

void InitConsole()
{
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
}

[STAThread]
int main(array<String^>^ args)
{
    #ifdef SHOW_ANSWER
	    InitConsole();
    #endif

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	::View::UserProfileForm^ login = gcnew ::View::UserProfileForm();
	if (login->ShowDialog() == DialogResult::OK) {
		String^ username = login->GetUsername();
		bool allowReuse = login->GetAllowReuseLetters();

		Model::UserProfile* userProfile = new Model::UserProfile(msclr::interop::marshal_as<std::string>(username));
		TeamDWordle::MainForm^ game = gcnew TeamDWordle::MainForm(userProfile, allowReuse);
		Application::Run(game);
	}

	return 0;
}

namespace  TeamDWordle
{
	MainForm::MainForm(void)
	{
		InitializeComponent();
		this->setupUI();
	}

	MainForm::MainForm(Model::UserProfile* userProfile, bool allowReuseLetters)
	{
		InitializeComponent();
		this->userProfile = userProfile;
		this->allowReuseLetters = allowReuseLetters;
		this->setupUI();
	}

	void MainForm::setupUI()
	{
		this->myDictionary = new Model::WordDictionary();
		this->myDictionary->Load("./dictionary.txt", 5);

		this->myManager = new Model::WordleManager(myDictionary, this->allowReuseLetters);

		this->KeyPreview = true;
		this->KeyDown += gcnew KeyEventHandler(this, &MainForm::mainForm_KeyDown);

		this->currentRowIndex = 0;
		this->currentRowTiles = gcnew Generic::List<Label^>();
		this->currentRowTiles->AddRange(gcnew array<Label^>{
			this->Guess1Tile1, this->Guess1Tile2, this->Guess1Tile3, this->Guess1Tile4, this->Guess1Tile5
		});

		this->letterKeys = gcnew System::Collections::Generic::Dictionary<wchar_t, Button^>();

		array<Button^>^ keys = gcnew array<Button^>{
			this->keyQ, this->keyW, this->keyE, this->keyR, this->keyT, this->keyY, this->keyU, this->keyI, this->keyO, this->keyP,
		    this->keyA, this->keyS, this->keyD, this->keyF, this->keyG, this->keyH, this->keyJ, this->keyK, this->keyL,
			this->keyZ, this->keyX, this->keyC, this->keyV, this->keyB, this->keyN, this->keyM
		};

		for each (Button ^ key in keys)
		{
			if (!System::String::IsNullOrEmpty(key->Text) && key->Text->Length == 1)
			{
				wchar_t letter = key->Text[0];
				this->letterKeys[letter] = key;
				key->Click += gcnew EventHandler(this, &MainForm::letterButton_Click);
			}
		}

		this->keyEnter->Click += gcnew EventHandler(this, &MainForm::enterButton_Click);
		this->keyBackspace->Click += gcnew EventHandler(this, &MainForm::deleteButton_Click);
		this->bttnNewGame->Click += gcnew EventHandler(this, &MainForm::newGameButton_Click);
		this->bttnExitGame->Click += gcnew EventHandler(this, &MainForm::exitGameButton_Click);
		this->ActiveControl = this->keyEnter;
	}

	MainForm::~MainForm()
	{
		delete myDictionary;
		delete myManager;
		if (components)
		{
			delete components;
		}
		FreeConsole();
	}

	void MainForm::letterButton_Click(Object^ sender, EventArgs^ e)
	{
		Button^ clicked = safe_cast<Button^>(sender);
		if (!clicked) return;
		wchar_t letter = clicked->Text[0];
		this->processLetterInput(letter);
	}

	void MainForm::mainForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode >= Keys::A && e->KeyCode <= Keys::Z)
		{
			this->processLetterInput(static_cast<wchar_t>(e->KeyCode));
			e->SuppressKeyPress = true;
		}
		else if (e->KeyCode == Keys::Enter || e->KeyCode == Keys::Return)
		{
			if (this->keyEnter->Enabled)
				this->enterButton_Click(this, EventArgs::Empty);
				e->SuppressKeyPress = true;
		}
		else if (e->KeyCode == Keys::Back || e->KeyCode == Keys::Delete)
		{
			this->deleteButton_Click(this, EventArgs::Empty);
			e->SuppressKeyPress = true;
		}

	}

	void MainForm::processLetterInput(wchar_t letter)
	{
		Char c = static_cast<Char>(letter);

		for (int i = 0; i < this->currentRowTiles->Count; ++i)
		{
			if (String::IsNullOrEmpty(this->currentRowTiles[i]->Text))
			{
				this->currentRowTiles[i]->Text = c.ToString();
				break;
			}
		}
	}

	void MainForm::setCurrentRowTiles(int index)
	{
		auto rows = gcnew array<array<System::Windows::Forms::Label^>^> {
			gcnew array<System::Windows::Forms::Label^> { this->Guess1Tile1, this->Guess1Tile2, this->Guess1Tile3, this->Guess1Tile4, this->Guess1Tile5 },
				gcnew array<System::Windows::Forms::Label^> { this->Guess2Tile1, this->Guess2Tile2, this->Guess2Tile3, this->Guess2Tile4, this->Guess2Tile5 },
				gcnew array<System::Windows::Forms::Label^> { this->Guess3Tile1, this->Guess3Tile2, this->Guess3Tile3, this->Guess3Tile4, this->Guess3Tile5 },
				gcnew array<System::Windows::Forms::Label^> { this->Guess4Tile1, this->Guess4Tile2, this->Guess4Tile3, this->Guess4Tile4, this->Guess4Tile5 },
				gcnew array<System::Windows::Forms::Label^> { this->Guess5Tile1, this->Guess5Tile2, this->Guess5Tile3, this->Guess5Tile4, this->Guess5Tile5 },
				gcnew array<System::Windows::Forms::Label^> { this->Guess6Tile1, this->Guess6Tile2, this->Guess6Tile3, this->Guess6Tile4, this->Guess6Tile5 }
		};

		if (index >= 0 && index < rows->Length)
		{
			this->currentRowTiles->Clear();
			this->currentRowTiles->AddRange(rows[index]);
		}
		else
		{
			System::Diagnostics::Debug::WriteLine("setCurrentRowTiles: unexpected index " + index.ToString());
			this->currentRowTiles->Clear();
			this->currentRowTiles->AddRange(rows[0]);
		}
	}

	bool MainForm::isRowComplete(Generic::List<Label^>^ rowTiles)
	{
		for each (Label ^ lbl in rowTiles)
		{
			if (String::IsNullOrEmpty(lbl->Text))
			{
				return false;
			}
		}
		return true;
	}

	void MainForm::EndGame(bool gameWon, int guessCount)
	{

		this->userProfile->UpdateStats(gameWon, guessCount);

		System::String^ message = "Game Over!\n";
		message += "Username: " + gcnew System::String(this->userProfile->GetUsername().c_str()) + "\n";
		message += "Total Games Played: " + this->userProfile->GetTotalGamesPlayed() + "\n";
		message += "Wins: " + this->userProfile->GetWins() + "\n";
		message += "Win Percentage: " + this->userProfile->GetWinPercentage() + "%\n";
		MessageBox::Show(message, "Game Stats");

		::View::StatisticsForm^ statsForm = gcnew ::View::StatisticsForm(this->userProfile);
		System::Windows::Forms::DialogResult result = statsForm->ShowDialog(this);
		if (result == System::Windows::Forms::DialogResult::OK) {
			this->startNewGame();
		}
		else {
			Application::Exit();
		}
	}


	void MainForm::enterButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!this->isRowComplete(this->currentRowTiles))
		{
			MessageBox::Show(
				"Please fill all 5 letters before submitting.",
				"Incomplete guess",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning
			);
			return;
		}

		std::string guess;
		for each (Label ^ lbl in this->currentRowTiles)
		{
			char ch = static_cast<char>(lbl->Text[0]);
			guess.push_back(static_cast<char>(std::tolower(ch)));
		}

		if (!this->myDictionary->Contains(guess))
		{
			MessageBox::Show("Not in Word List.", "Invalid guess");
			return;
		}

		// Score & color the tiles using WordleManager
		std::vector<Model::Feedback> feedback = this->myManager->Guess(guess);

		for (int i = 0; i < feedback.size(); ++i) {
			switch (feedback[i]) {
			case Model::Feedback::Correct:
				this->currentRowTiles[i]->BackColor = System::Drawing::ColorTranslator::FromHtml("#6CA965");
				this->currentRowTiles[i]->ForeColor = System::Drawing::Color::White;
				break;
			case Model::Feedback::WrongPosition:
				this->currentRowTiles[i]->BackColor = System::Drawing::ColorTranslator::FromHtml("#C8B653");
				this->currentRowTiles[i]->ForeColor = System::Drawing::Color::White;
				break;
			case Model::Feedback::Incorrect:
				this->currentRowTiles[i]->BackColor = System::Drawing::ColorTranslator::FromHtml("#787C7F");
				this->currentRowTiles[i]->ForeColor = System::Drawing::Color::White;
				break;
			}
		}

		ColorUsedLetterKeys(guess, feedback);

		// Check result and show a message if game ends
		System::String^ result = gcnew System::String(this->myManager->getResult().c_str());

		if (result == "Correct!") {
			MessageBox::Show("Congratulations! You guessed the word!", "You Win");
			this->keyEnter->Enabled = false;
			this->keyBackspace->Enabled = false;
			this->EndGame(true, this->currentRowIndex + 1);
			return;
		}
		else if (result->StartsWith("Game Over")) {
			MessageBox::Show(result, "Game Over");
			this->keyEnter->Enabled = false;
			this->keyBackspace->Enabled = false;
			this->EndGame(false, this->currentRowIndex + 1);
			return;
		}

		if (this->currentRowIndex < 5)
		{
			this->currentRowIndex++;
			this->setCurrentRowTiles(this->currentRowIndex);
		}
	}

	int getColorRank(System::Drawing::Color color) {
		if (color == System::Drawing::ColorTranslator::FromHtml("#6CA965")) return 3;
		if (color == System::Drawing::ColorTranslator::FromHtml("#C8B653")) return 2;
		if (color == System::Drawing::ColorTranslator::FromHtml("#787C7F")) return 1;
		return 0;
	}

	void MainForm::ColorUsedLetterKeys(std::string& guess, std::vector<Model::Feedback>& feedback)
	{
		for (int i = 0; i < guess.length(); ++i)
		{
			char character = std::toupper(guess[i]);
			Button^ keyButton = this->letterKeys[character];

			System::Drawing::Color currentColor = keyButton->BackColor;
			System::Drawing::Color newColor = currentColor;

			switch (feedback[i])
			{
			case Model::Feedback::Correct:
				newColor = System::Drawing::ColorTranslator::FromHtml("#6CA965");
				break;
			case Model::Feedback::WrongPosition:
				if (getColorRank(currentColor) < 2) {
					newColor = System::Drawing::ColorTranslator::FromHtml("#C8B653");
				}
				break;
			case Model::Feedback::Incorrect:
				if (getColorRank(currentColor) < 1) {
					newColor = System::Drawing::ColorTranslator::FromHtml("#787C7F");
				}
				break;
			default:
				continue;
			}

			if (newColor != currentColor) {
				keyButton->BackColor = newColor;
				keyButton->ForeColor = System::Drawing::Color::White;
			}
		}
	}

	void MainForm::deleteButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = this->currentRowTiles->Count - 1; i >= 0; --i)
		{
			if (!String::IsNullOrEmpty(this->currentRowTiles[i]->Text))
			{
				this->currentRowTiles[i]->Text = L"";
				break;
			}
		}
	}

	void MainForm::startNewGame()
	{
		this->currentRowIndex = 0;
		this->currentRowTiles->Clear();
		this->currentRowTiles->AddRange(gcnew array<Label^> {
			this->Guess1Tile1,
				this->Guess1Tile2,
				this->Guess1Tile3,
				this->Guess1Tile4,
				this->Guess1Tile5
		});

		for each (Control ^ ctl in this->guessGrid->Controls)
		{
			if (auto lbl = dynamic_cast<Label^>(ctl))
			{
				lbl->Text = L"";
				lbl->BackColor = System::Drawing::Color::White;
				lbl->ForeColor = System::Drawing::Color::Black;
			}
		}

		for each (Button ^ key in this->letterKeys->Values)
		{
			key->BackColor = System::Drawing::Color::LightGray;
			key->ForeColor = System::Drawing::SystemColors::ControlText;
		}

		this->myManager->setRandomWord();

		MessageBox::Show("New game started!", "Reset", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->ActiveControl = this->keyEnter;
		this->keyEnter->Enabled = true;
		this->keyBackspace->Enabled = true;
	}

	void MainForm::newGameButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->startNewGame();
	}

	void MainForm::exitGameButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (MessageBox::Show("Are you sure you want to exit?", "Exit Game", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}

}
