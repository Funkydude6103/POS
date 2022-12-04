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
	/// Summary for edit_existing_producr
	/// </summary>
	public ref class edit_existing_producr : public System::Windows::Forms::Form
	{
	public:
		edit_existing_producr(void)
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
		~edit_existing_producr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(551, 481);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Save changes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &edit_existing_producr::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 481);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &edit_existing_producr::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(499, 38);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Search";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(601, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 45);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Edit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &edit_existing_producr::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(263, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Previous Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(596, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Changes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(7, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Product Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(7, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Selling Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(7, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Buying Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(7, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Quantity";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(7, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Minimum Quantity";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(10, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Seller Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(12, 400);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Seller Contact";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(263, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 25);
			this->label10->TabIndex = 14;
			this->label10->Click += gcnew System::EventHandler(this, &edit_existing_producr::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(263, 173);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 25);
			this->label11->TabIndex = 15;
			this->label11->Click += gcnew System::EventHandler(this, &edit_existing_producr::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(263, 214);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 25);
			this->label12->TabIndex = 16;
			this->label12->Click += gcnew System::EventHandler(this, &edit_existing_producr::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(263, 258);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 25);
			this->label13->TabIndex = 17;
			this->label13->Click += gcnew System::EventHandler(this, &edit_existing_producr::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(263, 302);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 25);
			this->label14->TabIndex = 18;
			this->label14->Click += gcnew System::EventHandler(this, &edit_existing_producr::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(263, 348);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 25);
			this->label15->TabIndex = 19;
			this->label15->Click += gcnew System::EventHandler(this, &edit_existing_producr::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(263, 391);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 25);
			this->label16->TabIndex = 20;
			this->label16->Click += gcnew System::EventHandler(this, &edit_existing_producr::label16_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(581, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 34);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(581, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 34);
			this->textBox3->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(581, 208);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 34);
			this->textBox4->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(581, 249);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 34);
			this->textBox5->TabIndex = 24;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(581, 293);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(228, 34);
			this->textBox6->TabIndex = 25;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(581, 339);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(228, 34);
			this->textBox7->TabIndex = 26;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(581, 382);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(228, 34);
			this->textBox8->TabIndex = 27;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(824, 121);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 20);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"Product Name";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(824, 164);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(103, 20);
			this->checkBox2->TabIndex = 29;
			this->checkBox2->Text = L"Selling price";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(824, 208);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 20);
			this->checkBox3->TabIndex = 30;
			this->checkBox3->Text = L"Buying Price";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(824, 253);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(77, 20);
			this->checkBox4->TabIndex = 31;
			this->checkBox4->Text = L"Quantity";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(824, 293);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(133, 20);
			this->checkBox5->TabIndex = 32;
			this->checkBox5->Text = L"Minimum Quantity";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(824, 339);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(104, 20);
			this->checkBox6->TabIndex = 33;
			this->checkBox6->Text = L"Seller Name";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(824, 382);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(112, 20);
			this->checkBox7->TabIndex = 34;
			this->checkBox7->Text = L"Seller Contact";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// edit_existing_producr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(980, 544);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"edit_existing_producr";
			this->Text = L"edit_existing_producr";
			this->Load += gcnew System::EventHandler(this, &edit_existing_producr::edit_existing_producr_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void edit_existing_producr_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
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
	if (check)
	{
		label10->Text= msclr::interop::marshal_as<String ^>(item_names[i]);
		label11->Text = msclr::interop::marshal_as<String^>(Selling_price[i]);
		label12->Text = msclr::interop::marshal_as<String^>(buying_price[i]);
		label13->Text = msclr::interop::marshal_as<String^>(stock[i]);
		label14->Text = msclr::interop::marshal_as<String^>(minimum_value[i]);
		label15->Text = msclr::interop::marshal_as<String^>(Seller_name[i]);
		label16->Text = msclr::interop::marshal_as<String^>(seller_number[i]);
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
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
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
	if (check)
	{
		if (checkBox1->Checked)
		{
			item_names[i]= msclr::interop::marshal_as<std::string>(textBox2->Text);
		}
		if (checkBox2->Checked)
		{
			Selling_price[i] = msclr::interop::marshal_as<std::string>(textBox3->Text);
		}
		if (checkBox3->Checked)
		{
			buying_price[i] = msclr::interop::marshal_as<std::string>(textBox4->Text);
		}
		if (checkBox4->Checked)
		{
			stock[i] = msclr::interop::marshal_as<std::string>(textBox5->Text);
		}
		if (checkBox5->Checked)
		{
			minimum_value[i] = msclr::interop::marshal_as<std::string>(textBox6->Text);
		}
		if (checkBox6->Checked)
		{
			Seller_name[i] = msclr::interop::marshal_as<std::string>(textBox7->Text);
		}
		if (checkBox7->Checked)
		{
			seller_number[i] = msclr::interop::marshal_as<std::string>(textBox8->Text);
		}
		remove("inventory.csv");
		std::fstream fout;
		fout.open("inventory.csv", std::ios::out);
		for (int i = 0; i < item_code.size(); i++)
		{
			fout << item_code[i]<< "," << item_names[i] << "," << Selling_price[i] << "," << buying_price[i] << "," << stock[i] << "," << minimum_value[i] << "," << Seller_name[i] << "," << seller_number[i];
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
