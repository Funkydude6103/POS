#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include <msclr\marshal_cppstd.h>
namespace Mianauto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Remove_a_product
	/// </summary>
	public ref class Remove_a_product : public System::Windows::Forms::Form
	{
	public:
		Remove_a_product(void)
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
		~Remove_a_product()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(21, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(499, 38);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Search";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(323, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Remove_a_product::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 47);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Remove_a_product::button2_Click);
			// 
			// Remove_a_product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(543, 247);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Remove_a_product";
			this->Text = L"Remove_a_product";
			this->Load += gcnew System::EventHandler(this, &Remove_a_product::Remove_a_product_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Remove_a_product_Load(System::Object^ sender, System::EventArgs^ e) {
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
			std::getline(fin, line);
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
					if (line[i] != ',')
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
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::vector<std::string> item_code;
	std::vector<std::string> item_names;
	std::vector<std::string> buying_price;
	std::vector<std::string> Selling_price;
	std::vector<std::string> stock;
	std::vector<std::string> minimum_value;
	std::vector<std::string> Seller_name;
	std::vector<std::string> seller_number;
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
		if (line == "")
		{
			break;
		}
		item_code.push_back(words[0]);
		item_names.push_back(words[1]);
		Selling_price.push_back(words[2]);
		buying_price.push_back(words[3]);
		stock.push_back(words[4]);
		minimum_value.push_back(words[5]);
		Seller_name.push_back(words[6]);
		seller_number.push_back(words[7]);
	}
	String^ n = textBox1->Text;
	int k = 0;
	std::string name = msclr::interop::marshal_as<std::string>(n);
	bool check = false;
	for (; k < item_names.size(); k++)
	{
		if (item_names[k] == name)
		{
			check = true;
			break;
		}
	}
	if (check)
	{  
		remove("inventory.csv");
		std::fstream fout;
		fout.open("inventory.csv", std::ios::out);
		for (int i = 0; i < item_code.size(); i++)
		{
			if(i!=k)
			fout << item_code[i] << "," << item_names[i] << "," << Selling_price[i] << "," << buying_price[i] << "," << stock[i] << "," << minimum_value[i] << "," << Seller_name[i] << "," << seller_number[i];
			if(i!=k)
			fout << "\n";
		}
		fout.close();
		this->Close();
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
};
}
