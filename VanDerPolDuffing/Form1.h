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

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  wykresFazowy;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::Button^  zapiszWykres;
	private: System::Windows::Forms::Button^  zapiszWykresFazowy;
	private: System::Windows::Forms::Button^  wyczyscWykres;
	private: System::Windows::Forms::Button^  wyczyscWykresFazowy;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  Parametry;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->wykresFazowy = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszWykres = (gcnew System::Windows::Forms::Button());
			this->zapiszWykresFazowy = (gcnew System::Windows::Forms::Button());
			this->wyczyscWykres = (gcnew System::Windows::Forms::Button());
			this->wyczyscWykresFazowy = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Parametry = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->znajdzWiersz = (gcnew System::Windows::Forms::TextBox());
			this->znajdz = (gcnew System::Windows::Forms::Button());
			this->koniec = (gcnew System::Windows::Forms::Button());
			this->tabelaDanych = (gcnew System::Windows::Forms::DataGridView());
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(24, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Van der Pol Duffing ";
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(378, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
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
			this->menuStrip1->Size = System::Drawing::Size(746, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// zapiszWykres
			// 
			this->zapiszWykres->Location = System::Drawing::Point(29, 336);
			this->zapiszWykres->Name = L"zapiszWykres";
			this->zapiszWykres->Size = System::Drawing::Size(102, 23);
			this->zapiszWykres->TabIndex = 5;
			this->zapiszWykres->Text = L"Zapisz wykres";
			this->zapiszWykres->UseVisualStyleBackColor = true;
			// 
			// zapiszWykresFazowy
			// 
			this->zapiszWykresFazowy->Location = System::Drawing::Point(382, 309);
			this->zapiszWykresFazowy->Name = L"zapiszWykresFazowy";
			this->zapiszWykresFazowy->Size = System::Drawing::Size(102, 23);
			this->zapiszWykresFazowy->TabIndex = 6;
			this->zapiszWykresFazowy->Text = L"Zapisz wykres";
			this->zapiszWykresFazowy->UseVisualStyleBackColor = true;
			// 
			// wyczyscWykres
			// 
			this->wyczyscWykres->Location = System::Drawing::Point(266, 309);
			this->wyczyscWykres->Name = L"wyczyscWykres";
			this->wyczyscWykres->Size = System::Drawing::Size(75, 23);
			this->wyczyscWykres->TabIndex = 7;
			this->wyczyscWykres->Text = L"Wyczyœæ";
			this->wyczyscWykres->UseVisualStyleBackColor = true;
			this->wyczyscWykres->Click += gcnew System::EventHandler(this, &Form1::wyczyscWykres_Click);
			// 
			// wyczyscWykresFazowy
			// 
			this->wyczyscWykresFazowy->Location = System::Drawing::Point(631, 309);
			this->wyczyscWykresFazowy->Name = L"wyczyscWykresFazowy";
			this->wyczyscWykresFazowy->Size = System::Drawing::Size(75, 23);
			this->wyczyscWykresFazowy->TabIndex = 8;
			this->wyczyscWykresFazowy->Text = L"Wyczyœæ";
			this->wyczyscWykresFazowy->UseVisualStyleBackColor = true;
			this->wyczyscWykresFazowy->Click += gcnew System::EventHandler(this, &Form1::wyczyscWykresFazowy_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->wykresFazowy);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->zapiszWykresFazowy);
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
			this->Parametry->Controls->Add(this->label5);
			this->Parametry->Controls->Add(this->label4);
			this->Parametry->Controls->Add(this->label3);
			this->Parametry->Controls->Add(this->textBox5);
			this->Parametry->Controls->Add(this->textBox4);
			this->Parametry->Controls->Add(this->textBox3);
			this->Parametry->Controls->Add(this->textBox2);
			this->Parametry->Location = System::Drawing::Point(12, 7);
			this->Parametry->Name = L"Parametry";
			this->Parametry->Size = System::Drawing::Size(248, 114);
			this->Parametry->TabIndex = 10;
			this->Parametry->TabStop = false;
			this->Parametry->Text = L"Parametry";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(81, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"y=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"x=";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(37, 43);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(50, 20);
			this->textBox5->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(192, 17);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 17);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(25, 17);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 20);
			this->textBox2->TabIndex = 0;
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
			this->tabelaDanych->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaDanych->Location = System::Drawing::Point(382, 12);
			this->tabelaDanych->Name = L"tabelaDanych";
			this->tabelaDanych->Size = System::Drawing::Size(222, 112);
			this->tabelaDanych->TabIndex = 15;
			// 
			// zapiszDane
			// 
			this->zapiszDane->Location = System::Drawing::Point(266, 101);
			this->zapiszDane->Name = L"zapiszDane";
			this->zapiszDane->Size = System::Drawing::Size(110, 23);
			this->zapiszDane->TabIndex = 14;
			this->zapiszDane->Text = L"Zapisz dane";
			this->zapiszDane->UseVisualStyleBackColor = true;
			// 
			// rysujWykresFazowy
			// 
			this->rysujWykresFazowy->Location = System::Drawing::Point(266, 72);
			this->rysujWykresFazowy->Name = L"rysujWykresFazowy";
			this->rysujWykresFazowy->Size = System::Drawing::Size(110, 23);
			this->rysujWykresFazowy->TabIndex = 13;
			this->rysujWykresFazowy->Text = L"Wykres fazowy";
			this->rysujWykresFazowy->UseVisualStyleBackColor = true;
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
			this->ClientSize = System::Drawing::Size(746, 529);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->zapiszWykres);
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
	
}



private: System::Void wykonajObliczenia_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wykres->Series->Clear();
	this->wykres->Series->Add("zwykly");
	wykres->Series["zwykly"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	
	double k1, k2, k3, k4;
	double m1, m2, m3, m4;
	double x[1501], y[1501];
	double mi, h;
	
	
	
			x[0] = 1;
			y[0] = 1;
			mi = 1;
			h = 0.1;
			for (int n = 0; n < 1500; n++) {
				k1 = y[n];
				m1 = (-x[n]) + mi*(1 - pow(x[n], 2))*y[n];
				k2 = y[n] + h*m1 / 2;
				m2 = -(x[n] + h*k1 / 2) + mi*(1 - pow(x[n] + h*k1 / 2, 2))*(y[n] + h*m1 / 2);
				k3 = y[n] + h*m2 / 2;
				m3 = -(x[n] + h*k2 / 2) + mi*(1 - pow(x[n] + h*k2 / 2, 2))*(y[n] + h*m2 / 2);
				k4 = y[n] + h*m3;
				m4 = -(x[n] + h*k3) + mi*(1 - pow(x[n] + h*k3, 2))*(y[n] + h*m3);

				x[n + 1] = x[n] + h*(k1 + 2 * k2 + 2 * k3 + k4) / 6;
				y[n + 1] = y[n] + h*(m1 + 2 * m2 + 2 * m3 + m4) / 6;

		
				
				this->wykres->Series["zwykly"]->Points->AddY(x[n]);
			}

		
		

	


}
};
}

