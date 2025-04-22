#include "MainForm.h"
#include "Model/WordDictionary.h"
#include "Model/WordleManager.h"
#include "View/UserProfileForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	// Initialize the WordDictionary and load the dictionary file FOR TESTING
    Model::WordDictionary dict;
	System::Diagnostics::Debug::WriteLine("loaded file: " + dict.Load("./dictionary.txt", 5));//TRUE
	System::Diagnostics::Debug::WriteLine("dictionary contains apple: " + dict.Contains("apple"));//TRUE
	System::Diagnostics::Debug::WriteLine("dictionary contains appl: " + dict.Contains("appl"));//FALSE
	System::Diagnostics::Debug::WriteLine("dictionary contains sense: " + dict.Contains("sense"));//TRUE

    std::string* randomWord = dict.GetRandomWord();  
    System::Diagnostics::Debug::WriteLine("dictionary random word: " + gcnew System::String(randomWord->c_str()));

    //Model::WordleManager wordleManager;
    // wordleManager.setRandomWord();//rando
    // Model::WordleManager game;
    // std::vector<std::string> testGuesses = {
    //     "alert", "apply", "apple", "rando"
    // };

    // for (const std::string& guess : testGuesses) {
    //     System::Diagnostics::Debug::WriteLine("Guessing: ");
    //     game.Guess(guess);

    //     auto feedback = game.getLastFeedback();
    //     System::Diagnostics::Debug::WriteLine("Feedback: ");
    //     for (auto f : feedback) {
    //         switch (f) {
    //         case Model::Feedback::Correct: System::Diagnostics::Debug::WriteLine( "[C] "); break;
    //         case Model::Feedback::WrongPosition: System::Diagnostics::Debug::WriteLine("[I] "); break;
    //         case Model::Feedback::Incorrect: System::Diagnostics::Debug::WriteLine("[X] "); break;
    //         }
    //     }
    // }


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// TODO This currently shows the login dialog first (no actual username tracking yet). Need to implement username tracking and allow reuse of letters.
	::View::UserProfileForm^ login = gcnew ::View::UserProfileForm();
	login->ShowDialog();
	
	TeamDWordle::MainForm^ game = gcnew TeamDWordle::MainForm();
	Application::Run(game);

	delete randomWord;
	return 0;
}

namespace  TeamDWordle
{
	MainForm::MainForm(void)
	{
		InitializeComponent();

		this->myDictionary = new Model::WordDictionary();
		this->myDictionary->Load("./dictionary.txt", 5);

		this->KeyPreview = true;
		this->KeyDown += gcnew KeyEventHandler(this, &MainForm::mainForm_KeyDown);

		this->currentRowIndex = 0;
		this->currentRowTiles = gcnew Generic::List<Label^>();
		this->currentRowTiles->AddRange(gcnew array<Label^>{
			this->Guess1Tile1, this->Guess1Tile2, this->Guess1Tile3, this->Guess1Tile4, this->Guess1Tile5
		});

		for each (Button ^ key in gcnew array<Button^>{
			this->keyQ, this->keyW,this->keyE, this->keyR, this->keyT, this->keyY, this->keyU, this->keyI, this->keyO, this->keyP,
				this->keyA, this->keyS, this->keyD, this->keyF, this->keyG, this->keyH, this->keyJ, this->keyK, this->keyL,
				this->keyZ, this->keyX, this->keyC, this->keyV, this->keyB, this->keyN, this->keyM })
		{
			key->Click += gcnew EventHandler(this, &MainForm::letterButton_Click);
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
		if (components)
		{
			delete components;
		}
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

	void MainForm::enterButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		bool incomplete = false;
		for each (Label ^ lbl in this->currentRowTiles) {
			if (String::IsNullOrEmpty(lbl->Text)) {
				incomplete = true;
				break;
			}
		}
		if (incomplete) {
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

		// TODO: score & color the tiles in currentRowTiles

		if (this->currentRowIndex < 5)
		{
			this->currentRowIndex++;
			this->currentRowTiles->Clear();

			switch (this->currentRowIndex)
			{
			case 0:
			{
				auto row1 = gcnew array<System::Windows::Forms::Label^> {
					this->Guess1Tile1, this->Guess1Tile2, this->Guess1Tile3, this->Guess1Tile4, this->Guess1Tile5
				};
				this->currentRowTiles->AddRange(row1);
				break;
			}
			case 1:
			{
				auto row2 = gcnew array<System::Windows::Forms::Label^> {
					this->Guess2Tile1, this->Guess2Tile2, this->Guess2Tile3, this->Guess2Tile4, this->Guess2Tile5
				};
				this->currentRowTiles->AddRange(row2);
				break;
			}
			case 2:
			{
				auto row3 = gcnew array<System::Windows::Forms::Label^> {
					this->Guess3Tile1, this->Guess3Tile2, this->Guess3Tile3, this->Guess3Tile4, this->Guess3Tile5
				};
				this->currentRowTiles->AddRange(row3);
				break;
			}
			case 3:
			{
				auto row4 = gcnew array<System::Windows::Forms::Label^> {
					this->Guess4Tile1, this->Guess4Tile2, this->Guess4Tile3, this->Guess4Tile4, this->Guess4Tile5
				};
				this->currentRowTiles->AddRange(row4);
				break;
			}
			case 4:
			{
				auto row5 = gcnew array<System::Windows::Forms::Label^> {
					this->Guess5Tile1, this->Guess5Tile2, this->Guess5Tile3, this->Guess5Tile4, this->Guess5Tile5
				};
				this->currentRowTiles->AddRange(row5);
				break;
			}
			case 5:
			{
				auto row6 = gcnew array<System::Windows::Forms::Label^> {
					this->Guess6Tile1, this->Guess6Tile2, this->Guess6Tile3, this->Guess6Tile4, this->Guess6Tile5
				};
				this->currentRowTiles->AddRange(row6);
				break;
			}
			default: 
				System::Diagnostics::Debug::WriteLine(
					"enterButton_Click: unexpected row index " + this->currentRowIndex.ToString());
				auto row1 = gcnew array<Label^>{
					this->Guess1Tile1, this->Guess1Tile2, this->Guess1Tile3, this->Guess1Tile4, this->Guess1Tile5
				};
				this->currentRowTiles->AddRange(row1);
				this->currentRowIndex = 0;
				break;
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

	void MainForm::newGameButton_Click(System::Object^ sender, System::EventArgs^ e)
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
			}
		}

		// TODO: reset the game state in WordleManager and set a new random word

		MessageBox::Show("New game started!", "Reset", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->ActiveControl = this->keyEnter;
	}

	void MainForm::exitGameButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (MessageBox::Show("Are you sure you want to exit?", "Exit Game", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}

}
