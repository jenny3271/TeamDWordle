#pragma once
#include "Model/WordDictionary.h"
#include "Model/WordleManager.h"

namespace TeamDWordle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);

		MainForm(System::String^ username, bool allowReuse)
			: MainForm()
		{
			//TODO track usernames and allowReuse
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm();

	private: System::Windows::Forms::TableLayoutPanel^ guessGrid;
	private: System::Windows::Forms::Label^ Guess1Tile1;
	private: System::Windows::Forms::Label^ Guess1Tile2;
	private: System::Windows::Forms::Label^ Guess1Tile3;
	private: System::Windows::Forms::Label^ Guess1Tile4;
	private: System::Windows::Forms::Label^ Guess1Tile5;
	private: System::Windows::Forms::Label^ Guess2Tile2;
	private: System::Windows::Forms::Label^ Guess2Tile1;
	private: System::Windows::Forms::Label^ Guess2Tile3;
	private: System::Windows::Forms::Label^ Guess2Tile4;
	private: System::Windows::Forms::Label^ Guess2Tile5;
	private: System::Windows::Forms::Label^ Guess3Tile1;
	private: System::Windows::Forms::Label^ Guess3Tile2;
	private: System::Windows::Forms::Label^ Guess3Tile3;
	private: System::Windows::Forms::Label^ Guess3Tile4;
	private: System::Windows::Forms::Label^ Guess3Tile5;
	private: System::Windows::Forms::Label^ Guess4Tile1;
	private: System::Windows::Forms::Label^ Guess4Tile2;
	private: System::Windows::Forms::Label^ Guess4Tile3;
	private: System::Windows::Forms::Label^ Guess4Tile4;
	private: System::Windows::Forms::Label^ Guess4Tile5;
	private: System::Windows::Forms::Label^ Guess5Tile1;
	private: System::Windows::Forms::Label^ Guess5Tile2;
	private: System::Windows::Forms::Label^ Guess5Tile3;
	private: System::Windows::Forms::Label^ Guess5Tile4;
	private: System::Windows::Forms::Label^ Guess5Tile5;
	private: System::Windows::Forms::Label^ Guess6Tile1;
	private: System::Windows::Forms::Label^ Guess6Tile2;
	private: System::Windows::Forms::Label^ Guess6Tile3;
	private: System::Windows::Forms::Label^ Guess6Tile4;
	private: System::Windows::Forms::Label^ Guess6Tile5;
	private: System::Windows::Forms::TableLayoutPanel^ keyboardPanelRow1;

	private: System::Windows::Forms::Button^ keyQ;
	private: System::Windows::Forms::Button^ keyW;
	private: System::Windows::Forms::Button^ keyE;
	private: System::Windows::Forms::Button^ keyR;
	private: System::Windows::Forms::Button^ keyT;
	private: System::Windows::Forms::Button^ keyY;
	private: System::Windows::Forms::Button^ keyU;
	private: System::Windows::Forms::Button^ keyI;
	private: System::Windows::Forms::Button^ keyO;
	private: System::Windows::Forms::Button^ keyP;
	private: System::Windows::Forms::TableLayoutPanel^ keyboardPanelRow2;
	private: System::Windows::Forms::Button^ keyA;
	private: System::Windows::Forms::Button^ keyS;
	private: System::Windows::Forms::Button^ keyD;
	private: System::Windows::Forms::Button^ keyF;
	private: System::Windows::Forms::Button^ keyG;
	private: System::Windows::Forms::Button^ keyH;
	private: System::Windows::Forms::Button^ keyJ;
	private: System::Windows::Forms::Button^ keyK;

	private: System::Windows::Forms::Button^ keyL;
	private: System::Windows::Forms::TableLayoutPanel^ keyboardPanelRow3;
	private: System::Windows::Forms::Button^ keyEnter;
	private: System::Windows::Forms::Button^ keyZ;
	private: System::Windows::Forms::Button^ keyX;
	private: System::Windows::Forms::Button^ keyC;
	private: System::Windows::Forms::Button^ keyV;
	private: System::Windows::Forms::Button^ keyB;
	private: System::Windows::Forms::Button^ keyN;
	private: System::Windows::Forms::Button^ keyM;
	private: System::Windows::Forms::Button^ keyBackspace;
	private: System::Windows::Forms::Button^ bttnNewGame;
	private: System::Windows::Forms::Button^ bttnExitGame;

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
			this->guessGrid = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Guess1Tile2 = (gcnew System::Windows::Forms::Label());
			this->Guess1Tile3 = (gcnew System::Windows::Forms::Label());
			this->Guess1Tile4 = (gcnew System::Windows::Forms::Label());
			this->Guess1Tile5 = (gcnew System::Windows::Forms::Label());
			this->Guess2Tile2 = (gcnew System::Windows::Forms::Label());
			this->Guess2Tile1 = (gcnew System::Windows::Forms::Label());
			this->Guess2Tile3 = (gcnew System::Windows::Forms::Label());
			this->Guess2Tile4 = (gcnew System::Windows::Forms::Label());
			this->Guess2Tile5 = (gcnew System::Windows::Forms::Label());
			this->Guess3Tile1 = (gcnew System::Windows::Forms::Label());
			this->Guess3Tile2 = (gcnew System::Windows::Forms::Label());
			this->Guess3Tile3 = (gcnew System::Windows::Forms::Label());
			this->Guess3Tile4 = (gcnew System::Windows::Forms::Label());
			this->Guess3Tile5 = (gcnew System::Windows::Forms::Label());
			this->Guess4Tile1 = (gcnew System::Windows::Forms::Label());
			this->Guess4Tile2 = (gcnew System::Windows::Forms::Label());
			this->Guess4Tile3 = (gcnew System::Windows::Forms::Label());
			this->Guess4Tile4 = (gcnew System::Windows::Forms::Label());
			this->Guess4Tile5 = (gcnew System::Windows::Forms::Label());
			this->Guess5Tile1 = (gcnew System::Windows::Forms::Label());
			this->Guess5Tile2 = (gcnew System::Windows::Forms::Label());
			this->Guess5Tile3 = (gcnew System::Windows::Forms::Label());
			this->Guess5Tile4 = (gcnew System::Windows::Forms::Label());
			this->Guess5Tile5 = (gcnew System::Windows::Forms::Label());
			this->Guess6Tile1 = (gcnew System::Windows::Forms::Label());
			this->Guess6Tile2 = (gcnew System::Windows::Forms::Label());
			this->Guess6Tile3 = (gcnew System::Windows::Forms::Label());
			this->Guess6Tile4 = (gcnew System::Windows::Forms::Label());
			this->Guess6Tile5 = (gcnew System::Windows::Forms::Label());
			this->Guess1Tile1 = (gcnew System::Windows::Forms::Label());
			this->keyboardPanelRow1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->keyQ = (gcnew System::Windows::Forms::Button());
			this->keyW = (gcnew System::Windows::Forms::Button());
			this->keyE = (gcnew System::Windows::Forms::Button());
			this->keyR = (gcnew System::Windows::Forms::Button());
			this->keyT = (gcnew System::Windows::Forms::Button());
			this->keyY = (gcnew System::Windows::Forms::Button());
			this->keyU = (gcnew System::Windows::Forms::Button());
			this->keyI = (gcnew System::Windows::Forms::Button());
			this->keyO = (gcnew System::Windows::Forms::Button());
			this->keyP = (gcnew System::Windows::Forms::Button());
			this->keyboardPanelRow2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->keyA = (gcnew System::Windows::Forms::Button());
			this->keyS = (gcnew System::Windows::Forms::Button());
			this->keyD = (gcnew System::Windows::Forms::Button());
			this->keyF = (gcnew System::Windows::Forms::Button());
			this->keyG = (gcnew System::Windows::Forms::Button());
			this->keyH = (gcnew System::Windows::Forms::Button());
			this->keyJ = (gcnew System::Windows::Forms::Button());
			this->keyK = (gcnew System::Windows::Forms::Button());
			this->keyL = (gcnew System::Windows::Forms::Button());
			this->keyboardPanelRow3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->keyEnter = (gcnew System::Windows::Forms::Button());
			this->keyZ = (gcnew System::Windows::Forms::Button());
			this->keyX = (gcnew System::Windows::Forms::Button());
			this->keyC = (gcnew System::Windows::Forms::Button());
			this->keyV = (gcnew System::Windows::Forms::Button());
			this->keyB = (gcnew System::Windows::Forms::Button());
			this->keyN = (gcnew System::Windows::Forms::Button());
			this->keyM = (gcnew System::Windows::Forms::Button());
			this->keyBackspace = (gcnew System::Windows::Forms::Button());
			this->bttnNewGame = (gcnew System::Windows::Forms::Button());
			this->bttnExitGame = (gcnew System::Windows::Forms::Button());
			this->guessGrid->SuspendLayout();
			this->keyboardPanelRow1->SuspendLayout();
			this->keyboardPanelRow2->SuspendLayout();
			this->keyboardPanelRow3->SuspendLayout();
			this->SuspendLayout();
			// 
			// guessGrid
			// 
			this->guessGrid->ColumnCount = 5;
			this->guessGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->guessGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->guessGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->guessGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->guessGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->guessGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->guessGrid->Controls->Add(this->Guess1Tile2, 1, 0);
			this->guessGrid->Controls->Add(this->Guess1Tile3, 2, 0);
			this->guessGrid->Controls->Add(this->Guess1Tile4, 3, 0);
			this->guessGrid->Controls->Add(this->Guess1Tile5, 4, 0);
			this->guessGrid->Controls->Add(this->Guess2Tile2, 1, 1);
			this->guessGrid->Controls->Add(this->Guess2Tile1, 0, 1);
			this->guessGrid->Controls->Add(this->Guess2Tile3, 2, 1);
			this->guessGrid->Controls->Add(this->Guess2Tile4, 3, 1);
			this->guessGrid->Controls->Add(this->Guess2Tile5, 4, 1);
			this->guessGrid->Controls->Add(this->Guess3Tile1, 0, 2);
			this->guessGrid->Controls->Add(this->Guess3Tile2, 1, 2);
			this->guessGrid->Controls->Add(this->Guess3Tile3, 2, 2);
			this->guessGrid->Controls->Add(this->Guess3Tile4, 3, 2);
			this->guessGrid->Controls->Add(this->Guess3Tile5, 4, 2);
			this->guessGrid->Controls->Add(this->Guess4Tile1, 0, 3);
			this->guessGrid->Controls->Add(this->Guess4Tile2, 1, 3);
			this->guessGrid->Controls->Add(this->Guess4Tile3, 2, 3);
			this->guessGrid->Controls->Add(this->Guess4Tile4, 3, 3);
			this->guessGrid->Controls->Add(this->Guess4Tile5, 4, 3);
			this->guessGrid->Controls->Add(this->Guess5Tile1, 0, 4);
			this->guessGrid->Controls->Add(this->Guess5Tile2, 1, 4);
			this->guessGrid->Controls->Add(this->Guess5Tile3, 2, 4);
			this->guessGrid->Controls->Add(this->Guess5Tile4, 3, 4);
			this->guessGrid->Controls->Add(this->Guess5Tile5, 4, 4);
			this->guessGrid->Controls->Add(this->Guess6Tile1, 0, 5);
			this->guessGrid->Controls->Add(this->Guess6Tile2, 1, 5);
			this->guessGrid->Controls->Add(this->Guess6Tile3, 2, 5);
			this->guessGrid->Controls->Add(this->Guess6Tile4, 3, 5);
			this->guessGrid->Controls->Add(this->Guess6Tile5, 4, 5);
			this->guessGrid->Controls->Add(this->Guess1Tile1, 0, 0);
			this->guessGrid->Location = System::Drawing::Point(150, 75);
			this->guessGrid->Name = L"guessGrid";
			this->guessGrid->RowCount = 6;
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.67F)));
			this->guessGrid->Size = System::Drawing::Size(300, 360);
			this->guessGrid->TabIndex = 0;
			// 
			// Guess1Tile2
			// 
			this->Guess1Tile2->BackColor = System::Drawing::Color::White;
			this->Guess1Tile2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess1Tile2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess1Tile2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess1Tile2->Location = System::Drawing::Point(64, 4);
			this->Guess1Tile2->Margin = System::Windows::Forms::Padding(4);
			this->Guess1Tile2->Name = L"Guess1Tile2";
			this->Guess1Tile2->Size = System::Drawing::Size(52, 52);
			this->Guess1Tile2->TabIndex = 0;
			this->Guess1Tile2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess1Tile3
			// 
			this->Guess1Tile3->BackColor = System::Drawing::Color::White;
			this->Guess1Tile3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess1Tile3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess1Tile3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess1Tile3->Location = System::Drawing::Point(124, 4);
			this->Guess1Tile3->Margin = System::Windows::Forms::Padding(4);
			this->Guess1Tile3->Name = L"Guess1Tile3";
			this->Guess1Tile3->Size = System::Drawing::Size(52, 52);
			this->Guess1Tile3->TabIndex = 0;
			this->Guess1Tile3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess1Tile4
			// 
			this->Guess1Tile4->BackColor = System::Drawing::Color::White;
			this->Guess1Tile4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess1Tile4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess1Tile4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess1Tile4->Location = System::Drawing::Point(184, 4);
			this->Guess1Tile4->Margin = System::Windows::Forms::Padding(4);
			this->Guess1Tile4->Name = L"Guess1Tile4";
			this->Guess1Tile4->Size = System::Drawing::Size(52, 52);
			this->Guess1Tile4->TabIndex = 0;
			this->Guess1Tile4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess1Tile5
			// 
			this->Guess1Tile5->BackColor = System::Drawing::Color::White;
			this->Guess1Tile5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess1Tile5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess1Tile5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess1Tile5->Location = System::Drawing::Point(244, 4);
			this->Guess1Tile5->Margin = System::Windows::Forms::Padding(4);
			this->Guess1Tile5->Name = L"Guess1Tile5";
			this->Guess1Tile5->Size = System::Drawing::Size(52, 52);
			this->Guess1Tile5->TabIndex = 0;
			this->Guess1Tile5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess2Tile2
			// 
			this->Guess2Tile2->BackColor = System::Drawing::Color::White;
			this->Guess2Tile2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess2Tile2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess2Tile2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess2Tile2->Location = System::Drawing::Point(64, 64);
			this->Guess2Tile2->Margin = System::Windows::Forms::Padding(4);
			this->Guess2Tile2->Name = L"Guess2Tile2";
			this->Guess2Tile2->Size = System::Drawing::Size(52, 52);
			this->Guess2Tile2->TabIndex = 0;
			this->Guess2Tile2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess2Tile1
			// 
			this->Guess2Tile1->BackColor = System::Drawing::Color::White;
			this->Guess2Tile1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess2Tile1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess2Tile1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess2Tile1->Location = System::Drawing::Point(4, 64);
			this->Guess2Tile1->Margin = System::Windows::Forms::Padding(4);
			this->Guess2Tile1->Name = L"Guess2Tile1";
			this->Guess2Tile1->Size = System::Drawing::Size(52, 52);
			this->Guess2Tile1->TabIndex = 0;
			this->Guess2Tile1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess2Tile3
			// 
			this->Guess2Tile3->BackColor = System::Drawing::Color::White;
			this->Guess2Tile3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess2Tile3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess2Tile3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess2Tile3->Location = System::Drawing::Point(124, 64);
			this->Guess2Tile3->Margin = System::Windows::Forms::Padding(4);
			this->Guess2Tile3->Name = L"Guess2Tile3";
			this->Guess2Tile3->Size = System::Drawing::Size(52, 52);
			this->Guess2Tile3->TabIndex = 0;
			this->Guess2Tile3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess2Tile4
			// 
			this->Guess2Tile4->BackColor = System::Drawing::Color::White;
			this->Guess2Tile4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess2Tile4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess2Tile4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess2Tile4->Location = System::Drawing::Point(184, 64);
			this->Guess2Tile4->Margin = System::Windows::Forms::Padding(4);
			this->Guess2Tile4->Name = L"Guess2Tile4";
			this->Guess2Tile4->Size = System::Drawing::Size(52, 52);
			this->Guess2Tile4->TabIndex = 0;
			this->Guess2Tile4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess2Tile5
			// 
			this->Guess2Tile5->BackColor = System::Drawing::Color::White;
			this->Guess2Tile5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess2Tile5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess2Tile5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess2Tile5->Location = System::Drawing::Point(244, 64);
			this->Guess2Tile5->Margin = System::Windows::Forms::Padding(4);
			this->Guess2Tile5->Name = L"Guess2Tile5";
			this->Guess2Tile5->Size = System::Drawing::Size(52, 52);
			this->Guess2Tile5->TabIndex = 0;
			this->Guess2Tile5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess3Tile1
			// 
			this->Guess3Tile1->BackColor = System::Drawing::Color::White;
			this->Guess3Tile1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess3Tile1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess3Tile1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess3Tile1->Location = System::Drawing::Point(4, 124);
			this->Guess3Tile1->Margin = System::Windows::Forms::Padding(4);
			this->Guess3Tile1->Name = L"Guess3Tile1";
			this->Guess3Tile1->Size = System::Drawing::Size(52, 52);
			this->Guess3Tile1->TabIndex = 0;
			this->Guess3Tile1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess3Tile2
			// 
			this->Guess3Tile2->BackColor = System::Drawing::Color::White;
			this->Guess3Tile2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess3Tile2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess3Tile2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess3Tile2->Location = System::Drawing::Point(64, 124);
			this->Guess3Tile2->Margin = System::Windows::Forms::Padding(4);
			this->Guess3Tile2->Name = L"Guess3Tile2";
			this->Guess3Tile2->Size = System::Drawing::Size(52, 52);
			this->Guess3Tile2->TabIndex = 0;
			this->Guess3Tile2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess3Tile3
			// 
			this->Guess3Tile3->BackColor = System::Drawing::Color::White;
			this->Guess3Tile3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess3Tile3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess3Tile3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess3Tile3->Location = System::Drawing::Point(124, 124);
			this->Guess3Tile3->Margin = System::Windows::Forms::Padding(4);
			this->Guess3Tile3->Name = L"Guess3Tile3";
			this->Guess3Tile3->Size = System::Drawing::Size(52, 52);
			this->Guess3Tile3->TabIndex = 0;
			this->Guess3Tile3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess3Tile4
			// 
			this->Guess3Tile4->BackColor = System::Drawing::Color::White;
			this->Guess3Tile4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess3Tile4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess3Tile4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess3Tile4->Location = System::Drawing::Point(184, 124);
			this->Guess3Tile4->Margin = System::Windows::Forms::Padding(4);
			this->Guess3Tile4->Name = L"Guess3Tile4";
			this->Guess3Tile4->Size = System::Drawing::Size(52, 52);
			this->Guess3Tile4->TabIndex = 0;
			this->Guess3Tile4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess3Tile5
			// 
			this->Guess3Tile5->BackColor = System::Drawing::Color::White;
			this->Guess3Tile5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess3Tile5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess3Tile5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess3Tile5->Location = System::Drawing::Point(244, 124);
			this->Guess3Tile5->Margin = System::Windows::Forms::Padding(4);
			this->Guess3Tile5->Name = L"Guess3Tile5";
			this->Guess3Tile5->Size = System::Drawing::Size(52, 52);
			this->Guess3Tile5->TabIndex = 0;
			this->Guess3Tile5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess4Tile1
			// 
			this->Guess4Tile1->BackColor = System::Drawing::Color::White;
			this->Guess4Tile1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess4Tile1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess4Tile1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess4Tile1->Location = System::Drawing::Point(4, 184);
			this->Guess4Tile1->Margin = System::Windows::Forms::Padding(4);
			this->Guess4Tile1->Name = L"Guess4Tile1";
			this->Guess4Tile1->Size = System::Drawing::Size(52, 52);
			this->Guess4Tile1->TabIndex = 0;
			this->Guess4Tile1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess4Tile2
			// 
			this->Guess4Tile2->BackColor = System::Drawing::Color::White;
			this->Guess4Tile2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess4Tile2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess4Tile2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess4Tile2->Location = System::Drawing::Point(64, 184);
			this->Guess4Tile2->Margin = System::Windows::Forms::Padding(4);
			this->Guess4Tile2->Name = L"Guess4Tile2";
			this->Guess4Tile2->Size = System::Drawing::Size(52, 52);
			this->Guess4Tile2->TabIndex = 0;
			this->Guess4Tile2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess4Tile3
			// 
			this->Guess4Tile3->BackColor = System::Drawing::Color::White;
			this->Guess4Tile3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess4Tile3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess4Tile3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess4Tile3->Location = System::Drawing::Point(124, 184);
			this->Guess4Tile3->Margin = System::Windows::Forms::Padding(4);
			this->Guess4Tile3->Name = L"Guess4Tile3";
			this->Guess4Tile3->Size = System::Drawing::Size(52, 52);
			this->Guess4Tile3->TabIndex = 0;
			this->Guess4Tile3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess4Tile4
			// 
			this->Guess4Tile4->BackColor = System::Drawing::Color::White;
			this->Guess4Tile4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess4Tile4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess4Tile4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess4Tile4->Location = System::Drawing::Point(184, 184);
			this->Guess4Tile4->Margin = System::Windows::Forms::Padding(4);
			this->Guess4Tile4->Name = L"Guess4Tile4";
			this->Guess4Tile4->Size = System::Drawing::Size(52, 52);
			this->Guess4Tile4->TabIndex = 0;
			this->Guess4Tile4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess4Tile5
			// 
			this->Guess4Tile5->BackColor = System::Drawing::Color::White;
			this->Guess4Tile5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess4Tile5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess4Tile5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess4Tile5->Location = System::Drawing::Point(244, 184);
			this->Guess4Tile5->Margin = System::Windows::Forms::Padding(4);
			this->Guess4Tile5->Name = L"Guess4Tile5";
			this->Guess4Tile5->Size = System::Drawing::Size(52, 52);
			this->Guess4Tile5->TabIndex = 0;
			this->Guess4Tile5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess5Tile1
			// 
			this->Guess5Tile1->BackColor = System::Drawing::Color::White;
			this->Guess5Tile1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess5Tile1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess5Tile1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess5Tile1->Location = System::Drawing::Point(4, 244);
			this->Guess5Tile1->Margin = System::Windows::Forms::Padding(4);
			this->Guess5Tile1->Name = L"Guess5Tile1";
			this->Guess5Tile1->Size = System::Drawing::Size(52, 52);
			this->Guess5Tile1->TabIndex = 0;
			this->Guess5Tile1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess5Tile2
			// 
			this->Guess5Tile2->BackColor = System::Drawing::Color::White;
			this->Guess5Tile2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess5Tile2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess5Tile2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess5Tile2->Location = System::Drawing::Point(64, 244);
			this->Guess5Tile2->Margin = System::Windows::Forms::Padding(4);
			this->Guess5Tile2->Name = L"Guess5Tile2";
			this->Guess5Tile2->Size = System::Drawing::Size(52, 52);
			this->Guess5Tile2->TabIndex = 0;
			this->Guess5Tile2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess5Tile3
			// 
			this->Guess5Tile3->BackColor = System::Drawing::Color::White;
			this->Guess5Tile3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess5Tile3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess5Tile3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess5Tile3->Location = System::Drawing::Point(124, 244);
			this->Guess5Tile3->Margin = System::Windows::Forms::Padding(4);
			this->Guess5Tile3->Name = L"Guess5Tile3";
			this->Guess5Tile3->Size = System::Drawing::Size(52, 52);
			this->Guess5Tile3->TabIndex = 0;
			this->Guess5Tile3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess5Tile4
			// 
			this->Guess5Tile4->BackColor = System::Drawing::Color::White;
			this->Guess5Tile4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess5Tile4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess5Tile4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess5Tile4->Location = System::Drawing::Point(184, 244);
			this->Guess5Tile4->Margin = System::Windows::Forms::Padding(4);
			this->Guess5Tile4->Name = L"Guess5Tile4";
			this->Guess5Tile4->Size = System::Drawing::Size(52, 52);
			this->Guess5Tile4->TabIndex = 0;
			this->Guess5Tile4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess5Tile5
			// 
			this->Guess5Tile5->BackColor = System::Drawing::Color::White;
			this->Guess5Tile5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess5Tile5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess5Tile5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess5Tile5->Location = System::Drawing::Point(244, 244);
			this->Guess5Tile5->Margin = System::Windows::Forms::Padding(4);
			this->Guess5Tile5->Name = L"Guess5Tile5";
			this->Guess5Tile5->Size = System::Drawing::Size(52, 52);
			this->Guess5Tile5->TabIndex = 0;
			this->Guess5Tile5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess6Tile1
			// 
			this->Guess6Tile1->BackColor = System::Drawing::Color::White;
			this->Guess6Tile1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess6Tile1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess6Tile1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess6Tile1->Location = System::Drawing::Point(4, 304);
			this->Guess6Tile1->Margin = System::Windows::Forms::Padding(4);
			this->Guess6Tile1->Name = L"Guess6Tile1";
			this->Guess6Tile1->Size = System::Drawing::Size(52, 52);
			this->Guess6Tile1->TabIndex = 0;
			this->Guess6Tile1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess6Tile2
			// 
			this->Guess6Tile2->BackColor = System::Drawing::Color::White;
			this->Guess6Tile2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess6Tile2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess6Tile2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess6Tile2->Location = System::Drawing::Point(64, 304);
			this->Guess6Tile2->Margin = System::Windows::Forms::Padding(4);
			this->Guess6Tile2->Name = L"Guess6Tile2";
			this->Guess6Tile2->Size = System::Drawing::Size(52, 52);
			this->Guess6Tile2->TabIndex = 0;
			this->Guess6Tile2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess6Tile3
			// 
			this->Guess6Tile3->BackColor = System::Drawing::Color::White;
			this->Guess6Tile3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess6Tile3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess6Tile3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess6Tile3->Location = System::Drawing::Point(124, 304);
			this->Guess6Tile3->Margin = System::Windows::Forms::Padding(4);
			this->Guess6Tile3->Name = L"Guess6Tile3";
			this->Guess6Tile3->Size = System::Drawing::Size(52, 52);
			this->Guess6Tile3->TabIndex = 0;
			this->Guess6Tile3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess6Tile4
			// 
			this->Guess6Tile4->BackColor = System::Drawing::Color::White;
			this->Guess6Tile4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess6Tile4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess6Tile4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess6Tile4->Location = System::Drawing::Point(184, 304);
			this->Guess6Tile4->Margin = System::Windows::Forms::Padding(4);
			this->Guess6Tile4->Name = L"Guess6Tile4";
			this->Guess6Tile4->Size = System::Drawing::Size(52, 52);
			this->Guess6Tile4->TabIndex = 0;
			this->Guess6Tile4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess6Tile5
			// 
			this->Guess6Tile5->BackColor = System::Drawing::Color::White;
			this->Guess6Tile5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess6Tile5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess6Tile5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess6Tile5->Location = System::Drawing::Point(244, 304);
			this->Guess6Tile5->Margin = System::Windows::Forms::Padding(4);
			this->Guess6Tile5->Name = L"Guess6Tile5";
			this->Guess6Tile5->Size = System::Drawing::Size(52, 52);
			this->Guess6Tile5->TabIndex = 0;
			this->Guess6Tile5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guess1Tile1
			// 
			this->Guess1Tile1->BackColor = System::Drawing::Color::White;
			this->Guess1Tile1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Guess1Tile1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Guess1Tile1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guess1Tile1->Location = System::Drawing::Point(4, 4);
			this->Guess1Tile1->Margin = System::Windows::Forms::Padding(4);
			this->Guess1Tile1->Name = L"Guess1Tile1";
			this->Guess1Tile1->Size = System::Drawing::Size(52, 52);
			this->Guess1Tile1->TabIndex = 0;
			this->Guess1Tile1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// keyboardPanelRow1
			// 
			this->keyboardPanelRow1->ColumnCount = 10;
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow1->Controls->Add(this->keyQ, 0, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyW, 1, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyE, 2, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyR, 3, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyT, 4, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyY, 5, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyU, 6, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyI, 7, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyO, 8, 0);
			this->keyboardPanelRow1->Controls->Add(this->keyP, 9, 0);
			this->keyboardPanelRow1->Location = System::Drawing::Point(75, 475);
			this->keyboardPanelRow1->Name = L"keyboardPanelRow1";
			this->keyboardPanelRow1->RowCount = 1;
			this->keyboardPanelRow1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->keyboardPanelRow1->Size = System::Drawing::Size(450, 66);
			this->keyboardPanelRow1->TabIndex = 1;
			// 
			// keyQ
			// 
			this->keyQ->BackColor = System::Drawing::Color::LightGray;
			this->keyQ->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyQ->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->keyQ->FlatAppearance->BorderSize = 5;
			this->keyQ->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyQ->Location = System::Drawing::Point(2, 2);
			this->keyQ->Margin = System::Windows::Forms::Padding(2);
			this->keyQ->Name = L"keyQ";
			this->keyQ->Size = System::Drawing::Size(41, 62);
			this->keyQ->TabIndex = 0;
			this->keyQ->Text = L"Q";
			this->keyQ->UseVisualStyleBackColor = false;
			// 
			// keyW
			// 
			this->keyW->BackColor = System::Drawing::Color::LightGray;
			this->keyW->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyW->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyW->Location = System::Drawing::Point(47, 2);
			this->keyW->Margin = System::Windows::Forms::Padding(2);
			this->keyW->Name = L"keyW";
			this->keyW->Size = System::Drawing::Size(41, 62);
			this->keyW->TabIndex = 1;
			this->keyW->Text = L"W";
			this->keyW->UseVisualStyleBackColor = false;
			// 
			// keyE
			// 
			this->keyE->BackColor = System::Drawing::Color::LightGray;
			this->keyE->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyE->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyE->Location = System::Drawing::Point(92, 2);
			this->keyE->Margin = System::Windows::Forms::Padding(2);
			this->keyE->Name = L"keyE";
			this->keyE->Size = System::Drawing::Size(41, 62);
			this->keyE->TabIndex = 2;
			this->keyE->Text = L"E";
			this->keyE->UseVisualStyleBackColor = false;
			// 
			// keyR
			// 
			this->keyR->BackColor = System::Drawing::Color::LightGray;
			this->keyR->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyR->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyR->Location = System::Drawing::Point(137, 2);
			this->keyR->Margin = System::Windows::Forms::Padding(2);
			this->keyR->Name = L"keyR";
			this->keyR->Size = System::Drawing::Size(41, 62);
			this->keyR->TabIndex = 3;
			this->keyR->Text = L"R";
			this->keyR->UseVisualStyleBackColor = false;
			// 
			// keyT
			// 
			this->keyT->BackColor = System::Drawing::Color::LightGray;
			this->keyT->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyT->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyT->Location = System::Drawing::Point(182, 2);
			this->keyT->Margin = System::Windows::Forms::Padding(2);
			this->keyT->Name = L"keyT";
			this->keyT->Size = System::Drawing::Size(41, 62);
			this->keyT->TabIndex = 4;
			this->keyT->Text = L"T";
			this->keyT->UseVisualStyleBackColor = false;
			// 
			// keyY
			// 
			this->keyY->BackColor = System::Drawing::Color::LightGray;
			this->keyY->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyY->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyY->Location = System::Drawing::Point(227, 2);
			this->keyY->Margin = System::Windows::Forms::Padding(2);
			this->keyY->Name = L"keyY";
			this->keyY->Size = System::Drawing::Size(41, 62);
			this->keyY->TabIndex = 5;
			this->keyY->Text = L"Y";
			this->keyY->UseVisualStyleBackColor = false;
			// 
			// keyU
			// 
			this->keyU->BackColor = System::Drawing::Color::LightGray;
			this->keyU->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyU->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyU->Location = System::Drawing::Point(272, 2);
			this->keyU->Margin = System::Windows::Forms::Padding(2);
			this->keyU->Name = L"keyU";
			this->keyU->Size = System::Drawing::Size(41, 62);
			this->keyU->TabIndex = 6;
			this->keyU->Text = L"U";
			this->keyU->UseVisualStyleBackColor = false;
			// 
			// keyI
			// 
			this->keyI->BackColor = System::Drawing::Color::LightGray;
			this->keyI->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyI->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyI->Location = System::Drawing::Point(317, 2);
			this->keyI->Margin = System::Windows::Forms::Padding(2);
			this->keyI->Name = L"keyI";
			this->keyI->Size = System::Drawing::Size(41, 62);
			this->keyI->TabIndex = 7;
			this->keyI->Text = L"I";
			this->keyI->UseVisualStyleBackColor = false;
			// 
			// keyO
			// 
			this->keyO->BackColor = System::Drawing::Color::LightGray;
			this->keyO->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyO->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyO->Location = System::Drawing::Point(362, 2);
			this->keyO->Margin = System::Windows::Forms::Padding(2);
			this->keyO->Name = L"keyO";
			this->keyO->Size = System::Drawing::Size(41, 62);
			this->keyO->TabIndex = 8;
			this->keyO->Text = L"O";
			this->keyO->UseVisualStyleBackColor = false;
			// 
			// keyP
			// 
			this->keyP->BackColor = System::Drawing::Color::LightGray;
			this->keyP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyP->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyP->Location = System::Drawing::Point(407, 2);
			this->keyP->Margin = System::Windows::Forms::Padding(2);
			this->keyP->Name = L"keyP";
			this->keyP->Size = System::Drawing::Size(41, 62);
			this->keyP->TabIndex = 9;
			this->keyP->Text = L"P";
			this->keyP->UseVisualStyleBackColor = false;
			// 
			// keyboardPanelRow2
			// 
			this->keyboardPanelRow2->ColumnCount = 9;
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.11111F)));
			this->keyboardPanelRow2->Controls->Add(this->keyA, 0, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyS, 1, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyD, 2, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyF, 3, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyG, 4, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyH, 5, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyJ, 6, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyK, 7, 0);
			this->keyboardPanelRow2->Controls->Add(this->keyL, 8, 0);
			this->keyboardPanelRow2->Location = System::Drawing::Point(98, 540);
			this->keyboardPanelRow2->Name = L"keyboardPanelRow2";
			this->keyboardPanelRow2->RowCount = 1;
			this->keyboardPanelRow2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->keyboardPanelRow2->Size = System::Drawing::Size(405, 66);
			this->keyboardPanelRow2->TabIndex = 2;
			// 
			// keyA
			// 
			this->keyA->BackColor = System::Drawing::Color::LightGray;
			this->keyA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyA->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyA->Location = System::Drawing::Point(2, 2);
			this->keyA->Margin = System::Windows::Forms::Padding(2);
			this->keyA->Name = L"keyA";
			this->keyA->Size = System::Drawing::Size(41, 62);
			this->keyA->TabIndex = 0;
			this->keyA->Text = L"A";
			this->keyA->UseVisualStyleBackColor = false;
			// 
			// keyS
			// 
			this->keyS->BackColor = System::Drawing::Color::LightGray;
			this->keyS->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyS->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyS->Location = System::Drawing::Point(47, 2);
			this->keyS->Margin = System::Windows::Forms::Padding(2);
			this->keyS->Name = L"keyS";
			this->keyS->Size = System::Drawing::Size(41, 62);
			this->keyS->TabIndex = 1;
			this->keyS->Text = L"S";
			this->keyS->UseVisualStyleBackColor = false;
			// 
			// keyD
			// 
			this->keyD->BackColor = System::Drawing::Color::LightGray;
			this->keyD->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyD->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyD->Location = System::Drawing::Point(92, 2);
			this->keyD->Margin = System::Windows::Forms::Padding(2);
			this->keyD->Name = L"keyD";
			this->keyD->Size = System::Drawing::Size(41, 62);
			this->keyD->TabIndex = 2;
			this->keyD->Text = L"D";
			this->keyD->UseVisualStyleBackColor = false;
			// 
			// keyF
			// 
			this->keyF->BackColor = System::Drawing::Color::LightGray;
			this->keyF->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyF->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyF->Location = System::Drawing::Point(137, 2);
			this->keyF->Margin = System::Windows::Forms::Padding(2);
			this->keyF->Name = L"keyF";
			this->keyF->Size = System::Drawing::Size(41, 62);
			this->keyF->TabIndex = 3;
			this->keyF->Text = L"F";
			this->keyF->UseVisualStyleBackColor = false;
			// 
			// keyG
			// 
			this->keyG->BackColor = System::Drawing::Color::LightGray;
			this->keyG->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyG->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyG->Location = System::Drawing::Point(182, 2);
			this->keyG->Margin = System::Windows::Forms::Padding(2);
			this->keyG->Name = L"keyG";
			this->keyG->Size = System::Drawing::Size(41, 62);
			this->keyG->TabIndex = 4;
			this->keyG->Text = L"G";
			this->keyG->UseVisualStyleBackColor = false;
			// 
			// keyH
			// 
			this->keyH->BackColor = System::Drawing::Color::LightGray;
			this->keyH->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyH->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyH->Location = System::Drawing::Point(227, 2);
			this->keyH->Margin = System::Windows::Forms::Padding(2);
			this->keyH->Name = L"keyH";
			this->keyH->Size = System::Drawing::Size(41, 62);
			this->keyH->TabIndex = 5;
			this->keyH->Text = L"H";
			this->keyH->UseVisualStyleBackColor = false;
			// 
			// keyJ
			// 
			this->keyJ->BackColor = System::Drawing::Color::LightGray;
			this->keyJ->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyJ->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyJ->Location = System::Drawing::Point(272, 2);
			this->keyJ->Margin = System::Windows::Forms::Padding(2);
			this->keyJ->Name = L"keyJ";
			this->keyJ->Size = System::Drawing::Size(41, 62);
			this->keyJ->TabIndex = 6;
			this->keyJ->Text = L"J";
			this->keyJ->UseVisualStyleBackColor = false;
			// 
			// keyK
			// 
			this->keyK->BackColor = System::Drawing::Color::LightGray;
			this->keyK->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyK->Location = System::Drawing::Point(317, 2);
			this->keyK->Margin = System::Windows::Forms::Padding(2);
			this->keyK->Name = L"keyK";
			this->keyK->Size = System::Drawing::Size(41, 62);
			this->keyK->TabIndex = 7;
			this->keyK->Text = L"K";
			this->keyK->UseVisualStyleBackColor = false;
			// 
			// keyL
			// 
			this->keyL->BackColor = System::Drawing::Color::LightGray;
			this->keyL->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyL->Location = System::Drawing::Point(362, 2);
			this->keyL->Margin = System::Windows::Forms::Padding(2);
			this->keyL->Name = L"keyL";
			this->keyL->Size = System::Drawing::Size(41, 62);
			this->keyL->TabIndex = 8;
			this->keyL->Text = L"L";
			this->keyL->UseVisualStyleBackColor = false;
			// 
			// keyboardPanelRow3
			// 
			this->keyboardPanelRow3->ColumnCount = 9;
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15.11111F)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->keyboardPanelRow3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.68298F)));
			this->keyboardPanelRow3->Controls->Add(this->keyEnter, 0, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyZ, 1, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyX, 2, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyC, 3, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyV, 4, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyB, 5, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyN, 6, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyM, 7, 0);
			this->keyboardPanelRow3->Controls->Add(this->keyBackspace, 8, 0);
			this->keyboardPanelRow3->Location = System::Drawing::Point(75, 605);
			this->keyboardPanelRow3->Name = L"keyboardPanelRow3";
			this->keyboardPanelRow3->RowCount = 1;
			this->keyboardPanelRow3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->keyboardPanelRow3->Size = System::Drawing::Size(450, 66);
			this->keyboardPanelRow3->TabIndex = 3;
			// 
			// keyEnter
			// 
			this->keyEnter->BackColor = System::Drawing::Color::LightGray;
			this->keyEnter->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold));
			this->keyEnter->Location = System::Drawing::Point(2, 2);
			this->keyEnter->Margin = System::Windows::Forms::Padding(2);
			this->keyEnter->Name = L"keyEnter";
			this->keyEnter->Size = System::Drawing::Size(64, 62);
			this->keyEnter->TabIndex = 0;
			this->keyEnter->Text = L"ENTER";
			this->keyEnter->UseVisualStyleBackColor = false;
			// 
			// keyZ
			// 
			this->keyZ->BackColor = System::Drawing::Color::LightGray;
			this->keyZ->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyZ->Location = System::Drawing::Point(70, 2);
			this->keyZ->Margin = System::Windows::Forms::Padding(2);
			this->keyZ->Name = L"keyZ";
			this->keyZ->Size = System::Drawing::Size(41, 62);
			this->keyZ->TabIndex = 1;
			this->keyZ->Text = L"Z";
			this->keyZ->UseVisualStyleBackColor = false;
			// 
			// keyX
			// 
			this->keyX->BackColor = System::Drawing::Color::LightGray;
			this->keyX->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyX->Location = System::Drawing::Point(115, 2);
			this->keyX->Margin = System::Windows::Forms::Padding(2);
			this->keyX->Name = L"keyX";
			this->keyX->Size = System::Drawing::Size(41, 62);
			this->keyX->TabIndex = 2;
			this->keyX->Text = L"X";
			this->keyX->UseVisualStyleBackColor = false;
			// 
			// keyC
			// 
			this->keyC->BackColor = System::Drawing::Color::LightGray;
			this->keyC->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyC->Location = System::Drawing::Point(160, 2);
			this->keyC->Margin = System::Windows::Forms::Padding(2);
			this->keyC->Name = L"keyC";
			this->keyC->Size = System::Drawing::Size(41, 62);
			this->keyC->TabIndex = 3;
			this->keyC->Text = L"C";
			this->keyC->UseVisualStyleBackColor = false;
			// 
			// keyV
			// 
			this->keyV->BackColor = System::Drawing::Color::LightGray;
			this->keyV->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyV->Location = System::Drawing::Point(205, 2);
			this->keyV->Margin = System::Windows::Forms::Padding(2);
			this->keyV->Name = L"keyV";
			this->keyV->Size = System::Drawing::Size(41, 62);
			this->keyV->TabIndex = 4;
			this->keyV->Text = L"V";
			this->keyV->UseVisualStyleBackColor = false;
			// 
			// keyB
			// 
			this->keyB->BackColor = System::Drawing::Color::LightGray;
			this->keyB->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyB->Location = System::Drawing::Point(250, 2);
			this->keyB->Margin = System::Windows::Forms::Padding(2);
			this->keyB->Name = L"keyB";
			this->keyB->Size = System::Drawing::Size(41, 62);
			this->keyB->TabIndex = 5;
			this->keyB->Text = L"B";
			this->keyB->UseVisualStyleBackColor = false;
			// 
			// keyN
			// 
			this->keyN->BackColor = System::Drawing::Color::LightGray;
			this->keyN->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyN->Location = System::Drawing::Point(295, 2);
			this->keyN->Margin = System::Windows::Forms::Padding(2);
			this->keyN->Name = L"keyN";
			this->keyN->Size = System::Drawing::Size(41, 62);
			this->keyN->TabIndex = 6;
			this->keyN->Text = L"N";
			this->keyN->UseVisualStyleBackColor = false;
			// 
			// keyM
			// 
			this->keyM->BackColor = System::Drawing::Color::LightGray;
			this->keyM->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->keyM->Location = System::Drawing::Point(340, 2);
			this->keyM->Margin = System::Windows::Forms::Padding(2);
			this->keyM->Name = L"keyM";
			this->keyM->Size = System::Drawing::Size(41, 62);
			this->keyM->TabIndex = 7;
			this->keyM->Text = L"M";
			this->keyM->UseVisualStyleBackColor = false;
			// 
			// keyBackspace
			// 
			this->keyBackspace->BackColor = System::Drawing::Color::LightGray;
			this->keyBackspace->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold));
			this->keyBackspace->Location = System::Drawing::Point(385, 2);
			this->keyBackspace->Margin = System::Windows::Forms::Padding(2);
			this->keyBackspace->Name = L"keyBackspace";
			this->keyBackspace->Size = System::Drawing::Size(61, 61);
			this->keyBackspace->TabIndex = 8;
			this->keyBackspace->Text = L"DELETE";
			this->keyBackspace->UseVisualStyleBackColor = false;
			// 
			// bttnNewGame
			// 
			this->bttnNewGame->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold));
			this->bttnNewGame->Location = System::Drawing::Point(5, 5);
			this->bttnNewGame->Name = L"bttnNewGame";
			this->bttnNewGame->Size = System::Drawing::Size(100, 35);
			this->bttnNewGame->TabIndex = 4;
			this->bttnNewGame->Text = L"New Game";
			this->bttnNewGame->UseVisualStyleBackColor = true;
			// 
			// bttnExitGame
			// 
			this->bttnExitGame->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold));
			this->bttnExitGame->Location = System::Drawing::Point(495, 5);
			this->bttnExitGame->Name = L"bttnExitGame";
			this->bttnExitGame->Size = System::Drawing::Size(100, 35);
			this->bttnExitGame->TabIndex = 5;
			this->bttnExitGame->Text = L"Exit Game";
			this->bttnExitGame->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 700);
			this->Controls->Add(this->bttnExitGame);
			this->Controls->Add(this->bttnNewGame);
			this->Controls->Add(this->keyboardPanelRow3);
			this->Controls->Add(this->keyboardPanelRow2);
			this->Controls->Add(this->keyboardPanelRow1);
			this->Controls->Add(this->guessGrid);
			this->Location = System::Drawing::Point(5, 5);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->Text = L"Wordle by Team D";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->guessGrid->ResumeLayout(false);
			this->keyboardPanelRow1->ResumeLayout(false);
			this->keyboardPanelRow2->ResumeLayout(false);
			this->keyboardPanelRow3->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
		System::Collections::Generic::List<System::Windows::Forms::Label^>^ currentRowTiles;
		Model::WordDictionary* myDictionary;
		Model::WordleManager* myManager;
		int currentRowIndex;
		System::String^ currentUser;
		bool allowReuseLetters;

		void exitGameButton_Click(System::Object^ sender, System::EventArgs^ e);
		void newGameButton_Click(System::Object^ sender, System::EventArgs^ e);
		void letterButton_Click(System::Object^ sender, System::EventArgs^ e);
		void processLetterInput(wchar_t letter);
		void mainForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		void enterButton_Click(System::Object^ sender, System::EventArgs^ e);
		void deleteButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
