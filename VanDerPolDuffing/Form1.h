#pragma once

#include<math.h>
#include<fstream>
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  wykres;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  wykresFazowy;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;


	private: System::Windows::Forms::Button^  wyczyscWykres;
	private: System::Windows::Forms::Button^  wyczyscWykresFazowy;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  Parametry;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  podajY0;
	private: System::Windows::Forms::TextBox^  podajX0;








	private: System::Windows::Forms::TextBox^  znajdzWiersz;

	private: System::Windows::Forms::Button^  znajdz;
	private: System::Windows::Forms::Button^  koniec;
	private: System::Windows::Forms::DataGridView^  tabelaDanych;



	private: System::Windows::Forms::Button^  zapiszDane;

	private: System::Windows::Forms::Button^  rysujWykresFazowy;

	private: System::Windows::Forms::Button^  rysujWykres;


	private: System::Windows::Forms::Button^  wykonajObliczenia;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;







	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  podajF;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  podajW;
	private: System::Windows::Forms::TextBox^  podajA;
	private: System::Windows::Forms::TextBox^  podajMi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::ToolStripMenuItem^  informacjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uruchomPonownieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  podajH;
	private: System::Windows::Forms::ToolStripMenuItem^  autorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rownanieToolStripMenuItem;










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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wykres = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->wykresFazowy = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rownanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uruchomPonownieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyczyscWykres = (gcnew System::Windows::Forms::Button());
			this->wyczyscWykresFazowy = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Parametry = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->podajH = (gcnew System::Windows::Forms::TextBox());
			this->podajF = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->podajW = (gcnew System::Windows::Forms::TextBox());
			this->podajA = (gcnew System::Windows::Forms::TextBox());
			this->podajMi = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->podajY0 = (gcnew System::Windows::Forms::TextBox());
			this->podajX0 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->znajdzWiersz = (gcnew System::Windows::Forms::TextBox());
			this->znajdz = (gcnew System::Windows::Forms::Button());
			this->koniec = (gcnew System::Windows::Forms::Button());
			this->tabelaDanych = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zapiszDane = (gcnew System::Windows::Forms::Button());
			this->rysujWykresFazowy = (gcnew System::Windows::Forms::Button());
			this->rysujWykres = (gcnew System::Windows::Forms::Button());
			this->wykonajObliczenia = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wykres))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wykresFazowy))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Parametry->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaDanych))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(247, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Van der Pol-Duffing ";
			// 
			// wykres
			// 
			this->wykres->BackColor = System::Drawing::Color::Gainsboro;
			chartArea1->Name = L"ChartArea1";
			this->wykres->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->wykres->Legends->Add(legend1);
			this->wykres->Location = System::Drawing::Point(29, 94);
			this->wykres->Name = L"wykres";
			this->wykres->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->wykres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->wykres->Series->Add(series1);
			this->wykres->Size = System::Drawing::Size(324, 236);
			this->wykres->TabIndex = 1;
			this->wykres->Text = L"wykres";
			// 
			// wykresFazowy
			// 
			this->wykresFazowy->BackColor = System::Drawing::Color::Gainsboro;
			chartArea2->Name = L"ChartArea1";
			this->wykresFazowy->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->wykresFazowy->Legends->Add(legend2);
			this->wykresFazowy->Location = System::Drawing::Point(382, 67);
			this->wykresFazowy->Name = L"wykresFazowy";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->wykresFazowy->Series->Add(series2);
			this->wykresFazowy->Size = System::Drawing::Size(324, 236);
			this->wykresFazowy->TabIndex = 3;
			this->wykresFazowy->Text = L"wykresFazowy";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(744, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->informacjeToolStripMenuItem,
					this->uruchomPonownieToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rownanieToolStripMenuItem,
					this->autorToolStripMenuItem
			});
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->informacjeToolStripMenuItem->Text = L"Informacje";
			// 
			// rownanieToolStripMenuItem
			// 
			this->rownanieToolStripMenuItem->Name = L"rownanieToolStripMenuItem";
			this->rownanieToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->rownanieToolStripMenuItem->Text = L"Rownanie";
			this->rownanieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::rownanieToolStripMenuItem_Click);
			// 
			// autorToolStripMenuItem
			// 
			this->autorToolStripMenuItem->Name = L"autorToolStripMenuItem";
			this->autorToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->autorToolStripMenuItem->Text = L"Autor";
			this->autorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autorToolStripMenuItem_Click);
			// 
			// uruchomPonownieToolStripMenuItem
			// 
			this->uruchomPonownieToolStripMenuItem->Name = L"uruchomPonownieToolStripMenuItem";
			this->uruchomPonownieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->uruchomPonownieToolStripMenuItem->Text = L"Uruchom ponownie";
			this->uruchomPonownieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uruchomPonownieToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zamknijToolStripMenuItem_Click);
			// 
			// wyczyscWykres
			// 
			this->wyczyscWykres->Location = System::Drawing::Point(266, 309);
			this->wyczyscWykres->Name = L"wyczyscWykres";
			this->wyczyscWykres->Size = System::Drawing::Size(75, 23);
			this->wyczyscWykres->TabIndex = 7;
			this->wyczyscWykres->Text = L"Wyczyść";
			this->wyczyscWykres->UseVisualStyleBackColor = true;
			this->wyczyscWykres->Click += gcnew System::EventHandler(this, &Form1::wyczyscWykres_Click);
			// 
			// wyczyscWykresFazowy
			// 
			this->wyczyscWykresFazowy->Location = System::Drawing::Point(631, 309);
			this->wyczyscWykresFazowy->Name = L"wyczyscWykresFazowy";
			this->wyczyscWykresFazowy->Size = System::Drawing::Size(75, 23);
			this->wyczyscWykresFazowy->TabIndex = 8;
			this->wyczyscWykresFazowy->Text = L"Wyczyść";
			this->wyczyscWykresFazowy->UseVisualStyleBackColor = true;
			this->wyczyscWykresFazowy->Click += gcnew System::EventHandler(this, &Form1::wyczyscWykresFazowy_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->wykresFazowy);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->wyczyscWykresFazowy);
			this->panel1->Controls->Add(this->wyczyscWykres);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(722, 346);
			this->panel1->TabIndex = 9;
			// 
			// Parametry
			// 
			this->Parametry->BackColor = System::Drawing::Color::Silver;
			this->Parametry->Controls->Add(this->label2);
			this->Parametry->Controls->Add(this->podajH);
			this->Parametry->Controls->Add(this->podajF);
			this->Parametry->Controls->Add(this->label8);
			this->Parametry->Controls->Add(this->podajW);
			this->Parametry->Controls->Add(this->podajA);
			this->Parametry->Controls->Add(this->podajMi);
			this->Parametry->Controls->Add(this->label7);
			this->Parametry->Controls->Add(this->label6);
			this->Parametry->Controls->Add(this->label5);
			this->Parametry->Controls->Add(this->label4);
			this->Parametry->Controls->Add(this->label3);
			this->Parametry->Controls->Add(this->podajY0);
			this->Parametry->Controls->Add(this->podajX0);
			this->Parametry->Location = System::Drawing::Point(12, 7);
			this->Parametry->Name = L"Parametry";
			this->Parametry->Size = System::Drawing::Size(248, 114);
			this->Parametry->TabIndex = 10;
			this->Parametry->TabStop = false;
			this->Parametry->Text = L"Parametry";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(158, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"F =";
			// 
			// podajH
			// 
			this->podajH->Location = System::Drawing::Point(27, 83);
			this->podajH->Name = L"podajH";
			this->podajH->Size = System::Drawing::Size(50, 20);
			this->podajH->TabIndex = 15;
			// 
			// podajF
			// 
			this->podajF->Location = System::Drawing::Point(185, 50);
			this->podajF->Name = L"podajF";
			this->podajF->Size = System::Drawing::Size(50, 20);
			this->podajF->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"h =";
			// 
			// podajW
			// 
			this->podajW->Location = System::Drawing::Point(102, 50);
			this->podajW->Name = L"podajW";
			this->podajW->Size = System::Drawing::Size(50, 20);
			this->podajW->TabIndex = 12;
			// 
			// podajA
			// 
			this->podajA->Location = System::Drawing::Point(27, 50);
			this->podajA->Name = L"podajA";
			this->podajA->Size = System::Drawing::Size(50, 20);
			this->podajA->TabIndex = 11;
			// 
			// podajMi
			// 
			this->podajMi->Location = System::Drawing::Point(185, 17);
			this->podajMi->Name = L"podajMi";
			this->podajMi->Size = System::Drawing::Size(50, 20);
			this->podajMi->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(80, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"w =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"a =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"μ  =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(81, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"y =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"x =";
			// 
			// podajY0
			// 
			this->podajY0->Location = System::Drawing::Point(102, 17);
			this->podajY0->Name = L"podajY0";
			this->podajY0->Size = System::Drawing::Size(50, 20);
			this->podajY0->TabIndex = 2;
			// 
			// podajX0
			// 
			this->podajX0->Location = System::Drawing::Point(27, 17);
			this->podajX0->Name = L"podajX0";
			this->podajX0->Size = System::Drawing::Size(50, 20);
			this->podajX0->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->znajdzWiersz);
			this->panel2->Controls->Add(this->znajdz);
			this->panel2->Controls->Add(this->koniec);
			this->panel2->Controls->Add(this->tabelaDanych);
			this->panel2->Controls->Add(this->zapiszDane);
			this->panel2->Controls->Add(this->rysujWykresFazowy);
			this->panel2->Controls->Add(this->rysujWykres);
			this->panel2->Controls->Add(this->wykonajObliczenia);
			this->panel2->Controls->Add(this->Parametry);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel2->Location = System::Drawing::Point(12, 379);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(722, 140);
			this->panel2->TabIndex = 11;
			// 
			// znajdzWiersz
			// 
			this->znajdzWiersz->Location = System::Drawing::Point(611, 12);
			this->znajdzWiersz->Name = L"znajdzWiersz";
			this->znajdzWiersz->Size = System::Drawing::Size(100, 20);
			this->znajdzWiersz->TabIndex = 18;
			// 
			// znajdz
			// 
			this->znajdz->Location = System::Drawing::Point(622, 38);
			this->znajdz->Name = L"znajdz";
			this->znajdz->Size = System::Drawing::Size(75, 23);
			this->znajdz->TabIndex = 17;
			this->znajdz->Text = L"Znajdz";
			this->znajdz->UseVisualStyleBackColor = true;
			this->znajdz->Click += gcnew System::EventHandler(this, &Form1::znajdz_Click);
			// 
			// koniec
			// 
			this->koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->koniec->Location = System::Drawing::Point(610, 83);
			this->koniec->Name = L"koniec";
			this->koniec->Size = System::Drawing::Size(96, 41);
			this->koniec->TabIndex = 16;
			this->koniec->Text = L"Koniec";
			this->koniec->UseVisualStyleBackColor = true;
			this->koniec->Click += gcnew System::EventHandler(this, &Form1::koniec_Click);
			// 
			// tabelaDanych
			// 
			this->tabelaDanych->AllowUserToAddRows = false;
			this->tabelaDanych->AllowUserToDeleteRows = false;
			this->tabelaDanych->AllowUserToOrderColumns = true;
			this->tabelaDanych->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaDanych->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->tabelaDanych->Location = System::Drawing::Point(382, 12);
			this->tabelaDanych->Name = L"tabelaDanych";
			this->tabelaDanych->ReadOnly = true;
			this->tabelaDanych->RowHeadersVisible = false;
			this->tabelaDanych->Size = System::Drawing::Size(222, 112);
			this->tabelaDanych->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"numer iteracji";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"y";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 70;
			// 
			// zapiszDane
			// 
			this->zapiszDane->Location = System::Drawing::Point(266, 101);
			this->zapiszDane->Name = L"zapiszDane";
			this->zapiszDane->Size = System::Drawing::Size(110, 23);
			this->zapiszDane->TabIndex = 14;
			this->zapiszDane->Text = L"Zapisz dane";
			this->zapiszDane->UseVisualStyleBackColor = true;
			this->zapiszDane->Click += gcnew System::EventHandler(this, &Form1::zapiszDane_Click);
			// 
			// rysujWykresFazowy
			// 
			this->rysujWykresFazowy->Location = System::Drawing::Point(266, 72);
			this->rysujWykresFazowy->Name = L"rysujWykresFazowy";
			this->rysujWykresFazowy->Size = System::Drawing::Size(110, 23);
			this->rysujWykresFazowy->TabIndex = 13;
			this->rysujWykresFazowy->Text = L"Wykres fazowy";
			this->rysujWykresFazowy->UseVisualStyleBackColor = true;
			this->rysujWykresFazowy->Click += gcnew System::EventHandler(this, &Form1::rysujWykresFazowy_Click);
			// 
			// rysujWykres
			// 
			this->rysujWykres->Location = System::Drawing::Point(266, 42);
			this->rysujWykres->Name = L"rysujWykres";
			this->rysujWykres->Size = System::Drawing::Size(110, 24);
			this->rysujWykres->TabIndex = 12;
			this->rysujWykres->Text = L"Wykres";
			this->rysujWykres->UseVisualStyleBackColor = true;
			this->rysujWykres->Click += gcnew System::EventHandler(this, &Form1::rysujWykres_Click);
			// 
			// wykonajObliczenia
			// 
			this->wykonajObliczenia->Location = System::Drawing::Point(266, 12);
			this->wykonajObliczenia->Name = L"wykonajObliczenia";
			this->wykonajObliczenia->Size = System::Drawing::Size(110, 24);
			this->wykonajObliczenia->TabIndex = 11;
			this->wykonajObliczenia->Text = L"Wykonaj obliczenia";
			this->wykonajObliczenia->UseVisualStyleBackColor = true;
			this->wykonajObliczenia->Click += gcnew System::EventHandler(this, &Form1::wykonajObliczenia_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(744, 529);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->wykres);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wykres))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wykresFazowy))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Parametry->ResumeLayout(false);
			this->Parametry->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaDanych))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void koniec_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void wyczyscWykres_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wykres->Series->Clear();
}
private: System::Void wyczyscWykresFazowy_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wykresFazowy->Series->Clear();
}
	private: System::Void rysujWykres_Click(System::Object^  sender, System::EventArgs^  e) {
		this->wykres->Series->Clear();
		this->wykres->Series->Add("zwykly");
		wykres->Series["zwykly"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		try
		{
	for (int n = 0; n < 1500; n++) {
				this->wykres->Series["zwykly"]->Points->AddY(Convert::ToDouble(tabelaDanych->Rows[n]->Cells[1]->Value));
			}
		}
		catch (Exception ^brak)
		{
			MessageBox::Show("Brak wartości.");
			
		}
	
}

		 

private: System::Void wykonajObliczenia_Click(System::Object^  sender, System::EventArgs^  e) {
	
	double k1, k2, k3, k4;
	double m1, m2, m3, m4;
	double x[1501], y[1501];
	double mi, h, a, w, F;
	this->tabelaDanych->Rows->Clear();

	if (podajX0->Text->IsNullOrWhiteSpace(podajX0->Text) ||
		podajY0->Text->IsNullOrWhiteSpace(podajY0->Text) ||
		podajMi->Text->IsNullOrWhiteSpace(podajMi->Text) ||
		podajA->Text->IsNullOrWhiteSpace(podajA->Text) ||
		podajW->Text->IsNullOrWhiteSpace(podajW->Text) ||
		podajF->Text->IsNullOrWhiteSpace(podajF->Text) ||
		podajH->Text->IsNullOrWhiteSpace(podajH->Text) ) {
		MessageBox::Show("Brak parametrów");
	}
	else {
		try {

			x[0] = Double::Parse(podajX0->Text);
			y[0] = Double::Parse(podajY0->Text);
			mi = Double::Parse(podajMi->Text);
			a = Double::Parse(podajA->Text);
			w = Double::Parse(podajW->Text);
			F = Double::Parse(podajF->Text);
			h = Double::Parse(podajH->Text);
			for (int n = 0; n < 1500; n++) {
				k1 = y[n];
				m1 = mi*(1 - pow(x[n], 2))*y[n] - x[n] -a*(pow(x[n], 3)) + F*cos(n*w);
				k2 = y[n] + (h*m1 / 2);
				m2 = mi*(1 - pow(x[n] + (h*k1 / 2), 2))*(y[n] + (h*m1 / 2)) + (x[n] + (h*k1 / 2)) - a*(pow((x[n] + (h*k1 / 2)), 3)) + F*cos(w*(n+h/2));
				k3 = y[n] + (h*m2 / 2);
				m3 = mi*(1 - pow(x[n] + (h*k2 / 2), 2))*(y[n] + (h*m2 / 2)) + (x[n] + (h*k2 / 2)) - a*(pow((x[n] + (h*k2 / 2)), 3)) + F*cos(w*(n+h / 2));
				k4 = y[n] + h*m3;
				m4 = mi*(1 - pow(x[n] + (h*k1), 2))*(y[n] + (h*m1)) + (x[n] + (h*k1)) - a*(pow((x[n] + (h*k1)), 3)) + F*cos(w*(n+h));

				x[n + 1] = x[n] + h*(k1 + 2 * k2 + 2 * k3 + k4) / 6;
				y[n + 1] = y[n] + h*(m1 + 2 * m2 + 2 * m3 + m4) / 6;

				this->tabelaDanych->Rows->Add();
				this->tabelaDanych->Rows[n]->Cells[0]->Value = n;
				this->tabelaDanych->Rows[n]->Cells[1]->Value = x[n];
				this->tabelaDanych->Rows[n]->Cells[2]->Value = y[n];
				
			}
		}
		catch (Exception ^wyjatek) {
			MessageBox::Show(wyjatek->ToString(), "Błąd. Złe wartości parametrów.");
		}

	}


}
private: System::Void rysujWykresFazowy_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wykresFazowy->Series->Clear();
	this->wykresFazowy->Series->Add("cykl");
	wykresFazowy->Series["cykl"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

	try
	{
		for (int n = 0; n < 1500; n++) {
			this->wykresFazowy->Series["cykl"]->Points->AddXY(Convert::ToDouble(tabelaDanych->Rows[n]->Cells[1]->Value), Convert::ToDouble(tabelaDanych->Rows[n]->Cells[2]->Value));
			
		}
	}
	catch (Exception ^brak)
	{
		MessageBox::Show("Brak wartości.");
	}
}

private: System::Void zapiszDane_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;

	fstream dane;
	try {
		dane.open("zapisaneDane.txt", ios::out);
		for (int i = 0; i < 1500; i++) {
			dane << Convert::ToDouble(tabelaDanych->Rows[i]->Cells[0]->Value) << ", ";
			dane << Convert::ToDouble(tabelaDanych->Rows[i]->Cells[1]->Value) << ", ";
			dane << Convert::ToDouble(tabelaDanych->Rows[i]->Cells[2]->Value) << endl;
		}
		dane.close();

		MessageBox::Show("Zapisano dane");
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->ToString(), "Brak wartości.");
	}
}


private: System::Void znajdz_Click(System::Object^  sender, System::EventArgs^  e) {
	if (znajdzWiersz->Text->IsNullOrWhiteSpace(znajdzWiersz->Text)) {
		MessageBox::Show("Podaj numer szukanego wiersza");
	}
	else {
		try		{
		int a = Double::Parse(znajdzWiersz->Text);
		double x = Convert::ToDouble(tabelaDanych->Rows[a]->Cells[1]->Value);
		double y = Convert::ToDouble(tabelaDanych->Rows[a]->Cells[2]->Value);
		MessageBox::Show("x = " + x + "\ny = " + y, "Wartości w wierszu numer " + a);
				}
		catch (Exception ^blad)
		{
			MessageBox::Show(blad->ToString(), "Podaj liczbe naturalną");
		}
		
	}
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void uruchomPonownieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Restart();
}
private: System::Void autorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Politechnika Gdańska \nMatematyka \nGeometria i grafika komputerowa \nPiotr Szultka \nnr indeksu: 150 557", "Autor");
}
private: System::Void rownanieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("x'' - u*(1-x^2)*x' + x + a*x^3 = F*cos(w*t)","Równanie Van der Pola-Duffinga");
}
};
}

