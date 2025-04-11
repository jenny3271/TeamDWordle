#pragma once

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
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
			this->guessGrid->SuspendLayout();
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
			this->guessGrid->Location = System::Drawing::Point(150, 50);
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 700);
			this->Controls->Add(this->guessGrid);
			this->Name = L"MainForm";
			this->Text = L"Wordle by Team D";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->guessGrid->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
