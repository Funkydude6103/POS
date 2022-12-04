#pragma once
#include<iostream>
#include <msclr\marshal_cppstd.h>
#include<string>
#include<fstream>
#include<vector>
#include <stdio.h>
#include <string.h>
namespace Mianauto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for profits
	/// </summary>
	public ref class profits : public System::Windows::Forms::Form
	{
	public:
		Form^ obj2;
		profits(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		profits(Form^ ob)
		{
			obj2=ob;
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profits()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;




	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profits::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Desktop;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(-1, -5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(3491, 91);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Mian Auto                                                                        "
				L"                                                                  rt";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(967, 7);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 79);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(15, 232);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->MinDate = System::DateTime(2021, 1, 12, 0, 0, 0, 0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 24;
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Location = System::Drawing::Point(409, 232);
			this->monthCalendar2->MaxSelectionCount = 1;
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(58, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 38);
			this->label1->TabIndex = 26;
			this->label1->Text = L"From";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(492, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 38);
			this->label3->TabIndex = 27;
			this->label3->Text = L"To";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(740, 32);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Select the dates from which you want to see the Profit";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(833, 165);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 56);
			this->button6->TabIndex = 29;
			this->button6->Text = L"See profit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &profits::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(18, 543);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(531, 273);
			this->dataGridView1->TabIndex = 30;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Date";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Total Sale";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Profit";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 474);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(395, 32);
			this->label5->TabIndex = 31;
			this->label5->Text = L"All Sales Between the dates";
			this->label5->Click += gcnew System::EventHandler(this, &profits::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(572, 601);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 38);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Total Sale";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(572, 707);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 38);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Total Profit";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(788, 601);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 38);
			this->label8->TabIndex = 34;
			this->label8->Text = L"0";
			this->label8->Click += gcnew System::EventHandler(this, &profits::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(788, 707);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 38);
			this->label9->TabIndex = 35;
			this->label9->Text = L"0";
			this->label9->Click += gcnew System::EventHandler(this, &profits::label9_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(942, 765);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 51);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &profits::button1_Click);
			// 
			// profits
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1079, 844);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar2);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Name = L"profits";
			this->Text = L"profits";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ a = monthCalendar1->SelectionRange->Start.ToShortDateString();
	String^ b = monthCalendar2->SelectionRange->Start.ToShortDateString();
	std::string start = msclr::interop::marshal_as<std::string>(a);
	std::string limit = msclr::interop::marshal_as<std::string>(b);
	std::fstream fin;
	fin.open("Billinginfo.txt");
	std::vector<std::string> dates;
	std::vector<std::string> profit;
	std::vector<std::string> sales;
	std::vector<std::string> code;
	while (!fin.eof())
	{
		std::string input;
		getline(fin, input);
		std::string token = "";
		int k = 0;
		for (auto x : input)
		{
			if (x == ',')
			{
				if (k == 0)
					code.push_back(token);
				if (k == 1)
					dates.push_back(token);
				if (k == 2)
					profit.push_back(token);
				token.erase();
				k++;
			}

			else
			token = token + x;
		}
		sales.push_back(token);
	}
	fin.close();
	int sak=0;
	int prod = 0;
	bool check = false;
	int day;
	int month;
	int year;
	int day2;
	int month2;
	int year2;
	int count = 0;
	std::string temp="";
	for (auto x : start)
	{
		if (x == '/')
		{
			if (count == 0)
			month = stoi(temp);
			if (count == 1)
			day = stoi(temp);
			count++;
			temp = "";
		}
		else
		{
			temp = temp + x;
		}
	}
	year = stoi(temp);
	temp = "";
	count = 0;
	for (auto x : limit)
	{
		if (x == '/')
		{
			if (count == 0)
				month2 = stoi(temp);
			if (count == 1)
				day2 = stoi(temp);
			count++;
			temp = "";
		}
		else
		{
			temp = temp + x;
		}
	}
	year2 = stoi(temp);
	int day3;
	int month3;
	int year3;


	for (int i = 0; i < code.size(); i++)
	{
		bool check1 = false;
		bool check2 = true;
		temp = "";
		count = 0;
		for (auto x : dates[i])
		{
			if (x == '/')
			{
				if (count == 0)
					month3 = stoi(temp);
				if (count == 1)
					day3 = stoi(temp);
				count++;
				temp = "";
			}
			else
			{
				temp = temp + x;
			}
		}
		year3 = stoi(temp);

		if (day3 == day && month3 == month && year3 == year)
			check1 = true;
		else if (year3 > year || year3 == year && month3 > month || year3 == year && month3 > month && day3 > day)
			check1 = true;

		if (day3 == day2 && month3 == month2 && year3 == year2)
			check2 = true;
		else if (year3 > year2 || year3 == year2 && month3 > month2 || year3 == year2 && month3 > month2 && day3 > day2)
			check2 = false;


		if (check1 && check2)
		{
			dataGridView1->Rows->Add(msclr::interop::marshal_as<String^>(dates[i]), msclr::interop::marshal_as<String^>(sales[i]), msclr::interop::marshal_as<String^>(profit[i]));
			sak = sak + stoi(sales[i]);
			prod = prod + stoi(profit[i]);
		}
	}

	label8->Text = sak.ToString();
	label9->Text = prod.ToString();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj2-> Show();

}
};
}
