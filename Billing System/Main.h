#pragma once
#include<fstream>
#include<iostream>
#include<vector>
#include <sstream>
#include<string>
#include <msclr\marshal_cppstd.h>
#using <system.windows.forms.dll>
#include "Manual_Product.h"
#using <Microsoft.VisualBasic.dll>

__declspec(selectany)std::vector<std::string> item_code;
__declspec(selectany)std::vector<std::string> item_names;
__declspec(selectany)std::vector<std::string> buying_price;
__declspec(selectany)std::vector<std::string> Selling_price;
__declspec(selectany)std::vector<std::string> stock;
__declspec(selectany)std::vector<std::string> minimum_value;
__declspec(selectany)std::vector<std::string> Seller_name;
__declspec(selectany)std::vector<std::string> seller_number;
__declspec(selectany)std::vector<int> quantities;
__declspec(selectany)int k = 1;
__declspec(selectany)int Total = 0;
__declspec(selectany)int Grand_Total = 0;

namespace Mianauto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->c1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Desktop;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(-5, -4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(2066, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mian Auto                                                                        "
				L"                                                                  rt";
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(23, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(499, 38);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Search";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// Code
			// 
			this->Code->MinimumWidth = 6;
			this->Code->Name = L"Code";
			this->Code->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Product";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->c1, this->c2,
					this->c3, this->c4
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 149);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(699, 425);
			this->dataGridView1->TabIndex = 3;
			// 
			// c1
			// 
			this->c1->HeaderText = L"Item";
			this->c1->MinimumWidth = 6;
			this->c1->Name = L"c1";
			this->c1->Width = 125;
			// 
			// c2
			// 
			this->c2->HeaderText = L"Product";
			this->c2->MinimumWidth = 6;
			this->c2->Name = L"c2";
			this->c2->Width = 125;
			// 
			// c3
			// 
			this->c3->HeaderText = L"Quantity";
			this->c3->MinimumWidth = 6;
			this->c3->Name = L"c3";
			this->c3->Width = 125;
			// 
			// c4
			// 
			this->c4->HeaderText = L"Price";
			this->c4->MinimumWidth = 6;
			this->c4->Name = L"c4";
			this->c4->Width = 125;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(596, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 603);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 38);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sub Total";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(244, 603);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"0";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(770, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 56);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(12, 672);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 38);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Discount %";
			this->label4->Click += gcnew System::EventHandler(this, &Main::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(12, 739);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(200, 38);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Grand Total";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(244, 739);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 38);
			this->label7->TabIndex = 11;
			this->label7->Text = L"0";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(925, 757);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 57);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Pay";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(241, 672);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(118, 45);
			this->numericUpDown1->TabIndex = 14;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Main::numericUpDown1_ValueChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(387, 671);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 51);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Discount";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(770, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(251, 75);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Add Labour";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(770, 301);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(251, 75);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Add Manual Product";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1079, 844);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//for making the list of search bar
		std::fstream fin;
		fin.open("inventory.csv", std::ios::in);
		std::vector<std::string> row;
		std::string line, word, temp;
		word = "";
		while (!fin.eof())
		{
			std::vector<std::string>words;
			word = "";
			line = "";
			getline(fin, line);
			int count = 0;
			int i = 0;
			while (count < 2)
			{
				if (i == line.size())
				{
					break;
				}
				if (count == 1)
				{
					if(line[i] != ',')
					word = word + line[i];
				}
				if (line[i] == ',')
				{
					count++;
				}
				i++;
			}
			String^ you = msclr::interop::marshal_as<String^>(word);
			textBox1->AutoCompleteCustomSource->Add(you);
			//for loading all the attributes of inventory 
			for (auto x : line)
			{
				if (x == ',')
				{
					words.push_back(word);
					word = "";
				}
				else {
					word = word + x;
				}
			}
			words.push_back(word);
			if (line== "")
			{
				break;
			}
			std::cout << words[0] << " ";
			item_code.push_back(words[0]);
			item_names.push_back(words[1]);
			Selling_price.push_back(words[2]);
			buying_price.push_back(words[3]);
			stock.push_back(words[4]);
			minimum_value.push_back(words[5]);
			Seller_name.push_back(words[6]);
			seller_number.push_back(words[7]);
			quantities.push_back(0);
		}
		fin.close();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ n=textBox1->Text;
	int i = 0;
	std::string name = msclr::interop::marshal_as<std::string>(n);
	bool check = false;
	for (; i < item_names.size(); i++)
	{
		if (item_names[i] == name)
		{
			check = true;
			break;
		}
	}

	if (check==true)
	{
		if (stoi(stock[i])-quantities[i] > 1)
		{
			Total = Total + stoi(Selling_price[i]);
			Grand_Total=Grand_Total+stoi(Selling_price[i]);
			quantities[i] = quantities[i] + 1;
			dataGridView1->Rows->Add(k, n, 1, stoi(Selling_price[i]));
			k++;
			String^ s = Total.ToString();
			String^ u = Grand_Total.ToString();
			label3->Text = s;
			label7->Text = u;
		}
		else
		{
			String^ caption = "Product is not available";
			String^ s = msclr::interop::marshal_as<String^>(Seller_name[i]);
			String^ sn = msclr::interop::marshal_as<String^>(seller_number[i]);
			String^ message = "For ordering more \nContact : " + s + " on " + sn;
			MessageBoxButtons buttons = MessageBoxButtons::OK;
			System::Windows::Forms::DialogResult result;

			// Displays the MessageBox.
			result = MessageBox::Show(this, message, caption, buttons);
		}
	}
	else
	{
		String^ caption = "Invalid Name";
		String^ message = "No such product in Inventory";
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, buttons);

	}



	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < quantities.size(); i++)
	quantities[i] = 0;
	dataGridView1->Rows->Clear();
	dataGridView1->Refresh();
	Total = 0;
	String^ s = Total.ToString();
	label3->Text = s;
	label7->Text = s;
	Grand_Total = 0;
	numericUpDown1->Value = 0;
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Decimal dis = numericUpDown1->Value;
	double disx = dis.ToDouble(dis);
	disx = disx / 100;
	double val = disx * Total;
	Grand_Total = Grand_Total - val;
	String^ u = Grand_Total.ToString();
	label7->Text = u;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ response=Microsoft::VisualBasic::Interaction::InputBox(L"Enter Labour", L"Labour", L"", 500, 500);
	std::string r = msclr::interop::marshal_as<std::string>(response);
	std::cout << r;
	if (!r.empty())
	{
		int t = stoi(r);
		Total = Total + t;
		Grand_Total = Grand_Total + t;
		String^ s = Total.ToString();
		String^ u = Grand_Total.ToString();
		label3->Text = s;
		label7->Text = u;
		dataGridView1->Rows->Add(k, "Labour", 1, t);
		k++;
	}
	else
	{

		
	}	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string b1, b2, b3, b4, b5;
	Manual_Product^ obj = gcnew Manual_Product();
	obj->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int profit;
	int prices=0;
	for (int i = 0; i < stock.size(); i++)
	{
		int k= stoi(stock[i]) - quantities[i];
		stock[i]=std::to_string(k);
	}
	for (int i = 0; i < buying_price.size(); i++)
	{
		if (quantities[i] != 0)
		{
			prices = prices + (quantities[i] * stoi(buying_price[i]));
		}
	}
	profit = Grand_Total - prices;
	remove("inventory.csv");
	std::fstream fout;
	fout.open("inventory.csv", std::ios::out);
	for (int i = 0; i < item_code.size(); i++)
	{
	
		fout<< item_code[i].substr(item_names[i].size(),item_code[i].size()) << "," << item_names[i] << "," << Selling_price[i] << "," << buying_price[i] << "," << stock[i] << "," << minimum_value[i] << "," << Seller_name[i] << "," << seller_number[i];
		fout << "\n";
	}
	fout.close();

	std::cout << profit;

}
};
}

